#include "wiki.h"

int max=0;
int temp;

int main(void)
{
	int i, j, kategoria;
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
			}
			temp=licz[1]+licz[2]+licz[3]+licz[4]+licz[5];
			if(temp>max)
			{
				max=temp;
				kategoria=i+1;
			}      
		}
		
        FILE *wynik;
		if ((wynik=fopen("sciezka folderu, w ktorym plik ma zostac zapisany.txt", "w"))==NULL) 
		{
    		 printf ("Nie mogę otworzyć pliku test.txt do zapisu!\n");
    		 exit(1);
     	}
                    fprintf(wynik, "Plik nalezy do kategorii %d", kategoria);
                    fclose(wynik);
	}
	

	return 0;
}
