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
    glClearColor(0.0, 0.0, 153, 153);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(4.0);
    glBegin(GL_POINTS);

    glColor3f(128, 0, 255); // color titik 1
    glVertex3f(4.0, 2.5, 0.0); // koordinat titik 1
    glColor3f(255, 255, 0.0); // color titik 2
    glVertex3f(5.0, 2.5, 0.0); // koordinat titik 2
    glColor3f(0.0, 255, 0.0); // color titik 3
    glVertex3f(6.0, 2.5, 0.0); // koordinat titik 3
    glColor3f(2.0, 3.0, 191); // color titik 4
    glVertex3f(4.0, 4.0, 0.0); // koordinat titik 4
    glColor3f(0, 255, 255); // color titik 5
    glVertex3f(5.0, 4.0, 0.0); // koordinat titik 5
    glColor3f(255, 0.0, 128); // color titik 6
    glVertex3f(6.0, 4.0, 0.0); // koordinat titik 6

    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(255,0.0,191);

    //Garis 1
    glVertex3f(2.0,2.0,0.0);
    glVertex3f(9.0,2.0,0.0);
    //Garis 2
    glVertex3f(9.0,2.0,0.0);
    glVertex3f(2.0,9.0,0.0);
    //Garis 3
    glVertex3f(2.0,9.0,0.0);
    glVertex3f(2.0,2.0,0.0);



    glEnd();

    glutSwapBuffers();
}
