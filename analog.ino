
#define led 3

void setup() {

pinMode(led,OUTPUT);
}

void loop(){
  analogWrite(led,100);
  delay(1000);
}
