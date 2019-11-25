
#include<iostream>
#include"MarsRover.h"
#include<string>




 int main(){

 MarsRover Rover1;
 Rover1.Set_Position(1,2,'N');
 Rover1.Set_Instructions("LMLMLMLMM");
 Rover1.show_CurrentPosition();

 Rover1.Set_Position(3,3,'E');
Rover1.Set_Instructions("MMRMMRMRRM");
 Rover1.show_CurrentPosition();

 return 0;
 }

