#define sensorPin A0
int distance=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
distance = analogRead(sensorPin) * 1;
Serial.println(distance);
delay(1000);
}
