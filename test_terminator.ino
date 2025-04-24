#include <Servo.h>

#define PIN_SERVO D3

int pos = 30;     // Posizione iniziale del servomotore
int maxPos = 45;  // Posizione massima per il movimento del servomotore
int minPos = 20;  // Posizione minima per il movimento del servomotore
int spd = 20;     // Velocità di movimento del servomotore (ritardo tra i movimenti)

Servo servo;  // Oggetto servo

// Funzione per lampeggiare un LED
void lampeggiaLED(int pin) {
  for (int i = 0; i < 5; i++) {
    digitalWrite(pin, HIGH);  // Accende il LED
    delay(50);
    digitalWrite(pin, LOW);   // Spegne il LED
    delay(50);
  }
}

// Funzione per muovere la mandibola (servo)
void muoviMandibola(int min, int max, int spd) {
  // Movimento dalla posizione minima a quella massima
  for (int pos = min; pos < max; pos++) {
    servo.write(pos);  // Imposta la posizione del servomotore
    delay(spd);        // Pausa per il movimento
  }
  // Movimento dalla posizione massima a quella minima
  for (int pos = max; pos >= min; pos--) {
    servo.write(pos);  // Imposta la posizione del servomotore
    delay(spd);        // Pausa per il movimento
  }
}

// Funzione per il ciclo completo di animazione
void cicloAnimazione() {
  lampeggiaLED(D1);   // Lampeggia il LED collegato a D1
  lampeggiaLED(D2);   // Lampeggia il LED collegato a D2
  muoviMandibola(minPos, maxPos, spd);  // Muove la mandibola avanti e indietro
  delay(1000);  // Pausa tra i cicli di animazione
}

void setup() {
  pinMode(D1, OUTPUT);  // Imposta D1 come uscita
  pinMode(D2, OUTPUT);  // Imposta D2 come uscita
  servo.attach(PIN_SERVO);  // Collega il servomotore al pin D3
  servo.write(pos);  // Posizione iniziale del servomotore
  digitalWrite(D1, LOW);  // Spegne il LED su D1
  digitalWrite(D2, LOW);  // Spegne il LED su D2
}

void loop() {
  cicloAnimazione();  // Esegue il ciclo di animazione
}

