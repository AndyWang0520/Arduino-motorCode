//Define the motor pins and potentiometers pins
int motor1Pin = 3;
int motor2Pin = 4;
int motor3Pin = 5;
int motor4Pin = 6;
int pot1Pin = A0;
int pot2Pin = A1;
int pot3Pin = A2;
int pot4Pin = A3;

void setup(){
  //Set the motor pins to output
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(motor3Pin, OUTPUT);
  pinMode(motor4Pin, OUTPUT);
  //Set the potentiometer pins to input
  pinMode(pot1Pin, INPUT);
  pinMode(pot2Pin, INPUT);
  pinMode(pot3Pin, INPUT);
  pinMode(pot4Pin, INPUT);
}

void loop(){
  //Read the potentiometer values
  int pot1Value = analogRead(pot1Pin);
  int pot2Value = analogRead(pot2Pin);
  int pot3Value = analogRead(pot3Pin);
  int pot4Value = analogRead(pot4Pin);
  //Convert the potentiometer values to angles
  int angle1 = map(pot1Value, 0, 1023, 0, 179);
  int angle2 = map(pot2Value, 0, 1023, 0, 179);
  int angle3 = map(pot3Value, 0, 1023, 0, 179);
  int angle4 = map(pot4Value, 0, 1023, 0, 179);
  //Rotate the motors to the angles
  servo.write(motor1Pin, angle1);
  servo.write(motor2Pin, angle2);
  servo.write(motor3Pin, angle3);
  servo.write(motor4Pin, angle4);
  //Return the angle values
  Serial.print("Angle1: ");
  Serial.println(angle1);
  Serial.print("Angle2: ");
  Serial.println(angle2);
  Serial.print("Angle3: ");
  Serial.println(angle3);
  Serial.print("Angle4: ");
  Serial.println(angle4);
}