#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int arr[50];
	srand(time(NULL));
	int i;
	for(i=0;i<15;i++) {
			for(i=0; i< 15; i++) {
				int random = 2 + rand() % 100;
			printf("A[%d] = %d\n",i,random);
		}
	}
	return 0;
}
