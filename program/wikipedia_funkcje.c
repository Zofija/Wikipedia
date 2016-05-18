#include "wikipedia_funkcje.h"


int szukaj_w_tekscie(void)
{
	int i=0;
	char slowo[30],nazwa[30];
	printf("podaj slowo:\n");
	gets(slowo);
	gets(nazwa);
	FILE* wp;
	if((wp=fopen(nazwa, "r"))==NULL){
		printf("blad");
		return -1;
	}
	char tekst[50];
	int wynik=1;
	while (feof(wp)==0)
	{
		fscanf(wp, "%s", tekst);
		wynik=strcmp(slowo, tekst);
		if(wynik==0)
			i++;
	}
	printf("Slowo ""%s"" wystepuje w tekscie ""%s"" %d razy\n", slowo, nazwa,i);
    return i;
}
