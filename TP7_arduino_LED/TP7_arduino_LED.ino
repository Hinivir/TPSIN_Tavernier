
#define RED 3
#define GREEN 5
#define BLUE 6

#define delayTime 10 // temps de décoloration entre les couleurs


void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, HIGH);
digitalWrite(BLUE, HIGH);
Serial.begin(9600);
analogWrite(RED, 0);
analogWrite(GREEN, 0);
analogWrite(BLUE, 0);
}

void loop()
{
  if(Serial.available() > 0) {
    int color = Serial.read();
    Serial.write(color);
    if(color == 0x31){
      analogWrite(RED, 255);
      analogWrite(GREEN, 0);
      analogWrite(BLUE, 0);
      delay(delayTime);
    }
    else if(color == 0x32){
      analogWrite(RED, 0);
      analogWrite(GREEN, 255);
      analogWrite(BLUE, 0);
      delay(delayTime);
    }
    else if(color == 0x33){
      analogWrite(RED, 0);
      analogWrite(GREEN, 0);
      analogWrite(BLUE, 255);
      delay(delayTime);
    }
    else if(color == 0x34){
      //  255, 174, 0
      analogWrite(RED, 255);
      analogWrite(GREEN, 174);
      analogWrite(BLUE, 0);
      delay(delayTime);
    }
    else if(color == 0x35)
    {
      // 255, 0, 197
      analogWrite(RED, 255);
      analogWrite(GREEN, 0);
      analogWrite(BLUE, 197);
      delay(delayTime);
    }
    else if(color == 0x36)
    {
      // 255, 235, 0
      analogWrite(RED, 255);
      analogWrite(GREEN, 235);
      analogWrite(BLUE, 0);
      delay(delayTime);
    }
  }
}