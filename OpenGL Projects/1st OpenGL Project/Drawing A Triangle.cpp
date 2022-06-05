#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

//https://www.youtube.com/watch?v=H2E3yO0J7TM&list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2&index=5 the Cherno
// https://docs.gl/ Documentation

//The code i use is modern OpenGL and not legacy.

//To create a shape, you need to create a buffer which has all the data, the gpu needs to draw it (height, length etc). After you send the buffer to the gpu, in the game loop you say: draw a shape based on the buffer i gave you. https://www.youtube.com/watch?v=0p9VxImr7Y0&list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2&index=4
int main(void) {
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK) {
		cout << "ERROR" << endl;
	}

	cout << glGetString(GL_VERSION) << endl;

	float positions[6] = {
		-0.5f,  -0.5f, //0 - this is the coords for one point - vertex in the screen. This means that We have three points in total and six coords
		 0.0f,   0.5f, //1
		 0.5f,  -0.5f  //2
	};

	unsigned int buffer;
	glGenBuffers(1, &buffer); //Creating a buffer. 1 means that I want one buffer. The memory of int "buffer" is the number that represents this buffer.
	glBindBuffer(GL_ARRAY_BUFFER, buffer); // Selecting (bind) the buffer I created. (This doesn't have to be here. - I can update the buffer's data anywhere including the game loop. - movement)
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);


	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window)) {
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		//if we don't have an index buffer
		glDrawArrays(GL_TRIANGLES, 0, 3); //1. We specify the shape we want 2. We tell the GPU From what Point to start (See Line 35: float positions[6] = {0, 1, 2};) If we wanted to start from 0.0f, 0.5f, we would write 1 instead of 0. 3. We write how many vertexes the shape has, as a triangle has 3 vertexes - points, we write 3. )

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}