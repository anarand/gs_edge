  int distancia = 0;

  long readUltrasonicDistance(int triggerPin, int echoPin)
    {
      pinMode (triggerPin, OUTPUT);
      digitalWrite (triggerPin, LOW);
      delayMicroseconds (2);
      digitalWrite (triggerPin, HIGH);
      delayMicroseconds (10);
      digitalWrite (triggerPin, LOW);
      pinMode (echoPin, INPUT);

      return pulseIn(echoPin, HIGH);
    }

    void setup()
    {
      Serial.begin(9600);
      pinMode(7, OUTPUT);
    }

    void loop()
    {
      distancia = 0.01723 * readUltrasonicDistance(13, 12);
      Serial.println(distancia);
      if (distancia < 30) {
        digitalWrite(7, HIGH);
      } else {
        digitalWrite(7, LOW);
      }
      delay(100);
    }