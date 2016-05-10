#include <stdio.h>
#include <stdlib.h>
#include "wikipedia_funkcje.h"

int main(void)
{
	int check;
	char nazwa[30];
	gets(nazwa);
	FILE* wp;
	if((check=open(wp, nazwa))==-1)
	{
		printf("blad");
		return -1;
	}
	return 0;
}
