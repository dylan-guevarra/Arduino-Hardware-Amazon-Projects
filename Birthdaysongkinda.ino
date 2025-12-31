// Dylan Guevarra 
#include "pitches.h"
void setup()  {
} // not needed
 
// notes in the melody:
int melody[] = {
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_C6, NOTE_B5,
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D6, NOTE_B5,
  NOTE_G5, NOTE_G5, NOTE_E6, NOTE_D5, NOTE_C6, NOTE_B6,
};
int durations[] = {
  300,300,400,300,500,800,
  300,300,400,300,500,900,
  300,300,600,300,300,300,
};

void loop() {
  int notes = sizeof(melody)  / sizeof(melody[0]);
  for (int  i = 0;  i<notes;i++)  {
    tone(8, melody[i], durations[i]);
    delay(durations[i]*1.3);
  }

delay(2000);
}