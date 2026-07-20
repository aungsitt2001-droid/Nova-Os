#include "Config.h"
#include "Version.h"

void setup() {
  Serial.begin(115200);

  Serial.println();
  Serial.println("================================");
  Serial.println("        Nova One");
  Serial.print("Nova OS ");
  Serial.println(NOVA_VERSION);
  Serial.println("================================");
}

void loop() {
  delay(1000);
}
