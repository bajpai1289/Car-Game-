#include<graphics.h>
#include<iostream>
#include<windows.h>
using namespace std;
int main(void)
{
	int x,y;
	initwindow(600,600);
	POINT cursorposition;
	while(1){
	GetCursorPos(&cursorposition);
	circle(cursorposition.x,cursorposition.y,10);
	delay(50);
}
	
	getch();
}
