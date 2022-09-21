#include <IRremote.h>

const byte IR_RECEIVE_PIN = 2;

#define LED1 3
#define LED2 4
#define LED3 5
#define LED4 6
#define LED5 7
#define LED6 8
#define LED7 9
#define LED8 10
#define LED9 11
#define LED10 12


void setup()
{
   Serial.begin(115200);
   Serial.println("IR Receive test");
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
   pinMode(LED6, OUTPUT);
   pinMode(LED7, OUTPUT);
   pinMode(LED8, OUTPUT);
   pinMode(LED9, OUTPUT);
   pinMode(LED10, OUTPUT);
   
   
}

void loop()
{
   if (IrReceiver.decode())
   {
      String ir_code = String(IrReceiver.decodedIRData.command, HEX);
      Serial.println(ir_code);

      if(ir_code == "16")
        digitalWrite(LED1, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED1, LOW);
      if(ir_code == "c")
        digitalWrite(LED2, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED2, LOW);
      if(ir_code == "18")
        digitalWrite(LED3, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED3, LOW);
      if(ir_code == "5e")
        digitalWrite(LED4, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED4, LOW);
        if(ir_code == "8")
        digitalWrite(LED5, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED5, LOW);
      if(ir_code == "1c")
        digitalWrite(LED6, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED6, LOW);
      if(ir_code == "5a")
        digitalWrite(LED7, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED7, LOW);
      if(ir_code == "42")
        digitalWrite(LED8, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED8, LOW);
        if(ir_code == "52")
        digitalWrite(LED9, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED9, LOW);
      if(ir_code == "4a")
        digitalWrite(LED10, HIGH);
      else if(ir_code == "45")
        digitalWrite(LED10, LOW);

       
      
      
      IrReceiver.resume();
   }
}
