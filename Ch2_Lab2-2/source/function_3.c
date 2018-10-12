#include<stdio.h>
#include<stdlib.h>

int Han_Xin_3() {

	char s1 = 'X';
	char s2 = '-';
	int i, j;
	int t1;
	int t2;


	t1 = 4;
	t2 = 5;

	printf("(3) \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if ((i < 5) && (j == t1)) { printf("%c", s1); t1--; }
			else if ((i < 5) && (j == t2)) {
				printf("%c", s1);
			}
			else if (i == 4) {
				printf("%c", s1);
			}
			else { printf("%c", s2); }
		}
		t2++;
		printf("\n");
	}
}