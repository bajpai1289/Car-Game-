#include <dos.h>
#include <graphics.h>

union REGS in, out;
void showmouse_graphics ()
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	in.x.ax = 1;
	int86 (0X33,&in,&out);
	getch ();
	closegraph ();
}

int main ()
{
	detect_mouse ();
	showmouse_graphics ();
	getch ();
	return 0;
}
