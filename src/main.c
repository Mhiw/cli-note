#include <stdio.h>

int main(int argc, char *argv[]) {
	if(argc == 0) {
		return -1;
	}

	for(int i = 0; i < sizeof(argv) / sizeof(argv[0]); i++) {
		printf("%s\n", argv[i]);
	}
	
	return 0;
}
