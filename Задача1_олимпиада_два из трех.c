#include <stdio.h>

int main() {

	int a, b, c;  
	int n;        
	int found = 0; // счетчик чисел
	int current = 1; // текущее число
	int result = -1; // результат
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &n);
	
	while (current <= 1000000000) {
	
		int count = 0;
		if (current % a == 0) 
			count = count + 1;
		if (current % b == 0) 
			count = count + 1;
		if (current % c == 0) 
			count = count + 1;
		
		if (count == 2) {
			found = found + 1;
			
			if (found == n) {
				result = current;
				break;
			}
		}
		
		current = current + 1;
	}
	
	printf("%d\n", result);
	
	return 0;
}

