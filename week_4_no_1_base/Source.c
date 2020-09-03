#include<stdio.h>
#include<math.h>

void ma_loop(a) {
	int b = 0, c = 1, p2, num[200], sum = 0;
	int k = 0;
	int p1;
	for (int i = 1; c != 0; i++) {
		p1 = pow(10, i);
		int pp2 = i - 1;
		p2 = pow(10, pp2);
		b = a % p1;
		c = b / p2;
		num[k] = c;
		sum = sum + num[k];
		k++;
	}
	
	a = sum;
	if (c == 0 && b == 0) {
		printf("1");
	}
	else {
		printf("%d\n", a);
	}
	if (a / 10 != 0) {
		ma_loop(a);
	}
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", a);
	ma_loop(a);
}