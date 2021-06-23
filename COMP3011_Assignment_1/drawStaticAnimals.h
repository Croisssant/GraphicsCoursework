#ifndef DRAWSTATICANIMALS
#define DRAWSTATICANIMALS

#include "drawCubes.h"

void drawCow(GLuint cowTex)
{
	// THE COW
	// Head
	glPushMatrix();
	drawSolidCube(0.2f, 0.2f, 0.2f, cowTex);

	// EYES
	glPushMatrix();
	glTranslatef(-0.1f, 0.1f, 0.21f);
	drawSolidCube(0.05f, 0.05f, 0.01f, 1.f, 1.f, 1.f);
	glPushMatrix();
	glTranslatef(-0.01f, -0.01f, 0.02f);
	drawSolidCube(0.03f, 0.03f, 0.01f, 0.f, 0.f, 0.f);
	glPopMatrix();

	glTranslatef(0.2f, 0.f, 0.f);
	drawSolidCube(0.05f, 0.05f, 0.01f, 1.f, 1.f, 1.f);
	glPushMatrix();
	glTranslatef(0.01f, -0.01f, 0.02f);
	drawSolidCube(0.03f, 0.03f, 0.01f, 0.f, 0.f, 0.f);
	glPopMatrix();

	//MOUTH
	glTranslatef(-0.1f, -0.2f, 0.f);
	drawSolidCube(0.1f, 0.05f, 0.05f, 1.f, 0.4f, 0.7f);
	glPopMatrix();

	// Left Horn
	glPushMatrix();
	glTranslatef(-0.25f, 0.2f, 0.f);
	drawSolidCube(0.05f, 0.1f, 0.05f, 1.f, 1.f, 1.f);
	glPopMatrix();

	// Right Horn
	glPushMatrix();
	glTranslatef(0.25f, 0.2f, 0.f);
	drawSolidCube(0.05f, 0.1f, 0.05f, 1.f, 1.f, 1.f);
	glPopMatrix();

	// Body
	glPushMatrix();
	glTranslatef(0.f, -0.2f, -0.7f);
	drawSolidCube(0.3f, 0.3f, 0.5f, cowTex);

	// Back Left Leg
	glPushMatrix();
	glTranslatef(-0.2f, -0.45f, -0.4f);
	drawSolidCube(0.1f, 0.15f, 0.1f, cowTex);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.08f, 0.3f, 0.3f, 0.3f);
	glTranslatef(0.f, -0.18f, 0.f);
	drawSolidCube(0.1f, 0.08f, 0.1f, 0.f, 0.f, 0.f);
	glPopMatrix();

	// Back Right Leg
	glPushMatrix();
	glTranslatef(0.2f, -0.45f, -0.4f);
	drawSolidCube(0.1f, 0.15f, 0.1f, cowTex);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.08f, 0.3f, 0.3f, 0.3f);
	glTranslatef(0.f, -0.18f, 0.f);
	drawSolidCube(0.1f, 0.08f, 0.1f, 0.f, 0.f, 0.f);
	glPopMatrix();


	// Front Left Leg
	glPushMatrix();
	glTranslatef(-0.2f, -0.45f, 0.4f);
	drawSolidCube(0.1f, 0.15f, 0.1f, cowTex);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.08f, 0.3f, 0.3f, 0.3f);
	glTranslatef(0.f, -0.18f, 0.f);
	drawSolidCube(0.1f, 0.08f, 0.1f, 0.f, 0.f, 0.f);
	glPopMatrix();

	// Front Right Leg
	glPushMatrix();
	glTranslatef(0.2f, -0.45f, 0.4f);
	drawSolidCube(0.1f, 0.15f, 0.1f, cowTex);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.08f, 0.3f, 0.3f, 0.3f);
	glTranslatef(0.f, -0.18f, 0.f);
	drawSolidCube(0.1f, 0.08f, 0.1f, 0.f, 0.f, 0.f);
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

}

void drawHorse()
{
	static float mouthAngleY = 0.f, headAngleY = 0.f, neckAngleY = 0.f;
	static float mouthAngleX = 0.f, headAngleX = 0.f, neckAngleX = 0.f;
	// THE HORSE
	// Head
	glPushMatrix();
	glRotatef(45.0f, 1.f, 0.f, 0.f);

	glPushMatrix();
	glRotatef(15.f, 0.f, 1.f, 0.f);
	// MOUTH
	glPushMatrix();
	//glTranslatef(0.05f, 0.f, -0.05f);
	glRotatef(mouthAngleY, 0.f, 1.f, 0.f);
	glRotatef(mouthAngleX, 1.f, 0.f, 0.f);
	drawSolidCube(0.08f, 0.1f, 0.1f, 1.f, 1.f, 1.f);
	glPopMatrix();

	glTranslatef(0.f, -0.2f, -0.25f);

	// NECK
	glPushMatrix();
	glRotatef(neckAngleY, 0.f, 1.f, 0.f);
	glRotatef(neckAngleX, 1.f, 0.f, 0.f);
	drawSolidCube(0.08f, 0.3f, 0.15f, 0.59f, 0.37f, 0.41f);
	glPopMatrix();

	glTranslatef(0.f, 0.25f, 0.f);

	//HEAD
	glPushMatrix();
	glRotatef(headAngleY, 0.f, 1.f, 0.f);
	glRotatef(headAngleX, 1.f, 0.f, 0.f);
	drawSolidCube(0.13f, 0.11f, 0.15f, 1.f, 0.85f, 0.99f);
	glPopMatrix();

	// Left Ears
	glPushMatrix();
	glTranslatef(-0.06f, 0.16f, -0.13f);
	drawSolidCube(0.04f, 0.08f, 0.02f, 0.59f, 0.37f, 0.41f);
	glPopMatrix();
	// Right Ears
	glPushMatrix();
	glTranslatef(0.06f, 0.16f, -0.13f);
	drawSolidCube(0.04f, 0.08f, 0.02f, 0.59f, 0.37f, 0.41f);
	glPopMatrix();

	// Neck Hair
	glTranslatef(0.0f, -0.2f, -0.2f);
	drawSolidCube(0.05f, 0.4f, 0.05f, 0.f, 0.f, 0.f);
	glPopMatrix();

	glPopMatrix();


	// Body
	glPushMatrix();
	glTranslatef(0.0f, -0.38f, -1.f);
	drawSolidCube(0.3f, 0.3f, 0.6f, 0.59f, 0.37f, 0.41f);

	//Back Left Leg
	glPushMatrix();
	glTranslatef(-0.18f, -0.5f, -0.48f);
	drawSolidCube(0.12f, 0.2f, 0.12f, 1.f, 0.85f, 0.99f);
	glTranslatef(0.f, -0.4f, 0.f);
	drawSolidCube(0.1f, 0.2f, 0.1f);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);

	glPopMatrix();

	//Back Right Leg
	glPushMatrix();
	glTranslatef(0.18f, -0.5f, -0.48f);
	drawSolidCube(0.12f, 0.2f, 0.12f, 1.f, 0.85f, 0.99f);
	glTranslatef(0.f, -0.4f, 0.f);
	drawSolidCube(0.1f, 0.2f, 0.1f);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);

	glPopMatrix();



	//Front Left Leg
	glPushMatrix();
	glTranslatef(-0.18f, -0.5f, 0.48f);
	glRotatef(-50.f, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.2f, 0.12f, 1.f, 0.85f, 0.99f);
	glTranslatef(0.f, -0.4f, 0.f);
	glRotatef(25.f, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.1f, 0.2f, 0.1f);
	glTranslatef(0.f, -0.2f, 0.f);
	glRotatef(10.f, 1.f, 0.f, 0.f);

	glPushMatrix();
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();



	//Front Right Leg
	glPushMatrix();
	glTranslatef(0.18f, -0.5f, 0.48f);
	drawSolidCube(0.12f, 0.2f, 0.12f, 1.f, 0.85f, 0.99f);
	glTranslatef(0.f, -0.4f, 0.f);
	drawSolidCube(0.1f, 0.2f, 0.1f);
	glTranslatef(0.f, -0.2f, 0.f);
	drawSolidCube(0.12f, 0.1f, 0.12f, 0.f, 0.f, 0.f);
	glPopMatrix();

	// Tail
	glRotatef(45.0f, 1.f, 0.f, 0.f);
	glTranslatef(0.f, -0.75f, -0.4f);
	drawSolidCube(0.1f, 0.4f, 0.1f, 0.f, 0.f, 0.f);

	glPopMatrix();
}

#endif 