#include<stdio.h>
#include <string.h>
int main(){
	int k;
	char a[100], b[100];
	int n_Emperor = 0, n_Macaroni = 0, n_Little = 0;
	scanf("%d", &k);
	int i;
	for (i = 0; i < k; ++i) {
		scanf("%s %s", a, b);
		if (strcmp(a, "Emperor") == 0) {
			++n_Emperor;
		}
		else if (strcmp(a, "Macaroni") == 0) {
			++n_Macaroni;
		}
		else {
			++n_Little;
		}
	}
	int max = n_Emperor;
	if (n_Little > max) { max = n_Little; }
	if (n_Macaroni > max) { max = n_Macaroni; }
	if (max == n_Little) {
		printf("Little Penguin");
	}
	else if (max == n_Macaroni) {
		printf("Macaroni Penguin");
	}
	else {
		printf("Emperor Penguin");
	}
	return 0;
}
