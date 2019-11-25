#ifndef MarsRover_H
#define MarsRover_H

#include<string>
class MarsRover {

private:
//enum Directions { North = 1, East = 2, South = 3, West = 4};
       static const int  North = 1;
    	 static const int  East = 2;
    	 static const int  South = 3;
    	 static const int  West = 4;    
  //protected:
      

public:
       int Posx;
       int Posy;
       int Heading ;
      MarsRover();
      ~MarsRover();
      void Set_Position ( int  , int  , char  );
      void Set_Instructions(std::string cmd);
      void Left_Rotation();
      void Right_Rotation();
      void move_Forward();
      void show_CurrentPosition();
      void Check_Heading (char head);

};    

#endif