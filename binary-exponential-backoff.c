// beb
#include <stdio.h>
#include <time.h>
#include <unistd.h>
// two computers

#ifndef N
 #define N 2
#endif

#define TT 0.1 // transmission time = 0.1s

// TO-DO: add frame model

struct User
{
	// int id;
	double waiting_time = 0.0;
};

typedef struct User UserType;

int main() {
	// compute average delay
	UserType user[N]; // N number of users
	double time_spent = 0.0;
	clock_t start, end;

	int turn;
	while (1) {
		turn = (int) rand() % 2;// 
		start = clock();
		if (turn==0) {
			user[1].waiting_time += (double) (clock()-start)/CLOCK_PER_SEC;
		} else {
			user[0].waiting_time += (double) (clock()-start)/CLOCK_PER_SEC;
		}
	}
	return 0;
}