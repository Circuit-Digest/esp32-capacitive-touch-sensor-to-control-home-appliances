#define Relay_PIN_1 15
#define Relay_PIN_2 2
#define Relay_PIN_3 4
#define Relay_PIN_4 16
//All relay pin definitions
#define TOUCH_SENSOR_PIN_1 13
#define TOUCH_SENSOR_PIN_2 12
#define TOUCH_SENSOR_PIN_3 14
#define TOUCH_SENSOR_PIN_4 27
// all touch sensor pin definitions
void setup() {
  Serial.begin(115200); //Begin the UART
  delay(1000); // give me time to bring up serial monitor
  pinMode(Relay_PIN_1, OUTPUT);
  pinMode(Relay_PIN_2, OUTPUT);
  pinMode(Relay_PIN_3, OUTPUT);
  pinMode(Relay_PIN_4, OUTPUT);
  // all the relay pins set as output
}
void loop() {
  /*
     Uncomment for debug
      Serial.println(" ");
      Serial.println("#############################");
      Serial.print("Button1: ");
      Serial.println(touchRead(TOUCH_SENSOR_PIN_1));  // get value of Touch 0 pin = GPIO 4
      Serial.print("Button2: ");
      Serial.println(touchRead(TOUCH_SENSOR_PIN_2));
      Serial.print("Button3: ");
      Serial.println(touchRead(TOUCH_SENSOR_PIN_3));
      Serial.print("Button4: ");
      Serial.println(touchRead(TOUCH_SENSOR_PIN_4));
      Serial.println("#############################");
      Serial.println(" ");
  */
  if ( touchRead(TOUCH_SENSOR_PIN_1) < 28) { // check if the value reaches belo 28
    delay(50);
    if ( touchRead(TOUCH_SENSOR_PIN_1) < 28) { //again check if the value reaches below 28
      Serial.println("Sensor one is touched");
      digitalWrite(Relay_PIN_1, !digitalRead(Relay_PIN_1));
    }
  }
  else if (touchRead(TOUCH_SENSOR_PIN_2) < 28) {
    delay(50);
    if (touchRead(TOUCH_SENSOR_PIN_2) < 28) {
      Serial.println("Sensor Two is touched");
      digitalWrite(Relay_PIN_2, !digitalRead(Relay_PIN_2));
    }
  }
  else if ( touchRead(TOUCH_SENSOR_PIN_3) < 28) {
    delay(50);
    if (touchRead(TOUCH_SENSOR_PIN_3) < 28) {
      Serial.println("Sensor Three is touched");
      digitalWrite(Relay_PIN_3, !digitalRead(Relay_PIN_3));
    }
  }
  else if (touchRead(TOUCH_SENSOR_PIN_4) < 28) {
    delay(50); // works as a debounce delay.
    if (touchRead(TOUCH_SENSOR_PIN_4) < 28) {
      Serial.println("Sensor Four is touched");
      digitalWrite(Relay_PIN_4, !digitalRead(Relay_PIN_4));
    }
  }
  delay(200);
}