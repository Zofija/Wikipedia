#include "wikipedia_funkcje.h"

int main(void)
{
	int ilosc_slow=0, i, j;
	int licz[5]; //5 liczników, do sprawdzenia ka¿dego z 5 s³ów z danej kategorii
	
	char nazwa[30], slowo [20];
	gets(nazwa);
	
	FILE* klucze;
	
	if((klucze=fopen(nazwa, "r"))==NULL){
		printf("blad");
		return -1;
	}
	
	while (feof(klucze)==0)
	{
		for( i=0; i< 20; i++ ) //pêtla przechodzi przez wszystkie kategorie
		{
			printf("sprawdzanie slow kluczy dla %d kategorii", i+1);
			
			for(j=0; j<5; j++) //pêtla przechodi przez wszystkie s³owa klucze z danej kategorii
			{
				fscanf(klucze, "%s", slowo);
				ilosc_slow=szukaj_w_tekscie(slowo);
				licz[j]=ilosc_slow; //zapisanie iloœci wyst¹pienia s³owa do odpowiedniego licznika
			}
		}
		
	}
	
	return 0;
}
