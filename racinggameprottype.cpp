#include <graphics.h> 
#include <stdio.h> 

// Function to draw moving car 
void draw_moving_car_player1(void) 
{ 

	int i, j = 0; 

	for (i; i <= 1000; i = i + 10) { 

		setcolor(RED); 
		setlinestyle(0,0,2);

		// Thease lines for bonnet and body of car 
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
		//---to clear the view print of car1:----
		setcolor(BLACK); 
		setlinestyle(0,0,2);

		// Thease lines for bonnet and body of car 
		line(-10+i, 300, 200 + i, 300); 
		line(40 + i, 300, 65 + i, 270); 
		line(65 + i, 270, 140 + i, 270); 
		line(140 + i, 270, 155 + i, 300); 
		line(-10 + i, 300, -10 + i, 330); 
		line(200 + i, 300, 200 + i, 330); 

		// For left wheel of car 
		circle(55 + i, 330, 15); 
		circle(55 + i, 330, 2); 

		// For right wheel of car 
		circle(135 + i, 330, 15); 
		circle(135 + i, 330, 2); 

		// Line left of left wheel 
		line(-10 + i, 330, 40 + i, 330); 

		// Line middle of both wheel 
		line(70 + i, 330, 120 + i, 330); 

		// Line right of right wheel 
		line(200 + i, 330, 150 + i, 330);  
	//---------------------end for player 1------------------
	
		//car for player no 2
		setcolor(BLUE); 
		setlinestyle(0,0,2);

		// Thease lines for bonnet and body of car 
		line(0 + j, 600, 210 + j, 600); 
		line(50 + j, 600, 75 + j, 570); 
		line(75 + j, 570, 150 +j, 570); 
		line(150 + j, 570, 165 + j, 600); 
		line(0 + j, 600, 0 + j, 630); 
		line(210 + j, 600, 210 + j, 630); 

		// For left wheel of car 
		circle(65 + j, 630, 15); 
		circle(65 + j, 630, 2); 

		// For right wheel of car 
		circle(145 + j, 630, 15); 
		circle(145 + j, 630, 2); 

		// Line left of left wheel 
		line(0 + j, 630, 50 + j, 630); 

		// Line middle of both wheel 
		line(80 + j, 630, 130 + j, 630); 

		// Line right of right wheel 
		line(210 + j, 630, 160 + j, 630);
		
		//---to remove the red print for player no 2--- 
		setcolor(BLACK); 
		setlinestyle(0,0,2);

		// Thease lines for bonnet and body of car 
		line(-10 + j, 600, 200 + j, 600); 
		line(40+ j, 600, 75 + j, 570); 
		line(75 + j, 570, 150 +j, 570); 
		line(150 + j, 570, 165 + j, 600); 
		line(0 + j, 600, 0 + j, 630); 
		line(210 + j, 600, 210 + j, 630); 

		// For left wheel of car 
		circle(65 + j, 630, 15); 
		circle(65 + j, 630, 2); 

		// For right wheel of car 
		circle(145 + j, 630, 15); 
		circle(145 + j, 630, 2); 

		// Line left of left wheel 
		line(0 + j, 630, 50 + j, 630); 

		// Line middle of both wheel 
		line(80 + j, 630, 130 + j, 630); 

		// Line right of right wheel 
		line(210 + j, 630, 160 + j, 630); 
		j++;
		delay(100);

	} 
	getch();
}
/*	for (i = 0; i <= 1000; i = i + 10) { 

		setcolor(BLUE); 
		setlinestyle(0,0,2);

		// Thease lines for bonnet and body of car 
		line(0 + i, 600, 210 + i, 600); 
		line(50 + i, 600, 75 + i, 570); 
		line(75 + i, 570, 150 + i, 570); 
		line(150 + i, 570, 165 + i, 600); 
		line(0 + i, 600, 0 + i, 630); 
		line(210 + i, 600, 210 + i, 630); 

		// For left wheel of car 
		circle(65 + i, 630, 15); 
		circle(65 + i, 630, 2); 

		// For right wheel of car 
		circle(145 + i, 630, 15); 
		circle(145 + i, 630, 2); 

		// Line left of left wheel 
		line(0 + i, 630, 50 + i, 630); 

		// Line middle of both wheel 
		line(80 + i, 630, 130 + i, 630); 

		// Line right of right wheel 
		line(210 + i, 630, 160 + i, 630); 

		delay(100); 
		clearviewport(); 
	} 

	getch(); 

 
} */
int main(void)
{
	initwindow(1000,1000,"2 Finger Racing", 50);
	draw_moving_car_player1();
}

