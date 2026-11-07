#include "rna_transcription.h"
#include <stdlib.h>
#include "string.h"

char *to_rna(const char *dna) {
    int length = (int)strlen(dna);
    char *rna = malloc(length + 1);  // Include space for '\0'

    if (rna == NULL)
        return NULL;
    
    for (int i = 0; i < length; i++) {
        if (dna[i] == 'G') rna[i] = 'C';
        if (dna[i] == 'C') rna[i] = 'G';
        if (dna[i] == 'T') rna[i] = 'A';
        if (dna[i] == 'A') rna[i] = 'U';
    }

    rna[length] = '\0';
    return rna;
}