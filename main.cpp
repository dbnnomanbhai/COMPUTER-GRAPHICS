
#include <stdlib.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<unistd.h>
#include<stdio.h>

using namespace std;
int m=0;

 void draw_line(int x,int y,int sizes,int num){

 for (int a=x,b=y,c=0;c<num;c++,a+=sizes)

 {


     glBegin(GL_POLYGON);
    glVertex2i(a,b);

    glVertex2i(a+sizes,b);
     glVertex2i(a+sizes,b+sizes);
    glVertex2i(a,b+sizes);



glEnd();


 }
 }

 void vertical_line(int x,int y,int sizes,int num){

 for (int a=x,b=y,c=0;c<num;c++,b+=sizes)

 {


     glBegin(GL_POLYGON);
    glVertex2i(a,b);
    glVertex2i(a+sizes,b);
     glVertex2i(a+sizes,b+sizes);
    glVertex2i(a,b+sizes);



glEnd();


 }
 }

void temp(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    int sizes=25,blocks=17;
    int x=9*sizes ,y=3*sizes;
    glColor3ub(0,0,0);
    draw_line(x,y,sizes,blocks);

    x=9*sizes, y=4*sizes;

    blocks;

    for(int a=0;a<=5;a++){

    glColor3ub(250,250,0);

     draw_line(x,y,sizes,blocks);

     glColor3ub(0,0,0);
  draw_line(x-sizes,y,sizes,1);
  draw_line(x+(blocks*sizes),y,sizes,1);

        x=x-sizes;
        y=y+sizes;
        blocks+=2;

    }

    x=3*sizes,y=10*sizes;

    for(int a=0;a<7;a++){

     glColor3ub(250,250,0);
     draw_line(x,y,sizes,29);
     glColor3ub(0,0,0);
     draw_line(x-sizes,y,sizes,1);

       glColor3ub(0,0,0);
     draw_line(x+(29*sizes),y,sizes,1);

     y+=sizes;

    }

    x=4*sizes,y=17*sizes,blocks=27;

    for(int a=0;a<=5;a++){

     glColor3ub(250,250,0);
     draw_line(x,y,sizes,blocks);
     glColor3ub(0,0,0);

     draw_line(x-sizes,y,sizes,1);
     draw_line(x+(blocks*sizes),y,sizes,1);


     y+=sizes;
     x+=sizes;
     blocks-=2;
    }
    x=9*sizes;
     glColor3ub(0,0,0);
     draw_line(x,y,sizes,blocks+2);
     x=4*sizes,y=11*sizes;
     blocks=5;



     for (int a=0;a<6;a++){


     vertical_line(a,y,sizes,blocks);

        x+=sizes;
     y-=sizes;

     blocks+=2;
     }

     blocks-=2;
     y+=sizes;
     vertical_line(x,y,sizes,blocks);

     y-=sizes;
     x+=sizes;

      blocks=12;
    vertical_line(x,y,sizes,blocks);


    y=20*sizes;
      vertical_line(x,y,sizes,1);
     x+=sizes;

     y=7*sizes;
   blocks=9;

    for(int a=0;a<2;a++){

    vertical_line(x,y,sizes,blocks);

     x+=sizes;
      y+=sizes;
      blocks--;

    }
    blocks++;
   vertical_line(x,y,sizes,blocks);

    x+=sizes;
      y-=sizes;
      blocks=14;
      vertical_line(x,y,sizes,blocks);

        x+=sizes;
      y-=(2*sizes);
      blocks=15;
       vertical_line(x,y,sizes,blocks);




    x+=sizes;
      y-=sizes;
      blocks=16;
      vertical_line(x,y,sizes,blocks);



    x+=sizes;
      y+=sizes;
      blocks=15;
      vertical_line(x,y,sizes,blocks);



          x+=sizes;
      y-=(2*sizes);
      blocks=14;
       vertical_line(x,y,sizes,blocks);

      y=6*sizes;
      x=24*sizes;
      blocks =16;
      //170 line


     for (int a=0;a<=6;a++){

      vertical_line(a,y,sizes,blocks);
       x+=sizes;
      y-=sizes;
      blocks-=2;
     }

     y=6*sizes;
     x=23*sizes;
     blocks=16;
    vertical_line(x,y,sizes,blocks);

         y=5*sizes;
     x=22*sizes;
     blocks=12;
    vertical_line(x,y,sizes,blocks);

    y=21*sizes;
    vertical_line(x,y,sizes,1);

    x-=sizes;
    y-=(14*sizes);
      vertical_line(x,y,sizes,9);

        x-=sizes;
    y+=sizes;
      vertical_line(x,y,sizes,9);
      glFlush();
}


void myDisplay(void){
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5.0);
glFlush();

}


 void myInit (void){

 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 gluOrtho2D(0.0,900.0, 0.0, 700.0);
 }

 main(int argc,char ** argv){

 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

 glutInitWindowSize(400,500);
 glutInitWindowPosition(200,150);
 glutCreateWindow("BATMAN BY NAJMUL UDDIN(18-38293-2)");

 glutDisplayFunc(myDisplay);
 glutDisplayFunc(temp);
 myInit();
 glutMainLoop();


 }



