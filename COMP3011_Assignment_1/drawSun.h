#ifndef DRAWSUN
#define DRAWSUN

#include <GL/glew.h>


//Init subdivision depth
unsigned int DEPTH = 2;

//Octagonal vertex coordinates
GLfloat vertex[][3] = {
  0.0f,  1.0f,  0.0f,
  0.0f,  0.0f,  1.0f,
  1.0f,  0.0f,  0.0f,
  0.0f,  0.0f, -1.0f,
 -1.0f,  0.0f,  0.0f,
  0.0f, -1.0f,  0.0f
};

void triangle(GLfloat* va, GLfloat* vb, GLfloat* vc)
{
	glPushAttrib(GL_ALL_ATTRIB_BITS); // save current style attributes (inc. material properties)

	float mat_ambient[] = { 1.f, 0.72f, 0.07f, 1.f };	// ambient colour
	float mat_diffuse[] = { 1.f, 0.72f, 0.07f, 1.f };	// colour reflected by diffuse light
	float mat_specular[] = { 0.f, 0.f, 0.f, 1.f };		// specular colour
	float mat_shininess[] = { 0.0f }; // [0, 128]
	float mat_emission[] = { 0.f, 0.f, 0.f, 1.f };

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);	// set colour for ambient reflectance
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);	// set colour for diffuse reflectance
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);	// set colour for specular reflectance
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glColor3f(1.0f, 1.f, 1.f);
	glBegin(GL_TRIANGLES);
	glNormal3f(1.f, 0.f, 0.f);
	glVertex3fv(va);
	glVertex3fv(vb);
	glVertex3fv(vc);
	glEnd();
	glPopAttrib(); // restore style attributes
	glFlush();
}

/*Map the subdivided triangles to the unit sphere by normalization
scale the distance from the vertex to the origin from the original distance to 1*/
void normalize(GLfloat* v)
{
	GLfloat d = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
	v[0] /= d; v[1] /= d; v[2] /= d;
}

/*The way to divide the sides equally, the equilateral triangle is further subdivided into four equilateral triangles,
Start to subdivide recursively, if the number of layers is not reached, the triangle is further subdivided, and if the depth drops to 0, the final small triangle is drawn*/
void divide_triangle(GLfloat* a, GLfloat* b, GLfloat* c, int depth)
{
	if (depth > 0) {
		//Temporary points are used to store midpoints
		GLfloat ab[3], bc[3], ac[3];

		for (unsigned int i = 0; i < 3; i++)
			ab[i] = (a[i] + b[i]) / 2;
		normalize(ab);
		for (unsigned int i = 0; i < 3; i++)
			bc[i] = (b[i] + c[i]) / 2;
		normalize(bc);
		for (unsigned int i = 0; i < 3; i++)
			ac[i] = (a[i] + c[i]) / 2;
		normalize(ac);


		divide_triangle(ac, ab, a, depth - 1);

		divide_triangle(bc, b, ab, depth - 1);

		divide_triangle(c, bc, ac, depth - 1);

		divide_triangle(ab, ac, bc, depth - 1);
	}
	else {

		triangle(a, b, c);

	}
}



void draw() {
	divide_triangle(vertex[0], vertex[2], vertex[1], DEPTH);
	divide_triangle(vertex[0], vertex[3], vertex[2], DEPTH);
	divide_triangle(vertex[0], vertex[4], vertex[3], DEPTH);
	divide_triangle(vertex[0], vertex[1], vertex[4], DEPTH);
	divide_triangle(vertex[5], vertex[1], vertex[2], DEPTH);
	divide_triangle(vertex[5], vertex[2], vertex[3], DEPTH);
	divide_triangle(vertex[5], vertex[3], vertex[4], DEPTH);
	divide_triangle(vertex[5], vertex[4], vertex[1], DEPTH);
}
#endif 
