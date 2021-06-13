/* Ampel Projekt 
 * Copyright Code: Marvin Kreienbühl, Fabrice Maurer, Marlo Cadonau
 */
  int Knopf2 = A0
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
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH); 
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    //Setzt alle Auf Rot
    FussgangerNS(); //Wartet auf Input bei Fussgänger
    FussgangerOW(); //Wartet auf Input bei Fussgänger
    delay(1000); //Delay von 1s
    digitalWrite(Ampel_Kreuz_NS_gelb, HIGH); 
    FussgangerNS();
    FussgangerOW();
    delay(1000);
    digitalWrite(Ampel_Kreuz_NS_rot, LOW);
    FussgangerNS();
    FussgangerOW();
    delay(500);
    digitalWrite(Ampel_Kreuz_NS_gelb, LOW);
    digitalWrite(Ampel_Kreuz_NS_gruen, HIGH);
    FussgangerNS();
    FussgangerOW();
    delay(10000); 
    digitalWrite(Ampel_Kreuz_NS_gruen, LOW);
     digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    FussgangerNS();
    FussgangerOW();
    delay(1000);
    digitalWrite(Ampel_Kreuz_OW_gelb, HIGH);
    FussgangerNS();
    FussgangerOW();
    delay(1000);
    digitalWrite(Ampel_Kreuz_OW_rot, LOW);
    FussgangerNS();
    FussgangerOW();
    delay(500);
    digitalWrite(Ampel_Kreuz_OW_gelb, LOW);
    digitalWrite(Ampel_Kreuz_OW_gruen, HIGH);
    FussgangerNS();
    FussgangerOW();
    delay(10000);
    digitalWrite(Ampel_Kreuz_OW_gruen, LOW);
    FussgangerNS();
    FussgangerOW();
    //Dieser Zyklus läuft die ganze Zeit. Er checkt ob es einen Input bei den Fussgänger gibt --> Falls ja, Ampeln gestoppt Fussgänger grün
  }


void FussgangerOW() {
  Knopfvalue = digitalRead(Knopf); //Setzt Knopfstatus in Variable
  Serial.println(Knopfvalue); //Printet Variable für debugging
    if (Knopfvalue == 0) {    //Falls Knopf gedrückt, Fussgänger-Sequenz
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    delay(1000);
    delay(1000);
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
    digitalWrite(Ampel_Fussgaenger_OW_gruen, LOW);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    }
else {

}



}

void FussgangerNS() {
  Knopfvalue = digitalRead(Knopf2); //Knopf-Status wird in Variable gesetzt.
  Serial.println(Knopfvalue); //Printet Variable für debugging
  if (Knopfvalue == 0) { //Falls Knopf gedrückt wird, läuft Sequenz ab
    digitalWrite(Ampel_Kreuz_NS_rot, HIGH);
    digitalWrite(Ampel_Kreuz_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_OW_rot, HIGH);
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);
    delay(1000);
    delay(1000);
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
    digitalWrite(Ampel_Fussgaenger_NS_rot, HIGH);

  }

else {
}



}