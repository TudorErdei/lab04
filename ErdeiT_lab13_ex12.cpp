#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp, * fp2;
	char fis1[20], fis2[20];

	printf("Introduceti numele primului fisier: ");
	scanf("%s", &fis1);

	printf("\nIntroduceti numele celui de al doilea fisier: ");
	scanf("%s", &fis2);

	int n, rest, nrbin = 0, multiplier = 1;

	fp = fopen(fis1, "w");

	printf("\nIntroduceti 8 numere intregi care vor fi scrise in primul fisier: ");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &n);

		while (n) {
			rest = n % 2;
			nrbin = nrbin + rest * multiplier;
			multiplier *= 10;
			n /= 2;
		}
		fprintf(fp, "%d ", n);
	}

	printf("\nNumerele au fost inserate cu succes in fisierul %s!", fis1);

	fclose(fp);
}