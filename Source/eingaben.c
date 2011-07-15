//#################################################################################
/**
  Fordert den Nutzer zur Eingabe einer Auswahl zwischen j/J und n/N auf. Liefert
  1 bei positiver und 0 bei negativer Auswahl.
  
  @param  titel   Beschreibung für die Eingabeaufforderung

  @return  Ganzzahl Entsprechung der Auswahl (0/1)
**/
//#################################################################################
int erfasse_antwort(char *titel)
{

  char eingabe[5];

  printf("\n%s: ", titel);

  while (scanf("%1s[jJnN]%*[^\n]", eingabe) == 0)
  {
    printf("\nBitte nur 'j' oder 'n' eingeben.\n");
    puffer_leeren();
  }
  puffer_leeren();

  return eingabe[0] == 'J' || eingabe[0] == 'j' ? 1 : 0;
}

//#################################################################################
/**
  Fordert den Nutzer zur Eingabe eines ganzzahligen Wertes zwischen zwei gegebenen 
  Grenzen auf. Die Eingabe wiederholt sich bis zur Gültigkeit.
  
  @param  titel   Beschreibung für die Eingabeaufforderung
  @param  minimum Untere Grenze des Wertebereich
  @param  maximum Obere Grenze des Wertebereich

  @return  Ganzzahl Entsprechung der Auswahl (0/1)
**/
//#################################################################################
int erfasse_ganzzahl(char *titel, int minimum, int maximum)
{
  int eingabe = 0;

  printf("\n%s: ", titel);

  while (scanf("%d%*[^\n]", &eingabe) == 0 || (eingabe < minimum || maximum < eingabe)) 
  {
    printf("\nBitte Werte von '%d' bis '%d' eingeben: ", minimum, maximum);
    puffer_leeren();
  }
  puffer_leeren();

  return eingabe;
}

//#################################################################################
/**
  Fordert den Nutzer zur Eingabe eines Fließkomma-Wertes zwischen zwei gegebenen 
  Grenzen auf. Die Eingabe wiederholt sich bis zur Gültigkeit.
  
  @param  titel   Beschreibung für die Eingabeaufforderung
  @param  minimum Untere Grenze des Wertebereich
  @param  maximum Obere Grenze des Wertebereich

  @return  Ganzzahl Entsprechung der Auswahl (0/1)
**/
//#################################################################################
double erfasse_gleitzahl(char *titel, double minimum, double maximum)
{
  double eingabe;

  printf("\n%s: ", titel);

  while (scanf("%lf%*[^\n]", &eingabe) == 0 || (eingabe < minimum || maximum < eingabe)) 
  {
    printf("\nBitte Werte von '%.2lf' bis '%.2lf' eingeben: ", minimum, maximum);
    puffer_leeren();
  }
  puffer_leeren();

  return eingabe;
}

//#################################################################################
/**
  Leerte den Standardeingabepuffer
**/
//#################################################################################
void puffer_leeren(void)
{
  while (getchar() != '\n')
  ;
}

