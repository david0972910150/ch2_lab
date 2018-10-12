#include<stdio.h>
#include<stdlib.h>




int Han_Xin_5() {

	char s1 = 'X';
	char s2 = '-';
	int i, j;
	int t1;
	int t2;

	t1 = 9;
	printf("(5) \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == j)  printf("%c", s1);
			else if (j == t1) {
				printf("%c", s1);
				t1--;
			}

			else {
				printf("%c", s2);
			}


		}
		printf("\n");
	}
	system("pause");
	return 0;
}