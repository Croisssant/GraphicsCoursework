#ifndef DRAWSKYBOX
#define DRAWSKYBOX

#include <GL/glew.h>
#include <GLFW/glfw3.h>

void drawSkybox(float r, GLuint skyBackTex, GLuint skyFrontTex, GLuint skyRightTex, GLuint skyLeftTex, GLuint skyUpTex, GLuint skyDownTex)
{
	glEnable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	
	// Back face (z = r)
	glBindTexture(GL_TEXTURE_2D, skyBackTex);
	glBegin(GL_QUADS);
	glNormal3f(0.f, 0.f, -1.f);
	
	glTexCoord2f(0., 1.);
	glVertex3f(r, r, r);

	glTexCoord2f(1., 1.);
	glVertex3f(-r, r, r);
	
	glTexCoord2f(1., 0.);
	glVertex3f(-r, -r, r);
	
	glTexCoord2f(0., 0.);
	glVertex3f(r, -r, r);

	glEnd();


	// Near face (z = -r)
	glBindTexture(GL_TEXTURE_2D, skyFrontTex);
	glBegin(GL_QUADS);
	glNormal3f(0.f, 0.f, 1.f);
	
	glTexCoord2f(1., 1.);
	glVertex3f(r, r, -r);

	glTexCoord2f(1., 0.);
	glVertex3f(r, -r, -r);

	glTexCoord2f(0., 0.);
	glVertex3f(-r, -r, -r);

	glTexCoord2f(0., 1.);
	glVertex3f(-r, r, -r);

	glEnd();


	// Right face (x = r)
	glBindTexture(GL_TEXTURE_2D, skyRightTex);
	glBegin(GL_QUADS);
	glNormal3f(-1.f, 0.f, 0.f);
	
	glTexCoord2f(1., 1.);
	glVertex3f(r, r, r);
	
	glTexCoord2f(1., 0.);
	glVertex3f(r, -r, r);
	
	glTexCoord2f(0., 0.);
	glVertex3f(r, -r, -r);
	
	glTexCoord2f(0., 1.);
	glVertex3f(r, r, -r);

	glEnd();


	// Left face (x = -r)
	glBindTexture(GL_TEXTURE_2D, skyLeftTex);
	glBegin(GL_QUADS);
	glNormal3f(1.f, 0.f, 0.f);
	
	glTexCoord2f(0., 1.);
	glVertex3f(-r, r, r);

	glTexCoord2f(1., 1.);
	glVertex3f(-r, r, -r);
	
	glTexCoord2f(1., 0.);
	glVertex3f(-r, -r, -r);
	
	glTexCoord2f(0., 0.);
	glVertex3f(-r, -r, r);

	glEnd();


	// Top face (y = r)
	glBindTexture(GL_TEXTURE_2D, skyUpTex);
	glBegin(GL_QUADS);
	glNormal3f(0.f, -1.f, 0.f);
	
	glTexCoord2f(1., 1.);
	glVertex3f(r, r, r);
	
	glTexCoord2f(1., 0.);
	glVertex3f(r, r, -r);
	
	glTexCoord2f(0., 0.);
	glVertex3f(-r, r, -r);
	
	glTexCoord2f(0., 1.);
	glVertex3f(-r, r, r);

	glEnd();


	// Bottom face (y = -r)
	glBindTexture(GL_TEXTURE_2D, skyDownTex);
	glBegin(GL_QUADS);
	glNormal3f(0.f, 1.f, 0.f);
	
	glTexCoord2f(1., 1.);
	glVertex3f(r, -r, r);
	
	glTexCoord2f(1., 0.);
	glVertex3f(-r, -r, r);
	
	glTexCoord2f(0., 0.);
	glVertex3f(-r, -r, -r);
	
	glTexCoord2f(0., 1.);
	glVertex3f(r, -r, -r);

	glEnd();
	glDisable(GL_TEXTURE_2D);
}

#endif 