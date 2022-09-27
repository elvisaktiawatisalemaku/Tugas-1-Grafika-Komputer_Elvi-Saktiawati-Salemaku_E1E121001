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
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,20.0,0.0,10.0,-20.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5.0);
    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);   //Warna Merah
    glVertex3f(2.0, 5.0, 0.0);  // Koordinat Titik 1
    glVertex3f(8.0, 5.0, 0.0);  // Koordinat Titik 2

    glEnd();

    glutSwapBuffers();
}
