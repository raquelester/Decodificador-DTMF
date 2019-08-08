//---------------------------- Mapeamento de Hardware -----------------------------//

#define D0 3
#define D1 4
#define D2 5
#define D3 6
#define DV 7

#define RELE1 8
#define RELE2 9
#define RELE3 10




void setup() {
pinMode(D0, INPUT);
pinMode(D1, INPUT);
pinMode(D2, INPUT);
pinMode(D3, INPUT);
pinMode(DV, INPUT);
pinMode(RELE1, OUTPUT);
pinMode(RELE2, OUTPUT);
pinMode(RELE3, OUTPUT);
}


void loop() {
// -------------------------------- Acionar RELE 1 -----------------------------------//
//Digite o Numero 1
if(digitalRead(DV) == HIGH && digitalRead(D3) == LOW && digitalRead(D2) == LOW && digitalRead(D1) == LOW && digitalRead(D0) == HIGH) {
digitalWrite(RELE1, HIGH);
}

// -------------------------------- Desacionar RELE 1 -----------------------------------//
//Digite o Numero 4
if(digitalRead(DV) == HIGH && digitalRead(D3) == LOW && digitalRead(D2) == HIGH && digitalRead(D1) == LOW && digitalRead(D0) == LOW) {
digitalWrite(RELE1, LOW);
}


// -------------------------------- Acionar RELE 2 -----------------------------------//
//Digite o Numero 2
if(digitalRead(DV) == HIGH && digitalRead(D3) == LOW && digitalRead(D2) == LOW && digitalRead(D1) == HIGH && digitalRead(D0) == LOW) {
digitalWrite(RELE2, HIGH);
}

// -------------------------------- Desacionar RELE 2 -----------------------------------//
//Digite o Numero 5
if(digitalRead(DV) == HIGH && digitalRead(D3) == LOW && digitalRead(D2) == HIGH && digitalRead(D1) == LOW && digitalRead(D0) == HIGH) {
digitalWrite(RELE2, LOW);
}

// -------------------------------- Acionar RELE 3 -----------------------------------//
//Digite o Numero 3
if(digitalRead(DV) == HIGH && digitalRead(D3) == LOW && digitalRead(D2) == LOW && digitalRead(D1) == HIGH && digitalRead(D0) == HIGH) {
digitalWrite(RELE3, HIGH);
}

// -------------------------------- Desacionar RELE 3 -----------------------------------//
//Digite o Numero 6
if(digitalRead(DV) == HIGH && digitalRead(D3) == LOW && digitalRead(D2) == HIGH && digitalRead(D1) == HIGH && digitalRead(D0) == LOW) {
digitalWrite(RELE3, LOW);
}
}
