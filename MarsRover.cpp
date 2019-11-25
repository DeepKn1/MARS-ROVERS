

#include<iostream>
#include"MarsRover.h"
#include<string>
//#include "gtest/gtest.h"

// intitialize the class variables
MarsRover::MarsRover()
{
        Posx = 0;
        Posy = 0;
        Heading = 1;
}

void MarsRover::Set_Position ( int Posx , int Posy , char Heading )
{
    this->Posx = Posx;
    this->Posy = Posy;
   Check_Heading(Heading); // this->Heading 
}

 void MarsRover::Check_Heading (char head)
 {
          head = toupper(head);// head has to be capital
 switch (head) { 
            case 'N':  this->Heading = North; break;
            case 'E':  this->Heading = East; break;
            case 'S':   this->Heading = South; break;
            case 'W':  this->Heading = West; break;
            default : std::cout<<"Not a valid direction \n";

    }

 }




void MarsRover::  show_CurrentPosition()
{
    char dir;
     switch (this->Heading) { 
            case North: dir = 'N'; break;
            case West:  dir = 'W'; break;
            case South: dir = 'S'; break;
            case East:  dir = 'E'; break;
    }

  
    std::cout<< "The current location and heading of MarsRover is :";


    std::cout<<Posx<<" "<<Posy<<" "<<dir<<std::endl;
}

void MarsRover::Set_Instructions (std::string cmd){

for(int i=0 ; i < cmd.size() ; i++  )
{
 switch ( toupper(cmd[i])) { 
            case 'L': Left_Rotation(); break;
            case 'R': Right_Rotation(); break;
            case 'M':move_Forward(); break;
            default : std::cout<<"Not valid command\n";
    }

    
}


}
void MarsRover :: Left_Rotation()
{

      switch (this->Heading) { 
            case North: this->Heading = West; break;
            case West:  this->Heading = South; break;
            case South: this->Heading = East; break;
            case East:  this->Heading = North; break;
    }
   
}


void MarsRover :: Right_Rotation()
{
    switch (this->Heading) { 
            case North: this->Heading = East; break;
            case East:  this->Heading = South; break;
            case South: this->Heading = West; break;
            case West:  this->Heading = North; break;
    }


}

void MarsRover ::move_Forward()
{
        //  The upper-right coordinates of the plateau have to be  (x=5,y=5),
        // the lower-left coordinates are(x=0,y=0).

     switch (this->Heading) { 
            case North: (Posy < 5) ? Posy++ : 5; break;
            case East:  (Posx < 5) ? Posx++ : 5; break;
            case South: (Posy > 0) ? Posy-- : 0; break;
            case West:  (Posx > 0) ? Posx-- : 0; break;
    }
 
  
}

MarsRover::~MarsRover(){
        
}

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

