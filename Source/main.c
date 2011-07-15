
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "eingaben.h"
#include "rechnung.h"

#include "eingaben.c"
#include "rechnung.c"

//#################################################################################
/**
  Das Programm dient der Erstellung eines Abschreibungsplanes bei geometrisch 
  degressiver Abschreibung.

  @author   Thomas Gerlach
  @version  1.0
**/
//#################################################################################
int main()
{
  do {

    system("clear");

    printf("\n\tA b s c h r e i b u n g s p l a n\n");

    printf("\nDas Programm dient der Erstellung eines Abschreibungsplanes\nbei geometrisch degressiver Abschreibung.\n");

    double startwert = erfasse_gleitzahl("Startwert des abnutzbaren Wirtschaftsgutes", 1.0, 1000000000.0);
    int dauer = erfasse_ganzzahl("Dauer der Abschreibung in ganzen Jahren", 1, 100);
    double restwert = erfasse_gleitzahl("Restwert am Ende der Abschreibung", 1.0, startwert);

    schreibe_abschreibung(startwert, dauer, restwert);

  } while (erfasse_antwort("Noch einmal? (j/n)"));
}
