// ECE387_Midterm Project
//Yi Zhan
//Professor: Dr.Rajas
const int PIRSensor = 13;
const int ledPin = 2;
int Buzzerpin = 7;
//assign the pin number to buzzer, led, and PIR sensor

int sensorValue = 0;
void setup(){
  pinMode(PIRSensor,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(Buzzerpin,OUTPUT);
  // set up the input and output of the pin
}


void loop(){
  sensorValue = digitalRead(PIRSensor);
  if (sensorValue ==0){ 
    digitalWrite(ledPin,HIGH); //when the value equals 0 or low, the LED will off.
                               //**Watch out that the reason why it is high but off, it is because the sensorValue = 0.
                               //I make it opposite.

  }
  else
  {
    digitalWrite(ledPin,LOW);
   int count =0;
    while(count<2)
      {
          for(int i=0;i<150;i++){
          digitalWrite(Buzzerpin,HIGH); //Sounds on
          delay(2);
          digitalWrite(Buzzerpin,LOW); //Sounds off
          delay(2); //
          }
  
           for(int i=0;i<20;i++){        //the use of two frequency to simulate the alarm
            digitalWrite(Buzzerpin,HIGH); 
            delay(1);
            digitalWrite(Buzzerpin,LOW); 
            delay(1); 
                   }
            count++;//the use of counter is to make sure the sound is looping
}
}
}
