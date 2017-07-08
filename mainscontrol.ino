int mains = 2;
int pirsensor = A2;
int sensorvalue = 0;
//int transmitter = 5;
long timeOld =0;
long timeNew =0;
int myvalue;
void setup()
{
  Serial.begin(9600);
  pinMode(mains,OUTPUT);
//  pinMode(transmitter,OUTPUT);

}

void loop ()
{
 sensorvalue = analogRead(pirsensor); // checks the status of the environment
 Serial.println(sensorvalue);
 timeOld = 0;
 timeNew = millis();
 if (timeOld = 10*60*1000); //begins execution after 10 min
 {
   do
   {
     checkStatus(); //checks whether there is presence of any motion
   }

   while (myvalue=true);
   {
     switchPowerOn();
     
   }
   delay(1000);
 }



}

void checkStatus()
{
    sensorvalue = analogRead(pirsensor);
    sensorvalue = myvalue;

      if (sensorvalue > 200)
      {
        myvalue= true;
        
      }
      
      else 
       {
       myvalue = false;
        
       }

}

void switchPowerOn()
{
  digitalWrite(mains,HIGH);
}

void switchPowerOff ()
{
  digitalWrite(mains,LOW);
}

