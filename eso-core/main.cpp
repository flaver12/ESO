#include "src\graphics\window.h"

#define LOG(x) std::cout << x << std::endl;

int main() {

	
	using namespace eso;
	using namespace graphics;

	Window window("ESO is a life!", 960, 540);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	while (!window.closed()) {
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		LOG(x);
		LOG(y);
#if 1
		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f,  0.5f);
		glVertex2f( 0.5f,  0.5f);
		glVertex2f( 0.5f, -0.5f);
		glEnd();	
#else
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		
#endif
		window.update();
	}

	return 0;

}