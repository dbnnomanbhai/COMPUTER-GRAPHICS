#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Initialize OpenGL Graphics */
void initGL() {
// Set "clearing" or background color
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
glBegin(GL_QUADS); // Each set of 4 vertices form a quad
glColor3f(0.0f, 1.0f, 0.0f); // green
glVertex2f(-0.8f, 0.0f); // x, y
glVertex2f(-0.7f, 0.0f);
glVertex2f(-0.7f, 0.70f); // x, y
glVertex2f(-0.8f, 0.70f);
glEnd();
glBegin(GL_QUADS); // Each set of 4 vertices form a quad
glColor3f(0.0f, 1.0f, 0.0f); // green
glVertex2f(-0.7f, 0.69f); // x, y
glVertex2f(-0.4f, 0.69f);
glVertex2f(-0.4f, 0.70f); // x, y
glVertex2f(-0.7f, 0.70f);
glEnd();
glBegin(GL_QUADS); // Each set of 4 vertices form a quad
glColor3f(1.0f, 1.0f, 0.0f); // yellow
glVertex2f(-0.5f, 0.67f); // x, y
glVertex2f(-0.4f, 0.67f);
glVertex2f(-0.4f, 0.69f); // x, y
glVertex2f(-0.5f, 0.69f);
glEnd();
glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow(" a lamp post"); // Create window with the given title
glutInitWindowSize(320, 320); // Set the window's initial width & height
glutDisplayFunc(display); // Register callback handler for window re-paint event
initGL(); // Our own OpenGL initialization
glutMainLoop(); // Enter the event-processing loop
return 0;
}

