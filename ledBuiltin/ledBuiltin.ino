void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
    Serial.println("off");
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    Serial.println("on");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
}
