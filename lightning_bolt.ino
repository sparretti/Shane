int button;


void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  button = digitalRead(8);
  Serial.println(button);
  if (button == 1) {
     digitalWrite(7, HIGH);
     delay(100);
     digitalWrite(6, HIGH);
     delay(100);
     digitalWrite(5, HIGH);
     delay(100);
     digitalWrite(4, HIGH);
     delay(100);
     digitalWrite(3, HIGH);
     delay(100);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
  
  }

}
