#include "wiki.h"

#include "wikipedia_funkcje.h"
#include <windows.h>


int szukaj_w_tekscie(char * slowo, char * nazwa)
{
	int i=0;
	char tekst[50];

	FILE* wp;

	if((wp=fopen(nazwa, "r"))==NULL){
		printf("blad (tekst)");
		return -1;
	}

	int wynik=1;
	while (feof(wp)==0)
	{
		fscanf(wp, "%s", tekst);
		wynik=stricmp(slowo, tekst);
		if(wynik==0)
			i++;
	}
	
		printf("Slowo ""%s"" wystepuje w tekscie ""%s"" %d razy\n", slowo, nazwa,i);
	
    return i;
}
