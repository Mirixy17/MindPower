const int led_1 = 12;
const int led_2 = 13;
void setup() 
{
  pinMode(led_2, OUTPUT);
  pinMode(led_1, OUTPUT);
}

void upaliLed(int led)
{
  digitalWrite(led, HIGH); 
}

void loop() {

  digitalWrite(led_1, LOW); 
  upaliLed(led_2);  
  delay (1000);
  digitalWrite (led_2, LOW);  
  upaliLed(led_1);  
  delay (1000);
}
