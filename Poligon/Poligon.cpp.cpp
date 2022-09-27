#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void);
void draw(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("line");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 150, 150);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);

    glColor3f(255, 255, 0);
    //garis 1
    glVertex3f(2.0,2.0,0.0);
    //garis 2
    glVertex3f(9.0,2.0,0.0);
    //garis 3
    glVertex3f(2.0,9.0,0.0);

    glEnd();

    glutSwapBuffers();
}
