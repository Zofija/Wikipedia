#ifndef WIKIPEDIA_H
#define WIKIPEDIA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int open(FILE* wp, char* nazwa);
void szukaj_w_tekscie(char* slowo, FILE* wp, char* nazwa);

#endif
