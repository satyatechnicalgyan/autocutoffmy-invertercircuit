void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  float val=analogRead(A0);
  if (val<=600.00)
  {
    delay(5000);
    digitalWrite(5,1);
  }
 else if(val>=680.00)
 {
    delay(5000);
    digitalWrite(5,0);
  }
  
  
Serial.println(val*5/1023);
Serial.println(val);
delay(1000);
}
