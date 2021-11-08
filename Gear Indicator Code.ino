

/* Author: Corey Reyna (reynacorey13@gmail.com)
 Date: 10/9/2021
 Purpose: Gear Indicator for an SAE car. 
 Description: This program creates the funcitons necessary
 to display each of the gears the SAE car can be in. The
 pins can be configured for a different setup. 
*/


int waitTime = 1000; // one second delay

//  Seven Segement counter
int APin = 22;
int BPin = 24;
int CPin = 26;
int DPin = 28;
int EPin = 30;
int FPin = 32;
int GPin = 34;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(APin,OUTPUT);
  pinMode(BPin,OUTPUT);
  pinMode(CPin,OUTPUT);
  pinMode(DPin,OUTPUT);
  pinMode(EPin,OUTPUT);
  pinMode(FPin,OUTPUT);
  pinMode(GPin,OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
/*  disp_zero_gear();
  delay(3000);

  for(int i=0; i<7; ++i)  // counts from 0 to 6
  {
    if(i == 0)
    {
      disp_zero_gear();
    }

    if(i == 1)
    {
      disp_first_gear();
    }

    if(i == 2)
    {
      disp_second_gear();
    }

    if(i == 3)
    {
      disp_third_gear();
    }

    if(i == 4)
    {
      disp_fourth_gear();
    }

    if(i == 5)
    {
      disp_fifth_gear();
    }

    if(i == 6)
    {
      disp_sixth_gear();
    }

  delay(1000);

  }
*/

// counts down from 6 to 0 then turns off with 2 second delays between each change
  disp_sixth_gear();
  delay(2000);
  disp_fifth_gear();
  delay(2000);
  disp_fourth_gear();
  delay(2000);
  disp_third_gear();
  delay(2000);
  disp_second_gear();
  delay(2000);
  disp_first_gear();
  delay(2000);
  turn_off_gear();
  delay(5000);

}

void disp_zero_gear()    //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, HIGH);
  digitalWrite(EPin, HIGH);
  digitalWrite(FPin, HIGH);
  digitalWrite(GPin, LOW);
}

void disp_first_gear()   //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, LOW);
  digitalWrite(GPin, LOW);

}

void disp_second_gear()    //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, HIGH);
  digitalWrite(EPin, HIGH);
  digitalWrite(FPin, LOW);
  digitalWrite(GPin, HIGH);
}

void disp_third_gear()    //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, HIGH);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, LOW);
  digitalWrite(GPin, HIGH);
}

void disp_fourth_gear()    //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, HIGH);
  digitalWrite(GPin, HIGH);
}

void disp_fifth_gear()    //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, HIGH);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, HIGH);
  digitalWrite(GPin, HIGH);
}

void disp_sixth_gear()    //Made according to the truth table for the 7 Segment Display
{
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, HIGH);
  digitalWrite(EPin, HIGH);
  digitalWrite(FPin, HIGH);
  digitalWrite(GPin, HIGH);
}

void turn_off_gear()
{
  digitalWrite(APin, LOW);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, LOW);
  digitalWrite(GPin, LOW);



}