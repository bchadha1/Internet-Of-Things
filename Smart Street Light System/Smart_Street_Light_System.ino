int ldr=A0;   //to setup pin numbers
int ir1=11;
int led_1= 6;

void setup(){
 //Serial.begin(115200);
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  pinMode(ir1,INPUT);
  pinMode(led_1,OUTPUT);
  }
  void loop(){
   Serial.println("LDR value");
    int ldr_val = analogRead(ldr);
    Serial.println(ldr_val);
    boolean ir_1_value = digitalRead(ir1);
    Serial.println("IR value");
    Serial.println(ir_1_value);
    delay(1000);
    if(ldr_val > 300)
    {
    if(ir_1_value == 1)
     {
       Serial.println("led value");
       analogWrite(led_1,255);
       delay(1000);
     
     }
     else
     {
      analogWrite(led_1,0);
     }
   
    }
    else
    {
     analogWrite(led_1,0);
     }
   
    }
