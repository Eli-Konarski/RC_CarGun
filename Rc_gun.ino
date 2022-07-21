//Hello My Name Is Eli Konarski, This Is A Rover With A Nerf Gun Attachment (main purpose is to shoot feet without hem noticing)

//Sonar 1
  int echoPin1 = 3;
  int initPin1 = 2;
  int distance1 =0;
  
//Sonar 2
  int echoPin2 = 8;
  int initPin2 = 7;
  int distance2 = 0;

//motors
  int tlMotor = 20; //top left motor
  int trMotor = 21; //top right motor
  int blMotor = 22; //bottom left motor
  int brMotor = 23; //bottom right motor


void setup() {
  pinMode(initPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(initPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(tlMotor, OUTPUT);
  pinMode(trMotor,OUTPUT);
  pinMode(brMotor,OUTPUT);
  pinMode(blMotor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distance1 = getDistance(initPin1, echoPin1);
  delay(1000);
  
  distance2 = getDistance(initPin2, echoPin2);
  delay(1000);
}


  int getDistance (int initPin, int echoPin){
  digitalWrite(initPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(initPin, LOW); 
  
  unsigned long pulseTime = pulseIn(echoPin, HIGH); 
  int distance = pulseTime/58;
  return distance;
}

void rotateRight(){ //rotating the wheels in opposite directions will allow for rotation (I think)
digitalWrite(trMotor, HIGH);
digitalWrite(brMotor, HIGH);
digitalWrite(tlMotor, LOW);
digitalWrite(blMotor, LOW);

}
