#include <Ticker.h>
#include "blink.h"

Ticker BlinkLed;
Ticker BlinkLed2;

blinkHandler_t blinkLed1;
blinkHandler_t blinkLed2;

void turnLedOn(void) {
    Serial.printf("%u, Led1 ON\r\n", millis());
}

void turnLedOff(void) {
    Serial.printf("%u, Led1 OFF\r\n", millis());
}

void turnLed2On(void) {
    Serial.printf("%u, Led2 ON\r\n", millis());
}

void turnLed2Off(void) {
    Serial.printf("%u, Led2 OFF\r\n", millis());
}

void setup()
{    
    Serial.begin(115200);

    blinkLed1.offCallback = turnLedOff;
    blinkLed1.onCallback = turnLedOn;

    blinkLed2.offCallback = turnLed2Off;
    blinkLed2.onCallback = turnLed2On;

    BlinkLed.attach_ms<blinkHandler_t*>(500, blinkHandler, &blinkLed1);
    BlinkLed2.attach_ms<blinkHandler_t*>(100, blinkHandler, &blinkLed2);
}

void loop()
{

}