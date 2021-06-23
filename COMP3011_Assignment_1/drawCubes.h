#ifndef DRAWCUBES
#define DRAWCUBES

#include <GL/glew.h>
#include <GLFW/glfw3.h>

void drawSolidCube(float x, float y, float z)
{
	// Material properties
	glPushAttrib(GL_ALL_ATTRIB_BITS); // save current style attributes (inc. material properties)

	float mat_ambient[] = { 0.5f, 0.5f, 0.5f, 1.f };	// ambient colour
	float mat_diffuse[] = { 0.5f, 0.5f, 0.5f, 1.f };	// colour reflected by diffuse light
	float mat_specular[] = { 0.f, 0.f, 0.f, 1.f };		// specular colour
	float mat_shininess[] = { 0.0f }; // [0, 128]
	float mat_emission[] = { 0.f, 0.f, 0.f, 1.f };

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);	// set colour for ambient reflectance
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);	// set colour for diffuse reflectance
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);	// set colour for specular reflectance
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glBegin(GL_TRIANGLES);

	// Back Face
	glNormal3f(0.f, 0.f, 1.f);
	glVertex3f(-x, -y, z);
	glVertex3f(-x, y, z);
	glVertex3f(x, y, z);

	glVertex3f(x, y, z);
	glVertex3f(x, -y, z);
	glVertex3f(-x, -y, z);


	// Near Face
	glNormal3f(0.f, 0.f, -1.f);
	glVertex3f(x, y, -z);
	glVertex3f(-x, y, -z);
	glVertex3f(-x, -y, -z);

	glVertex3f(-x, -y, -z);
	glVertex3f(x, -y, -z);
	glVertex3f(x, y, -z);


	// Right Face
	glNormal3f(1.f, 0.f, 0.f);
	glVertex3f(x, y, -z);
	glVertex3f(x, -y, -z);
	glVertex3f(x, -y, z);

	glVertex3f(x, -y, z);
	glVertex3f(x, y, z);
	glVertex3f(x, y, -z);


	//Left Face
	glNormal3f(-1.f, 0.f, 0.f);
	glVertex3f(-x, -y, z);
	glVertex3f(-x, -y, -z);
	glVertex3f(-x, y, -z);

	glVertex3f(-x, y, -z);
	glVertex3f(-x, y, z);
	glVertex3f(-x, -y, z);


	//Bottom Face

	glNormal3f(0.f, 1.f, 0.f);
	glVertex3f(x, y, -z);
	glVertex3f(x, y, z);
	glVertex3f(-x, y, z);

	glVertex3f(-x, y, z);
	glVertex3f(-x, y, -z);
	glVertex3f(x, y, -z);


	//Top Face
	glNormal3f(0.f, -1.f, 0.f);
	glVertex3f(-x, -y, z);
	glVertex3f(x, -y, z);
	glVertex3f(x, -y, -z);

	glVertex3f(x, -y, -z);
	glVertex3f(-x, -y, -z);
	glVertex3f(-x, -y, z);


	glEnd();
	glPopAttrib(); // restore style attributes
}

void drawSolidCube(float x, float y, float z, float r, float b, float g)
{
	// Material properties
	glPushAttrib(GL_ALL_ATTRIB_BITS); // save current style attributes (inc. material properties)

	float mat_ambient[] = { r, b, g, 1.f };	// ambient colour
	float mat_diffuse[] = { r, b, g, 1.f };	// colour reflected by diffuse light
	float mat_specular[] = { 0.f, 0.f, 0.f, 1.f };		// specular colour
	float mat_shininess[] = { 0.0f }; // [0, 128]
	float mat_emission[] = { 0.f, 0.f, 0.f, 1.f };

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);	// set colour for ambient reflectance
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);	// set colour for diffuse reflectance
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);	// set colour for specular reflectance
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glBegin(GL_TRIANGLES);

	// Back Face
	glNormal3f(0.f, 0.f, 1.f);
	glVertex3f(-x, -y, z);
	glVertex3f(-x, y, z);
	glVertex3f(x, y, z);

	glVertex3f(x, y, z);
	glVertex3f(x, -y, z);
	glVertex3f(-x, -y, z);


	// Near Face
	glNormal3f(0.f, 0.f, -1.f);
	glVertex3f(x, y, -z);
	glVertex3f(-x, y, -z);
	glVertex3f(-x, -y, -z);

	glVertex3f(-x, -y, -z);
	glVertex3f(x, -y, -z);
	glVertex3f(x, y, -z);


	// Right Face
	glNormal3f(1.f, 0.f, 0.f);
	glVertex3f(x, y, -z);
	glVertex3f(x, -y, -z);
	glVertex3f(x, -y, z);

	glVertex3f(x, -y, z);
	glVertex3f(x, y, z);
	glVertex3f(x, y, -z);


	//Left Face
	glNormal3f(-1.f, 0.f, 0.f);
	glVertex3f(-x, -y, z);
	glVertex3f(-x, -y, -z);
	glVertex3f(-x, y, -z);

	glVertex3f(-x, y, -z);
	glVertex3f(-x, y, z);
	glVertex3f(-x, -y, z);


	//Bottom Face

	glNormal3f(0.f, 1.f, 0.f);
	glVertex3f(x, y, -z);
	glVertex3f(x, y, z);
	glVertex3f(-x, y, z);

	glVertex3f(-x, y, z);
	glVertex3f(-x, y, -z);
	glVertex3f(x, y, -z);


	//Top Face
	glNormal3f(0.f, -1.f, 0.f);
	glVertex3f(-x, -y, z);
	glVertex3f(x, -y, z);
	glVertex3f(x, -y, -z);

	glVertex3f(x, -y, -z);
	glVertex3f(-x, -y, -z);
	glVertex3f(-x, -y, z);


	glEnd();
	glPopAttrib(); // restore style attributes
}

void drawSolidCube(float x, float y, float z, GLuint tex)
{

	glEnable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glBindTexture(GL_TEXTURE_2D, tex);
	glBegin(GL_TRIANGLES);

	// Back Face
	glNormal3f(0.f, 0.f, -1.f);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, z);

	glTexCoord2f(1., 1.);
	glVertex3f(x, y, z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, z);


	// Near Face
	glNormal3f(0.f, 0.f, -1.f);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, -z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, -z);

	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);


	// Right Face
	glNormal3f(-1.f, 0.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, -z);
	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, z);

	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(x, y, z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);


	//Left Face
	glNormal3f(-1.f, 0.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, -y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, -y, -z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, y, -z);

	glTexCoord2f(0., 0.);
	glVertex3f(-x, y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(-x, y, z);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, -y, z);


	//Bottom Face
	glNormal3f(0.f, 1.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, y, z);

	glTexCoord2f(0., 0.);
	glVertex3f(-x, y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);


	//Top Face
	glNormal3f(0.f, -1.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, -y, z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, -z);

	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, -z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, -y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, -y, z);


	glEnd();
	glDisable(GL_TEXTURE_2D);

}

void drawSolidCube(float x, float y, float z, GLuint nearTex, GLuint backTex, GLuint leftTex, GLuint rightTex, GLuint topTex, GLuint bottomTex)
{

	glEnable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);

	glBindTexture(GL_TEXTURE_2D, backTex);
	glBegin(GL_TRIANGLES);

	// Back Face
	glNormal3f(0.f, 0.f, -1.f);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, z);

	glTexCoord2f(1., 1.);
	glVertex3f(x, y, z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, z);

	glEnd();

	glBindTexture(GL_TEXTURE_2D, nearTex);
	glBegin(GL_TRIANGLES);

	// Near Face
	glNormal3f(0.f, 0.f, -1.f);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, -z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, -z);

	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);

	glEnd();

	glBindTexture(GL_TEXTURE_2D, rightTex);
	glBegin(GL_TRIANGLES);

	// Right Face
	glNormal3f(-1.f, 0.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, -z);
	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, z);

	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(x, y, z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);

	glEnd();


	glBindTexture(GL_TEXTURE_2D, leftTex);
	glBegin(GL_TRIANGLES);

	//Left Face
	glNormal3f(-1.f, 0.f, 0.f);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, z);
	glTexCoord2f(1., 0.);
	glVertex3f(-x, -y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, y, -z);

	glTexCoord2f(1., 1.);
	glVertex3f(-x, y, -z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, -y, z);

	glEnd();

	glBindTexture(GL_TEXTURE_2D, topTex);
	glBegin(GL_TRIANGLES);

	//Top Face
	glNormal3f(0.f, -1.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(-x, y, z);

	glTexCoord2f(0., 0.);
	glVertex3f(-x, y, z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(x, y, -z);

	glEnd();


	glBindTexture(GL_TEXTURE_2D, bottomTex);
	glBegin(GL_TRIANGLES);

	//Bottom Face
	glNormal3f(0.f, 1.f, 0.f);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, -y, z);
	glTexCoord2f(1., 0.);
	glVertex3f(x, -y, z);
	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, -z);

	glTexCoord2f(0., 0.);
	glVertex3f(x, -y, -z);
	glTexCoord2f(0., 1.);
	glVertex3f(-x, -y, -z);
	glTexCoord2f(1., 1.);
	glVertex3f(-x, -y, z);

	glEnd();

	glDisable(GL_TEXTURE_2D);

}

void drawSolidCube(float r)
{
	drawSolidCube(r, r, r);
}

#endif 
