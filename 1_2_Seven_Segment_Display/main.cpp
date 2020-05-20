#include "mbed.h"

BusOut display(D6, D7, D9, D10, D11, D5, D4, D8);
char table[10] ;



int main(){
  for(int i = 0; i<5; i = i+1){
    table[i] = 0x86;
  }
  for(int i = 5; i<10; i = i+1){
    table[i] = 0x00;
  }
  while(1){
    for (int i = 0; i<10; i = i+1){
      display = table[i];
      wait(1);
    }
  }
}