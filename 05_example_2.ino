#define PIN_LED 7

unsigned int count, toggle;

void setup()

{

  pinMode(PIN_LED, OUTPUT);

}

 

void loop()

{

  digitalWrite(PIN_LED, HIGH);

  delay(1000);

  digitalWrite(PIN_LED, LOW);

  for(int i = 0; i <= 5; i++)

  {

    digitalWrite(PIN_LED, HIGH);

    delay(200);

    digitalWrite(PIN_LED, LOW);

    delay(200);

  }

  while(1){ // infinite loop

    }

}

}
