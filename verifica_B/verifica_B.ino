//dichiaro le variabli
int rosso = 13;
int giallo = 11;
int blu = 7;
int verde = 5;

int tempoRosso = 0;
int tempoGiallo = 0;
int tempoBlu = 0;
int tempoVerde = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
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
  digitalWrite(rosso, HIGH);
  delay(tempoRosso * 1000);
  digitalWrite(rosso, LOW);
  digitalWrite(giallo, HIGH);
  delay(tempoGiallo * 1000);
  digitalWrite(giallo, LOW);
  digitalWrite(blu, HIGH);
  delay(tempoBlu * 1000);
  digitalWrite(blu, LOW);
  digitalWrite(verde, HIGH);
  delay(tempoVerde * 1000);
  digitalWrite(verde, LOW);
}
