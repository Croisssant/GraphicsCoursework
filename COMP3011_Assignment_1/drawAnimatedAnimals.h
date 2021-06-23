#ifndef DRAWANIMATEDANIMALS
#define DRAWANIMATEDANIMALS

#include "drawCubes.h"

float speed = 0.5f;
bool isHorseMove = false;
bool isHorseAnim = false;
float horsePos = 0.5f;
float humanPos = 0.5f;
float horseTurn = 30.f;

// This is the escaping horse function
void drawAnimatedHorse(double currentSeconds)
{
	float animationTime = 6.f;
	static float aT = 0.f;

	/* Animation */
	static double previousSeconds = 0.0;
	double elapsedSeonds;


	elapsedSeonds = currentSeconds - previousSeconds;
	previousSeconds = currentSeconds;

	aT = fmod(aT + elapsedSeonds, animationTime);	// update time in animation cycle

	// AB = Front Right, CD = Front Left, EF = Back Right, GH = Back Left
	static float forearmAngleA = 0.f, kneeAngleA = 0.f, hoofAngleA = 0.f, forearmAngleB = 0.f, kneeAngleB = 0.f, hoofAngleB = 0.f;
	static float forearmAngleC = 0.f, kneeAngleC = 0.f, hoofAngleC = 0.f, forearmAngleD = 0.f, kneeAngleD = 0.f, hoofAngleD = 0.f;
	static float forearmAngleE = 0.f, kneeAngleE = 0.f, hoofAngleE = 0.f, forearmAngleF = 0.f, kneeAngleF = 0.f, hoofAngleF = 0.f;
	static float forearmAngleG = 0.f, kneeAngleG = 0.f, hoofAngleG = 0.f, forearmAngleH = 0.f, kneeAngleH = 0.f, hoofAngleH = 0.f;
	static float wholeHorsePosX = 0.f, wholeHorsePosY = 0.f, wholeHorsePosZ = 0.f, wholeHorseAngleX = 0.f, wholeHorseAngleY = 0.f;

	static int horseKeyFrame = 0;
	float numofHorseStage = 24.f;
	float aHorse = numofHorseStage * aT / animationTime;


	if (aHorse > 23.f && horseKeyFrame == 23)
	{	
		horseKeyFrame = 0;

		wholeHorseAngleX = 0.f;
		wholeHorseAngleY = 0.f;
		wholeHorsePosX = 0.f;
		wholeHorsePosY = 0.f;
		wholeHorsePosZ = 0.f;

		forearmAngleA = 0.f;
		kneeAngleA = 0.f;
		hoofAngleA = 0.f;

		forearmAngleB = -50.f;
		kneeAngleB = 25.f;
		hoofAngleB = 10.f;

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

		forearmAngleH = -50.f;
		kneeAngleH = 25.f;
		hoofAngleH = 10.f;
	}
	else if (aHorse < 1.f || aHorse > 22.f)
	{	
		if (horseKeyFrame == 0 || horseKeyFrame == 22) {
			horseKeyFrame = (horseKeyFrame == 0) ? 1 : 23;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			isHorseMove = true;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -50.f;
			kneeAngleD = 25.f;
			hoofAngleD = 10.f;

			forearmAngleE = forearmAngleF;
			kneeAngleE = kneeAngleF;
			hoofAngleE = hoofAngleF;

			forearmAngleF = -50.f;
			kneeAngleF = 25.f;
			hoofAngleF = 10.f;

			forearmAngleG = forearmAngleH;
			kneeAngleG = kneeAngleH;
			hoofAngleG = hoofAngleH;

			forearmAngleH = 0.f;
			kneeAngleH = 0.f;
			hoofAngleH = 0.f;
		}
	}
	else if (aHorse < 2.f || aHorse > 21.f)
	{	
		if (horseKeyFrame == 1 || horseKeyFrame == 21) {
			horseKeyFrame = (horseKeyFrame == 1) ? 2 : 22;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			isHorseMove = true;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = -50.f;
			kneeAngleB = 25.f;
			hoofAngleB = 10.f;

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

			forearmAngleH = -50.f;
			kneeAngleH = 25.f;
			hoofAngleH = 10.f;
		}
	}
	else if (aHorse < 3.f || aHorse > 20.f)
	{	
		if (horseKeyFrame == 2 || horseKeyFrame == 20) {
			horseKeyFrame = (horseKeyFrame == 2) ? 3 : 21;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			isHorseMove = true;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -50.f;
			kneeAngleD = 25.f;
			hoofAngleD = 10.f;

			forearmAngleE = forearmAngleF;
			kneeAngleE = kneeAngleF;
			hoofAngleE = hoofAngleF;

			forearmAngleF = -50.f;
			kneeAngleF = 25.f;
			hoofAngleF = 10.f;

			forearmAngleG = forearmAngleH;
			kneeAngleG = kneeAngleH;
			hoofAngleG = hoofAngleH;

			forearmAngleH = 0.f;
			kneeAngleH = 0.f;
			hoofAngleH = 0.f;
		}
	}
	else if (aHorse < 4.f || aHorse > 19.f)
	{	
		if (horseKeyFrame == 3 || horseKeyFrame == 19) {
			horseKeyFrame = (horseKeyFrame == 3) ? 4 : 20;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			isHorseMove = true;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = -50.f;
			kneeAngleB = 25.f;
			hoofAngleB = 10.f;

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

			forearmAngleH = -50.f;
			kneeAngleH = 25.f;
			hoofAngleH = 10.f;
		}
	}
	else if (aHorse < 5.f || aHorse > 18.f)
	{	
		if (horseKeyFrame == 4 || horseKeyFrame == 18) {
			horseKeyFrame = (horseKeyFrame == 4) ? 5 : 19;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;
			isHorseMove = true;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -50.f;
			kneeAngleD = 25.f;
			hoofAngleD = 10.f;

			forearmAngleE = forearmAngleF;
			kneeAngleE = kneeAngleF;
			hoofAngleE = hoofAngleF;

			forearmAngleF = -50.f;
			kneeAngleF = 25.f;
			hoofAngleF = 10.f;

			forearmAngleG = forearmAngleH;
			kneeAngleG = kneeAngleH;
			hoofAngleG = hoofAngleH;

			forearmAngleH = 0.f;
			kneeAngleH = 0.f;
			hoofAngleH = 0.f;
		}
	}

	// STOP
	else if (aHorse < 6.f || aHorse > 17.f)
	{	
		if (horseKeyFrame == 5 || horseKeyFrame == 17) {
			horseKeyFrame = (horseKeyFrame == 5) ? 6 : 18;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			isHorseMove = true;

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
	else if (aHorse < 7.f || aHorse > 16.f)
	{	
		if (horseKeyFrame == 6 || horseKeyFrame == 16) {
			horseKeyFrame = (horseKeyFrame == 6) ? 7 : 17;
			wholeHorseAngleX = -5.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.3f;
			wholeHorsePosZ = 0.f;
			isHorseMove = false;

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
	else if (aHorse < 8.f || aHorse > 15.f)
	{	
		if (horseKeyFrame == 7 || horseKeyFrame == 15) {
			horseKeyFrame = (horseKeyFrame == 7) ? 8 : 16;


			wholeHorseAngleX = -10.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.6f;
			wholeHorsePosZ = -0.1f;
			isHorseMove = false;

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
	else if (aHorse < 9.f || aHorse > 14.f)
	{	
		if (horseKeyFrame == 8 || horseKeyFrame == 14) {
			horseKeyFrame = (horseKeyFrame == 8) ? 9 : 15;

			wholeHorseAngleX = -20.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.8f;
			wholeHorsePosZ = -0.2f;
			isHorseMove = false;

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
	else if (aHorse < 10.f || aHorse > 13.f)
	{	
		if (horseKeyFrame == 9 || horseKeyFrame == 13) {
			horseKeyFrame = (horseKeyFrame == 9) ? 10 : 14;

			wholeHorseAngleX = -45.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 1.2f;
			wholeHorsePosZ = -0.2f;
			isHorseMove = false;

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
	else if (aHorse < 11.f || aHorse > 12.f)
	{	
		if (horseKeyFrame == 10 || horseKeyFrame == 12) {
			horseKeyFrame = (horseKeyFrame == 10) ? 11 : 13;

			wholeHorseAngleX = -45.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 1.2f;
			wholeHorsePosZ = -0.2f;
			isHorseMove = false;

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
	{	
		if (horseKeyFrame == 11) {
			horseKeyFrame = 12;

			wholeHorseAngleX = -45.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 1.2f;
			wholeHorsePosZ = -0.2f;
			isHorseMove = false;

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

	// THE HORSE
		// Head
	glPushMatrix();
	//glRotatef(horseTurn, 0.f, -1.f, 0.f);
	glTranslatef(0.f, 0.0f, 0.f + horsePos);

	glPushMatrix();
	glRotatef(wholeHorseAngleX, 1.f, 0.f, 0.f);
	glRotatef(wholeHorseAngleY, 0.f, 1.f, 0.f);
	glTranslatef(wholeHorsePosX, wholeHorsePosY, wholeHorsePosZ);
	glRotatef(45.0f, 1.f, 0.f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.1f, 0.73f, 0.64f, 0.53f);
	glTranslatef(0.f, -0.2f, -0.25f);
	drawSolidCube(0.08f, 0.3f, 0.15f, 0.73f, 0.64f, 0.53f);
	glTranslatef(0.f, 0.25f, 0.f);
	drawSolidCube(0.13f, 0.11f, 0.15f, 1.f, 1.f, 1.f);
	// Left Ears
	glPushMatrix();
	glTranslatef(-0.06f, 0.16f, -0.13f);
	drawSolidCube(0.04f, 0.08f, 0.02f, 0.73f, 0.64f, 0.53f);
	glPopMatrix();
	// Right Ears
	glPushMatrix();
	glTranslatef(0.06f, 0.16f, -0.13f);
	drawSolidCube(0.04f, 0.08f, 0.02f, 0.73f, 0.64f, 0.53f);
	glPopMatrix();

	// Neck Hair
	glTranslatef(0.0f, -0.2f, -0.2f);
	drawSolidCube(0.05f, 0.4f, 0.05f, 0.3f, 0.3f, 0.3f);
	glPopMatrix();
	// Body
	glPushMatrix();
	glRotatef(wholeHorseAngleX, 1.f, 0.f, 0.f);
	glRotatef(wholeHorseAngleY, 0.f, 1.f, 0.f);
	glTranslatef(wholeHorsePosX, wholeHorsePosY, wholeHorsePosZ);
	glTranslatef(0.0f, -0.38f, -1.f);
	drawSolidCube(0.3f, 0.3f, 0.6f, 0.73f, 0.64f, 0.53f);

	//Back Left Leg
	glPushMatrix();
	glTranslatef(-0.18f, -0.5f, -0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleG + fmod(aHorse, 1) * forearmAngleH, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.73f, 0.64f, 0.53f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleG + fmod(aHorse, 1) * kneeAngleH, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleG + fmod(aHorse, 1) * hoofAngleH, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	//Back Right Leg
	glPushMatrix();
	glTranslatef(0.18f, -0.5f, -0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleE + fmod(aHorse, 1) * forearmAngleF, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.73f, 0.64f, 0.53f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleE + fmod(aHorse, 1) * kneeAngleF, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleE + fmod(aHorse, 1) * hoofAngleF, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);

	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	//Front Left Leg
	glPushMatrix();
	glTranslatef(-0.18f, -0.5f, 0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleC + fmod(aHorse, 1) * forearmAngleD, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.73f, 0.64f, 0.53f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleC + fmod(aHorse, 1) * kneeAngleD, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleC + fmod(aHorse, 1) * hoofAngleD, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	//Front Right Leg
	glPushMatrix();
	glTranslatef(0.18f, -0.5f, 0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleA + fmod(aHorse, 1) * forearmAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.73f, 0.64f, 0.53f);

	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleA + fmod(aHorse, 1) * kneeAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);

	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleA + fmod(aHorse, 1) * hoofAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	// Tail
	glRotatef(45.0f, 1.f, 0.f, 0.f);
	glTranslatef(0.f, -0.75f, -0.4f);
	drawSolidCube(0.1f, 0.4f, 0.1f, 0.3f, 0.3f, 0.3f);

	glPopMatrix();
	glPopMatrix();

	if (isHorseMove == true)
	{
		horsePos += 0.01f;
	}

	if (horsePos > 17.0)
	{
		horsePos = 0;
	}
}

void drawHorseEating(double currentSeconds)
{

	float animationTime = 6.f;
	static float aT = 0.f;

	/* Animation */
	static double previousSeconds = 0.0;
	double elapsedSeonds;


	elapsedSeonds = currentSeconds - previousSeconds;
	previousSeconds = currentSeconds;

	aT = fmod(aT + elapsedSeonds, animationTime);	// update time in animation cycle

	// AB = Front Right, CD = Front Left, EF = Back Right, GH = Back Left
	static float forearmAngleA = 0.f, kneeAngleA = 0.f, hoofAngleA = 0.f, forearmAngleB = 0.f, kneeAngleB = 0.f, hoofAngleB = 0.f;
	static float forearmAngleC = 0.f, kneeAngleC = 0.f, hoofAngleC = 0.f, forearmAngleD = 0.f, kneeAngleD = 0.f, hoofAngleD = 0.f;
	static float forearmAngleE = 0.f, kneeAngleE = 0.f, hoofAngleE = 0.f, forearmAngleF = 0.f, kneeAngleF = 0.f, hoofAngleF = 0.f;
	static float forearmAngleG = 0.f, kneeAngleG = 0.f, hoofAngleG = 0.f, forearmAngleH = 0.f, kneeAngleH = 0.f, hoofAngleH = 0.f;
	static float wholeHorsePosX = 0.f, wholeHorsePosY = 0.f, wholeHorsePosZ = 0.f, wholeHorseAngleX = 0.f, wholeHorseAngleY = 0.f;
	static float horseNeckPosZ = 0.f, horseNeckPosY = 0.f;

	static float mouthAngleXA = 0.f, headAngleXA = 0.f, neckAngleXA = 0.f;
	static float mouthAngleXB = 0.f, headAngleXB = 0.f, neckAngleXB = 0.f;

	static float mouthAngleYA = 0.f, headAngleYA = 0.f, neckAngleYA = 0.f;
	static float mouthAngleYB = 0.f, headAngleYB = 0.f, neckAngleYB = 0.f;

	static int horseKeyFrame = 0;
	float numofHorseStage = 24.f;
	float aHorse = numofHorseStage * aT / animationTime;


	if (aHorse > 23.f && horseKeyFrame == 23)
	{	
		horseKeyFrame = 0;

		horseNeckPosY = 0.f;
		horseNeckPosZ = 0.f;

		wholeHorseAngleX = 0.f;
		wholeHorseAngleY = 0.f;
		wholeHorsePosX = 0.f;
		wholeHorsePosY = 0.f;
		wholeHorsePosZ = 0.f;

		mouthAngleXA = 0.f;
		mouthAngleYA = 0.f;
		headAngleXA = 0.f;
		headAngleYA = 0.f;
		neckAngleXA = 0.f;
		neckAngleYA = 0.f;

		mouthAngleXB = 0.f;
		mouthAngleYB = 0.f;
		headAngleXB = 0.f;
		headAngleYB = 0.f;
		neckAngleXB = 0.f;
		neckAngleYB = 0.f;

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
	else if (aHorse < 1.f || aHorse > 22.f)
	{	
		if (horseKeyFrame == 0 || horseKeyFrame == 22) {
			horseKeyFrame = (horseKeyFrame == 0) ? 1 : 23;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 0.f;
			neckAngleYB = 0.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;

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
	else if (aHorse < 2.f || aHorse > 21.f)
	{	
		if (horseKeyFrame == 1 || horseKeyFrame == 21) {
			horseKeyFrame = (horseKeyFrame == 1) ? 2 : 22;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.;

			neckAngleXB = 0.f;
			neckAngleYB = 0.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;


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
	else if (aHorse < 3.f || aHorse > 20.f)
	{	
		if (horseKeyFrame == 2 || horseKeyFrame == 20) {
			horseKeyFrame = (horseKeyFrame == 2) ? 3 : 21;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 0.f;
			neckAngleYB = -10.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -25.f;
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
	else if (aHorse < 4.f || aHorse > 19.f)
	{	
		if (horseKeyFrame == 3 || horseKeyFrame == 19) {
			horseKeyFrame = (horseKeyFrame == 3) ? 4 : 20;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = -5.f;

			headAngleXB = 0.f;
			headAngleYB = -5.f;

			neckAngleXB = 0.f;
			neckAngleYB = -15.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -50.f;
			kneeAngleD = 25.f;
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
	else if (aHorse < 5.f || aHorse > 18.f)
	{	
		if (horseKeyFrame == 4 || horseKeyFrame == 18) {
			horseKeyFrame = (horseKeyFrame == 4) ? 5 : 19;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;
			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = -5.f;

			headAngleXB = 0.f;
			headAngleYB = -5.f;

			neckAngleXB = 0.f;
			neckAngleYB = -15.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -50.f;
			kneeAngleD = 50.f;
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
	else if (aHorse < 6.f || aHorse > 17.f)
	{	
		if (horseKeyFrame == 5 || horseKeyFrame == 17) {
			horseKeyFrame = (horseKeyFrame == 5) ? 6 : 18;
			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = -5.f;

			headAngleXB = 0.f;
			headAngleYB = -5.f;

			neckAngleXB = 0.f;
			neckAngleYB = -15.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -50.f;
			kneeAngleD = 25.f;
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
	else if (aHorse < 7.f || aHorse > 16.f)
	{	
		if (horseKeyFrame == 6 || horseKeyFrame == 16) {
			horseKeyFrame = (horseKeyFrame == 6) ? 7 : 17;
			wholeHorseAngleX = -0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = -5.f;

			headAngleXB = 0.f;
			headAngleYB = -5.f;

			neckAngleXB = 0.f;
			neckAngleYB = -15.f;

			horseNeckPosY = 0.f;
			horseNeckPosZ = 0.f;

			forearmAngleA = forearmAngleB;
			kneeAngleA = kneeAngleB;
			hoofAngleA = hoofAngleB;

			forearmAngleB = 0.f;
			kneeAngleB = 0.f;
			hoofAngleB = 0.f;

			forearmAngleC = forearmAngleD;
			kneeAngleC = kneeAngleD;
			hoofAngleC = hoofAngleD;

			forearmAngleD = -25.f;
			kneeAngleD = 0.f;
			hoofAngleD = 0.f;

			forearmAngleE = forearmAngleF;
			kneeAngleE = kneeAngleF;
			hoofAngleE = hoofAngleF;

			forearmAngleF = 25.f;
			kneeAngleF = 25.f;
			hoofAngleF = 0.f;

			forearmAngleG = forearmAngleH;
			kneeAngleG = kneeAngleH;
			hoofAngleG = hoofAngleH;

			forearmAngleH = 0.f;
			kneeAngleH = 0.f;
			hoofAngleH = 0.f;
		}
	}
	else if (aHorse < 8.f || aHorse > 15.f)
	{	
		if (horseKeyFrame == 7 || horseKeyFrame == 15) {
			horseKeyFrame = (horseKeyFrame == 7) ? 8 : 16;

			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 0.f;
			neckAngleYB = 0.f;

			horseNeckPosY = -0.2f;
			horseNeckPosZ = 0.f;

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

			forearmAngleF = 50.f;
			kneeAngleF = 50.f;
			hoofAngleF = 0.f;

			forearmAngleG = forearmAngleH;
			kneeAngleG = kneeAngleH;
			hoofAngleG = hoofAngleH;

			forearmAngleH = 0.f;
			kneeAngleH = 0.f;
			hoofAngleH = 0.f;
		}
	}
	else if (aHorse < 9.f || aHorse > 14.f)
	{	
		if (horseKeyFrame == 8 || horseKeyFrame == 14) {
			horseKeyFrame = (horseKeyFrame == 8) ? 9 : 15;

			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 10.f;
			neckAngleYB = 0.f;

			horseNeckPosY = -0.4f;
			horseNeckPosZ = 0.f;

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

			forearmAngleF = 75.f;
			kneeAngleF = 75.f;
			hoofAngleF = 0.f;

			forearmAngleG = forearmAngleH;
			kneeAngleG = kneeAngleH;
			hoofAngleG = hoofAngleH;

			forearmAngleH = 0.f;
			kneeAngleH = 0.f;
			hoofAngleH = 0.f;
		}
	}
	else if (aHorse < 10.f || aHorse > 13.f)
	{	
		if (horseKeyFrame == 9 || horseKeyFrame == 13) {
			horseKeyFrame = (horseKeyFrame == 9) ? 10 : 14;

			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 20.f;
			neckAngleYB = 0.f;

			horseNeckPosY = -0.4f;
			horseNeckPosZ = 0.f;

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

			forearmAngleH = 25.f;
			kneeAngleH = 25.f;
			hoofAngleH = 0.f;
		}
	}
	else if (aHorse < 11.f || aHorse > 12.f)
	{	
		if (horseKeyFrame == 10 || horseKeyFrame == 12) {
			horseKeyFrame = (horseKeyFrame == 10) ? 11 : 13;

			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 30.f;
			neckAngleYB = 0.f;

			horseNeckPosY = -0.6f;
			horseNeckPosZ = 0.f;

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

			forearmAngleH = 50.f;
			kneeAngleH = 50.f;
			hoofAngleH = 0.f;
		}
	}
	else
	{	
		if (horseKeyFrame == 11) {
			horseKeyFrame = 12;

			wholeHorseAngleX = 0.f;
			wholeHorseAngleY = 0.f;
			wholeHorsePosX = 0.f;
			wholeHorsePosY = 0.f;
			wholeHorsePosZ = 0.f;

			mouthAngleXA = mouthAngleXB;
			mouthAngleYA = mouthAngleYB;

			headAngleXA = headAngleXB;
			headAngleYA = headAngleYB;

			neckAngleXA = neckAngleXB;
			neckAngleYA = neckAngleYB;

			mouthAngleXB = 0.f;
			mouthAngleYB = 0.f;

			headAngleXB = 0.f;
			headAngleYB = 0.f;

			neckAngleXB = 30.f;
			neckAngleYB = 0.f;

			horseNeckPosY = -0.6f;
			horseNeckPosZ = 0.f;

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

			forearmAngleH = 75.f;
			kneeAngleH = 75.f;
			hoofAngleH = 0.f;
		}
	}

	// THE HORSE
		// Head
	glPushMatrix();

	glPushMatrix();
	glRotatef(wholeHorseAngleX, 1.f, 0.f, 0.f);
	glRotatef(wholeHorseAngleY, 0.f, 1.f, 0.f);
	glRotatef(45.0f, 1.f, 0.f, 0.f);

	glPushMatrix();
	glTranslatef(0.f, horseNeckPosY, horseNeckPosZ);
	glRotatef((1 - fmod(aHorse, 1)) * neckAngleXA + fmod(aHorse, 1) * neckAngleXB, 1.f, 0.f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * neckAngleYA + fmod(aHorse, 1) * neckAngleYB, 0.f, 1.f, 0.f);
	glTranslatef(0.f, -horseNeckPosY, -horseNeckPosZ);

	// MOUTH
	glPushMatrix();
	glRotatef((1 - fmod(aHorse, 1)) * mouthAngleYA + fmod(aHorse, 1) * mouthAngleYB, 0.f, 1.f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.1f, 1.f, 1.f, 1.f);
	glPopMatrix();

	glTranslatef(0.f, -0.2f, -0.25f);

	// NECK
	glPushMatrix();
	drawSolidCube(0.08f, 0.3f, 0.15f, 0.1f, 0.1f, 0.1f);
	glPopMatrix();

	glTranslatef(0.f, 0.25f, 0.f);

	//HEAD
	glPushMatrix();
	glRotatef((1 - fmod(aHorse, 1)) * headAngleYA + fmod(aHorse, 1) * headAngleYB, 0.f, 1.f, 0.f);
	drawSolidCube(0.13f, 0.11f, 0.15f, 0.2f, 0.2f, 0.2f);
	glPopMatrix();

	// Left Ears
	glPushMatrix();
	glTranslatef(-0.06f, 0.16f, -0.13f);
	drawSolidCube(0.04f, 0.08f, 0.02f, 1.f, 1.f, 1.f);
	glPopMatrix();
	// Right Ears
	glPushMatrix();
	glTranslatef(0.06f, 0.16f, -0.13f);
	drawSolidCube(0.04f, 0.08f, 0.02f, 1.f, 1.f, 1.f);
	glPopMatrix();

	// Neck Hair
	glTranslatef(0.0f, -0.2f, -0.2f);
	drawSolidCube(0.05f, 0.4f, 0.05f);
	glPopMatrix();

	glPopMatrix();

	// Body
	glPushMatrix();
	glRotatef(wholeHorseAngleX, 1.f, 0.f, 0.f);
	glTranslatef(0.0f, -0.38f, -1.f);
	drawSolidCube(0.3f, 0.3f, 0.6f, 0.1f, 0.1f, 0.1f);

	//Back Left Leg
	glPushMatrix();
	glTranslatef(-0.18f, -0.5f, -0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleG + fmod(aHorse, 1) * forearmAngleH, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.2f, 0.2f, 0.2f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleG + fmod(aHorse, 1) * kneeAngleH, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleG + fmod(aHorse, 1) * hoofAngleH, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.1f, 0.1f, 0.1f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	//Back Right Leg
	glPushMatrix();
	glTranslatef(0.18f, -0.5f, -0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleE + fmod(aHorse, 1) * forearmAngleF, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.2f, 0.2f, 0.2f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleE + fmod(aHorse, 1) * kneeAngleF, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleE + fmod(aHorse, 1) * hoofAngleF, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.1f, 0.1f, 0.1f);

	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	//Front Left Leg
	glPushMatrix();
	glTranslatef(-0.18f, -0.5f, 0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleC + fmod(aHorse, 1) * forearmAngleD, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.2f, 0.2f, 0.2f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleC + fmod(aHorse, 1) * kneeAngleD, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleC + fmod(aHorse, 1) * hoofAngleD, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.1f, 0.1f, 0.1f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	//Front Right Leg
	glPushMatrix();
	glTranslatef(0.18f, -0.5f, 0.48f);
	glRotatef((1 - fmod(aHorse, 1)) * forearmAngleA + fmod(aHorse, 1) * forearmAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 0.2f, 0.2f, 0.2f);

	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * kneeAngleA + fmod(aHorse, 1) * kneeAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f, 1.f, 1.f, 1.f);

	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aHorse, 1)) * hoofAngleA + fmod(aHorse, 1) * hoofAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.1f, 0.1f, 0.1f);
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
}

void drawManRunning(double currentSeconds)
{
	float animationTime = 6.f;
	static float aT = 0.f;

	/* Animation */
	static double previousSeconds = 0.0;
	double elapsedSeonds;


	elapsedSeonds = currentSeconds - previousSeconds;
	previousSeconds = currentSeconds;

	aT = fmod(aT + elapsedSeonds, animationTime);	// update time in animation cycle

	// HUMAN ANGLES
	static float leftShoulderAngleA = 0.f, leftElbowAngleA = 0.f, leftWristAngleA = 0.f, leftShoulderAngleB = 0.f, leftElbowAngleB = 0.f, leftWristAngleB = 0.f;
	static float rightShoulderAngleA = 0.f, rightElbowAngleA = 0.f, rightWristAngleA = 0.f, rightShoulderAngleB = 0.f, rightElbowAngleB = 0.f, rightWristAngleB = 0.f;

	static float leftThighAngleA = 0.f, leftKneeAngleA = 0.f, leftAnkleAngleA = 0.f, leftThighAngleB = 0.f, leftKneeAngleB = 0.f, leftAnkleAngleB = 0.f;
	static float rightThighAngleA = 0.f, rightKneeAngleA = 0.f, rightAnkleAngleA = 0.f, rightThighAngleB = 0.f, rightKneeAngleB = 0.f, rightAnkleAngleB = 0.f;

	static float torsoAngleA = 0.f, torsoAngleB = 0.f, headAngleA = 0.f, headAngleB = 0.f, wristAngleXA = 0.f, wristAngleXB = 0.f;

	static int keyFrame = 0;
	float numofStage = 24.f;
	float aS = numofStage * aT / animationTime;


	// HUMAN ANIMATION
	if (aS > 23.f && keyFrame == 23)
	{	// Pause for 1 stage after final stage
		keyFrame = 0;

		leftShoulderAngleA = 0.f;
		leftElbowAngleA = 0.f;
		leftWristAngleA = 0.f;

		leftShoulderAngleB = 0.f;
		leftElbowAngleB = 0.f;
		leftWristAngleB = 0.f;

		rightShoulderAngleA = 0.f;
		rightElbowAngleA = 0.f;
		rightWristAngleA = 0.f;

		rightShoulderAngleB = 90.f;
		rightElbowAngleB = 0.f;
		rightWristAngleB = 0.f;

		leftThighAngleA = 0.f;
		leftKneeAngleA = 0.f;
		leftAnkleAngleA = 0.f;

		leftThighAngleB = 50.f;
		leftKneeAngleB = -50.f;
		leftAnkleAngleB = 0.f;

		rightThighAngleA = 0.f;
		rightKneeAngleA = 0.f;
		rightAnkleAngleA = 0.f;

		rightThighAngleB = 0.f;
		rightKneeAngleB = 0.f;
		rightAnkleAngleB = 0.f;

		torsoAngleA = 0.f;
		torsoAngleB = 0.f;

		headAngleA = 0.f;
		headAngleB = 0.f;

		wristAngleXA = 0.f;
		wristAngleXB = 0.f;
	}
	else if (aS < 1.f || aS > 22.f)
	{
		if (keyFrame == 0 || keyFrame == 22) {
			keyFrame = (keyFrame == 0) ? 1 : 23;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 0.f;
			leftElbowAngleB = 0.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 90.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 0.f;
			leftKneeAngleB = 0.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 25.f;
		}
	}
	else if (aS < 2.f || aS > 21.f)
	{
		if (keyFrame == 1 || keyFrame == 21) {
			keyFrame = (keyFrame == 1) ? 2 : 22;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 25.f;
			leftElbowAngleB = 25.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 90.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 0.f;
			rightKneeAngleB = 0.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 3.f || aS > 20.f)
	{
		if (keyFrame == 2 || keyFrame == 20) {
			keyFrame = (keyFrame == 2) ? 3 : 21;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 50.f;
			leftElbowAngleB = 50.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 90.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 0.f;
			leftKneeAngleB = 0.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = -25.f;
		}
	}
	else if (aS < 4.f || aS > 19.f)
	{
		if (keyFrame == 3 || keyFrame == 19) {
			keyFrame = (keyFrame == 3) ? 4 : 20;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 75.f;
			leftElbowAngleB = 90.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 90.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 0.f;
			rightKneeAngleB = 0.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 5.f || aS > 18.f)
	{
		if (keyFrame == 4 || keyFrame == 18) {
			keyFrame = (keyFrame == 4) ? 5 : 19;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 90.f;
			leftElbowAngleB = 90.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 90.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 0.f;
			leftKneeAngleB = 0.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 25.f;
		}
	}
	// STOP
	else if (aS < 6.f || aS > 17.f)
	{
		if (keyFrame == 5 || keyFrame == 17) {
			keyFrame = (keyFrame == 5) ? 6 : 18;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 0.f;
			leftElbowAngleB = 0.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 0.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 0.f;
			leftKneeAngleB = 0.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 0.f;
			rightKneeAngleB = 0.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 7.f || aS > 16.f)
	{
		if (keyFrame == 6 || keyFrame == 16) {
			keyFrame = (keyFrame == 6) ? 7 : 17;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 25.f;
			leftElbowAngleB = 0.f;
			leftWristAngleB = 0.f;

			rightShoulderAngleB = 25.f;
			rightElbowAngleB = 0.f;
			rightWristAngleB = 0.f;

			leftThighAngleB = 25.f;
			leftKneeAngleB = -25.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 25.f;
			rightKneeAngleB = -25.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 8.f || aS > 15.f)
	{
		if (keyFrame == 7 || keyFrame == 15) {
			keyFrame = (keyFrame == 7) ? 8 : 16;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 40.f;
			leftElbowAngleB = -25.f;
			leftWristAngleB = -25.f;

			rightShoulderAngleB = 40.f;
			rightElbowAngleB = -25.f;
			rightWristAngleB = 25.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = -5.f;

			headAngleA = headAngleB;
			headAngleB = -5.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 9.f || aS > 14.f)
	{
		if (keyFrame == 8 || keyFrame == 14) {
			keyFrame = (keyFrame == 8) ? 9 : 15;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 40.f;
			leftElbowAngleB = -25.f;
			leftWristAngleB = -25.f;

			rightShoulderAngleB = 40.f;
			rightElbowAngleB = -25.f;
			rightWristAngleB = 25.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = -10.f;

			headAngleA = headAngleB;
			headAngleB = -10.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 10.f || aS > 13.f)
	{
		if (keyFrame == 9 || keyFrame == 13) {
			keyFrame = (keyFrame == 9) ? 10 : 14;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 40.f;
			leftElbowAngleB = -25.f;
			leftWristAngleB = -25.f;

			rightShoulderAngleB = 40.f;
			rightElbowAngleB = -25.f;
			rightWristAngleB = 25.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = -10.f;

			headAngleA = headAngleB;
			headAngleB = -10.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else if (aS < 11.f || aS > 12.f)
	{
		if (keyFrame == 10 || keyFrame == 12) {
			keyFrame = (keyFrame == 10) ? 11 : 13;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 40.f;
			leftElbowAngleB = -25.f;
			leftWristAngleB = -25.f;

			rightShoulderAngleB = 40.f;
			rightElbowAngleB = -25.f;
			rightWristAngleB = 25.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = -5.f;

			headAngleA = headAngleB;
			headAngleB = -5.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}
	else
	{	// 7th stage
		if (keyFrame == 11) {
			keyFrame = 12;

			leftShoulderAngleA = leftShoulderAngleB;
			leftElbowAngleA = leftElbowAngleB;
			leftWristAngleA = leftWristAngleB;


			rightShoulderAngleA = rightShoulderAngleB;
			rightElbowAngleA = rightElbowAngleB;
			rightWristAngleA = rightWristAngleB;


			leftThighAngleA = leftThighAngleB;
			leftKneeAngleA = leftKneeAngleB;
			leftAnkleAngleA = leftAnkleAngleB;


			rightThighAngleA = rightThighAngleB;
			rightKneeAngleA = rightKneeAngleB;
			rightAnkleAngleA = rightAnkleAngleB;

			leftShoulderAngleB = 40.f;
			leftElbowAngleB = -25.f;
			leftWristAngleB = -25.f;

			rightShoulderAngleB = 40.f;
			rightElbowAngleB = -25.f;
			rightWristAngleB = 25.f;

			leftThighAngleB = 50.f;
			leftKneeAngleB = -50.f;
			leftAnkleAngleB = 0.f;

			rightThighAngleB = 50.f;
			rightKneeAngleB = -50.f;
			rightAnkleAngleB = 0.f;

			torsoAngleA = torsoAngleB;
			torsoAngleB = -10.f;

			headAngleA = headAngleB;
			headAngleB = -10.f;

			wristAngleXA = wristAngleXB;
			wristAngleXB = 0.f;
		}
	}

	// HUMAN
	glPushMatrix(); // save transformation state
	glTranslatef(0.f, 0.0f, 0.f + humanPos);

	//Torso (draw)
	glPushMatrix();
	glRotatef((1 - fmod(aS, 1)) * torsoAngleA + fmod(aS, 1) * torsoAngleB, 1.f, 0.f, 0.f);
	drawSolidCube(0.2f, 0.3f, 0.1f, 0.6f, 0.f, 0.f);
	glPopMatrix();

	//Neck (although we don not draw, for rotate)
	glPushMatrix();
	glTranslatef(0.f, 0.25f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * headAngleA + fmod(aS, 1) * headAngleB, 1.f, 0.f, 0.f);
	//Head (draw)
	glPushMatrix();
	glTranslatef(0.f, 0.15f, 0.f);
	drawSolidCube(0.1f, 0.1f, 0.1f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();

	// LEFT Shoulder (for rotate)
	glPushMatrix();
	glTranslatef(0.1f, 0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * leftShoulderAngleA + fmod(aS, 1) * leftShoulderAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(0.16f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.2f, 0.06f, 0.6f, 0.f, 0.f);

	//Elbow (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * leftElbowAngleA + fmod(aS, 1) * leftElbowAngleB, 1.f, 0.f, 0.f);
	//Left-lower arm (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.05f, 0.1f, 0.05f, 0.79f, 0.52f, 0.26f);

	//Wrist (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * leftWristAngleA + fmod(aS, 1) * leftWristAngleB, 0.f, 0.f, 1.f);
	//Hand (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, 0.f);
	drawSolidCube(0.06f, 0.05f, 0.06f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	// RIGHT Shoulder (for rotate)
	glPushMatrix();
	glTranslatef(-0.1f, 0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * rightShoulderAngleA + fmod(aS, 1) * rightShoulderAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(-0.16f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.2f, 0.06f, 0.6f, 0.f, 0.f);

	//Elbow (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * rightElbowAngleA + fmod(aS, 1) * rightElbowAngleB, 1.f, 0.f, 0.f);
	//Right-lower arm (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.05f, 0.1f, 0.05f, 0.79f, 0.52f, 0.26f);

	//Wrist (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * wristAngleXA + fmod(aS, 1) * wristAngleXB, 1.f, 0.f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * rightWristAngleA + fmod(aS, 1) * rightWristAngleB, 0.f, 0.f, 1.f);
	//Hand (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, 0.f);
	drawSolidCube(0.06f, 0.05f, 0.06f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();


	// Left Thigh (for rotate)
	glPushMatrix();
	glTranslatef(0.03f, -0.25f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * leftThighAngleA + fmod(aS, 1) * leftThighAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(0.09f, -0.25f, 0.f);
	drawSolidCube(0.08f, 0.2f, 0.08f, 0.07f, 0.21f, 0.45f);

	//Knee (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * leftKneeAngleA + fmod(aS, 1) * leftKneeAngleB, 1.f, 0.f, 0.f);
	//Sheen (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.1f, 0.06f, 0.79f, 0.52f, 0.26f);

	//Ankle (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, -0.01f);
	glRotatef((1 - fmod(aS, 1)) * leftAnkleAngleA + fmod(aS, 1) * leftAnkleAngleB, 1.f, 0.f, 0.f);
	//Foot (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, -0.01f);
	drawSolidCube(0.08f, 0.05f, 0.08f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	// Right Thigh (for rotate)
	glPushMatrix();
	glTranslatef(-0.03f, -0.25f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * rightThighAngleA + fmod(aS, 1) * rightThighAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(-0.09f, -0.25f, 0.f);
	drawSolidCube(0.08f, 0.2f, 0.08f, 0.07f, 0.21f, 0.45f);

	//Knee (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * rightKneeAngleA + fmod(aS, 1) * rightKneeAngleB, 1.f, 0.f, 0.f);
	//Sheen (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.1f, 0.06f, 0.79f, 0.52f, 0.26f);

	//Ankle (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, -0.01f);
	glRotatef((1 - fmod(aS, 1)) * rightAnkleAngleA + fmod(aS, 1) * rightAnkleAngleB, 1.f, 0.f, 0.f);
	//Foot (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, -0.01f);
	drawSolidCube(0.08f, 0.05f, 0.08f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();	// restore transformation state

	if (isHorseMove == true)
	{
		humanPos -= 0.01f;
	}

	if (humanPos < -17.0)
	{
		humanPos = 0;
	}
}

void drawCryingMan(double currentSeconds)
{
	float animationTime = 6.f;
	static float aT = 0.f;

	/* Animation */
	static double previousSeconds = 0.0;
	double elapsedSeonds;


	elapsedSeonds = currentSeconds - previousSeconds;
	previousSeconds = currentSeconds;

	aT = fmod(aT + elapsedSeonds, animationTime);	// update time in animation cycle

	// HUMAN ANGLES
	static float shoulderAngleA = 0.f, elbowAngleA = 0.f, wristAngleA = 0.f, shoulderAngleB = 0.f, elbowAngleB = 0.f, wristAngleB = 0.f;
	static float headAngleA = 0.f, headAngleB = 0.f, elbowAngleZA = 0.f, elbowAngleZB = 0.f;
	static float leftSheenXA = 0.f, leftSheenXB = 0.f, rightSheenXA = 0.f, rightSheenXB = 0.f;

	static int keyFrame = 0;
	float numofStage = 14.f;
	float aS = numofStage * aT / animationTime;	// calculate stage (out of 14)

	// HUMAN ANIMATION
	if (aS > 13.f && keyFrame == 13)
	{	// Pause for 1 stage after final stage
		keyFrame = 0;

		shoulderAngleA = 0.f;
		elbowAngleA = 0.f;
		wristAngleA = 0.f;

		shoulderAngleB = 0.f;
		elbowAngleB = 0.f;
		wristAngleB = 0.f;

		headAngleA = 0.f;
		headAngleB = 0.f;

		elbowAngleZA = 0.f;
		elbowAngleZB = 0.f;

		leftSheenXA = -50.f;
		leftSheenXB = -50.f;

		rightSheenXA = -50.f;
		rightSheenXB = -50.f;

	}
	else if (aS < 1.f || aS > 12.f)
	{	// 1st or final stage
		if (keyFrame == 0 || keyFrame == 12) {
			keyFrame = (keyFrame == 0) ? 1 : 13;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 0.f;
			elbowAngleB = 0.f;
			wristAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 0.f;


			leftSheenXA = leftSheenXB;
			leftSheenXB = -50.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = -50.f;
		}
	}
	else if (aS < 2.f || aS > 11.f)
	{	// 2nd or 12th stage
		if (keyFrame == 1 || keyFrame == 11) {
			keyFrame = (keyFrame == 1) ? 2 : 12;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 25.f;
			elbowAngleB = 25.f;
			wristAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 0.f;

			leftSheenXA = leftSheenXB;
			leftSheenXB = -50.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = 0.f;
		}
	}
	else if (aS < 3.f || aS > 10.f)
	{	// 3rd or 11th stage
		if (keyFrame == 2 || keyFrame == 10) {
			keyFrame = (keyFrame == 2) ? 3 : 11;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 50.f;
			elbowAngleB = 50.f;
			wristAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 0.f;

			leftSheenXA = leftSheenXB;
			leftSheenXB = 0.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = -50.f;
		}
	}
	else if (aS < 4.f || aS > 9.f)
	{	// 4th or 10th stage
		if (keyFrame == 3 || keyFrame == 9) {
			keyFrame = (keyFrame == 3) ? 4 : 10;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 75.f;
			elbowAngleB = 75.f;
			wristAngleB = 0.f;

			headAngleA = headAngleB;
			headAngleB = 0.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 0.f;

			leftSheenXA = leftSheenXB;
			leftSheenXB = -50.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = 0.f;
		}
	}
	else if (aS < 5.f || aS > 8.f)
	{	// 5th or 9th stage
		if (keyFrame == 4 || keyFrame == 8) {
			keyFrame = (keyFrame == 4) ? 5 : 9;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 90.f;
			elbowAngleB = 90.f;
			wristAngleB = -60.f;

			headAngleA = headAngleB;
			headAngleB = 25.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 40.f;

			leftSheenXA = leftSheenXB;
			leftSheenXB = 0.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = -50.f;
		}
	}
	else if (aS < 6.f || aS > 7.f)
	{	// 6th or 8th stage
		if (keyFrame == 5 || keyFrame == 7) {
			keyFrame = (keyFrame == 5) ? 6 : 8;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 90.f;
			elbowAngleB = 90.f;
			wristAngleB = 60.f;

			headAngleA = headAngleB;
			headAngleB = -25.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 40.f;

			leftSheenXA = leftSheenXB;
			leftSheenXB = -50.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = 0.f;
		}
	}
	else
	{	// 7th stage
		if (keyFrame == 6) {
			keyFrame = 7;
			shoulderAngleA = shoulderAngleB;
			elbowAngleA = elbowAngleB;
			wristAngleA = wristAngleB;

			shoulderAngleB = 90.f;
			elbowAngleB = 90.f;
			wristAngleB = -60.f;

			headAngleA = headAngleB;
			headAngleB = 25.f;

			elbowAngleZA = elbowAngleZB;
			elbowAngleZB = 40.f;

			leftSheenXA = leftSheenXB;
			leftSheenXB = 0.f;

			rightSheenXA = rightSheenXB;
			rightSheenXB = -50.f;
		}
	}

	// HUMAN
	glPushMatrix(); // save transformation state
	
	//Torso (draw)
	glPushMatrix();
	glRotatef(-10.f, 1.f, 0.f, 0.f);
	drawSolidCube(0.2f, 0.3f, 0.1f, 0.2f, 0.73f, 1.f);
	glPopMatrix();

	//Neck (although we don not draw, for rotate)
	glPushMatrix();
	glTranslatef(0.f, 0.25f, 0.f);
	glRotatef(-10, 1.f, 0.f, 0.f);
	//Head (draw)
	glPushMatrix();
	glTranslatef(0.f, 0.15f, -0.1f);
	glRotatef((1 - fmod(aS, 1)) * headAngleA + fmod(aS, 1) * headAngleA, 0.f, 1.f, 0.f);
	drawSolidCube(0.1f, 0.1f, 0.1f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();

	// LEFT Shoulder (for rotate)
	glPushMatrix();
	glTranslatef(0.1f, 0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * shoulderAngleA + fmod(aS, 1) * shoulderAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(0.16f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.2f, 0.06f, 0.2f, 0.73f, 1.f);

	//Elbow (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * elbowAngleA + fmod(aS, 1) * elbowAngleB, 1.f, 0.f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * -elbowAngleZA + fmod(aS, 1) * -elbowAngleZB, 0.f, 0.f, 1.f);
	//Left-lower arm (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.05f, 0.1f, 0.05f, 0.79f, 0.52f, 0.26f);

	//Wrist (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * wristAngleA + fmod(aS, 1) * wristAngleB, 0.f, 0.f, 1.f);
	//Hand (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, 0.f);
	drawSolidCube(0.06f, 0.05f, 0.06f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	// RIGHT Shoulder (for rotate)
	glPushMatrix();
	glTranslatef(-0.1f, 0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * shoulderAngleA + fmod(aS, 1) * shoulderAngleB, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(-0.16f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.2f, 0.06f, 0.2f, 0.73f, 1.f);

	//Elbow (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * elbowAngleA + fmod(aS, 1) * elbowAngleB, 1.f, 0.f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * elbowAngleZA + fmod(aS, 1) * elbowAngleZB, 0.f, 0.f, 1.f);
	//Right-lower arm (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.05f, 0.1f, 0.05f, 0.79f, 0.52f, 0.26f);

	//Wrist (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	glRotatef((1 - fmod(aS, 1)) * wristAngleA + fmod(aS, 1) * wristAngleB, 0.f, 0.f, 1.f);
	//Hand (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, 0.f);
	drawSolidCube(0.06f, 0.05f, 0.06f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();


	// Left Thigh (for rotate)
	glPushMatrix();
	glTranslatef(0.03f, -0.25f, 0.f);
	glRotatef(50.f, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(0.09f, -0.25f, 0.f);
	drawSolidCube(0.08f, 0.2f, 0.08f, 0.f, 0.f, 0.6f);

	//Knee (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1))* leftSheenXA + fmod(aS, 1) * leftSheenXB, 1.f, 0.f, 0.f);
	//Sheen (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.1f, 0.06f, 0.79f, 0.52f, 0.26f);

	//Ankle (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, -0.01f);
	//Foot (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, -0.01f);
	drawSolidCube(0.08f, 0.05f, 0.08f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	// Right Thigh (for rotate)
	glPushMatrix();
	glTranslatef(-0.03f, -0.25f, 0.f);
	glRotatef(50.f, 1.f, 0.f, 0.f);
	glPushMatrix();
	glTranslatef(-0.09f, -0.25f, 0.f);
	drawSolidCube(0.08f, 0.2f, 0.08f, 0.f, 0.f, 0.6f);

	//Knee (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef((1 - fmod(aS, 1))* rightSheenXA + fmod(aS, 1) * rightSheenXB, 1.f, 0.f, 0.f);
	//Sheen (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.06f, 0.1f, 0.06f, 0.79f, 0.52f, 0.26f);

	//Ankle (for rotate)
	glPushMatrix();
	glTranslatef(0.f, -0.1f, -0.01f);
	//Foot (draw)
	glPushMatrix();
	glTranslatef(0.f, -0.05f, -0.01f);
	drawSolidCube(0.08f, 0.05f, 0.08f, 0.79f, 0.52f, 0.26f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();	// restore transformation state
}
#endif 