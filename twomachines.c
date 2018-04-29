#include<stdio.h>

int main () {
	int arrival = 0, before_a = 0, before_b = 0, task = 1;
	
	while(scanf("%d", &arrival) != EOF) {
		
		int a, b; scanf("%d%d", &a, &b);

		if(task == 1) {
			arrival += a;
			before_a = arrival;
			arrival += b;
			before_b = arrival;

		}
		else {
			if(arrival < before_a) arrival = before_a;
			
			arrival += a; 
			before_a = arrival;

			if(arrival < before_b) arrival = before_b;
			
			arrival += b;
			before_b = arrival;
		}
		printf("%d\n", arrival);
		task++;
	}
	return 0;
}

// arrival : untuk mencatat completion time
//before_a : untuk mencatat time A di task sebelumnya
//before_ b : untuk mencatat time B di task sebelumnya
//untuk task 1 : you only have to do it normally, without any rules
//untuk task > 1 : you have to check whether the arrival time < before_a || time arrival < before_b
//after that, you memorize the task's a time and the task's b time  so that you still keep a track for the next task.