const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;
const int red2Pin = 5;
const int green2Pin = 7;
const int yellow2Pin = 8;
const int button = 6;
int buttonStage = 0;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(red2Pin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(yellow2Pin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(green2Pin,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(yellowPin,LOW);
  digitalWrite(redPin,HIGH);//apo do. kokkino main road

  if(redPin == HIGH)
  {
    digitalWrite(red2Pin,LOW);
    digitalWrite(green2Pin,HIGH);//prasino side road 
  }
  delay(500);//os edo

  if(yellow2Pin == LOW && redPin == HIGH)//apo do 2
  {
    digitalWrite(green2Pin,LOW);// yellow side road
    digitalWrite(yellow2Pin,HIGH);
    delay(50);
  }//os edo 2
  
  buttonStage = digitalRead(button);//button gia extended kinnisi

  if(buttonStage == HIGH){//apo do 3
    digitalWrite(yellow2Pin,LOW);
    digitalWrite(red2Pin,HIGH);//kokkino side road
    digitalWrite(greenPin,HIGH);//prasino main road
    delay(600);
  }
  else
  {
    digitalWrite(yellow2Pin,LOW);
    digitalWrite(red2Pin,HIGH);//kokkino side road
    digitalWrite(greenPin,HIGH);// prasino main road
    delay(500);

  }//os edo 3

  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(50);
}