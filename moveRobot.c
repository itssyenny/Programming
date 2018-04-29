#include<stdio.h>

int w,h;

int checkMoving(int n, int x, int y) {
	if(n%5 == 0) return 0;
	//count the future's movement.
	if(n%5 == 1) x += n;
	if(n%5 == 2) x -= n;
	if(n%5 == 3) y += n;
	if(n%5 == 4) y -= n;
	if(x < 0 || x >= w) return 0;
	if(y < 0 || y >= h) return 0;
	else return 1;
}
int main () {
	scanf("%d%d", &w, &h);

	int instruction, x = 0, y = 0;
	printf("%d\n%d\n",x,y);

	while(scanf("%d", &instruction) != EOF) {

		if(checkMoving(instruction,x,y) == 1) {
			if(instruction%5 == 1) x += instruction;
			else if(instruction%5 == 2) x -= instruction;
			else if(instruction%5 == 3) y += instruction;
			else if(instruction%5 == 4) y -= instruction;

			if((x >= 0 && x < w) && (y >= 0 && y < h)) printf("%d\n%d\n", x,y);
		}
		
	}
	return 0;
}

/*
0,0
1,0
1,3
7,3
0,3
0,11
*/