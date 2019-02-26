#include<GL/gl.h>
#include<GL/glut.h>
#include<GL/glu.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //Grass
    glColor3f(0.0f, 1.0f, 0.0f);//Green
    glPushMatrix();
    glTranslated(-1.0,-2.5,-10);
    glScalef(6,2.5,1);
    glutSolidCube(2.0);
    glPopMatrix();

    //Road
    glColor3f(0.1f, 0.1f, 0.0f);
    glPushMatrix();
    glTranslated(-1.0,-2.5,-10);
    glScalef(6,1,1);
    glutSolidCube(2.0);
    glPopMatrix();

    //Road Line
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(-4.0,-2.5,0.0);
    glVertex3f(4.0,-2.5,0.0);
    glEnd();

    //Car Body
    glColor3f(1.0,0.0,0.0);//RED
    glBegin(GL_POLYGON);
    glVertex3f(-2.3,-2.4,0.0);
    glVertex3f(-2.3,-1.3,0.0);
    glVertex3f(-1.5,-0.48,0.0);
    glVertex3f(1.7,-0.48,0.0);
    glVertex3f(1.7,-2.4,0.0);
    glEnd();

    //Door Knob
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslated(-1.5,-1.6,-6);
    glutSolidSphere(0.08,50,50);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslated(-1.5,-1.6,-6);
    glutSolidSphere(0.03,50,50);
    glPopMatrix();

    //Windows
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_TRIANGLES);
    glVertex3f(-1.5,-1.3,0.0);
    glVertex3f(-2.3,-1.3,0.0);
    glVertex3f(-1.5,-0.48,0.0);
    glEnd();

    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
    glVertex3f(-1.25,-1.3,0.0);
    glVertex3f(-1.25,-0.52,0.0);
    glVertex3f(-0.45,-0.52,0.0);
    glVertex3f(-0.45,-1.3,0.0);
    glEnd();

    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
    glVertex3f(-0.2,-1.3,0.0);
    glVertex3f(-0.2,-0.52,0.0);
    glVertex3f(0.6,-0.52,0.0);
    glVertex3f(0.6,-1.3,0.0);
    glEnd();

    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
    glVertex3f(0.85,-1.3,0.0);
    glVertex3f(0.85,-0.52,0.0);
    glVertex3f(1.6,-0.52,0.0);
    glVertex3f(1.6,-1.3,0.0);
    glEnd();

    //Wheel
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslated(-1.5,-2.5,-6);
    glutSolidSphere(0.4,50,50);
    glPopMatrix();

    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslated(-1.5,-2.5,-6);
    glutSolidSphere(0.35,50,50);
    glPopMatrix();

    //Wheel
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslated(1.0,-2.5,-6);
    glutSolidSphere(0.4,50,50);
    glPopMatrix();

    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslated(1.0,-2.5,-6);
    glutSolidSphere(0.35,50,50);
    glPopMatrix();

    //Smoke
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslated(2.25,-2.40,10.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.19,-2.4,0.8);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.5,-2.35,0.5);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.28,-2.25,0.4);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
    glPopMatrix();
    glPushMatrix();
    glTranslated(2.15,-2.30,0.3);
    glRotatef(45,1.0,0.0,0.0);
    glutSolidSphere(0.15,50,50);
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
