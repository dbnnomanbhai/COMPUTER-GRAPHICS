#include<cstdio>
#include<GL/gl.h>
#include<GL/glut.h>
#include<windows.h>
int x=50;
int y=50;

 void blackbox(){

glBegin(GL_QUADS);
glColor3ub (1,1,1);

glVertex2i(x,y);
glVertex2i(x+50,y);
glVertex2i(x+50,y+50);
glVertex2i(x,y+50);
glEnd();

}

void whitebox(){

glBegin(GL_QUADS);
glColor3ub (255,255,255);

glVertex2i(x,y);
glVertex2i(x+50,y);
glVertex2i(x+50,y+50);
glVertex2i(x,y+50);
glEnd();
 }

 void Line(){

 glBegin(GL_LINE_LOOP);
 glPointSize(20);
glColor3ub (1,1,1);
glVertex2i(450,450);
glVertex2i(50,450);
glVertex2i(50,50);
glVertex2i(450,50);
glEnd();

 }

 void myDisplay(void)
 {
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(15);

for(int j=0;j<8;j++){
  x=50;
 for(int i=0;i<8;i++){
  if (j%2==0){
    if(i%2==0){
    blackbox();
    }

    else{
        whitebox();

    }
x+=50;
  }
  else{

    if(i%2==0){
    whitebox();
    }

    else{

        blackbox();

    }
x+=50;

  }
}

y+=50;
 }
 Line();
 glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 250);
glutCreateWindow ("chess bord");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
