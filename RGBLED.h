#ifndef RGBLED_H
#define RGBLED_H

#include <Arduino.h>

class RGBLED{

  public:

    void begin(void){
      pinMode(5, OUTPUT);
      pinMode(6, OUTPUT);
      pinMode(7, OUTPUT);
    }

    void red(void){
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
    }

    void green(void){
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
    }

    void blue(void){
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
};

#endif
