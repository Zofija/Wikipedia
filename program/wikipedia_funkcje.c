#include "wikipedia_funkcje.h"

int open(FILE* wp, char* nazwa)
{

	if((wp=fopen("nazwa", "r"))==NULL){
		printf("blad");
		return -1;
	}
	return 0;
}

void szukaj_w_tekscie(char* slowo, FILE* wp, char* nazwa)
{
	open(wp, nazwa);
	char tekst[500] = {'\0'};
	int i=0;
	while (feof(wp)==0)
	{
		fscanf(wp, "%s", &tekst[i]);
		i++;
	}
	fclose(plik);
	
	char * wynik = strstr( slowo, tekst );
	if (wynik != NULL) 
        printf( "Znaleziono w tekscie slowo: %s\n", wynik );
        return;
}
