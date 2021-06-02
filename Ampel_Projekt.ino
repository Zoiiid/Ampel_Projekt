/* Ampel Projekt 
 * Copyright Code: Marvin Kreienbühl, Fabrice Maurer, Marlo Cadonau
 */
  int Knopf = 13;
  int Ampel_Kreuz_NS_rot = 2;
  int Ampel_Kreuz_NS_gelb = 3;
  int Ampel_Kreuz_NS_gruen = 4;
  int Ampel_Kreuz_OW_rot = 7;
  int Ampel_Kreuz_OW_gelb = 6;
  int Ampel_Kreuz_OW_gruen = 5;
  int Ampel_Fussgaenger_NS_rot = 9;
  int Ampel_Fussgaenger_NS_gruen = 8;
  int Ampel_Fussgaenger_OW_rot = 11;
  int Ampel_Fussgaenger_OW_gruen = 10;
  int Piezo = 12;
  int Knopfvalue = 0;
 //Initialisiert alle Variablen, welche wir für dieses Projekt brauchen. OW = Ost-West, NS= Nord-Süd
void setup() {
  Serial.begin(9600);
  pinMode(Knopf, INPUT);
  pinMode(Ampel_Kreuz_NS_rot, OUTPUT);
  pinMode(Ampel_Kreuz_NS_gelb, OUTPUT);
  pinMode(Ampel_Kreuz_NS_gruen, OUTPUT);
  pinMode(Ampel_Kreuz_OW_rot, OUTPUT);
  pinMode(Ampel_Kreuz_OW_gelb, OUTPUT);
  pinMode(Ampel_Kreuz_OW_gruen, OUTPUT);
  pinMode(Ampel_Fussgaenger_NS_rot, OUTPUT);
  pinMode(Ampel_Fussgaenger_NS_gruen, OUTPUT);
  pinMode(Ampel_Fussgaenger_OW_rot, OUTPUT);
  pinMode(Ampel_Fussgaenger_OW_gruen, OUTPUT);
  pinMode(Piezo, OUTPUT);
  //Setzt alle LEDs auf OUTPUT und den Knopf auf INPUT
}

void loop() {
  Knopfvalue = digitalRead(Knopf);
  Serial.println(Knopfvalue);
  if (Knopfvalue == 0) {
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    delay(1000);
    digitalWrite(Ampel_Kreuz_NS_gelb, HIGH);
    delay(1000);
    digitalWrite(Ampel_Kreuz_NS_rot, LOW);
    delay(500);
    digitalWrite(Ampel_Kreuz_NS_gelb, LOW);
    digitalWrite(Ampel_Kreuz_NS_gruen, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, LOW);
    digitalWrite(Ampel_Fussgaenger_OW_gruen, HIGH);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    //Erster Cycle
    digitalWrite(Ampel_Kreuz_NS_gruen, LOW);
    digitalWrite(Ampel_Fussgaenger_OW_gruen, LOW);
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    //Alle Aus
    delay(1000);
    digitalWrite(Ampel_Kreuz_OW_gelb, HIGH);
    delay(1000);
    digitalWrite(Ampel_Kreuz_OW_rot, LOW);
    delay(500);
    digitalWrite(Ampel_Kreuz_OW_gelb, LOW);
    digitalWrite(Ampel_Kreuz_OW_gruen, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, LOW);
    digitalWrite(Ampel_Fussgaenger_NS_gruen, HIGH);
        digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Piezo, HIGH);
    delay(1000);
    digitalWrite(Piezo, LOW);
    delay(1000);
    digitalWrite(Ampel_Fussgaenger_NS_gruen, LOW);
    digitalWrite(Ampel_Kreuz_OW_gruen, LOW);
  }

  else {
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    digitalWrite(12, LOW);
    //Kein Knopf gedrückt --> Alle auf rot

  }

}