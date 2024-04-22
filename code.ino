const int IR1 = A0;
const int IR2 = A1;
const int IR3 = A2;
const int IR4 = A3;
const int R1 = 2;
const int Y1 = 3;
const int G1 = 4;

const int R2 = 5;
const int Y2 = 6;
const int G2 = 7;

const int R3 = 8;
const int Y3 = 9;
const int G3 = 10;

const int R4 = 11;
const int Y4 = 12;
const int G4 = 13;

void setup() {
  // Set the traffic light pins as OUTPUT
  Serial.begin(115200);
  pinMode(R1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(Y3, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(Y4, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);


  // Initialize all lights to OFF
  allLightsOff();
}

void loop() {
  allLightsOff();
  int sensorStatus1 = analogRead(IR1);
  int sensorStatus2 = analogRead(IR2);
  int sensorStatus3 = analogRead(IR3);
  int sensorStatus4 = analogRead(IR4);
  
  if (sensorStatus1==1) {
    digitalWrite(R1,HIGH);
    if(sensorStatus2==1){
      digitalWrite(R2,HIGH);
    }
    if(sensorStatus3==1){
      digitalWrite(R3,HIGH);
    }
    if(sensorStatus4==1){
      digitalWrite(R4,HIGH);
    }
    pattern1();
  } else if (sensorStatus2==1) {
    digitalWrite(R2,HIGH);
    if(sensorStatus1==1){
      digitalWrite(R1,HIGH);
    }
    if(sensorStatus3==1){
      digitalWrite(R3,HIGH);
    }
    if(sensorStatus4==1){
      digitalWrite(R4,HIGH);
    }
    pattern2();
  } else if (sensorStatus3==1) {
    digitalWrite(R3,HIGH);
    if(sensorStatus2==1){
      digitalWrite(R2,HIGH);
    }
    if(sensorStatus1==1){
      digitalWrite(R1,HIGH);
    }
    if(sensorStatus4==1){
      digitalWrite(R4,HIGH);
    }
    pattern3();
  } else if (sensorStatus4==1) {
    digitalWrite(R4,HIGH);
    if(sensorStatus2==1){
      digitalWrite(R2,HIGH);
    }
    if(sensorStatus3==1){
      digitalWrite(R3,HIGH);
    }
    if(sensorStatus1==1){
      digitalWrite(R1,HIGH);
    }
    pattern4();
  } else {
    // Default pattern
    defaultPattern();
  }
}

void allLightsOff() {
  digitalWrite(R1, LOW);
  digitalWrite(Y1, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(G4, LOW);
}

void pattern1() {
  digitalWrite(R1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(G4, LOW);

  digitalWrite(G1, HIGH);
  digitalWrite(Y2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R1, HIGH);
  digitalWrite(G2, HIGH);
  digitalWrite(Y3, HIGH);
  digitalWrite(R4, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(G3, HIGH);
  digitalWrite(Y4, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(Y1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(G4, HIGH);

  delay(7000);
  allLightsOff();
}

void pattern2() {
  // Implement pattern 2 similarly to pattern 1 if needed
  digitalWrite(R2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(G4, LOW);
  digitalWrite(G1, LOW);

  digitalWrite(G2, HIGH);
  digitalWrite(Y3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(R1, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R2, HIGH);
  digitalWrite(G3, HIGH);
  digitalWrite(Y4, HIGH);
  digitalWrite(R1, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(G4, HIGH);
  digitalWrite(Y1, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(Y2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(G1, HIGH);

  delay(7000);
  allLightsOff();
}

void pattern3() {
  // Implement pattern 3 similarly to pattern 1 if needed
  digitalWrite(R3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(G2, LOW);

  digitalWrite(G3, HIGH);
  digitalWrite(Y4, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R3, HIGH);
  digitalWrite(G4, HIGH);
  digitalWrite(Y1, HIGH);
  digitalWrite(R2, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(Y2, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(Y3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(G2, HIGH);

  delay(7000);
  allLightsOff();
}

void pattern4() {
  // Implement pattern 4 similarly to pattern 1 if needed
  digitalWrite(R4, LOW);
  digitalWrite(Y1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(G3, LOW);

  digitalWrite(G1, HIGH);
  digitalWrite(Y2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R4, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(Y2, HIGH);
  digitalWrite(R3, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(R4, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(G2, HIGH);
  digitalWrite(Y3, HIGH);

  delay(7000);
  allLightsOff();

  digitalWrite(Y4, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(G3, HIGH);

  delay(7000);
  allLightsOff();
}

void defaultPattern() {
  // Implement the default pattern similarly to pattern 1 if needed
  digitalWrite(Y1, HIGH);
  digitalWrite(Y2, HIGH);
  digitalWrite(Y3, HIGH);
  digitalWrite(Y4, HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(G4, LOW);
}