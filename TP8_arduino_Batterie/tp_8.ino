// Code Arduino Baterrie

 float N_Value=0;
 float Quantum=0;
 float Tension_Ve=0;
void setup(){
    Serial.begin(9600);
         }
void loop(){ 
     N_Value = analogRead(A2);
    Serial.println(N_Value);
    delay(2500);   
    Quantum = 0.004882813;
    Serial.println(Quantum,20);
    delay(2500);
   Tension_Ve = N_Value*Quantum;
    Serial.println(Tension_Ve);
    delay(2500);
    }