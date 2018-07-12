void setup() {
  // Initialize LED_BUILTIN as output
  pinMode(LED_BUILTIN, OUTPUT);
}

//Fucntion to blink letter 'o'
void morse_o() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(450);
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(450);
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(450);
  digitalWrite(LED_BUILTIN, LOW);
}

//Fucntion to blink letter 's'
void morse_s() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(150);
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(150);
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(150);
  digitalWrite(LED_BUILTIN, LOW);
}

// Loops 'SOS' in morse code forever
void loop() {
  morse_s();
  delay(450);
  morse_o();
  delay(450);
  morse_s();
  delay(1050);
}
