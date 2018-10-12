#include<stdio.h>
#include<stdlib.h>

int main(void) {

	char s1 = 'X';
	char s2 = '-';
	int i, j;
	int t1;
	int t2;

	printf("(1) \n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9)) {
				printf("%c", s1);
			}
			else { printf("%c", s2); }
		}
		printf("\n");
	}

	//===================================================

	printf("(2) \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || i == 1 || i == 2 || i == 8 || i == 7 || j == 0 || j == 9 || j == 1 || j == 2 || j == 8 || j == 7) {
				printf("%c", s1);
			}
			else { printf("%c", s2); }
		}
		printf("\n");
	}

	//-------------------------------------------------------

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

	//============================================================

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

	//==============================================================

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