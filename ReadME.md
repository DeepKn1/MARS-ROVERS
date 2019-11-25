**To run Code**

I run the Code this time in **Linux**, 

To re-run the code please do the following:
    

    1--Start by installing the gtest development package:
            # sudo apt-get install libgtest-dev
    2- install cmake
            # sudo apt-get install cmake 
            # cd /usr/src/gtest
            # sudo cmake CMakeLists.txt
            # sudo make
    3- # copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder 
            # sudo cp *.a /usr/lib


    4- In *CMakeLists.txt*, change the cmake version , in my case it is   **cmake_minimum_required(VERSION 3.5.1)**


    5- From the directory of the code, run the following, expected many files will be generated :
            # cmake CMakeLists.txt
            # make
            # ./Test_Rover

   


**Note 1**
Missing main() in *MarsRover.cpp*,  just to avoid the confilict with the main() in the *UNITTEST.cpp*
In other meaning, during the testunit, main function in MarsRover.cpp is commeted 



**Note 2**
If you would like to run the code MarsRover.cpp without testing :

            - uncommted the lines 116-128 in MarsRover.cpp (main function)
            - run :  g++ -o Rover MarsRover.cpp
            - ./Rover

            -  The output ill be
                    - The current location and heading of MarsRover is :1 2 N
                    - The current location and heading of MarsRover is :5 1 E
















