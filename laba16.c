#include <stdio.h>
#define and(x, y) (x) & (y)
#define or(x, y) (x) | (y)
#define not(x) ~(x)
#define show(x) printf("w=%d", x)
#define ask printf("input a, x, y, z>>")


int main() {
	int a, x, y, z, w = 0; 
	ask;
	scanf("%d%d%d%d", &a, &x, &y, &z);
	if (a) {
		w = or(and (x + y, y * z), not(z));
	}
	else {
		w = not(and (or (0, x), x - y));
	}
	show(w);
	return 0;
}
