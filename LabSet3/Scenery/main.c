#include<GL/gl.h>
#include<GL/glut.h>
#include<GL/glu.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //Sun
    glColor3f(1.0,1.0,0.0);
    glPushMatrix();
    glTranslated(-0.05,2.5,-6);
    glScalef(2,2,2);
    glutSolidSphere(0.3,50,50);
    glPopMatrix();

    //Mountain
    glColor3f(1.0,0.5,0.0);//OrangeColor
    glPushMatrix();
    glTranslated(-2.1,1.8,-6);
    glRotatef(270,1.0,0.0,0.0);
    glutSolidCone(2.2,2.0,50,50);
    glPopMatrix();
    //Mountain
    glColor3f(1.0,0.5,0.0);//OrangeColor
    glPushMatrix();
    glTranslated(2.0,1.8,-6);
    glRotatef(270,1.0,0.0,0.0);
    glutSolidCone(2.2,2.0,50,50);
    glPopMatrix();

    //House Body
    glColor3f(1.0,1.0,1.0);//WhiteColor
    glPushMatrix();
    glTranslated(2.0,-2.5,-10);
    glutSolidCube(2.5);
    glPopMatrix();
    //Window
    glColor3f(1.0,0.0,0.0);//OrangeColor
    glPushMatrix();
    glTranslated(2.8,-2.2,-10);
    glutSolidCube(0.5);
    glPopMatrix();
    //Window
    glColor3f(1.0,0.0,0.0);//OrangeColor
    glPushMatrix();
    glTranslated(1.2,-2.2,-10);
    glutSolidCube(0.5);
    glPopMatrix();
    //Roof
    glColor3f(1.0,0.0,0.0);//OrangeColor
    glPushMatrix();
    glTranslated(2.0,-1.5,-6);
    glRotatef(270,1.0,0.0,0.0);
    glutSolidCone(1.6,1.5,50,50);
    glPopMatrix();
    //Chimney
    glBegin(GL_QUADS);
    glVertex2f(3.2,0.22);
    glVertex2f(2.8,0.22);
    glVertex2f(2.8,-1.5);
    glVertex2f(3.2,-1.5);
    glEnd();

    //House Door
    glBegin(GL_QUADS);
    glVertex2f(2.3,-2.7);
    glVertex2f(1.7,-2.7);
    glVertex2f(1.7,-3.68);
    glVertex2f(2.3,-3.68);
    glEnd();

    //Smoke
    glColor3f(0.1,0.1,0.05);
    glPushMatrix();
    glTranslated(2.95,0.4,0.8);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(3.15,0.5,0.8);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.95,0.6,0.5);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.95,0.4,0.4);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.75,0.6,0.3);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();

    //Tree
    glColor3f(1.0f, 0.5f, 0.0f);
    glPushMatrix();
    glTranslated(-2.6,-1.75,-6);
    glRotatef(90,1.0,0.0,0.0);
    glutSolidTorus(0.2,0.25,25,25);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-2.6,-2.15,-6);
    glRotatef(90,1.0,0.0,0.0);
    glutSolidTorus(0.2,0.25,25,25);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-2.6,-2.55,-6);
    glRotatef(90,1.0,0.0,0.0);
    glutSolidTorus(0.2,0.25,25,25);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-2.6,-2.9,-6);
    glRotatef(90,1.0,0.0,0.0);
    glutSolidTorus(0.2,0.25,25,25);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-2.6,-3.25,-6);
    glRotatef(90,1.0,0.0,0.0);
    glutSolidTorus(0.2,0.25,25,25);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-2.6,-3.6,-6);
    glRotatef(90,1.0,0.0,0.0);
    glutSolidTorus(0.2,0.25,25,25);
    glPopMatrix();

    //Leaves
    glColor3d(0,1,0);
    glPushMatrix();
    glTranslated(-2.6,-1.7,-6);
    glRotatef(270,1.0,0.0,0.0);
    glutWireCone(1.2,1.75,50,50);
    glPopMatrix();

    glColor4f(1.0,0.0,1.0,0.0);
    glPushMatrix();
    glTranslated(-0.7,-3.4,-6);
    glutSolidTeapot(0.5);
    glPopMatrix();

    glutSwapBuffers();
}

void resize(int w, int h)
{

    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4.0,4.0,-4.0,4.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}



int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0.0,0.0);
    glutCreateWindow("Scenery");
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glClearColor(0.5,1,1,0);
    glutMainLoop();
    return 0;
}
