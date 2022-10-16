#include<stdio.h>

int main() {
	int i, j, k, n, l, s, c;
	while (scanf("%d", &n) == 1) {
		l = 2 * n - 1;
		s = l;
		c = 0;
		for (j = 0; j < n; j++) {
			for (k = c; k > 0; k--) {
				printf(" ");
			}
			c++;
			for (i = 0; i < s; i++) {
				printf("*");
			}
			printf("\n");
			s = s - 2;
		}
		s = s + 2;
		for (j = 0; j < n - 1; j++) {
			for (k = c - 2; k > 0; k--) {
				printf(" ");
			}
			c--;
			s = s + 2;
			for (i = 0; i < s; i++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
