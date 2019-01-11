/*
Program		: Project
Author		: Md. Ashraful Islam
Algorithm	:
Date		:
Status		:
*/

#include <stdio.h>
#include <windows.h>
#include <gl/glut.h>
#include <math.h>
#include <ctime>
#include <conio.h>
#define WIDTH 1366
#define HEIGHT 700
int stack[100], head=-1,decision=0;
int k=-1,kk=3,row=0, column=0,t=1;
int count=0,count2=0,ab=-300,bn=300,turnp=310,turnq=-500,ba1=0,ba2=-150, ba3=150,ba=-300,ba4=-300;
int a[10][10]={0};
int w=WIDTH,h=HEIGHT;
GLfloat yang = 0.2;
double r=0.1,g=0.8,b=0.3;
 GLfloat p,q   = 0.5;
void *font = GLUT_BITMAP_HELVETICA_18  ;
int Random()
{
	return int (rand() * clock() + 1);
}
double ran()
{
	int r;
	r=Random()%101;
	double rr;
	rr=r*1.0;
	return rr/100;
}
void drawPixel(int x,int y) {
	glVertex2i(x,y);
}
void movingcircle()
{
    ba++;
    ba1++;
    ba2++;
    ba3++;
	if(ba==300) ba=-300;
	if(ba1==300) ba1=-300;
	if(ba2==300) ba2=-300;
	if(ba3==300) ba3=-300;
	glPushMatrix();
	glBegin(GL_POINTS);
int ii, jj;
for(ii=-350;ii<-250;ii++)
				for(jj=ba-sqrt(24*24-(ii-ab)*(ii-ab));jj<=ba+sqrt(24*24-(ii-ab)*(ii-ab));jj++)
				{
					glColor3f(0.0,1.0,0.0);
                    drawPixel(jj*-1,ii*-1);
                    drawPixel(jj,ii);
                    drawPixel(ii,jj*-1);
                    drawPixel(ii*-1,jj);
					glColor3f(1.0,0.0,0.0);
					drawPixel(jj*-1,ii);
					drawPixel(jj,ii*-1);
                    drawPixel(ii,jj);
                    drawPixel(ii*-1,jj*-1);


				}
for(ii=-350;ii<-250;ii++)
				for(jj=ba1-sqrt(24*24-(ii-ab)*(ii-ab));jj<=ba1+sqrt(24*24-(ii-ab)*(ii-ab));jj++)
				{
					glColor3f(0.0,1.0,0.0);
                    drawPixel(jj*-1,ii*-1);
                    drawPixel(jj,ii);
                    drawPixel(ii,jj*-1);
                    drawPixel(ii*-1,jj);
					glColor3f(1.0,0.0,0.0);
					drawPixel(jj*-1,ii);
					drawPixel(jj,ii*-1);
                    drawPixel(ii,jj);
                    drawPixel(ii*-1,jj*-1);

				}
for(ii=-350;ii<-250;ii++)
				for(jj=ba2-sqrt(24*24-(ii-ab)*(ii-ab));jj<=ba2+sqrt(24*24-(ii-ab)*(ii-ab));jj++)
				{
					glColor3f(0.0,1.0,0.0);
                    drawPixel(jj*-1,ii*-1);
                    drawPixel(jj,ii);
                    drawPixel(ii,jj*-1);
                    drawPixel(ii*-1,jj);
					glColor3f(1.0,0.0,0.0);
					drawPixel(jj*-1,ii);
					drawPixel(jj,ii*-1);
                    drawPixel(ii,jj);
                    drawPixel(ii*-1,jj*-1);

				}
for(ii=-350;ii<-250;ii++)
				for(jj=ba3-sqrt(24*24-(ii-ab)*(ii-ab));jj<=ba3+sqrt(24*24-(ii-ab)*(ii-ab));jj++)
				{
					glColor3f(0.0,1.0,0.0);
                    drawPixel(jj*-1,ii*-1);
                    drawPixel(jj,ii);
                    drawPixel(ii,jj*-1);
                    drawPixel(ii*-1,jj);
					glColor3f(1.0,0.0,0.0);
					drawPixel(jj*-1,ii);
					drawPixel(jj,ii*-1);
                    drawPixel(ii,jj);
                    drawPixel(ii*-1,jj*-1);

				}
					glEnd();
		glPopMatrix();
}
void firstfunc()
{

	count++;
	int i;
	if(count==2140000000) count=0;
	if(count%1000==0)
	{
		 r=ran();
		 g=ran();
		 b=ran();

	}
	char st[100];
	glClearColor(r,g,b,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
		glPushMatrix();
		glColor3f(1-r,1-g,1-b);
		glRasterPos2f(-100,40);
		strcpy(st,"Chip Game, The Puzzle");
		for(i = 0;st[i];i++)
			glutBitmapCharacter(font, st[i]);
			glRasterPos2f(-100,0);
		strcpy(st,"Press any key to continue");
		for(i = 0;st[i];i++)
			glutBitmapCharacter(font, st[i]);
		glPopMatrix();

        movingcircle();
}


void endfunc()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	ba4=ba4+4;
	if(ba4>=300) ba4=-300;
	int i;
	char st[100];
	glClear(GL_COLOR_BUFFER_BIT);
		glPushMatrix();
		glColor3f(1.0,0.85, 0.0);
		glRasterPos2f(-100,40);
		strcpy(st,"Congratulation!!!!");
		for(i = 0;st[i];i++)
			glutBitmapCharacter(font, st[i]);
			glRasterPos2f(-100,0);
		strcpy(st,"Winner Player 1");
		if(kk==2) strcpy(st,"Winner Player 2");
		for(i = 0;st[i];i++)
			glutBitmapCharacter(font, st[i]);
		glPopMatrix();
		glPushMatrix();
	glBegin(GL_POINTS);
		if(kk==2)
			glColor3f(0.0,1.0,0.0);
		else glColor3f(1.0,0.0,0.0);
int ii, jj;
for(ii=-350;ii<-250;ii++)
				for(jj=ba4-sqrt(24*24-(ii-ab)*(ii-ab));jj<=ba4+sqrt(24*24-(ii-ab)*(ii-ab));jj++)
				{
					drawPixel(ii,jj);
					drawPixel(ii*-1,jj);
					drawPixel(ii,jj*-1);
					drawPixel(ii*-1,jj*-1);
					drawPixel(jj,ii);
					drawPixel(jj*-1,ii);
					drawPixel(jj,ii*-1);
					drawPixel(jj*-1,ii*-1);
				}
					glEnd();
		glPopMatrix();

}



void checkformat(int i, int j)
{
	int horcheck=1, vercheck=1, dia1check=1, dia2check=1, ii, jj;

	for(ii=i+1;ii<10;ii++)
	{
	if(a[ii][j]!=kk) break;
	horcheck++;
	}
	for(ii=i-1;ii>=0;ii--)
	{
	if(a[ii][j]!=kk) break;
	horcheck++;
	}

	for(jj=j+1;jj<10;jj++)
	{
		if(a[i][jj]!=kk) break;
		vercheck++;
	}
for(jj=j-1;jj>=0;jj--)
	{
		if(a[i][jj]!=kk) break;
		vercheck++;
	}
for(ii=i+1,jj=j+1;ii<10&&jj<10;ii++,jj++)
{
	if(a[ii][jj]!=kk) break;
	dia1check++;
}
for(ii=i-1,jj=j-1;ii>=0&&jj>=0;ii--,jj--)
{
	if(a[ii][jj]!=kk) break;
	dia1check++;
}
for(ii=i+1, jj=j-1;ii<10&&jj>=0;ii++,jj--)
{
	if(a[ii][jj]!=kk) break;
	dia2check++;
}
for(ii=i-1, jj=j+1;ii>=0&&jj<10;ii--,jj++)
{
	if(a[ii][jj]!=kk) break;
	dia2check++;
}
if((horcheck>=4 || vercheck>=4 || dia1check>=4 || dia2check>=4) && j<10)
{
	decision=1;
	endfunc();
}

}
void MouseMotion(int button, int state, int x, int y)
{
if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
{
	if(k==-1) k=0;
	else
	{
		x=x-w/2;
	y=h/2-y;
	double y1,x1=(w*1.0)/5.464;
	y1=(1.0*h)/2.8;
	int yy,xx=x1;
	yy=y1;
	if(x>=-1*xx && x<=xx && y>=-1*yy && y<=yy)
	{
		bn=300;
		int ii, jj;
		for(ii=0;ii<10;ii++)
		{
			for(jj=0;jj<10;jj++)
			{
				if(a[ii][jj]==3) a[ii][jj]=1;
				if(a[ii][jj]==4) a[ii][jj]=2;
			}
		}
		head++;
		k++;
		double id= ((x*1.0+(w*1.0)/5.464))/((w*1.0)/27.32);
		int i=id,j;
		stack[head]=i;
		for(j=0;j<10;j++)
{
	if(a[i][j]==0)
	{
		if(k%2==1)
		a[i][j]=3;
		else a[i][j]=4;
		break;
	}
}
if(j==10)
{
	 k--;
	 head--;
}
kk=k%2;
if(kk==0) kk=2;
row=i;
column=j;

	}
	}
}

}


void keyboard(unsigned char key, int x, int y)
 {
	int kb=kbhit();
if (key == 27) exit (0); /* escape key */
else if(k==-1 && kb==0) k=0;
else if(key >=48 && key <=57)
{
	bn=300;
		int ii, jj;
		for(ii=0;ii<10;ii++)
		{
			for(jj=0;jj<10;jj++)
			{
				if(a[ii][jj]==3) a[ii][jj]=1;
				if(a[ii][jj]==4) a[ii][jj]=2;
			}
		}
	k++;
	head++;
int i=key-48,j;
stack[head]=i;
for(j=0;j<10;j++)
{
	if(a[i][j]==0)
	{
		if(k%2==1)
		a[i][j]=3;
		else a[i][j]=4;
		break;
	}
}
if(j==10)
{
	k--;
	head--;
}
kk=k%2;
if(kk==0) kk=2;
row=i;
column=j;
}

}

void reshape(int width, int height)
{
	glViewport(0,0,width, height);
	w=width;
	h=height;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-WIDTH/2, WIDTH/2-1, -HEIGHT/2, HEIGHT/2-1,-1000,1000);
	glClearColor(1.0,1.0,1.0,1.0);
}




void display(void)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// Start Your work
	if(k==-1)
		firstfunc();
	else if(k==100)
	{
		char stt[100];
		int im;
		glPushMatrix();
			glColor3f(1.0,1.0,0.0);
		glRasterPos2f(-50, 20);
			strcpy(stt,"Game Draw!!!!");
		for(im = 0;stt[im];im++)
			glutBitmapCharacter(font, stt[im]);
		glPopMatrix();

		movingcircle();
	}
	else
	{

		glClearColor(0.50,0.5,0.9,1.0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		char str[1000];
		int ik;
		glPushMatrix();
		if(k%2==1)	glColor3f(0.0, 1.0, 0.0);
		else glColor3f(1.0, 0.0, 0.0);
		char ch='0';
		for(ik=-240;ik<=240;ik=ik+50)
		{
		    glRasterPos2f(ik,-290);
		    glutBitmapCharacter(font,ch);
		    ch++;
		}
		if(turnq==-500 && turnp>-310)
		{
			glRasterPos2f(turnq,turnp);
			turnp-=2;
			if(k%2==1) strcpy(str,"Now time for Player 2");
			else strcpy(str,"Now time for Player 1");
				for(ik = 0;str[ik];ik++)
				glutBitmapCharacter(font, str[ik]);
		}
		else if(turnp==-310 && turnq<300)
		{
			glRasterPos2f(turnq,turnp);
			turnq+=2;

			if(k%2==1) strcpy(str,"Now time for Player 2");
			else strcpy(str,"Now time for Player 1");
				for(ik = 0;str[ik];ik++)
				glutBitmapCharacter(font, str[ik]);
		}
		else if(turnq==300 && turnp<310)
		{
			glRasterPos2f(turnq,turnp);
			turnp+=2;
			if(k%2==1) strcpy(str,"Now time for Player 2");
			else strcpy(str,"Now time for Player 1");
				for(ik = 0;str[ik];ik++)
				glutBitmapCharacter(font, str[ik]);
		}
		else if(turnp==310 && turnq>-500)
		{
			glRasterPos2f(turnq,turnp);
			turnq-=2;

			if(k%2==1) strcpy(str,"Now time for Player 2");
			else strcpy(str,"Now time for Player 1");
				for(ik = 0;str[ik];ik++)
				glutBitmapCharacter(font, str[ik]);
		}
		int bi, bj;
			glBegin(GL_POINTS);
		for(bi=-260;bi<=260;bi++)
		{
			for(bj=-260;bj<=260;bj++)
			{
				if(!((bi>-250 && bi<250) && (bj>-250 && bj<250)))
				{
				    if(k%2==0) glColor3f(1.0,0.078,0.576);
					else	glColor3f(0.482,0.984,0.0);
					drawPixel(bi,bj);
				}
			}
		}
		glEnd();

		glPopMatrix();

	int i,ii, jj,j;
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	{
			glBegin(GL_POINTS);
		if(a[i][j]==0 || a[i][j]==3 || a[i][j]==4)
		{
		int aa,bb;
		    aa=50*i-225;
		    bb=50*j-225;

				for(ii=i*50-250;ii<i*50-201;ii++)
            for(jj=j*50-250;jj<j*50-201;jj++)
            {

                if(jj<bb-sqrt(24*24-(ii-aa)*(ii-aa))||jj>bb+sqrt(24*24-(ii-aa)*(ii-aa)))
                {
					glColor3f(0.2,0.2,1.0);
                    drawPixel(ii,jj);
                }
            }
		}
		glEnd();
		glBegin(GL_POINTS);
		//animation
			if(a[i][j]==3 || a[i][j]==4)
			{
				bn=bn-15;

				  int aa,bb,ii,jj;
		       aa=50*i-225;
		       bb=50*j-225;
			   if(bn<bb) bn=bb;
			   for(ii=i*50-250;ii<i*50-201;ii++)
				for(jj=bn-sqrt(24*24-(ii-aa)*(ii-aa));jj<=bn+sqrt(24*24-(ii-aa)*(ii-aa));jj++)
				{
					if(a[i][j]==3) glColor3f(1.0,0.0,0.0);
					else glColor3f(0.0,1.0,0.0);
					drawPixel(ii,jj);
				}

			}

		glEnd();
		glBegin(GL_POINTS);
	if(a[i][j]==1)
		{
		    int aa,bb;
		    aa=50*i-225;
		    bb=50*j-225;

			glColor3f(1.0, 0.0,0.0);
			for(ii=i*50-250;ii<i*50-201;ii++)
				for(jj=bb-sqrt(24*24-(ii-aa)*(ii-aa));jj<=bb+sqrt(24*24-(ii-aa)*(ii-aa));jj++)
				drawPixel(ii,jj);
            for(ii=i*50-250;ii<i*50-201;ii++)
            for(jj=j*50-250;jj<j*50-201;jj++)
            {

                if(jj<bb-sqrt(24*24-(ii-aa)*(ii-aa))||jj>bb+sqrt(24*24-(ii-aa)*(ii-aa)))
                {
                      glColor3f(0.2,0.2,1.0);
                    drawPixel(ii,jj);
                }
            }
		}
	if(a[i][j]==2)
		{
            int aa,bb;
		    aa=50*i-225;
		    bb=50*j-225;
			glColor3f(0.0, 1.0,0.0);
			for(ii=i*50-250;ii<i*50-201;ii++)
				for(jj=bb-sqrt(24*24-(ii-aa)*(ii-aa));jj<=bb+sqrt(24*24-(ii-aa)*(ii-aa));jj++)
				drawPixel(ii,jj);
				for(ii=i*50-250;ii<i*50-201;ii++)
            for(jj=j*50-250;jj<j*50-201;jj++)
            {

                if(jj<bb-sqrt(24*24-(ii-aa)*(ii-aa))||jj>bb+sqrt(24*24-(ii-aa)*(ii-aa)))
                {
					glColor3f(0.2,0.2,1.0);
                    drawPixel(ii,jj);
                }
            }
		}
	for(ii=260;ii<300;ii++)
		for(jj=260;jj<300;jj++)
		{
			if(k%2==1) glColor3f(0.0,1.0,0.0);
			else glColor3f(1.0,0.0,0.0);
			drawPixel(ii,jj);
		}

	}
	//drawPixel(0,0);

	// End your work

	glEnd();
	glPushMatrix();
	checkformat(row, column);
	glPopMatrix();
	}
	glutSwapBuffers();
}
void newGame(int option)
{
	int i, j,temp;
	if(option==1)
	{
		if(head>=0)
		{
			temp=stack[head];
			for(j=0;j<10;j++)
		{
			if(a[temp][j]==0)
			{
				a[temp][j-1]=0;
				k--;
				head--;
				break;
			}
		}
		if(j==10)
		{
			a[temp][j-1]=0;
			k--;
			head--;
		}
		}
	}

	else if(option==2)
	{
		for(i=0;i<10;i++)
			for(j=0;j<10;j++)
				a[i][j]=0;
				k=-1;
				head=-1;
				decision=0;
	}


}



int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowPosition(-1,-1);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("Chip Game, The Puzzle");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutCreateMenu(newGame);
	glutAddMenuEntry("Undo", 1);
	glutAddMenuEntry("New Game", 2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutIdleFunc(display);
	  glutMouseFunc(MouseMotion);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
