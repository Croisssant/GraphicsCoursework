#ifndef CHECKKEYS
#define CHECKKEYS


#include <GLFW/glfw3.h>

bool wKey, sKey, aKey, dKey, eKey, qKey;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
	{
		std::cout << "Esc key is pressed." << std::endl;
		glfwSetWindowShouldClose(window, GL_TRUE);
	}
	if (key == GLFW_KEY_Q && action == GLFW_PRESS)
	{
		qKey = true;
	}
	if (key == GLFW_KEY_Q && action == GLFW_RELEASE)
	{
		qKey = false;
	}
	if (key == GLFW_KEY_E && action == GLFW_PRESS)
	{
		eKey = true;
	}
	if (key == GLFW_KEY_W && action == GLFW_PRESS)
	{
		wKey = true;
	}

	if (key == GLFW_KEY_W && action == GLFW_RELEASE)
	{
		wKey = false;
	}

	if (key == GLFW_KEY_S && action == GLFW_PRESS)
	{
		sKey = true;
	}

	if (key == GLFW_KEY_S && action == GLFW_RELEASE)
	{
		sKey = false;
	}

	if (key == GLFW_KEY_A && action == GLFW_PRESS)
	{
		aKey = true;
	}

	if (key == GLFW_KEY_A && action == GLFW_RELEASE)
	{
		aKey = false;
	}

	if (key == GLFW_KEY_D && action == GLFW_PRESS)
	{
		dKey = true;
	}

	if (key == GLFW_KEY_D && action == GLFW_RELEASE)
	{
		dKey = false;
	}

	if (key == GLFW_KEY_SPACE && action == GLFW_PRESS)
	{
		glLoadIdentity();
	}
}

#endif 