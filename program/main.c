#include <stdio.h>
#include <stdlib.h>
#include "wikipedia_funkcje.h"

int main(void)
{
	int check;
	char nazwa[30], slowo [20];
	gets(nazwa);
	FILE* wp;
	if((check=open(wp, nazwa))==-1)
	{
		printf("blad");
		return -1;
	}
	
	fgets(slowo, strlen(slowo)+1, stdin);
	
	szukaj_w_tekscie(slowo, wp, nazwa);
	
	return 0;
}
