#include <iostream>
#include <string>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/gtx/string_cast.hpp> 

#include "loadimage.h"
#include "drawCubes.h"
#include "drawStaticAnimals.h"
#include "drawAnimatedAnimals.h"
#include "drawBuildings.h"
#include "drawSkyBox.h"
#include "drawSun.h"
#include "checkKeys.h"

using namespace std;

GLFWwindow* window = NULL;
const char* WINDOW_TITLE = "MY_SCENE";
const GLint WINDOW_WIDTH = 1200;
const GLint WINDOW_HEIGHT = 1000;

bool initOpenGL();

bool isLight = false;
bool isDogAnim = false;

int initial_time = glfwGetTime(), final_time, frame_count = 0;

const int FPS = 60, frame_delay = 1 / FPS;
int frame_time, frame_start;

static void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}

int main()
{
	std::cout << "Welcome to my scene!" << std::endl;

	if (!initOpenGL())
	{
		std::cerr << "GLFW initialisation failed." << std::endl;
		return -1;
	}
	/* Enable depth testing */
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	/* Enable back-face culling */
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

	/* Enable transparency blending */
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	// Enable 2-D texturing
	glEnable(GL_TEXTURE_2D);


	// enable scene lighting (required to enable a light source)
	// (x, y, z, 0.0) -> directional lighting
	// (x, y, z, 1.0) -> positional lighting
	glEnable(GL_LIGHTING);

	// set the global ambient light model
	GLfloat global_ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

	// Turn off 2 sided lighting
	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_FALSE);

	// Enable smooth shading from lighting
	glShadeModel(GL_SMOOTH);
	//glShadeModel(GL_FLAT);

	// Enable automatic normalisation of normal vectors
	glEnable(GL_NORMALIZE);

	/* Choose a colour to clear the screen (RGBA range [0, 1]) */
	glClearColor(0.4f, 0.5f, 0.6f, 1.0f);

	//camera setup
	glfwSetCursorPos(window, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
	double mouseX, mouseY;
	glfwGetCursorPos(window, &mouseX, &mouseY);
	float sensitivity = 0.01f; // speed of the camera moving
	float cameraSpeed = 0.1f;
	/* Vectors containing eye coordinates */
	glm::vec3 pos = glm::vec3(0.0f, 0.0f, -2.0f);
	/* The vector along which the camera are looking */
	glm::vec3 vd = glm::vec3(0.0f, 0.0f, 1.0f);
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

	/* Lighting */
	// Light setup
	// LIGHT0 is a directional light to present as global light (like a sun)
	// Set lighting effect colours and positional parameter
	float ambient_0[] = { 0.2f, 0.2f, 0.2f, 1.0f };      // ambient light (20% white)
	float diffuse_0[] = { 0.5f, 0.5f, 0.5f, 1.0f };      // diffuse light (50% white)
	float specular_0[] = { 1.0f, 1.0f, 1.0f, 1.0f };      // specular light (100% white)

	// Attach properties to single light source (GL_LIGHT0)
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient_0);      // set ambient parameter of light source
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_0);      // set diffuse parameter of light source
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular_0);    // set specular parameter of light source

	// Enable this lighting effects
	glEnable(GL_LIGHT0);    // enable light source with attached parameters (GL_LIGHT0)

	// LIGHT1 is a positional light follow the camera as a flashlight
	float ambient_1[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	float diffuse_1[] = { 0.2f, 0.2f, 1.f, 1.0f };
	float specular_1[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	glLightfv(GL_LIGHT1, GL_AMBIENT, ambient_1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuse_1);
	glLightfv(GL_LIGHT1, GL_SPECULAR, specular_1);
	//glEnable(GL_LIGHT1);

	// For spot light
	GLfloat spot_dir_1[] = { 0.f, 0.f, -1.f };
	GLfloat spot_cutoff_1 = 45.0f;
	GLfloat spot_exponent_1 = 16.f;
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, spot_dir_1);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, spot_cutoff_1);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, spot_exponent_1);

	// LIGHT2 is a positional light for the LAVA in BLACKSMITH
	float ambient_2[] = { 0.811f, 0.43f, 0.125f, 1.0f };
	float diffuse_2[] = { 0.811f, 0.43f, 0.125f, 1.0f };
	float specular_2[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	glLightfv(GL_LIGHT2, GL_AMBIENT, ambient_2);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, diffuse_2);
	glLightfv(GL_LIGHT2, GL_SPECULAR, specular_2);
	glEnable(GL_LIGHT2);

	// For spot light
	GLfloat spot_dir_2[] = { 0.f, 1.f, 0.f };
	GLfloat spot_cutoff_2 = 45.0f;
	GLfloat spot_exponent_2 = 16.f;
	glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, spot_dir_2);
	glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, spot_cutoff_2);
	glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, spot_exponent_2);

	// LIGHT3 is a positional light for the SUN
	float ambient_3[] = { 0.811f, 0.6f, 0.125f, 1.0f };
	float diffuse_3[] = { 0.811f, 0.6f, 0.125f, 1.0f };
	float specular_3[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	glLightfv(GL_LIGHT3, GL_AMBIENT, ambient_3);
	glLightfv(GL_LIGHT3, GL_DIFFUSE, diffuse_3);
	glLightfv(GL_LIGHT3, GL_SPECULAR, specular_3);
	glEnable(GL_LIGHT3);

	// For spot light
	GLfloat spot_dir_3[] = { 0.f, 0.f, -1.f };
	GLfloat spot_cutoff_3 = 45.0f;
	GLfloat spot_exponent_3 = 10.f;
	glLightfv(GL_LIGHT3, GL_SPOT_DIRECTION, spot_dir_3);
	glLightf(GL_LIGHT3, GL_SPOT_CUTOFF, spot_cutoff_3);
	glLightf(GL_LIGHT3, GL_SPOT_EXPONENT, spot_exponent_3);


	// Loading textures
	GLuint cowTex = loadimage("cow.bmp");
	GLuint grassTex = loadimage("grass.bmp");
	GLuint woodPlankTex = loadimage("woodplank.bmp");
	GLuint oakWoodTex = loadimage("darkoak.bmp");
	GLuint glassTex = loadimage("glass.bmp");
	GLuint glassBlockTex = loadimage("glassBlock.bmp");
	GLuint cobblestoneTex = loadimage("cobblestone.bmp");
	GLuint lavaTex = loadimage("lava.bmp");
	GLuint hayTex = loadimage("hay.bmp");
	GLuint craftingTex = loadimage("craftingTable.bmp");
	GLuint craftingSideTex = loadimage("craftingTableSide.bmp");
	GLuint chestTex = loadimage("chest.bmp");
	GLuint chestSideTex = loadimage("chestSide.bmp");
	GLuint chestTopTex = loadimage("chestTop.bmp");


	GLuint skyBackTex = loadimage("skybox_back.bmp");
	GLuint skyDownTex = loadimage("skybox_down.bmp");
	GLuint skyFrontTex = loadimage("skybox_front.bmp");
	GLuint skyLeftTex = loadimage("skybox_left.bmp");
	GLuint skyRightTex = loadimage("skybox_right.bmp");
	GLuint skyUpTex = loadimage("skybox_up.bmp");


	

	// U == Upper Right Corner
	// V == Lower Left Corner

	// UV Mapping for LAVA
	UV sprite_uvs_1[16] =
	{
		/*U                  V*/
		{1.000000, 1.000000, 0.500000, 0.500000},
		{1.000000, 0.500000, 0.500000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},
		{0.500000, 0.000000, 1.000000, 0.500000},
		{0.500000, 0.500000, 0.000000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},

	};

	UV sprite_uvs_2[16] =
	{
		/*U                  V*/
		{1.000000, 1.000000, 0.500000, 0.500000},
		{1.000000, 0.500000, 0.500000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},
		{0.500000, 0.000000, 1.000000, 0.500000},
		{0.500000, 0.500000, 0.000000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},

	};

	UV sprite_uvs_3[16] =
	{
		/*U                  V*/
		{1.000000, 1.000000, 0.500000, 0.500000},
		{1.000000, 0.500000, 0.500000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},
		{0.500000, 0.000000, 1.000000, 0.500000},
		{0.500000, 0.500000, 0.000000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},

	};

	UV sprite_uvs_4[16] =
	{
		/*U                  V*/
		{1.000000, 1.000000, 0.500000, 0.500000},
		{1.000000, 0.500000, 0.500000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},
		{0.500000, 0.000000, 1.000000, 0.500000},
		{0.500000, 0.500000, 0.000000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},

	};

	UV sprite_uvs_5[16] =
	{
		/*U                  V*/
		{1.000000, 1.000000, 0.500000, 0.500000},
		{1.000000, 0.500000, 0.500000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},
		{0.500000, 0.000000, 1.000000, 0.500000},
		{0.500000, 0.500000, 0.000000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},

	};

	UV sprite_uvs_6[16] =
	{
		/*U                  V*/
		{1.000000, 1.000000, 0.500000, 0.500000},
		{1.000000, 0.500000, 0.500000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},
		{0.500000, 0.000000, 1.000000, 0.500000},
		{0.500000, 0.500000, 0.000000, 0.000000},
		{1.000000, 1.000000, 0.000000, 0.000000},

	};

	// Initialization of variables for Texture Animation
	const int num_uvs = 6;
	int frame = 0;
	int anim_frame = 0;
	const int anim_speed = 500;


	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		frame_start = glfwGetTime();
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		/* Projection */
		glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
		glMatrixMode(GL_PROJECTION);    // switch from model/view to projection mode    
		glLoadIdentity();               // reset matrix

		float aspectRatio = static_cast<GLdouble>(WINDOW_WIDTH) / static_cast<GLdouble>(WINDOW_HEIGHT);
		//gluPerspective(60.0, aspect, 1.0, 1000.0);
		float znear = 0.1f;
		float zfar = 1000.f;
		float fovyInDegrees = 60.f;

		glm::mat4 proj = glm::perspective(glm::radians(fovyInDegrees), aspectRatio, znear, zfar);

		glLoadMatrixf(glm::value_ptr(proj));


		/* Set modelview matrix as the current matrix */
		glMatrixMode(GL_MODELVIEW);
		/* Reset the current matrix */
		glLoadIdentity();

		//Re position LIGHT1 to follow camera
		float position_1[] = { 0.f, 0.f, 0.f, 1.f };      // positional light (w = 1)
		glLightfv(GL_LIGHT1, GL_POSITION, position_1);

		/* Camera */
		glm::vec3 eye = pos;
		glm::vec3 cen = pos + vd;
		glm::vec3 cameraDirection = glm::normalize(cen - eye);
		glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
		glm::vec3 cameraRight = glm::normalize(glm::cross(up, cameraDirection));
		glm::vec3 cameraUp = glm::cross(cameraDirection, cameraRight);
		glm::mat4 view = glm::mat4(
			cameraRight[0], cameraUp[0], -cameraDirection[0], 0.0f,
			cameraRight[1], cameraUp[1], -cameraDirection[1], 0.0f,
			cameraRight[2], cameraUp[2], -cameraDirection[2], 0.0f,
			0.0f, 0.0f, 0.0f, 1.0f
		);
		view = glm::translate(view, -eye);

		glLoadMatrixf(glm::value_ptr(view));

		// Camera mouse and keyboard control
		double xpos, ypos;
		glfwGetCursorPos(window, &xpos, &ypos);

		vd = vd + cameraRight * (float)((xpos - mouseX) * sensitivity);
		vd = vd + cameraUp * (float)(-(ypos - mouseY) * sensitivity);

		mouseX = xpos;
		mouseY = ypos;

		// Key input
		if (wKey)
		{
			pos = pos + cameraDirection * cameraSpeed;
		}

		if (sKey)
		{
			pos = pos + cameraDirection * -cameraSpeed;
		}

		if (aKey)
		{
			pos = pos + cameraRight * -cameraSpeed;
		}

		if (dKey)
		{
			pos = pos + cameraRight * cameraSpeed;
		}
		// Check key to switch flashlight on/off
		if (qKey)
		{
			if (isLight == false)
			{
				glEnable(GL_LIGHT1);
				isLight = true;
			}
			else
			{
				glDisable(GL_LIGHT1);
				isLight = false;
			}
		}
		// Check Key for animated animal's interactions
		if (eKey)
		{
			if (pos.x > -6.f && pos.x < -2.f)
			{
				if (pos.y > -9.f && pos.y < -6.f)
				{
					if (pos.z > -7.f && pos.z < -4.f)
					{
						isDogAnim = true;
					}
				}
			}

			if (pos.x > -8.f && pos.x < -3.f)
			{
				if (pos.y > -9.f && pos.y < -6.f)
				{
					if (pos.z > -2.f && pos.z < 2.f)
					{
						isHorseAnim = true;
					}
				}
			}
	
			eKey = false;
		}


		// Sun's Sub Division Based on Camera's Position
		if (pos.x > -1.f && pos.x < 2.f)
		{

			if (pos.y > -1.f && pos.y < 3.f)
			{

				if (pos.z > 0.f && pos.z < 2.f)
				{
					DEPTH = 3;
				}
			}
		}

		if (pos.x > 2.f  && pos.x < 6.f)
		{

			if (pos.y > 3.f && pos.y < 5.f)
			{

				if (pos.z > 2.f && pos.z < 6.f)
				{
					DEPTH = 4;
				}
			}
		}

		if (pos.x > 6.f)
		{
		
			if (pos.y > 5.f)
			{
			
				if (pos.z > 6.f)
				{
					DEPTH = 5;
				}
			}
		}


		// LIGHT0 position
		float position_0[] = { 3.f, 3.f, 3.f, 0.f };      // directional light (w = 0)
		glLightfv(GL_LIGHT0, GL_POSITION, position_0);    // set direction vector of light source

		//Re position LIGHT2 
		float position_2[] = { -4.9f, -8.5f, -8.5f, 1.f };      // positional light (w = 1)
		glLightfv(GL_LIGHT2, GL_POSITION, position_2);

		//Re position LIGHT3
		float position_3[] = { 7.f, 5.f, 5.f, 1.f };      // positional light (w = 1)
		glLightfv(GL_LIGHT3, GL_POSITION, position_3);

		/* Animation */
		static double previousSeconds = 0.0;
		static float rotateAngle = 0.f;
		double elapsedSeonds;
		double currentSeconds = glfwGetTime();

		elapsedSeonds = currentSeconds - previousSeconds;
		previousSeconds = currentSeconds;
		
		static float aT = 0.f;

		// DOG ANGLES
		static float bodyAngleA = 0.f, bodyAngleB = 0.f, tailAngleA = 0.f, tailAngleB = 0.f;

		// HORSE ANGLES
		// AB = Front Right, CD = Front Left, EF = Back Right, GH = Back Left
		static float forearmAngleA = 0.f, kneeAngleA = 0.f, hoofAngleA = 0.f, forearmAngleB = 0.f, kneeAngleB = 0.f, hoofAngleB = 0.f;
		static float forearmAngleC = 0.f, kneeAngleC = 0.f, hoofAngleC = 0.f, forearmAngleD = 0.f, kneeAngleD = 0.f, hoofAngleD = 0.f;
		static float forearmAngleE = 0.f, kneeAngleE = 0.f, hoofAngleE = 0.f, forearmAngleF = 0.f, kneeAngleF = 0.f, hoofAngleF = 0.f;
		static float forearmAngleG = 0.f, kneeAngleG = 0.f, hoofAngleG = 0.f, forearmAngleH = 0.f, kneeAngleH = 0.f, hoofAngleH = 0.f;
		static float wholeHorsePosX = 0.f, wholeHorsePosY = 0.f, wholeHorsePosZ = 0.f, wholeHorseAngleX = 0.f, wholeHorseAngleY = 0.f;

		float animationTime = 6.f;
	
		aT = fmod(aT + elapsedSeonds, animationTime);	// update time in animation cycle


		static int dogkeyFrame = 0;
		float numofDogStage = 14.f;
		float aDog = numofDogStage * aT / animationTime;	// calculate stage (out of 14)
		
		static int horseKeyFrame = 0;
		float numofHorseStage = 14.f;
		float aHorse = numofHorseStage * aT / animationTime;


		// Animation Keyframes for Interactable Dog
		if (isDogAnim == true)
		{
			if (aDog > 13.f && dogkeyFrame == 13)
			{	// Pause for 1 stage after final stage
				dogkeyFrame = 0;
				isDogAnim = false;
				bodyAngleA = 0.f;
				bodyAngleB = 0.f;
				
				tailAngleA = 0.f;
				tailAngleB = 0.f;
			}
			else if (aDog < 1.f || aDog > 12.f)
			{	// 1st or final stage
				if (dogkeyFrame == 0 || dogkeyFrame == 12) {
					dogkeyFrame = (dogkeyFrame == 0) ? 1 : 13;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = 0.f;
					tailAngleB = -10.f;
				}
			}
			else if (aDog < 2.f || aDog > 11.f)
			{	// 2nd or 12th stage
				if (dogkeyFrame == 1 || dogkeyFrame == 11) {
					dogkeyFrame = (dogkeyFrame == 1) ? 2 : 12;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = 0.f;
					tailAngleB = 10.f;


				}
			}
			else if (aDog < 3.f || aDog > 10.f)
			{	// 3rd or 11th stage
				if (dogkeyFrame == 2 || dogkeyFrame == 10) {
					dogkeyFrame = (dogkeyFrame == 2) ? 3 : 11;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = 0.f;
					tailAngleB = -10.f;


				}
			}
			else if (aDog < 4.f || aDog > 9.f)
			{	// 4th or 10th stage
				if (dogkeyFrame == 3 || dogkeyFrame == 9) {
					dogkeyFrame = (dogkeyFrame == 3) ? 4 : 10;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = 0.f;
					tailAngleB = 10.f;


				}
			}
			else if (aDog < 5.f || aDog > 8.f)
			{	// 5th or 9th stage
				if (dogkeyFrame == 4 || dogkeyFrame == 8) {
					dogkeyFrame = (dogkeyFrame == 4) ? 5 : 9;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = -25.f;
					tailAngleB = 0.f;


				}
			}
			else if (aDog < 6.f || aDog > 7.f)
			{	// 6th or 8th stage
				if (dogkeyFrame == 5 || dogkeyFrame == 7) {
					dogkeyFrame = (dogkeyFrame == 5) ? 6 : 8;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = 25.f;
					tailAngleB = 0.f;

				}
			}
			else
			{	// 7th stage
				if (dogkeyFrame == 6) {
					dogkeyFrame = 7;
					bodyAngleA = bodyAngleB;
					tailAngleA = tailAngleB;

					bodyAngleB = -25.f;
					tailAngleB = 0.f;


				}
			}
		}
		
		// Animation Keyframes for Interactable Horse
		if (isHorseAnim == true)
		{
			if (aHorse > 13.f && horseKeyFrame == 13)
			{	// Pause for 1 stage after final stage
				horseKeyFrame = 0;
				isHorseAnim = false;

				wholeHorseAngleX = 0.f;
				wholeHorseAngleY = 0.f;
				wholeHorsePosX = 0.f;
				wholeHorsePosY = 0.f;
				wholeHorsePosZ = 0.f;

				forearmAngleA = 0.f;
				kneeAngleA = 0.f;
				hoofAngleA = 0.f;

				forearmAngleB = 0.f;
				kneeAngleB = 0.f;
				hoofAngleB = 0.f;

				forearmAngleC = 0.f;
				kneeAngleC = 0.f;
				hoofAngleC = 0.f;

				forearmAngleD = 0.f;
				kneeAngleD = 0.f;
				hoofAngleD = 0.f;

				forearmAngleE = 0.f;
				kneeAngleE = 0.f;
				hoofAngleE = 0.f;

				forearmAngleF = 0.f;
				kneeAngleF = 0.f;
				hoofAngleF = 0.f;

				forearmAngleG = 0.f;
				kneeAngleG = 0.f;
				hoofAngleG = 0.f;

				forearmAngleH = 0.f;
				kneeAngleH = 0.f;
				hoofAngleH = 0.f;

			}
			else if (aHorse < 1.f || aHorse > 12.f)
			{	// 1st or final stage
				if (horseKeyFrame == 0 || horseKeyFrame == 12) {
					horseKeyFrame = (horseKeyFrame == 0) ? 1 : 13;

					wholeHorseAngleX = 0.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 0.f;
					wholeHorsePosZ = 0.f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 0.f;
					kneeAngleB = 0.f;
					hoofAngleB = 0.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 0.f;
					kneeAngleD = 0.f;
					hoofAngleD = 0.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 0.f;
					kneeAngleF = 0.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 0.f;
					kneeAngleH = 0.f;
					hoofAngleH = 0.f;
				}
			}
			else if (aHorse < 2.f || aHorse > 11.f)
			{	// 2nd or 12th stage
				if (horseKeyFrame == 1 || horseKeyFrame == 11) {
					horseKeyFrame = (horseKeyFrame == 1) ? 2 : 12;

					wholeHorseAngleX = -5.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 0.3f;
					wholeHorsePosZ = 0.f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 25.f;
					kneeAngleB = 25.f;
					hoofAngleB = 0.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 25.f;
					kneeAngleD = 25.f;
					hoofAngleD = 0.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 10.f;
					kneeAngleF = 10.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 10.f;
					kneeAngleH = 10.f;
					hoofAngleH = 0.f;

				}
			}
			else if (aHorse < 3.f || aHorse > 10.f)
			{	// 3rd or 11th stage
				if (horseKeyFrame == 2 || horseKeyFrame == 10) {
					horseKeyFrame = (horseKeyFrame == 2) ? 3 : 11;

					wholeHorseAngleX = -10.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 0.6f;
					wholeHorsePosZ = -0.1f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 25.f;
					kneeAngleB = 50.f;
					hoofAngleB = -30.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 25.f;
					kneeAngleD = 25.f;
					hoofAngleD = 30.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 10.f;
					kneeAngleF = 10.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 10.f;
					kneeAngleH = 10.f;
					hoofAngleH = 0.f;

				}
			}
			else if (aHorse < 4.f || aHorse > 9.f)
			{	// 4th or 10th stage
				if (horseKeyFrame == 3 || horseKeyFrame == 9) {
					horseKeyFrame = (horseKeyFrame == 3) ? 4 : 10;

					wholeHorseAngleX = -20.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 0.8f;
					wholeHorsePosZ = -0.2f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 25.f;
					kneeAngleB = 25.f;
					hoofAngleB = 30.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 25.f;
					kneeAngleD = 50.f;
					hoofAngleD = -30.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 25.f;
					kneeAngleF = 25.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 25.f;
					kneeAngleH = 25.f;
					hoofAngleH = 0.f;

				}
			}
			else if (aHorse < 5.f || aHorse > 8.f)
			{	// 5th or 9th stage
				if (horseKeyFrame == 4 || horseKeyFrame == 8) {
					horseKeyFrame = (horseKeyFrame == 4) ? 5 : 9;

					wholeHorseAngleX = -45.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 1.2f;
					wholeHorsePosZ = -0.2f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 25.f;
					kneeAngleB = 50.f;
					hoofAngleB = -60.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 25.f;
					kneeAngleD = 25.f;
					hoofAngleD = 60.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 25.f;
					kneeAngleF = 25.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 25.f;
					kneeAngleH = 25.f;
					hoofAngleH = 0.f;

				}
			}
			else if (aHorse < 6.f || aHorse > 7.f)
			{	// 6th or 8th stage
				if (horseKeyFrame == 5 || horseKeyFrame == 7) {
					horseKeyFrame = (horseKeyFrame == 5) ? 6 : 8;

					wholeHorseAngleX = -45.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 1.2f;
					wholeHorsePosZ = -0.2f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 25.f;
					kneeAngleB = 25.f;
					hoofAngleB = 60.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 25.f;
					kneeAngleD = 50.f;
					hoofAngleD = -60.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 25.f;
					kneeAngleF = 25.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 25.f;
					kneeAngleH = 25.f;
					hoofAngleH = 0.f;

				}
			}
			else
			{	// 7th stage
				if (horseKeyFrame == 6) {
					horseKeyFrame = 7;

					wholeHorseAngleX = -45.f;
					wholeHorseAngleY = 0.f;
					wholeHorsePosX = 0.f;
					wholeHorsePosY = 1.2f;
					wholeHorsePosZ = -0.2f;

					forearmAngleA = forearmAngleB;
					kneeAngleA = kneeAngleB;
					hoofAngleA = hoofAngleB;

					forearmAngleB = 25.f;
					kneeAngleB = 50.f;
					hoofAngleB = -60.f;

					forearmAngleC = forearmAngleD;
					kneeAngleC = kneeAngleD;
					hoofAngleC = hoofAngleD;

					forearmAngleD = 25.f;
					kneeAngleD = 25.f;
					hoofAngleD = 60.f;

					forearmAngleE = forearmAngleF;
					kneeAngleE = kneeAngleF;
					hoofAngleE = hoofAngleF;

					forearmAngleF = 25.f;
					kneeAngleF = 25.f;
					hoofAngleF = 0.f;

					forearmAngleG = forearmAngleH;
					kneeAngleG = kneeAngleH;
					hoofAngleG = hoofAngleH;

					forearmAngleH = 25.f;
					kneeAngleH = 25.f;
					hoofAngleH = 0.f;

				}
			}
		}
		
		
		// Animation for lava
		frame++;
		if (frame % anim_speed == 0)
		{
			anim_frame = (anim_frame + 1) % num_uvs;
		}

		UV uv1 = sprite_uvs_1[anim_frame];
		UV uv2 = sprite_uvs_2[anim_frame];
		UV uv3 = sprite_uvs_3[anim_frame];
		UV uv4 = sprite_uvs_4[anim_frame];
		UV uv5 = sprite_uvs_5[anim_frame];
		UV uv6 = sprite_uvs_6[anim_frame];

		

		/* Draw model */
		//drawSkybox(10.f);
		drawSkybox(10.f, skyBackTex, skyFrontTex, skyRightTex, skyLeftTex, skyUpTex, skyDownTex);

		// The SUN
		glPushMatrix();
		glTranslatef(9.f, 6.f, 8.f);
		draw();
		glPopMatrix();

		
		// Draw Crying Man
		glPushMatrix(); // save transformation state
		glTranslatef(-3.8f, -9.f, -6.4f);
		glRotatef(-90.f, 0.f, 1.f, 0.f);
		drawCryingMan(currentSeconds);
		glPopMatrix();	// restore transformation state

		// Draw Static Horse
		glPushMatrix();
		glTranslatef(-2.5f, -8.4f, 0.f);
		glRotatef(180.f, 0.f, 1.f, 0.f);
		drawHorse();
		glPopMatrix();

		// Draw Two Static Cows
		glPushMatrix();
		glTranslatef(5.4f, -8.9f, -4.8f); // POSITIONING THE COW
		drawCow(cowTex);

		glTranslatef(2.f, 0.f, 0.f);
		drawCow(cowTex);
		glPopMatrix();
	
		
		// === Draw the buildings in the scene	===

		// Draw Big House
		glTranslatef(-1.f, -9.0f, 0.f);
		drawHouse(oakWoodTex, woodPlankTex, glassBlockTex, cobblestoneTex, chestTopTex, chestTex, chestSideTex, craftingTex, craftingSideTex);
		
		// Draw Cabin
		glTranslatef(0.f, -0.6f, -8.f);
		glPushMatrix();
		drawCabin(oakWoodTex, woodPlankTex, glassBlockTex, cobblestoneTex);
		
		// Draw Interactable DOG
		glTranslatef(-3.6f, 0.6f, 2.4f);
		glPushMatrix();
		//HEAD
		glPushMatrix();

		glPushMatrix();
		drawSolidCube(0.1f, 0.1f, 0.05f, 1.f, 1.f, 1.f);

		// LEFT EYE
		glPushMatrix();
		glTranslatef(-0.04f, 0.02f, 0.055f);
		drawSolidCube(0.016f, 0.016f, 0.005f, 0.f, 0.f, 0.f);
		glPopMatrix();

		// RIGHT EYE
		glPushMatrix();
		glTranslatef(0.04f, 0.02f, 0.055f);
		drawSolidCube(0.016f, 0.016f, 0.005f, 0.f, 0.f, 0.f);
		glPopMatrix();

		glTranslatef(0.f, -0.05f, 0.1f);
		drawSolidCube(0.05f, 0.05f, 0.05f, 1.f, 1.f, 1.f);
		glPopMatrix();

		// LEFT EARS
		glPushMatrix();
		glTranslatef(-0.06f, 0.135f, -0.04f);
		drawSolidCube(0.03f, 0.035f, 0.01f, 1.f, 1.f, 1.f);
		glPopMatrix();

		// RIGHT EARS
		glPushMatrix();
		glTranslatef(0.06f, 0.135f, -0.04f);
		drawSolidCube(0.03f, 0.035f, 0.01f, 1.f, 1.f, 1.f);
		glPopMatrix();

		glPopMatrix();

		//BODY
		glPushMatrix();
		//glRotatef(-25.f, 0.f, 0.f, 1.f);
		glRotatef((1 - fmod(aDog, 1)) * bodyAngleA + fmod(aDog, 1) * bodyAngleB, 0.f, 0.f, 1.f);
		glPushMatrix();
		// NECK
		glTranslatef(0.f, 0.f, -0.15f);
		drawSolidCube(0.12f, 0.12f, 0.1f, 1.f, 1.f, 1.f);
		// BACK BODY
		glTranslatef(0.f, 0.f, -0.15f);
		drawSolidCube(0.1f, 0.1f, 0.2f, 1.f, 1.f, 1.f);
		glPopMatrix();
		glPopMatrix();

		//TAIL
		glPushMatrix();
		glTranslatef(0.f, -0.08f, -0.55f);
		glRotatef(-45.f, 1.f, 0.f, 0.f);
		//glRotatef(-5.f, 0.f, 1.f, 0.f);
		glRotatef((1 - fmod(aDog, 1)) * tailAngleA + fmod(aDog, 1) * tailAngleB, 0.f, 1.f, 0.f);
		drawSolidCube(0.05f, 0.05f, 0.15f, 1.f, 1.f, 1.f);
		glPopMatrix();

		//BACK LEFT LEG
		glPushMatrix();
		glTranslatef(-0.07f, -0.2f, -0.465f);
		drawSolidCube(0.03f, 0.1f, 0.03f, 1.f, 1.f, 1.f);
		glPopMatrix();

		//BACK RIGHT LEG
		glPushMatrix();
		glTranslatef(0.07f, -0.2f, -0.465f);
		drawSolidCube(0.03f, 0.1f, 0.03f, 1.f, 1.f, 1.f);
		glPopMatrix();

		//FRONT LEFT LEG
		glPushMatrix();
		glTranslatef(-0.07f, -0.2f, -0.1f);
		drawSolidCube(0.03f, 0.1f, 0.03f, 1.f, 1.f, 1.f);
		glPopMatrix();

		//FRONT RIGHT LEG
		glPushMatrix();
		glTranslatef(0.07f, -0.2f, -0.1f);
		drawSolidCube(0.03f, 0.1f, 0.03f, 1.f, 1.f, 1.f);
		glPopMatrix();

		glPopMatrix();
		// END OF DOG ^^
		glPopMatrix();

		glTranslatef(-3.f, 0.f, 2.4f);

		// Draw Black Smith
		glPushMatrix();
		drawBlacksmith (oakWoodTex, woodPlankTex, glassBlockTex, cobblestoneTex, lavaTex, uv1, uv2, uv3, uv4, uv5, uv6);
		glPopMatrix();

		// Draw Stable for Horse
		glTranslatef(0.f, 0.f, 5.4f);
		glPushMatrix();
		drawStable(oakWoodTex, woodPlankTex, cobblestoneTex, hayTex);

		glTranslatef(-3.f, 1.2f, 1.2f);
		glRotatef(180.f, 0.f, 1.f, 0.f);
		// Draw Interactable HORSE in Stable
		glPushMatrix();
		// Head
		glPushMatrix();

		glPushMatrix();
		glRotatef(wholeHorseAngleX, 1.f, 0.f, 0.f);
		glRotatef(wholeHorseAngleY, 0.f, 1.f, 0.f);
		glTranslatef(wholeHorsePosX, wholeHorsePosY, wholeHorsePosZ);
		glRotatef(45.0f, 1.f, 0.f, 0.f);
		drawSolidCube(0.08f, 0.1f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.f, -0.2f, -0.25f);
		drawSolidCube(0.08f, 0.3f, 0.15f, 0.6f, 0.45f, 0.34f);
		glTranslatef(0.f, 0.25f, 0.f);
		drawSolidCube(0.13f, 0.11f, 0.15f, 0.8f, 0.8f, 0.8f);
		// Left Ears
		glPushMatrix();
		glTranslatef(-0.06f, 0.16f, -0.13f);
		drawSolidCube(0.04f, 0.08f, 0.02f, 0.6f, 0.45f, 0.34f);
		glPopMatrix();
		// Right Ears
		glPushMatrix();
		glTranslatef(0.06f, 0.16f, -0.13f);
		drawSolidCube(0.04f, 0.08f, 0.02f, 0.6f, 0.45f, 0.34f);
		glPopMatrix();

		// Neck Hair
		glTranslatef(0.0f, -0.2f, -0.2f);
		drawSolidCube(0.05f, 0.4f, 0.05f, 0.2f, 0.2f, 0.2f);
		glPopMatrix();
		// Body
		glPushMatrix();
		glRotatef(wholeHorseAngleX, 1.f, 0.f, 0.f);
		glRotatef(wholeHorseAngleY, 0.f, 1.f, 0.f);
		glTranslatef(wholeHorsePosX, wholeHorsePosY, wholeHorsePosZ);
		glTranslatef(0.0f, -0.38f, -1.f);
		drawSolidCube(0.3f, 0.3f, 0.6f, 0.6f, 0.45f, 0.34f);

		//Back Left Leg
		glPushMatrix();
		glTranslatef(-0.18f, -0.5f, -0.48f);
		glRotatef((1 - fmod(aHorse, 1))* forearmAngleG + fmod(aHorse, 1) * forearmAngleH, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.12f, 0.2f, 0.12f, 0.6f, 0.45f, 0.34f);
		glTranslatef(0.f, -0.4f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* kneeAngleG + fmod(aHorse, 1) * kneeAngleH, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.f, -0.2f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* hoofAngleG + fmod(aHorse, 1) * hoofAngleH, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();

		//Back Right Leg
		glPushMatrix();
		glTranslatef(0.18f, -0.5f, -0.48f);
		glRotatef((1 - fmod(aHorse, 1))* forearmAngleE + fmod(aHorse, 1) * forearmAngleF, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.12f, 0.2f, 0.12f, 0.6f, 0.45f, 0.34f);
		glTranslatef(0.f, -0.4f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* kneeAngleE + fmod(aHorse, 1) * kneeAngleF, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.f, -0.2f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* hoofAngleE + fmod(aHorse, 1) * hoofAngleF, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);

		glPopMatrix();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();

		//Front Left Leg
		glPushMatrix();
		glTranslatef(-0.18f, -0.5f, 0.48f);
		glRotatef((1 - fmod(aHorse, 1))* forearmAngleC + fmod(aHorse, 1) * forearmAngleD, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.12f, 0.2f, 0.12f, 0.6f, 0.45f, 0.34f);
		glTranslatef(0.f, -0.4f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* kneeAngleC + fmod(aHorse, 1) * kneeAngleD, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.f, -0.2f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* hoofAngleC + fmod(aHorse, 1) * hoofAngleD, 1.f, 0.f, 0.f);

		glPushMatrix();
		drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();

		//Front Right Leg
		glPushMatrix();
		glTranslatef(0.18f, -0.5f, 0.48f);
		glRotatef((1 - fmod(aHorse, 1))* forearmAngleA + fmod(aHorse, 1) * forearmAngleB, 1.f, 0.f, 0.f);
		glPushMatrix();
		drawSolidCube(0.12f, 0.2f, 0.12f, 0.6f, 0.45f, 0.34f);

		glTranslatef(0.f, -0.4f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* kneeAngleA + fmod(aHorse, 1) * kneeAngleB, 1.f, 0.f, 0.f);
		glPushMatrix();
		drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);

		glTranslatef(0.f, -0.2f, 0.f);
		glRotatef((1 - fmod(aHorse, 1))* hoofAngleA + fmod(aHorse, 1) * hoofAngleB, 1.f, 0.f, 0.f);
		glPushMatrix();
		drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();

		// Tail
		glRotatef(45.0f, 1.f, 0.f, 0.f);
		glTranslatef(0.f, -0.75f, -0.4f);
		drawSolidCube(0.1f, 0.4f, 0.1f, 0.2f, 0.2f, 0.2f);

		glPopMatrix();
		glPopMatrix();
		glPopMatrix();

		glPopMatrix();

		// === Draw Animated Animals ===

		// Draw Horse Eating
		glTranslatef(-1.2f, 1.2f, 1.2f);
		glRotatef(180.f, 0.f, 1.f, 0.f);
		drawHorseEating(currentSeconds);
		
		// Draw Horse Escaping
		glPushMatrix();
		glTranslatef(0.f, 0.f, 3.0f);
		glRotatef(-90.f, 0.f, 1.f, 0.f);
		drawAnimatedHorse(currentSeconds);
		
		// Draw Man Chasing Horse
		glPushMatrix();
		glRotatef(-180.f, 0.f, 1.f, 0.f);
		glTranslatef(0.f, -0.6f, 3.6f);
		drawManRunning(currentSeconds);
		glPopMatrix();
		
		glPopMatrix();

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();

		frame_count++;
		final_time = glfwGetTime();
		if (final_time - initial_time > 0)
		{
			std::cout << "FPS: " << frame_count / (final_time - initial_time) << "\n";
			frame_count = 0;
			initial_time = final_time;
		}

	}

	glfwTerminate();
	return 0;
}

bool initOpenGL()
{
	/* Initialize the GLFW library */
	if (!glfwInit()) {
		std::cout << "GLFW initialisation failed." << std::endl;
		return false;
	}

	glfwSetErrorCallback(error_callback);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);
	/* For macOS uncomment the following line */
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, NULL, NULL);
	if (!window)
	{
		std::cout << "GLFW failed to create window." << std::endl;
		glfwTerminate();
		return false;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	glfwSetKeyCallback(window, key_callback);

	/* Initialize the GLEW library */
	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (err != GLEW_OK)
	{
		/* Problem: glewInit failed, something is seriously wrong */
		std::cout << "GLEW initialisation failed: " << glewGetErrorString(err) << std::endl;
		return false;
	}
	std::cout << "Status: Using GLEW " << glewGetString(GLEW_VERSION) << std::endl;

	return true;
}