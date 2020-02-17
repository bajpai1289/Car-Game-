#include <graphics.h>
#include<iostream>
using namespace std;  

// Function to draw moving car 
void draw_moving_car(void) 
{


	int i;
	i=0; 
	while(1){
		 setcolor(GREEN);
 setlinestyle(0,0,5);
 line(0,345,1000,345);
	
		setlinestyle(0,0,3);
		// Set color of car as red 
		setcolor(RED); 

		// Thease lines for bonnet and 
		// body of car 
		line(0 + i, 300, 210 + i, 300); 
		line(50 + i, 300, 75 + i, 270); 
		line(75 + i, 270, 150 + i, 270); 
		line(150 + i, 270, 165 + i, 300); 
		line(0 + i, 300, 0 + i, 330); 
		line(210 + i, 300, 210 + i, 330); 

		// For left wheel of car 
		circle(65 + i, 330, 15); 
		circle(65 + i, 330, 2); 

		// For right wheel of car 
		circle(145 + i, 330, 15); 
		circle(145 + i, 330, 2); 

		// Line left of left wheel 
		line(0 + i, 330, 50 + i, 330); 

		// Line middle of both wheel 
		line(80 + i, 330, 130 + i, 330); 

		// Line right of right wheel 
		line(210 + i, 330, 160 + i, 330); 

		delay(5); 

		// To erase previous drawn car, draw 
		// the whole car at same possition 
		// but color using black 
	/*	setcolor(BLACK); 
		
		// Lines for bonnet and body of car 
		line(0 + i, 300, 210 + i, 300); 
		line(50 + i, 300, 75 + i, 270); 
		line(75 + i, 270, 150 + i, 270); 
		line(150 + i, 270, 165 + i, 300); 
		line(0 + i, 300, 0 + i, 330); 
		line(210 + i, 300, 210 + i, 330); 

		// For left wheel of car 
		circle(65 + i, 330, 15); 
		circle(65 + i, 330, 2); 

		// For right wheel of car 
		circle(145 + i, 330, 15); 
		circle(145 + i, 330, 2); 

		// Line left of left wheel 
		line(0 + i, 330, 50 + i, 330); 

		// Line middle of both wheel 
		line(80 + i, 330, 130 + i, 330); 

		// Line right of right wheel 
		line(210 + i, 330, 160 + i, 330);*/

if(GetAsyncKeyState(VK_RIGHT))
{
	i=i+10;
	PlaySound("C:\\Users\\Abhishek Bajpai\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC);
}
if(GetAsyncKeyState(VK_LEFT))
{
	i=i-10;
	PlaySound("C:\\Users\\Abhishek Bajpai\\Downloads\\BMW+DRIVEBY.WAV", NULL, SND_ASYNC);
}
cleardevice();
}
} 

// Driver code 
int main() 
{
	initwindow(1000,1000,"2 Player Game",50,50);

	draw_moving_car();
	return 0; 
} 

