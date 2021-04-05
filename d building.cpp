
// Press 'd' for Day view and 'n' for night view.

#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void Idle()
{
    glutPostRedisplay();
}
void update(int value)
{
    if(position < -2.0) position = 2.0f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

void night()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); // sky
    glColor3ub(77, 77, 77);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,1.0);
    glEnd();

    glBegin(GL_QUADS); // grass
    glColor3ub(0, 51, 0);
    glVertex2f(-1.0,-0.3);
    glVertex2f(-1.0,-.8);
    glVertex2f(1.0,-0.8);
    glVertex2f(1.0,-0.3);
    glEnd();

    glBegin(GL_QUADS); // road
    glColor3ub(89, 89, 89);
    glVertex2f(-1.0,-.8);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.8);
    glEnd();

    glBegin(GL_QUADS); // left white
    glColor3ub(194, 194, 163);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.9,0.6);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.7,-0.6);
    glEnd();

    glBegin(GL_QUADS); // left white adj1
    glColor3ub(0, 24, 102);
    glVertex2f(-0.3,0.75);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.7,0.6);
    glVertex2f(-0.3,0.6);
    glEnd();

    glBegin(GL_QUADS); // left white adj2
    glColor3ub(0, 143, 179);
    glVertex2f(-0.3,0.6);
    glVertex2f(-0.7,0.6);
    glVertex2f(-0.7,0.5);
    glVertex2f(-0.3,0.5);
    glEnd();

    glBegin(GL_QUADS); // left white adj3
    glColor3ub(0, 24, 102);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.7,0.5);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.3,0.4);
    glEnd();

    glBegin(GL_QUADS); // left white adj4
    glColor3ub(0, 143, 179);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.7,0.3);
    glVertex2f(-0.3,0.3);
    glEnd();

    glBegin(GL_QUADS); // left white adj5
    glColor3ub(	0, 0, 39);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.7,0.3);
    glVertex2f(-0.7,0.0);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.1,0.2);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.1,0.0);
    glEnd();

    glBegin(GL_QUADS); // right1
    glColor3ub(0, 143, 179);
    glVertex2f(0.5,0.7);
    glVertex2f(-0.3,0.75);
    glVertex2f(-0.3,0.6);
    glVertex2f(0.5,0.6);
    glEnd();

    glBegin(GL_QUADS); // right2
    glColor3ub(0, 24, 102);
    glVertex2f(0.5,0.6);
    glVertex2f(-0.3,0.6);
    glVertex2f(-0.3,0.5);
    glVertex2f(0.5,0.5);
    glEnd();

    glBegin(GL_QUADS); // right3
    glColor3ub(0, 143, 179);
    glVertex2f(0.5,0.5);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.3,0.4);
    glVertex2f(0.5,0.4);
    glEnd();

    glBegin(GL_QUADS); // right4
    glColor3ub(0, 24, 102);
    glVertex2f(0.5,0.4);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,0.3);
    glVertex2f(0.5,0.3);
    glEnd();

    glBegin(GL_QUADS); // right5
    glColor3ub(0, 143, 179);
    glVertex2f(0.5,0.3);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.3,0.2);
    glVertex2f(0.5,0.2);
    glEnd();

    glBegin(GL_QUADS); // right6
    glColor3ub(	0, 0, 39);
    glVertex2f(0.7,0.2);
    glVertex2f(-0.1,0.2);
    glVertex2f(-0.1,0.0);
    glVertex2f(0.7,0.0);
    glVertex2f(0.9,0.0);
    glVertex2f(-0.7,0.0);
    glVertex2f(-0.7,-0.6);
    glVertex2f(0.9,-0.6);
    glEnd();

    glLineWidth(10); // borders
    glBegin(GL_LINES);
    glColor3ub(203, 203, 179);
    glVertex2f(-.1,0.2);
    glVertex2f(-.1,0.0);
    glVertex2f(-.7,0.0);
    glVertex2f(.9,0.0);
    glVertex2f(0.0,-0.2);
    glVertex2f(.9,-0.2);
    glVertex2f(0.0,-0.4);
    glVertex2f(.9,-0.4);
    glEnd();
    glLoadIdentity();

    glLineWidth(5); // borders
    glBegin(GL_LINES);
    glColor3ub(203, 203, 179);
    glVertex2f(-.7,-0.1);
    glVertex2f(.0,-0.1);
    glVertex2f(-.7,-0.2);
    glVertex2f(0.0,-0.2);
    glVertex2f(-.7,-0.3);
    glVertex2f(0.0,-0.3);
    glVertex2f(-.7,-0.4);
    glVertex2f(0.0,-0.4);
    glVertex2f(-.7,-0.5);
    glVertex2f(0.0,-0.5);
    glVertex2f(-.7,0.3);
    glVertex2f(-0.3,0.3);
    glVertex2f(-.3,0.3);
    glVertex2f(-0.3,0.2);
    glVertex2f(-.304,0.2);
    glVertex2f(0.7,0.2);
    glVertex2f(-.4,0.0);
    glVertex2f(-0.4,-0.6);
    glEnd();

    glLineWidth(50);
    glBegin(GL_LINES);
    glColor3ub(203,203,179);
    glVertex2f(0.0,0.0);
    glVertex2f(.0,-0.6);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(203,203,179);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.7,0.1);
    glVertex2f(-0.1,0.1);
    glEnd();

    glBegin(GL_QUADS); // shadow
    glColor3ub(128, 0, 0);
    glVertex2f(-0.7,-0.6);
    glVertex2f(-.8,-0.8);
    glVertex2f(1.0,-0.8);
    glVertex2f(0.9,-0.6);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.75,-0.7);
    glVertex2f(.95,-0.7);
    glEnd();

    glLoadIdentity();
    glTranslatef(-0.0,-0.7,0.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Rode line
    glVertex2f(-1.0,-0.2);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.8,-0.2);
    glVertex2f(1.0,-0.2);
    glEnd();
    glLoadIdentity();



    ///--------------------------------------------------<CAR>-----------------------------------------------------

    glLoadIdentity();
    glTranslatef(0.00f,-0.7f,0.00f);
	glPushMatrix();
	glTranslatef(position,0.0,0.0);

    glColor3ub(0, 0, 0);
    GLfloat xx=0.6f; GLfloat yy=-0.2f; GLfloat radiuss =.05f; // car Left wheel
	int triangleAmount2 = 20;
	GLfloat twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xx, yy);
		for(int i = 0; i <= triangleAmount2; i++)
			glVertex2f(xx + (radiuss * cos(i *  twicePi2 / triangleAmount2)),yy + (radiuss * sin(i * twicePi2 / triangleAmount2)));
	glEnd();


    glColor3ub(0, 0, 0);
    GLfloat x3=0.8f; GLfloat y3=-0.2f; GLfloat radius3 =.05f; // car Right Wheel
	int triangleAmount3 = 20;
	GLfloat twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3);
		for(int i = 0; i <= triangleAmount3; i++)
			glVertex2f(x3 + (radius3 * cos(i *  twicePi3 / triangleAmount3)),y3 + (radius3 * sin(i * twicePi3 / triangleAmount3)));
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191); // Car Box
    glVertex2f(0.55,0.0);
    glVertex2f(0.55,-0.175);
    glVertex2f(0.85,-0.175);
    glVertex2f(0.85,0.0);
    glEnd();

    glBegin(GL_QUADS); // Car head
    glColor3ub(153, 31, 0);
    glVertex2f(0.55,0.0);
    glVertex2f(0.48,-0.140);
    glVertex2f(0.48,-0.175);
    glVertex2f(0.55,-0.175);
    glEnd();

    glPopMatrix();
    glLoadIdentity();

    ///---------------------------------------------------</CAR>----------------------------------------------------


    glColor3ub(255,255,255);
    GLfloat a = -1.05; // rain
    GLfloat b = 2.05;
    glBegin(GL_LINES);
    for(int i=0;i<=200;i++)
    {

        glVertex2f(a,b);
        glVertex2f(a-.02,b-.04);

        a += .04;
    }
    glEnd();

    for(int j=0;j<=100;j++)
    {
        a = -1.05;
        b= b-.05;
        glBegin(GL_LINES);
        for(int i=0;i<=200;i++)
        {
            glVertex2f(a,b);
            glVertex2f(a-.02,b-.04);

            a += .04;
        }
        glEnd();
    }
    glLoadIdentity();

    glFlush();
}



void day()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); // sky
    glColor3ub(204, 239, 255);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,1.0);
    glEnd();

    glBegin(GL_QUADS); // grass
    glColor3ub(0, 51, 0);
    glVertex2f(-1.0,-0.3);
    glVertex2f(-1.0,-.8);
    glVertex2f(1.0,-0.8);
    glVertex2f(1.0,-0.3);
    glEnd();

    glBegin(GL_QUADS); // road
    glColor3ub(89, 89, 89);
    glVertex2f(-1.0,-.8);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.8);
    glEnd();

   /*  d building
   glBegin(GL_QUADS); // left white
    glColor3ub(194, 194, 163);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.9,0.6);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.7,-0.6);
    glEnd();

    glBegin(GL_QUADS); // left white adj1
    glColor3ub(0, 24, 102);
    glVertex2f(-0.3,0.75);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.7,0.6);
    glVertex2f(-0.3,0.6);
    glEnd();

    glBegin(GL_QUADS); // left white adj2
    glColor3ub(0, 143, 179);
    glVertex2f(-0.3,0.6);
    glVertex2f(-0.7,0.6);
    glVertex2f(-0.7,0.5);
    glVertex2f(-0.3,0.5);
    glEnd();

    glBegin(GL_QUADS); // left white adj3
    glColor3ub(0, 24, 102);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.7,0.5);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.3,0.4);
    glEnd();

    glBegin(GL_QUADS); // left white adj4
    glColor3ub(0, 143, 179);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.7,0.3);
    glVertex2f(-0.3,0.3);
    glEnd();

    glBegin(GL_QUADS); // left white adj5
    glColor3ub(	0, 0, 39);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.7,0.3);
    glVertex2f(-0.7,0.0);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.1,0.2);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.1,0.0);
    glEnd();

    glBegin(GL_QUADS); // right1
    glColor3ub(0, 143, 179);
    glVertex2f(0.5,0.7);
    glVertex2f(-0.3,0.75);
    glVertex2f(-0.3,0.6);
    glVertex2f(0.5,0.6);
    glEnd();

    glBegin(GL_QUADS); // right2
    glColor3ub(0, 24, 102);
    glVertex2f(0.5,0.6);
    glVertex2f(-0.3,0.6);
    glVertex2f(-0.3,0.5);
    glVertex2f(0.5,0.5);
    glEnd();

    glBegin(GL_QUADS); // right3
    glColor3ub(0, 143, 179);
    glVertex2f(0.5,0.5);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.3,0.4);
    glVertex2f(0.5,0.4);
    glEnd();

    glBegin(GL_QUADS); // right4
    glColor3ub(0, 24, 102);
    glVertex2f(0.5,0.4);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,0.3);
    glVertex2f(0.5,0.3);
    glEnd();

    glBegin(GL_QUADS); // right5
    glColor3ub(0, 143, 179);
    glVertex2f(0.5,0.3);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.3,0.2);
    glVertex2f(0.5,0.2);
    glEnd();

    glBegin(GL_QUADS); // right6
    glColor3ub(	0, 0, 39);
    glVertex2f(0.7,0.2);
    glVertex2f(-0.1,0.2);
    glVertex2f(-0.1,0.0);
    glVertex2f(0.7,0.0);
    glVertex2f(0.9,0.0);
    glVertex2f(-0.7,0.0);
    glVertex2f(-0.7,-0.6);
    glVertex2f(0.9,-0.6);
    glEnd();

    glLineWidth(10); // borders
    glBegin(GL_LINES);
    glColor3ub(203, 203, 179);
    glVertex2f(-.1,0.2);
    glVertex2f(-.1,0.0);
    glVertex2f(-.7,0.0);
    glVertex2f(.9,0.0);
    glVertex2f(0.0,-0.2);
    glVertex2f(.9,-0.2);
    glVertex2f(0.0,-0.4);
    glVertex2f(.9,-0.4);
    glEnd();
    glLoadIdentity();

    glLineWidth(5); // borders
    glBegin(GL_LINES);
    glColor3ub(203, 203, 179);
    glVertex2f(-.7,-0.1);
    glVertex2f(.0,-0.1);
    glVertex2f(-.7,-0.2);
    glVertex2f(0.0,-0.2);
    glVertex2f(-.7,-0.3);
    glVertex2f(0.0,-0.3);
    glVertex2f(-.7,-0.4);
    glVertex2f(0.0,-0.4);
    glVertex2f(-.7,-0.5);
    glVertex2f(0.0,-0.5);
    glVertex2f(-.7,0.3);
    glVertex2f(-0.3,0.3);
    glVertex2f(-.3,0.3);
    glVertex2f(-0.3,0.2);
    glVertex2f(-.304,0.2);
    glVertex2f(0.7,0.2);
    glVertex2f(-.4,0.0);
    glVertex2f(-0.4,-0.6);
    glEnd();

    glLineWidth(50);
    glBegin(GL_LINES);
    glColor3ub(203,203,179);
    glVertex2f(0.0,0.0);
    glVertex2f(.0,-0.6);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(203,203,179);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.7,0.1);
    glVertex2f(-0.1,0.1);
    glEnd();
*/
    glBegin(GL_QUADS); // shadow
    glColor3ub(128, 0, 0);
    glVertex2f(-0.7,-0.6);
    glVertex2f(-.8,-0.8);
    glVertex2f(1.0,-0.8);
    glVertex2f(0.9,-0.6);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.75,-0.7);
    glVertex2f(.95,-0.7);
    glEnd();

    glLoadIdentity();
    glTranslatef(-0.0,-0.7,0.0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // Rode line
    glVertex2f(-1.0,-0.2);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.8,-0.2);
    glVertex2f(1.0,-0.2);
    glEnd();
    glLoadIdentity();



    ///--------------------------------------------------<CAR>-----------------------------------------------------

    glLoadIdentity();
    glTranslatef(0.00f,-0.7f,0.00f);
	glPushMatrix();
	glTranslatef(position,0.0,0.0);

    glColor3ub(0, 0, 0);
    GLfloat xx=0.6f; GLfloat yy=-0.2f; GLfloat radiuss =.05f; // car Left wheel
	int triangleAmount2 = 20;
	GLfloat twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xx, yy);
		for(int i = 0; i <= triangleAmount2; i++)
			glVertex2f(xx + (radiuss * cos(i *  twicePi2 / triangleAmount2)),yy + (radiuss * sin(i * twicePi2 / triangleAmount2)));
	glEnd();


    glColor3ub(0, 0, 0);
    GLfloat x3=0.8f; GLfloat y3=-0.2f; GLfloat radius3 =.05f; // car Right Wheel
	int triangleAmount3 = 20;
	GLfloat twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3);
		for(int i = 0; i <= triangleAmount3; i++)
			glVertex2f(x3 + (radius3 * cos(i *  twicePi3 / triangleAmount3)),y3 + (radius3 * sin(i * twicePi3 / triangleAmount3)));
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191); // Car Box
    glVertex2f(0.55,0.0);
    glVertex2f(0.55,-0.175);
    glVertex2f(0.85,-0.175);
    glVertex2f(0.85,0.0);
    glEnd();

    glBegin(GL_QUADS); // Car head
    glColor3ub(153, 31, 0);
    glVertex2f(0.55,0.0);
    glVertex2f(0.48,-0.140);
    glVertex2f(0.48,-0.175);
    glVertex2f(0.55,-0.175);
    glEnd();

    glPopMatrix();
    glLoadIdentity();

    ///---------------------------------------------------</CAR>----------------------------------------------------

    glTranslatef(0.0f,0.0f,0.0f);
    glColor3ub(255, 117, 26);
    GLfloat x=.7f; GLfloat y=.7f; GLfloat radius =.10f; // Sun
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount; i++)
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
	glEnd();

    glFlush();
}


void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
        case 'n':
                glutDisplayFunc(night);
                glutPostRedisplay();
                break;
        case 'd':
                glutDisplayFunc(day);
                glutPostRedisplay();
                break;
	}
 }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("D BUILDING - AIUB");
    glutInitWindowSize(320,320);
    glutDisplayFunc(day);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}
