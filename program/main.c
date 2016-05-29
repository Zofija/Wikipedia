#include "wiki.h"

int main(void)
{
	int i, j;
	int licz[5]; //5 liczników, do sprawdzenia każdego z 5 słów z danej kategorii

	char nazwa[30], slowo [20];

	FILE* klucze;

	if((klucze=fopen("klucze.txt", "r"))==NULL){
		printf("blad (klucze)");
		return -1;
	}

	printf("podaj plik z tekstem: ");
	gets(nazwa);


	while (feof(klucze)==0)
	{
		for( i=0; i< 20; i++ ) //pętla przechodzi przez wszystkie kategorie
		{
			printf("\nsprawdzanie slow kluczy dla %d. kategorii\n", i+1);

			for(j=0; j<5; j++) //pętla przechodi przez wszystkie słowa klucze z danej kategorii
			{
				fscanf(klucze, "%s", slowo);
				licz[j] = szukaj_w_tekscie(slowo, nazwa); //zapisanie ilości wystąpienia słowa do odpowiedniego licznika
				if(licz[j] > 0)
                {
                    FILE *wynik = fopen("sciezka folderu, w ktorym plik ma zostac zapisany", "w");
                    fprintf(wynik, "Plik nalezy do kategorii %d", i+1);
                    fclose(wynik);
                }
			}
		}
	}

	return 0;
}
