#include <stdio.h>
#include <string.h>

int main(void) {
	char title[51], score[3];

	float a,b, total=0.0,n=0.0;


	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", title, &a, score);
		if (strcmp(score,"A+")==0) {
			b = a * 4.5;
			n = n + a;
			total = total + b;

			
		}
		else if (strcmp(score, "A0") == 0) {
			b = a * 4.0;
			n = n + a;
			total = total + b;

		}
		else if (strcmp(score, "B+") == 0) {
			b = a * 3.5;
			n = n + a;
			total = total + b;
	
		}
		else if (strcmp(score, "B0") == 0) {
			b = a * 3.0;
			n = n + a;
			total = total + b;

		}
		else if (strcmp(score, "C+") == 0) {
			b = a * 2.5;
			n = n + a;
			total = total + b;

		}
		else if (strcmp(score, "C0") == 0) {
			b = a * 2.0;
			n = n + a;
			total = total + b;

		}
		else if (strcmp(score, "D+") == 0) {
			b = a * 1.5;
			n = n + a;
			total = total + b;
	
		}
		else if (strcmp(score, "D0") == 0) {
			b = a * 1.0;
			n = n + a;
			total = total + b;

		}
		else if (strcmp(score, "F") == 0) {
			b = a * 0.0;
			n = n + a;
			total = total + b;

		}

	}


	printf("%4f", total / n);







	return 0;
}