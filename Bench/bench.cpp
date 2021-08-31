#include <windows.h>
#include <GL/glut.h>
void display() {
 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
 glClear(GL_COLOR_BUFFER_BIT);
 glLineWidth(7.7);
 glBegin(GL_LINES);
 glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(-0.0f, 0.1f);
 glVertex2f(-0.0f,-0.15f);
 glEnd();
 glLineWidth(7.7);
 glBegin(GL_LINES);
 glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(0.1f, 0.05f);
 glVertex2f(0.1f,-0.2f);
 glEnd();
 glLineWidth(7.7);
 glBegin(GL_LINES);
 glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(0.6f, 0.05f);
 glVertex2f(0.6f,-0.2f);
 glEnd();
 glLineWidth(7.7);
 glBegin(GL_LINES);
 glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(0.5f, 0.1f);
 glVertex2f(0.5f,-0.15f);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.1f, 0.0f, 0.0f);
 glVertex2f(-0.05f, 0.1f);
 glVertex2f(0.1f, 0.0f);
 glVertex2f(0.68f, 0.0f);
 glVertex2f(0.57f, 0.1f);
 glEnd();
glBegin(GL_QUADS);
 glColor3f(2.0f, 0.5f, 1.0f);
 glVertex2f(-0.05f, 0.1f);
 glVertex2f(0.57f, 0.1f);
 glVertex2f(0.57f, 0.3f);
 glVertex2f(-0.05f, 0.3f);
 glEnd();
 glFlush();
}
int main(int argc, char** argv) {
 glutInit(&argc, argv);
 glutCreateWindow("a bench");
 glutInitWindowSize(320, 320);
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}
