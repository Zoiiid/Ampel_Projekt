/* Ampel Projekt 
 * Copyright Code: Marvin Kreienbühl, Fabrice Maurer, Marlo Cadonau
 */
  int Knopf = 1;
  int Ampel_Kreuz_NS_rot = 2;
  int Ampel_Kreuz_NS_gelb = 3;
  int Ampel_Kreuz_NS_gruen = 4;
  int Ampel_Kreuz_OW_rot = 5;
  int Ampel_Kreuz_OW_gelb = 6;
  int Ampel_Kreuz_OW_gruen = 7;
  int Ampel_Fussgaenger_NS_rot = 8;
  int Ampel_Fussgaenger_NS_gelb = 9;
  int Ampel_Fussgaenger_NS_gruen = 10;
  int Ampel_Fussgaenger_OW_rot = 11;
  int Ampel_Fussgaenger_OW_gelb = 12;
  int Ampel_Fussgaenger_OW_gruen = 13;
  int Knopfvalue = 0;
 //Initialisiert alle Variablen, welche wir für dieses Projekt brauchen. OW = Ost-West, NS= Nord-Süd
void setup() {
  pinMode(Knopf, INPUT);
  pinMode(Ampel_Kreuz_NS_rot, OUTPUT);
  pinMode(Ampel_Kreuz_NS_gelb, OUTPUT);
  pinMode(Ampel_Kreuz_NS_gruen, OUTPUT);
  pinMode(Ampel_Kreuz_OW_rot, OUTPUT);
  pinMode(Ampel_Kreuz_OW_gelb, OUTPUT);
  pinMode(Ampel_Kreuz_OW_gruen, OUTPUT);
  pinMode(Ampel_Fussgaenger_NS_rot, OUTPUT);
  pinMode(Ampel_Fussgaenger_NS_gelb, OUTPUT);
  pinMode(Ampel_Fussgaenger_NS_gruen, OUTPUT);
  pinMode(Ampel_Fussgaenger_OW_rot, OUTPUT);
  pinMode(Ampel_Fussgaenger_OW_gelb, OUTPUT);
  pinMode(Ampel_Fussgaenger_OW_gruen, OUTPUT);
  //Setzt alle LEDs auf OUTPUT und den Knopf auf INPUT
}

void loop() {
  Knopfvalue = digitalRead(Knopf);
  if (Knopfvalue == HIGH) {
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
    delay(10000);
  }

  else {
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    //Kein Knopf gedrückt --> Alle auf rot

  }

}
