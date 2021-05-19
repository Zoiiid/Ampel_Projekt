/* Ampel Projekt 
 * Copyright Code: Marvin Kreienbühl, Fabrice Maurer, Marlo Cadonau
 */


void setup() {
  int Knopf = null;
  int Ampel_Kreuz_NS_rot = null;
  int Ampel_Kreuz_NS_gelb = null;
  int Ampel_Kreuz_NS_gruen = null;
  int Ampel_Kreuz_OW_rot = null;
  int Ampel_Kreuz_OW_gelb = null;
  int Ampel_Kreuz_OW_gruen = null;
  int Ampel_Fussgaenger_NS_rot = null;
  int Ampel_Fussgaenger_NS_gelb = null;
  int Ampel_Fussgaenger_NS_gruen = null;
  int Ampel_Fussgaenger_OW_rot = null;
  int Ampel_Fussgaenger_OW_gelb = null;
  int Ampel_Fussgaenger_OW_gruen = null;
  //Initialisiert alle Variablen, welche wir für dieses Projekt brauchen. OW = Ost-West, NS= Nord-Süd
  pinmode(Knopf, INPUT);
  pinmode(Ampel_Kreuz_NS_rot, OUTPUT);
  pinmode(Ampel_Kreuz_NS_gelb, OUTPUT);
  pinmode(Ampel_Kreuz_NS_gruen, OUTPUT);
  pinmode(Ampel_Kreuz_OW_rot, OUTPUT);
  pinmode(Ampel_Kreuz_OW_gelb, OUTPUT);
  pinmode(Ampel_Kreuz_OW_gruen, OUTPUT);
  pinmode(Ampel_Fussgaenger_NS_rot, OUTPUT);
  pinmode(Ampel_Fussgaenger_NS_gelb, OUTPUT);
  pinmode(Ampel_Fussgaenger_NS_gruen, OUTPUT);
  pinmode(Ampel_Fussgaenger_OW_rot, OUTPUT);
  pinmode(Ampel_Fussgaenger_OW_gelb, OUTPUT);
  pinmode(Ampel_Fussgaenger_OW_gruen, OUTPUT);
  //Setzt alle LEDs auf OUTPUT und den Knopf auf INPUT
}

void loop() {
  if (digitalRead(Knopf) == HIGH) {
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    delay(1000);
    digitalWrite(Ampel_Kreuz_NS_gelb, HIGH);
    delay(1000);
    digitalWrite(Ampel_Fussgaenger_NS_rot, LOW);
    delay(500);
    digitalWrite(Ampel_Kreuz_NS_gelb, LOW);
    digitalWrite(Ampel_Kreuz_NS_gruen, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, LOW);
    digitalWrite(Ampel_Fussgaenger_OW_gruen, HIGH);
    delay(10000);
    //Erster Cycle
    digitalWrite(Ampel_Kreuz_NS_gruen, LOW);
    digitalWrite(Ampel_Fussgaenger_OW_gruen, LOW);
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    //Alle Aus
    delay(1500);
    digitalWrite(Ampel_Kreuz_OW_gelb, HIGH);
    delay(1000);
    digitalWrite(Ampel_Fussgaenger_OW_rot, LOW);
    delay(500);
    digitalWrite(Ampel_Kreuz_OW_gelb, LOW);
    digitalWrite(Ampel_Fussgaenger_OW_gruen, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, LOW);
    digitalWrite(Ampel_Fussgaenger_NS_gruen, HIGH);
  }
  
  else {
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    //Kein Knopf gedrückt --> Alle auf rot

  }

}
