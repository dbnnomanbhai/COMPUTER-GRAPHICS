#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
void initGL() {
// Set "clearing" or background color
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}
void display() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(0.0f, 1.0f, 0.0f); // Green
glVertex2f(0.3f, 0.9f);
glVertex2f(-0.3f, 0.9f);
glVertex2f(-0.3f, -0.8f);
glVertex2f(0.3f, -0.8f);
glEnd();
glFlush(); // Render now
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(0.1f, -0.5f);
glVertex2f(-0.1f, -0.5f);
glVertex2f(-0.1f, -0.8f);
glVertex2f(0.1f, -0.8f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.1f, 0.8f);
glVertex2f(0.2f, 0.8f);
glVertex2f(0.2f, 0.7f);
glVertex2f(0.1f, 0.7f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(-0.1f, 0.8f);
glVertex2f(-0.2f, 0.8f);
glVertex2f(-0.2f, 0.7f);
glVertex2f(-0.1f, 0.7f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.1f, 0.6f);
glVertex2f(0.2f, 0.6f);
glVertex2f(0.2f, 0.5f);
glVertex2f(0.1f, 0.5f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(-0.1f, 0.6f);
glVertex2f(-0.2f, 0.6f);
glVertex2f(-0.2f, 0.5f);
glVertex2f(-0.1f, 0.5f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.1f, 0.4f);
glVertex2f(0.2f, 0.4f);
glVertex2f(0.2f, 0.3f);
glVertex2f(0.1f, 0.3f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(-0.1f, 0.4f);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.1f, 0.3f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.1f, 0.2f);
glVertex2f(0.2f, 0.2f);
glVertex2f(0.2f, 0.1f);
glVertex2f(0.1f, 0.1f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(-0.1f, 0.2f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.2f, 0.1f);
glVertex2f(-0.1f, 0.1f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.1f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, -0.1f);
glVertex2f(0.1f, -0.1f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(-0.1f, 0.0f);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, -0.1f);
glVertex2f(-0.1f, -0.1f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.1f, -0.2f);
glVertex2f(0.2f, -0.2f);
glVertex2f(0.2f, -0.3f);
glVertex2f(0.1f, -0.3f);
glEnd();
glFlush();
glBegin(GL_QUADS); // These vertices form a closed polygon
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(-0.1f, -0.2f);
glVertex2f(-0.2f, -0.2f);
glVertex2f(-0.2f, -0.3f);
glVertex2f(-0.1f, -0.3f);
glEnd();
glFlush();
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow(" five storied building with windows and a front door"); // Create window with the given title
glutInitWindowSize(420, 420); // Set the window's initial width & height
glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
glutDisplayFunc(display); // Register callback handler for window re-paint event
initGL(); // Our own OpenGL initialization
glutMainLoop(); // Enter the event-processing loop
return 0;
}
