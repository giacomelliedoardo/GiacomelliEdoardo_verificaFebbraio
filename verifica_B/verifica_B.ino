//dichiaro le variabli
int rosso = 13;
int giallo = 11;
int blu = 7;
int verde = 5;
//variabili di tempo
int tempoRosso = 0;
int tempoGiallo = 0;
int tempoBlu = 0;
int tempoVerde = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //output
  pinMode(rosso, OUTPUT);
  pinMode(giallo, OUTPUT);
  pinMode(blu, OUTPUT);
  pinMode(verde, OUTPUT);

  //chiedo quanto sta acceso il rosso
  Serial.println("Quanto sta acceso il rosso? (in secondi)");
  while(Serial.available() == 0);
  tempoRosso = Serial.readString().toInt();

  //chiedo quanto sta acceso il giallo
  Serial.println("Quanto sta acceso il giallo? (in secondi)");
  while(Serial.available() == 0);
  tempoGiallo = Serial.readString().toInt();

  //chiedo quanto sta acceso il blu
  Serial.println("Quanto sta acceso il blu? (in secondi)");
  while(Serial.available() == 0);
  tempoBlu = Serial.readString().toInt();

  //chiedo quanto sta acceso il verde
  Serial.println("Quanto sta acceso il verde? (in secondi)");
  while(Serial.available() == 0);
  tempoVerde = Serial.readString().toInt();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rosso, HIGH);         //accendo il rosso
  delay(tempoRosso * 1000);          //aspetto i secondi dati in input per il rosso
  digitalWrite(rosso, LOW);          //spengo il rosso
  digitalWrite(giallo, HIGH);        //accendo il giallo
  delay(tempoGiallo * 1000);         //aspetto i secondi dati in input per il giallo
  digitalWrite(giallo, LOW);         //spengo il giallo
  digitalWrite(blu, HIGH);           //accendo il blu
  delay(tempoBlu * 1000);            //aspetto i secondi dati in input per il blu
  digitalWrite(blu, LOW);            //spengo il blu
  digitalWrite(verde, HIGH);         //accendo il verde
  delay(tempoVerde * 1000);          //aspetto i secondi dati in input per il verde
  digitalWrite(verde, LOW);          //spengo il verde
}
