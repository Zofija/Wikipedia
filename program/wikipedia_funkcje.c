#include <stdio.h>
#include <stdlib.h>

int open(FILE* wp, char* nazwa)
{

	if((wp=fopen("nazwa", "r"))==NULL){
		printf("blad");
		return -1;
	}
	return 0;
}
