#include "MarsRover.cpp"
#include <gtest/gtest.h>

// Globle object of Rover just to use it in each funcrion test
MarsRover r ;

TEST(Rover_test, Constructor){

ASSERT_EQ(0,r.Posx)<<"The rover x position "<<r.Posx<<"\n";
ASSERT_EQ(0,r.Posy)<<"The rover y position "<<r.Posy<<"\n";
ASSERT_EQ(1,r.Heading)<<"The rover facing at "<<r.Heading<<"\n";
}


TEST(Rover_test, Set_Position){

 int x =1, y=2 ; char dir='n';

r.Set_Position(x,y,dir);
ASSERT_EQ(x,r.Posx)<<"The rover x position "<<r.Posx<<"\n";
ASSERT_EQ(y,r.Posy)<<"The rover y position "<<r.Posy<<"\n";
ASSERT_EQ(1,r.Heading)<<"The rover facing at "<<r.Heading<<"\n";
}




TEST(Rover_test, Show_TheCurrentPosition){

 int x =1, y=2 ; char dir='N';

r.Set_Position(x,y,dir);

std::string cmd ="LMLMLMLMM"; //1 3 N, where n =1
r.Set_Instructions(cmd); 

ASSERT_EQ(1,r.Posx)<<"The rover x position "<<r.Posx<<"\n";
ASSERT_EQ(3,r.Posy)<<"The rover y position "<<r.Posy<<"\n";
ASSERT_EQ(1,r.Heading)<<"The rover facing at "<<r.Heading<<"\n";
}




int mainTest(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
