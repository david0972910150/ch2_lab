#include<stdio.h>
#include<stdlib.h>



	
int Han_Xin_4() {

	char s1 = 'X';
	char s2 = '-';
	int i, j;
	int t1;
	int t2;


	t1 = 1;
	t2 = 8;

	printf("(4) \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if ((i > 0) && (i < 5) && (j == t1)) {
				printf("%c", s1);
			}
			else if ((i > 0) && (i < 5) && (j == t2)) {
				t1++;
				printf("%c", s1);
				t2--;
			}
			else if (i == 0) {
				printf("%c", s1);
			}
			else printf("%c", s2);

		}
		printf("\n");
	}

}