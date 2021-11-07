#include <stdio.h>
#define MAX_NIZ 20

int main () {
 
	int niz[MAX_NIZ], n=0, temp=0;

	do {
	printf("Uneti broj elemenata niza (n>0 i n<21)\n");
	scanf("%d", &n);
	}
	while (n<1 || n > 20);
	
	for (int i=0; i<n; i++) {
	printf("Uneti %d. element niza \n", i+1);
	scanf("%d", &niz[i]);	
	
	}

	for (int i=0; i<n; i++){
		
	for (int j=i+1; j<n; j++) {

		if (niz[j]>niz[i]) {
		temp = niz[j];
		niz[j] = niz [i];
		niz [i] = temp; 

		}
	}

	}

	printf("A [");
	for (int i=0; i<n; i++) {

	
	if (i==n-1) {
	printf("%d", niz[i]);
	}
	else
	printf("%d, ", niz[i]); 
	}
	printf("]");





}
