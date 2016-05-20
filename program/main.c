#include "wikipedia_funkcje.h"

int main(void)
{
	int ilosc_slow=0, i, j;
	int licz[5]; //5 licznik�w, do sprawdzenia ka�dego z 5 s��w z danej kategorii
	
	char nazwa[30], slowo [20];
	gets(nazwa);
	
	FILE* klucze;
	
	if((klucze=fopen(nazwa, "r"))==NULL){
		printf("blad");
		return -1;
	}
	
	while (feof(klucze)==0)
	{
		for( i=0; i< 20; i++ ) //p�tla przechodzi przez wszystkie kategorie
		{
			printf("sprawdzanie slow kluczy dla %d kategorii", i+1);
			
			for(j=0; j<5; j++) //p�tla przechodi przez wszystkie s�owa klucze z danej kategorii
			{
				fscanf(klucze, "%s", slowo);
				ilosc_slow=szukaj_w_tekscie(slowo);
				licz[j]=ilosc_slow; //zapisanie ilo�ci wyst�pienia s�owa do odpowiedniego licznika
			}
		}
		
	}
	
	return 0;
}
