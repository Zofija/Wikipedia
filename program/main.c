#include "wikipedia_funkcje.h"

int main(void)
{
	int i, j;
	int licz[5]; //5 liczników, do sprawdzenia każdego z 5 słów z danej kategorii
	
	char nazwa[30], slowo [20];
	gets(nazwa);
	
	FILE* klucze;
	
	if((klucze=fopen(nazwa, "r"))==NULL){
		printf("blad");
		return -1;
	}
	
	while (feof(klucze)==0)
	{
		for( i=0; i< 20; i++ ) //pętla przechodzi przez wszystkie kategorie
		{
			printf("sprawdzanie slow kluczy dla %d kategorii", i+1);
			
			for(j=0; j<5; j++) //pętla przechodi przez wszystkie słowa klucze z danej kategorii
			{
				fscanf(klucze, "%s", slowo);
				licz[j] = szukaj_w_tekscie(slowo); //zapisanie ilości wystąpienia słowa do odpowiedniego licznika
			}
		}
		
	}
	
	return 0;
}
