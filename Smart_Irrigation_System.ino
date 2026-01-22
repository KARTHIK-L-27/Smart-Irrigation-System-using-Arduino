int moistureSensor = A0;
int relay = 7;
int led = 8;

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(moistureSensor);
  Serial.println(moisture);

  if (moisture < 400) {   // Dry soil
    digitalWrite(relay, HIGH); // Pump ON
    digitalWrite(led, HIGH);
  } else {                // Wet soil
    digitalWrite(relay, LOW);  // Pump OFF
    digitalWrite(led, LOW);
  }

  delay(1000);
}
