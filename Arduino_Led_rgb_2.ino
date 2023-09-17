int LED = 11;

void setup() {
  pinMode (LED, OUTPUT)

}

void loop() {
  digitalWrite (LED, LOW);
  digitalWrite (LED, HIGHT);
  delay (8000);

  digitalWrite (LED, LOW);
  digitalWrite (LED, HIGHT);
  delay (15000);

  digitalWrite (LED, LOW);
  digitalWrite (LED, HIGHT);
  delay (23000);



}
