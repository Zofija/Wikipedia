#include "wikipedia_funkcje.h"

int main(void)
{
	int ilosc_slow=0;
	
	char nazwa[30], slowo [20];
	gets(nazwa);
	
	FILE* klucze;
	
	if((klucze=fopen(nazwa, "r"))==NULL){
		printf("blad");
		return -1;
	}
	while (feof(klucze)==0)
	{
		fscanf(klucze, "%s", slowo);
		ilosc_slow=szukaj_w_tekscie(slowo);
	}
	
	return 0;
}
