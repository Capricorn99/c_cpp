#include <stdio.h>

int Tong_S(int n);
void Day_so(int start, int end, int step);

// int main() {
// 	// printf("Out: %d\n", Tong_S(1000));
// 	Day_so(20, 1, 3);
// 	return (0);
// }

int Tong_S(int n) {
	// int c = 0;
	// for (int i=1; i<=n; i++ ) {
	// 	c +=i;
	// }
	// return c;
	return n*(n+1)/2;
}

void Day_so(int start, int end, int step) {
	if (start < end) {
		for(int i = start; i<=end; i+=step) {
			printf(" %d", i);
		}
	}
	else {
		for(int i = start; i>=end; i-=step) {
			printf(" %d", i);
		}	
	}
	printf("\n");
}