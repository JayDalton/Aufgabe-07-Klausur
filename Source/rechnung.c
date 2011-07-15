//#################################################################################
/**
  Berechnet den Prozentwert der degressiven Abschreibung mittels gegebener Werte
  von Startwert, Dauer und Restwert.
  
  @param  startwert   Startwert der Berechnung
  @param  dauer       Dauer der Laufzeit
  @param  restwert    Restwert der Berechnung

  @return  Prozentwert der Abschreibung (kein Prozentsatz!)
**/
//#################################################################################
double berechne_abschreibung(double startwert, int dauer, double restwert)
{
  return 1 - pow( restwert / startwert, 1.0 / dauer);
}

//#################################################################################
/**
  Berechnet die Abschreibung und gibt diese tabellarisch in die Standardausgabe aus.
  
  @param  startwert   Startwert der Berechnung
  @param  dauer       Dauer der Laufzeit
  @param  restwert    Restwert der Berechnung
**/
//#################################################################################
void schreibe_abschreibung(double startwert, int dauer, double restwert)
{
  double abschreibung = 0;
  double prozentsatz = berechne_abschreibung(startwert, dauer, restwert);

  printf("\nAbschreibungsplan bei geometrisch degressiver Abschreibung\n");

  printf("\n%-20s %.2lf Euro", "Startwert:", startwert);
  printf("\n%-20s %.2lf Euro", "Restwert:", restwert);
  printf("\n%-20s %d\n", "Anzal Jahre:", dauer);

  printf("\n%5s%15s%15s%15s", "Jahr", "Wert am Anfang", "Abschreibung", "Wert am Ende");

  for (int i = 1; i <= dauer; i++)
  {
    abschreibung = startwert * prozentsatz;
    printf("\n%5d%15.2lf%15.2lf%15.2lf", i, startwert, abschreibung, startwert - abschreibung);
    startwert -= abschreibung;
  }
}   

