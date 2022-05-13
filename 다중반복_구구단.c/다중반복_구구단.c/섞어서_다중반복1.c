int main() {

	for (int i = 2; i < 100; i++) {

		int j = 1;
	while(j < 11) {
			printf("%d * %d = %d  ", i, j, i * j);
			if (j % 10 == 0)printf("\n");
			j++;

	}

		if (i % 10 == 0)printf("\n");
	}

}