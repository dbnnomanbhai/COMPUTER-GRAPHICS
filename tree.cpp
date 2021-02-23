#include<windows.h>
#include <GL/glut.h>
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white
	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 45.0, 0.0);
}
void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(5.0);
	//Set colour to gray
	glColor3f(0.1f, 0.0f, 0.0f);
	// Draw an outlined triangle
	glBegin(GL_QUADS);
        glVertex2i(16,35);  //base
        glVertex2i(19,35);
		glVertex2i(19,25);
		glVertex2i(16,25);
	glEnd();
    glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
        glVertex2i(10,25);
        glVertex2i(25,25);
        glVertex2i(17,18);
    glEnd();
    glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
        glVertex2i(10,22);
        glVertex2i(25,22);
        glVertex2i(17,15);
    glEnd();
    glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
        glVertex2i(11,19);
        glVertex2i(25,19);
        glVertex2i(17,12);
    glEnd();
	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode
	glutInitWindowPosition(50, 100);				// Set window position
	glutInitWindowSize(400, 300);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window
	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait
	return 0;
}
