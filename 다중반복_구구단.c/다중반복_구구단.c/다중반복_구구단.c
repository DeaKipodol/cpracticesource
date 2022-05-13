#include<stdio.h>

int __main() {
	
	for (int i=2;i<100;i++) {
		
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d  ", i, j, i * j);
			if (j % 10 == 9)printf("\n");
		}
		
		if (i % 10 == 0)printf("\n");
	}

}