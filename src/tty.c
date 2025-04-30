#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER 256

void shellc_help(void) {
	printf("Welcome the manual page of Shellc!");
	printf("-h");
  	printf("-v");
}

void shellc_main(void) {
	int tty_flag = 0;
 	char cmd[BUFFER];

	while(tty_flag == 0) {
		printf("name@hostname:");
		int status = scanf("%s", cmd);
		
		if(status == 1) {
			system(cmd);
		}
		
		else {
			continue;
		}
	}
}
