/*
 *Developed using vim text editor
 *VIM - Vi IMproved 7.3
 * Compile using gcc ( version 4.6.1 was used for this code )
 * Command to compile : gcc -o cup3 cup3.c
 * Usage: ./cup3 < INPUTFILE > OUTPUTFILE
 * */
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int t,p, a[8], ctr;
	char ch;
	int j;
	scanf("%d", &t);	//hackerup make h2 half
	while (t--) {
		for (j = 0; j < 8; j++)
			a[j] = 0;
		scanf("%d", &p);
		ch = 'A';
		ctr++;
		while (ch != '\n') {
			scanf("%c", &ch);
			switch (ch) {
			case 'H':
				++a[0];
				break;
			case 'A':
				++a[1];
				break;
			case 'C':
				++a[2];
				break;
			case 'K':
				++a[3];
				break;
			case 'E':
				++a[4];
				break;
			case 'R':
				++a[5];
				break;
			case 'U':
				++a[6];
				break;
			case 'P':
				++a[7];
				break;
			}

		}

//printf("%d %d %d %d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
		a[2] /= 2;
		int i;
		int result = a[0];
		for (i = 1; i < 8; i++) {
			if (!a[i]) {
				result = 0;
				break;
			} else if (a[i] < result)
				result = a[i];
		}
//printf("%d %d %d %d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
		printf("Case #%d: %d\n", ctr, result);
	}
	return 0;
}
