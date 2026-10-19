#include <stdio.h>

int main() {
	int code1, code2;
	scanf("%d %d", &code1, &code2);
	int h = 0;
	for (int i = 0; i <= 9999; ++i) {
		if (i % 2 == 0) {
			if (i == code1) {
				h = 1;
				break;
			}
		} else {
			if (i == code2) {
				h = 1;
				break;
			}
		}
	}
	
	if (h)
		printf("yes\n");
	else
		printf("no\n");
	
	return 0;
}
