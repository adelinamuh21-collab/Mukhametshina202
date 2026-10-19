#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum;
	
	if (n >= 1) {
		sum = n * (n + 1) / 2;
	} else {
		
		sum = (n + 1) * (2 - n) / 2;
	}
	
	printf("%d\n", sum);
	return 0;
}
