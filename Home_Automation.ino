 #define BLYNK_TEMPLATE_ID "TMPL3ioBCba9G"
 #define BLYNK_TEMPLATE_NAME "home automate"
#define BLYNK_AUTH_TOKEN "XaoQJHaensh6ezgUA9xW-ur__cnKtwrK"


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "IQ Z5";
char pass[] = "987654321";

#define LIVING_LED   13
#define BATH_LED     27
#define KITCHEN_LED  14
#define BEDROOM_LED  12

// Living Room
BLYNK_WRITE(V0)
{
  digitalWrite(LIVING_LED, param.asInt());
}

// Bathroom
BLYNK_WRITE(V1)
{
  digitalWrite(BATH_LED, param.asInt());
}

// Kitchen
BLYNK_WRITE(V2)
{
  digitalWrite(KITCHEN_LED, param.asInt());
}

// Bedroom
BLYNK_WRITE(V3)
{
  digitalWrite(BEDROOM_LED, param.asInt());
}

void setup()
{
  Serial.begin(115200);

  pinMode(LIVING_LED, OUTPUT);
  pinMode(BATH_LED, OUTPUT);
  pinMode(KITCHEN_LED, OUTPUT);
  pinMode(BEDROOM_LED, OUTPUT);

  digitalWrite(LIVING_LED, LOW);
  digitalWrite(BATH_LED, LOW);
  digitalWrite(KITCHEN_LED, LOW);
  digitalWrite(BEDROOM_LED, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Home Automation Started");
}

void loop()
{
  Blynk.run();
}
