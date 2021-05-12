/* Ampel Projekt
 * Copyright Code: Marvin Kreienbühl, Fabrice Maurer, Marlo Cadonau
 */


void setup() {
  int Knopf = null;
  int Ampel_Kreuz_NS_rot = null;
  int Ampel_Kreuz_NS_gelb = null;
  int Ampel_Kreuz_NS_grün = null;
  int Ampel_Kreuz_OW_rot = null;
  int Ampel_Kreuz_OW_gelb = null;
  int Ampel_Kreuz_OW_grün = null;
  int Ampel_Fussgaenger_NS_rot = null;
  int Ampel_Fussgaenger_NS_gelb = null;
  int Ampel_Fussgaenger_NS_grün = null;
  int Ampel_Fussgaenger_OW_rot = null;
  int Ampel_Fussgaenger_OW_gelb = null;
  int Ampel_Fussgaenger_OW_grün = null;
  pinmode(Knopf, INPUT);
  pinmode(Ampel_Kreuz_NS_rot, OUTPUT);
  pinmode(Ampel_Kreuz_NS_gelb, OUTPUT);
  pinmode(Ampel_Kreuz_NS_grün, OUTPUT);
  pinmode(Ampel_Kreuz_OW_rot, OUTPUT);
  pinmode(Ampel_Kreuz_OW_gelb, OUTPUT);
  pinmode(Ampel_Kreuz_OW_grün, OUTPUT);
  pinmode(Ampel_Fussgaenger_NS_rot, OUTPUT);
  pinmode(Ampel_Fussgaenger_NS_gelb, OUTPUT);
  pinmode(Ampel_Fussgaenger_NS_grün, OUTPUT);
  pinmode(Ampel_Fussgaenger_OW_rot, OUTPUT);
  pinmode(Ampel_Fussgaenger_OW_gelb, OUTPUT);
  pinmode(Ampel_Fussgaenger_OW_grün, OUTPUT);
}

void loop() {
  

}
