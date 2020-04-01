#include "mbed.h"
PwmOut PWM1(D7);
AnalogIn Ain(A0);
int main(){
  while(1){
    for(int i=0;i<1;i=i+0.1 ){
        PWM1.period(i);
        PWM1 = Ain;
        wait(0.1);
    }
    for(int i=1;i>1;i=i-0.1 ){
        PWM1.period(i);
        PWM1 = Ain;
        wait(0.1);
    }
  }

}
