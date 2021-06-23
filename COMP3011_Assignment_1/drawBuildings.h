#ifndef DRAWBUILDINGS
#define DRAWBUILDINGS

#include "drawCubes.h"

struct UV
{
	float ux, uy, vx, vy;
};

void drawHouse(GLuint oakWoodTex, GLuint woodPlankTex, GLuint glassBlockTex, GLuint cobblestoneTex, GLuint chestTopTex, GLuint chestTex, GLuint chestSideTex, GLuint craftingTex, GLuint craftingSideTex)
{
	// DRAW HOUSE
	glPushMatrix();
	glPushMatrix();
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}

	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(1.8f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(1.8f, 0.f, 0.f);

	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(1.8f, 0.f, 0.f);

	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	//glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}

	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 2.4f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	//glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}

	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, 3.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int j = 0; j < 4; j++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(1.8f, 3.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0f, 4.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();



	// LEFT SIDE
	glPushMatrix();
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 2.4f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();



	// RIGHT SIDE
	glPushMatrix();
	glTranslatef(7.8f, 0.f, 0.0f);
	glPushMatrix();
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 2.4f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPopMatrix();

	// BACK SIDE
	glPushMatrix();
	glTranslatef(0.f, 0.f, 7.8f);

	glPushMatrix();
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, 2.4f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.6f, 3.f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	for (unsigned int j = 0; j < 4; j++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(1.8f, 3.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0f, 4.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPopMatrix();


	// ROOF
	glPushMatrix();
	glTranslatef(0.f, 2.4f, -1.2f);
	glPushMatrix();
	glRotatef(90.f, 1.f, 0.f, 0.f);
	glTranslatef(-1.2f, 0.f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.6f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.6f, 1.2f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.2f, 1.2f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(1.8f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.4f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glRotatef(90.f, 1.f, 0.f, 0.f);
	glTranslatef(3.f, 0.f, -2.4f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glPopMatrix();
	glPushMatrix();
	glRotatef(90.f, 1.f, 0.f, 0.f);
	glTranslatef(3.6f, 0.f, -2.4f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glPopMatrix();
	glPushMatrix();
	glRotatef(90.f, 1.f, 0.f, 0.f);
	glTranslatef(4.2f, 0.f, -2.4f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glPopMatrix();
	glPushMatrix();
	glRotatef(90.f, 1.f, 0.f, 0.f);
	glTranslatef(4.8f, 0.f, -2.4f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(5.4f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6.f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(6.6f, 1.2f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7.2f, 1.2f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7.8f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.4f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glRotatef(90.f, 1.f, 0.f, 0.f);
	glTranslatef(9.f, 0.f, 0.f);
	for (unsigned int i = 0; i < 18; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glPopMatrix();

	glPopMatrix();

	//Floor
	glPushMatrix();
	glTranslatef(0.f, -0.6f, 0.f);
	for (unsigned int j = 0; j < 14; j++)
	{
		glPushMatrix();


		for (unsigned int i = 0; i < 14; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
			glTranslatef(0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, 0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, 0.6f);
	}

	glTranslatef(4.2f, 0.6f, -1.2f);
	drawSolidCube(0.3f, 0.3f, 0.3f, craftingSideTex, craftingSideTex, craftingSideTex, craftingSideTex, craftingTex, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, chestTex, chestSideTex, chestSideTex, chestSideTex, chestTopTex, chestTopTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(3.6f, -0.75f, -0.6f);
	drawSolidCube(0.3f, 0.15f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.15f, 0.3f, woodPlankTex);
	glPopMatrix();
	glPopMatrix();
}

void drawCabin(GLuint oakWoodTex, GLuint woodPlankTex, GLuint glassBlockTex, GLuint cobblestoneTex)
{
	// THE CABIN
	glPushMatrix();

	// FLOOR
	glPushMatrix();
	for (unsigned int j = 0; j < 5; j++)
	{
		glPushMatrix();


		for (unsigned int i = 0; i < 5; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
			glTranslatef(0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, 0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	// BACK
	glPushMatrix();
	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.f, 2.4f, 0.f);
	for (unsigned int i = 0; i < 5; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.6f, 0.f, 0.f);
	}
	glPopMatrix();
	glPopMatrix();

	// RIGHT
	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.6f);
	glPushMatrix();
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();
	glPopMatrix();

	// LEFT
	glPushMatrix();
	glTranslatef(2.4f, 0.6f, 0.6f);
	glPushMatrix();
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();
	glPopMatrix();

	// FRONT
	glPushMatrix();
	glTranslatef(0.6f, 0.6f, 2.4f);
	glPushMatrix();
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(1.2f, 0.0f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(1.2f, 0.0f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.0f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.0f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.0f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.0f, 0.0f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	// ROOF
	glPushMatrix();
	glTranslatef(0.f, 1.8f, -1.8f);
	glPushMatrix();
	for (unsigned int j = 0; j < 3; j++)
	{
		glPushMatrix();

		for (unsigned int i = 0; i < 3; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
			glTranslatef(0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, 0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glTranslatef(1.2f, -0.15f, 3.f);
	drawSolidCube(0.3f, 0.15f, 0.3f, woodPlankTex);
	glPopMatrix();
}

void drawBlacksmith(GLuint oakWoodTex, GLuint woodPlankTex, GLuint glassBlockTex, GLuint cobblestoneTex, GLuint lavaTex, UV uv1, UV uv2, UV uv3, UV uv4, UV uv5, UV uv6)
{
	// Blacksmith
	glPushMatrix();

	// FLOOR
	glPushMatrix();
	for (unsigned int j = 0; j < 7; j++)
	{
		glPushMatrix();

		for (unsigned int i = 0; i < 10; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
			glTranslatef(-0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, -0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, -0.6f);
	}
	glPopMatrix();

	//Lava Side
	glPushMatrix();
	glTranslatef(0.f, 0.6f, -3.6f);
	glPushMatrix();
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
		glTranslatef(-0.6f, 0.f, 0.f);
	}

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);

	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);

	glTranslatef(0.f, 0.f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.f, 0.f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);

	glTranslatef(1.2f, 0.f, 0.6f);

	// Lava Animation
	glPushMatrix();
	glTranslatef(-0.3f, 0.f, 0.f);
	glEnable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glBindTexture(GL_TEXTURE_2D, lavaTex);

	float r = 0.3f;

	glBegin(GL_TRIANGLES);

	// Back Face
	glTexCoord2f(uv6.vx, uv6.vy);
	glVertex3f(-r * 2, -r, r);
	glTexCoord2f(uv6.vx, uv6.uy);
	glVertex3f(-r * 2, r, r);
	glTexCoord2f(uv6.ux, uv6.uy);
	glVertex3f(r * 2, r, r);

	glTexCoord2f(uv6.ux, uv6.uy);
	glVertex3f(r * 2, r, r);
	glTexCoord2f(uv6.ux, uv6.vy);
	glVertex3f(r * 2, -r, r);
	glTexCoord2f(uv6.vx, uv6.vy);
	glVertex3f(-r * 2, -r, r);


	// Near Face
	glTexCoord2f(uv1.vx, uv1.vy);
	glVertex3f(r * 2, r, -r);
	glTexCoord2f(uv1.vx, uv1.uy);
	glVertex3f(-r * 2, r, -r);
	glTexCoord2f(uv1.ux, uv1.uy);
	glVertex3f(-r * 2, -r, -r);

	glTexCoord2f(uv1.ux, uv1.uy);
	glVertex3f(-r * 2, -r, -r);
	glTexCoord2f(uv1.ux, uv1.vy);
	glVertex3f(r * 2, -r, -r);
	glTexCoord2f(uv1.vx, uv1.vy);
	glVertex3f(r * 2, r, -r);



	// Right Face
	glTexCoord2f(uv3.ux, uv3.uy);
	glVertex3f(r * 2, r, -r);
	glTexCoord2f(uv3.ux, uv3.vy);
	glVertex3f(r * 2, -r, -r);
	glTexCoord2f(uv3.vx, uv3.vy);
	glVertex3f(r * 2, -r, r);

	glTexCoord2f(uv3.vx, uv3.vy);
	glVertex3f(r * 2, -r, r);
	glTexCoord2f(uv3.vx, uv3.uy);
	glVertex3f(r * 2, r, r);
	glTexCoord2f(uv3.ux, uv3.uy);
	glVertex3f(r * 2, r, -r);



	//Left Face
	glTexCoord2f(uv4.ux, uv4.uy);
	glVertex3f(-r * 2, -r, r);
	glTexCoord2f(uv4.ux, uv4.vy);
	glVertex3f(-r * 2, -r, -r);
	glTexCoord2f(uv4.vx, uv4.vy);
	glVertex3f(-r * 2, r, -r);


	glTexCoord2f(uv4.vx, uv4.vy);
	glVertex3f(-r * 2, r, -r);
	glTexCoord2f(uv4.vx, uv4.uy);
	glVertex3f(-r * 2, r, r);
	glTexCoord2f(uv4.ux, uv4.uy);
	glVertex3f(-r * 2, -r, r);



	//Bottom Face
	glTexCoord2f(uv2.ux, uv2.uy);
	glVertex3f(r * 2, r, -r);
	glTexCoord2f(uv2.ux, uv2.vy);
	glVertex3f(r * 2, r, r);
	glTexCoord2f(uv2.vx, uv2.vy);
	glVertex3f(-r * 2, r, r);

	glTexCoord2f(uv2.vx, uv2.vy);
	glVertex3f(-r * 2, r, r);
	glTexCoord2f(uv2.vx, uv2.uy);
	glVertex3f(-r * 2, r, -r);
	glTexCoord2f(uv2.ux, uv2.uy);
	glVertex3f(r * 2, r, -r);



	//Top Face
	glTexCoord2f(uv5.ux, uv5.uy);
	glVertex3f(-r * 2, -r, r);
	glTexCoord2f(uv5.ux, uv5.vy);
	glVertex3f(r * 2, -r, r);
	glTexCoord2f(uv5.vx, uv5.vy);
	glVertex3f(r * 2, -r, -r);

	glTexCoord2f(uv5.vx, uv5.vy);
	glVertex3f(r * 2, -r, -r);
	glTexCoord2f(uv5.vx, uv5.uy);
	glVertex3f(-r * 2, -r, -r);
	glTexCoord2f(uv5.ux, uv5.uy);
	glVertex3f(-r * 2, -r, r);


	glEnd();

	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	// End of Lava Animation

	glTranslatef(-1.2f, 0.f, 1.2f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	// Reflective wall for lava
	glPushMatrix();
	glTranslatef(1.f, 1.4f, -1.f);

	glPushMatrix();
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.1f, 0.1f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.2f, 0.f, 0.f);
	}
	//glTranslatef(1.2f, 1.35f, -1.2f);
	//drawSolidCube(0.3f, 0.15f, 0.3f, 1.f, 0.f, 0.f);
	//glTranslatef(0.6f, 0.0f, 0.0f);
	//drawSolidCube(0.3f, 0.15f, 0.3f, 1.f, 0.f, 0.f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.f, -0.2f);
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.1f, 0.1f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.2f, 0.f, 0.f);
	}
	//glTranslatef(1.2f, 1.35f, -1.2f);
	//drawSolidCube(0.3f, 0.15f, 0.3f, 1.f, 0.f, 0.f);
	//glTranslatef(0.6f, 0.0f, 0.0f);
	//drawSolidCube(0.3f, 0.15f, 0.3f, 1.f, 0.f, 0.f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.f, -0.4f);
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.1f, 0.1f, 0.1f, 1.f, 1.f, 1.f);
		glTranslatef(0.2f, 0.f, 0.f);
	}
	//glTranslatef(1.2f, 1.35f, -1.2f);
	//drawSolidCube(0.3f, 0.15f, 0.3f, 1.f, 0.f, 0.f);
	//glTranslatef(0.6f, 0.0f, 0.0f);
	//drawSolidCube(0.3f, 0.15f, 0.3f, 1.f, 0.f, 0.f);
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
		glTranslatef(-0.6f, 0.f, 0.f);
	}
	glTranslatef(0.6f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	for (unsigned int i = 0; i < 4; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
		glTranslatef(-0.6f, 0.f, 0.f);
	}
	glTranslatef(0.6f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	for (unsigned int j = 0; j < 7; j++)
	{
		glPushMatrix();

		for (unsigned int i = 0; i < 6; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
			glTranslatef(-0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, 0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 3; i++)
	{
		drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);
		glTranslatef(0.f, 0.6f, 0.f);
	}
	glTranslatef(-2.4f, -0.6f, 0.f);
	for (unsigned int i = 0; i < 3; i++)
	{
		drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);
		glTranslatef(0.f, -0.6f, 0.f);
	}
	//drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.6f, -0.15f, 0.6f);
	drawSolidCube(0.3f, 0.15f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.15f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.15f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3.6f, 0.6f, 0.f);

	glPushMatrix();
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, -0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(-0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, -0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.8f, 0.f, -0.6f);
	glPushMatrix();
	for (unsigned int i = 0; i < 5; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, -0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.f, 0.6f, 0.f);
	for (unsigned int i = 0; i < 5; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, -0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.f, 1.2f, 0.f);
	for (unsigned int i = 0; i < 5; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, -0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.f, 1.8f, 0.f);
	for (unsigned int i = 0; i < 5; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
		glTranslatef(0.f, 0.f, -0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPushMatrix();
	glPushMatrix();
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int j = 0; j < 5; j++)
	{
		glPushMatrix();

		for (unsigned int i = 0; i < 3; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
			glTranslatef(-0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, 0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, -0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, -1.2f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, glassBlockTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.6f, -1.8f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glTranslatef(0.6f, 0.f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
}

void drawFence(GLuint woodPlankTex)
{
	glPushMatrix();
	glTranslatef(0.f, -0.1f, 0.f);
	drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);

	glTranslatef(-0.4f, 0.1f, 0.f);
	drawSolidCube(0.3f, 0.1f, 0.1f, woodPlankTex);
	glTranslatef(0.f, -0.45f, 0.f);
	drawSolidCube(0.3f, 0.1f, 0.1f, woodPlankTex);
	glPopMatrix();
}

void drawStable(GLuint oakWoodTex, GLuint woodPlankTex, GLuint cobblestoneTex, GLuint hayTex)
{
	// HORSE STABLE
	glPushMatrix();
	drawFence(woodPlankTex);
	glTranslatef(-0.8f, 0.f, 0.0f);
	for (unsigned int i = 0; i < 5; i++)
	{
		drawFence(woodPlankTex);
		glTranslatef(-0.8f, 0.f, 0.0f);
	}
	glTranslatef(0.f, -0.1f, 0.0f);
	drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);

	// LEFT SIDE
	glPushMatrix();
	glTranslatef(-0.4f, -0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	glPushMatrix();
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 2.4f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 3.0f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();
	glPopMatrix();


	// RIGHT SIDE
	glPushMatrix();
	glTranslatef(5.2f, -0.6f, 0.f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	glPushMatrix();
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 0.6f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.2f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 1.8f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.f, 2.4f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.1f, 0.1f, 0.3f, woodPlankTex);

	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, woodPlankTex);
	glTranslatef(0.f, 0.f, 0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 3.0f, -0.6f);
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glTranslatef(0.f, 0.f, 0.6f);
	for (unsigned int i = 0; i < 6; i++)
	{
		drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
		glTranslatef(0.f, 0.f, 0.6f);
	}
	drawSolidCube(0.3f, 0.3f, 0.3f, oakWoodTex);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.6f, 0.3f, 0.f);
	drawSolidCube(0.6f, 0.6f, 0.4f, hayTex);

	glTranslatef(-3.f, 0.f, 0.6f);
	drawSolidCube(0.4f, 0.6f, 0.6f, hayTex);
	glPopMatrix();
	glPopMatrix();

	// BACK SIDE
	glPushMatrix();
	glTranslatef(4.8f, -0.6f, 4.2f);
	drawFence(woodPlankTex);
	glTranslatef(-0.8f, 0.f, 0.0f);
	for (unsigned int i = 0; i < 5; i++)
	{
		drawFence(woodPlankTex);
		glTranslatef(-0.8f, 0.f, 0.0f);
	}
	glTranslatef(0.f, -0.1f, 0.0f);
	drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);
	glTranslatef(0.f, 0.6f, 0.f);
	drawSolidCube(0.1f, 0.3f, 0.1f, woodPlankTex);

	glPopMatrix();
	glTranslatef(5.1f, 3.f, 0.f);
	glPushMatrix();
	for (unsigned int j = 0; j < 8; j++)
	{
		glPushMatrix();

		for (unsigned int i = 0; i < 10; i++)
		{
			drawSolidCube(0.3f, 0.3f, 0.3f, cobblestoneTex);
			glTranslatef(-0.6f, 0.f, 0.f);
		}
		glTranslatef(0.f, 0.f, 0.6f);

		glPopMatrix();
		glTranslatef(0.f, 0.f, 0.6f);
	}
	glPopMatrix();
	glPopMatrix();
}

#endif 