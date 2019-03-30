#include <IRremote.h>
#include <IRSigToInt.h>
#include <codes.h>

int RECV_PIN = 34;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
}

void loop() {
 if(irrecv.decode(&results)){
  Serial.println(SigToInt(irrecv, results));
 }
delay(100);
}

