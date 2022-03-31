// C++ code
//
/*
  This program send rotary encoder count data to serial
  28-3-2022
*/

#define encoder 5
volatile int count = 0;
long tempCountNumber = 0;
void setup()
{
  Serial.begin (115200);
  pinMode(encoder, INPUT);
  attachInterrupt(digitalPinToInterrupt(encoder), pulse, CHANGE);
}

void loop()
{
//  tempCountNumber += 1;
//  Serial.println(tempCountNumber += 1);
//  delay (2000);
    if (count != tempCountNumber) {
      Serial.println(count);
      tempCountNumber = count;
    }
}

void pulse() {
  count += 1 ;
}
