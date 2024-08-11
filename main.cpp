




#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <conio.h> 
#include <stdio.h>
#include <windows.h>  
#include <cstdlib>







class RCube {
    struct Face {
        std::vector<std::string> colors;
    };

    struct Cube {
        std::vector<Face> faces;
    };
    public:
        void makeCube();
        void move_cube_U();
        void move_cube_U_prime();
        void move_cube_x();
        void move_cube_y();
        void move_cube_z();
        void move_cube_x_prime();
        void move_cube_z_prime();
        void move_cube_y_prime();
        void move_cube_D();
        void move_cube_D_prime();
        void move_cube_R();
        void move_cube_R_prime();
        void move_cube_L();
        void move_cube_L_prime();
        void move_cube_F();
        void move_cube_F_prime();
        void move_cube_B();
        void move_cube_B_prime();
        void move_cube_M();
        void move_cube_E();
        void move_cube_S();
        void move_cube_M_prime();
        void move_cube_E_prime();
        void move_cube_S_prime();
        Cube getCube();
        void outputStandardCube();
        void outputCube();
        void outputCubeNice();
        void stateOfCubeInWords();
        void switchColors();
        void scramble();
    private:
        Cube cube_;
        bool is_orange_ = true;
};














int main() {

    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;

    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // 7 is default

    /*
    
    SetConsoleTextAttribute(hConsole, 9);
    std::cout << "I am blue" << std::endl;

    SetConsoleTextAttribute(hConsole, 10);
    std::cout << "I am green" << std::endl;

    SetConsoleTextAttribute(hConsole, 12);
    std::cout << "I am red" << std::endl;

    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "I am yellow" << std::endl;

    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "I am white" << std::endl;

    SetConsoleTextAttribute(hConsole, 4);
    std::cout << "I am orange" << std::endl;
    
    */


    SetConsoleTextAttribute(hConsole, 7);

    RCube cubert;
    cubert.makeCube();
    
    bool quit = false;
    bool more = false;
    bool net = false;

    
    while (quit == false) {
        
        if (net == true) {
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            cubert.outputCube();
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            
        } else {
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            cubert.outputCubeNice();
        }
        std::string dialouge = "";
        std::cout << "" << std::endl;
        std::cout << "   Valid Moves:" << std::endl;
        

        if (more == true) {
            std::cout << "   U   D   R   L   F   B" << std::endl;
            std::cout << "   U'  D'  R'  L'  F'  B'" << std::endl;
            std::cout << "   x   y   z        SWAP" << std::endl; // solve
            std::cout << "   x'  y'  z'      SOLVE" << std::endl;
            std::cout << "   M   E   S        NET" << std::endl;
            std::cout << "   M'  S'  S'  STANDARD   MORE" << std::endl;
        } else {
            std::cout << "   U   D   R   L   F   B" << std::endl;
            std::cout << "   U'  D'  R'  L'  F'  B'" << std::endl;
            std::cout << "   x   y   z       SOLVE" << std::endl; // solve
            std::cout << "   x'  y'  z'   SCRAMBLE" << std::endl;
            std::cout << "   M   E   S       RESET" << std::endl;
            std::cout << "   M'  S'  S'       QUIT   MORE" << std::endl;

        }
        


        std::cout << "" << std::endl;
        std::cout << "Enter your choice here: ";

        std::getline(std::cin, dialouge);
        if (dialouge == "QUIT" || dialouge == "quit" || dialouge == "CLEAR" || dialouge == "clear") {
            quit = true;
        } else if (dialouge == "U" || dialouge == "u") {
            cubert.move_cube_U();
        } else if (dialouge == "U'" || dialouge == "u'") {
            cubert.move_cube_U_prime();
        } else if (dialouge == "D" || dialouge == "d") {
            cubert.move_cube_D();
        } else if (dialouge == "D'" || dialouge == "d'") {
            cubert.move_cube_D_prime();
        } else if (dialouge == "R" || dialouge == "r") {
            cubert.move_cube_R();
        } else if (dialouge == "R'" || dialouge == "r'") {
            cubert.move_cube_R_prime();
        } else if (dialouge == "L" || dialouge == "l") {
            cubert.move_cube_L();
        } else if (dialouge == "L'" || dialouge == "l'") {
            cubert.move_cube_L_prime();
        } else if (dialouge == "F" || dialouge == "f") {
            cubert.move_cube_F();
        } else if (dialouge == "F'" || dialouge == "f'") {
            cubert.move_cube_F_prime();
        } else if (dialouge == "B" || dialouge == "b") {
            cubert.move_cube_B();
        } else if (dialouge == "B'" || dialouge == "b'") {
            cubert.move_cube_B_prime();
        } else if (dialouge == "x" || dialouge == "x") {
            cubert.move_cube_x();
        } else if (dialouge == "y" || dialouge == "y") {
            cubert.move_cube_y();
        } else if (dialouge == "z" || dialouge == "z") {
            cubert.move_cube_z();
        } else if (dialouge == "x'" || dialouge == "x'") {
            cubert.move_cube_x_prime();
        } else if (dialouge == "y'" || dialouge == "y'") {
            cubert.move_cube_y_prime();
        } else if (dialouge == "z'" || dialouge == "z'") {
            cubert.move_cube_z_prime();
        } else if (dialouge == "M" || dialouge == "m") {
            cubert.move_cube_M();
        } else if (dialouge == "E" || dialouge == "e") {
            cubert.move_cube_E();
        } else if (dialouge == "S" || dialouge == "s") {
            cubert.move_cube_S();
        } else if (dialouge == "M'" || dialouge == "m'") {
            cubert.move_cube_M_prime();
        } else if (dialouge == "E'" || dialouge == "e'") {
            cubert.move_cube_E_prime();
        } else if (dialouge == "S'" || dialouge == "s'") {
            cubert.move_cube_S_prime();
        } else if (dialouge == "SWAP" || dialouge == "swap") {
            cubert.switchColors();
        } else if (dialouge == "SCRAMBLE" || dialouge == "scramble") {
            cubert.scramble();
        } else if (dialouge == "SOLVE" || dialouge == "solve") {
            //cubert.solveCube();
            std::cout << "" << std::endl;
            std::cout << "          NOT IMPLEMENTED YET LOLOLOLOL     also implement undo  " << std::endl;
        } else if (dialouge == "RESET" || dialouge == "reset") {
            cubert.makeCube();
        } else if (dialouge == "MORE" || dialouge == "more") {
            if (more == true) {
                more = false;
            } else {
                more = true;
            }
        } else if (dialouge == "NET" || dialouge == "net") {
            net = true;
        } else if (dialouge == "STANDARD" || dialouge == "standard") {
            net = false;
        } 
        
        
         else {
            std::cout << "" << std::endl;
            std::cout << "          Invalid dialouge option." << std::endl;
        }





    }







    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}














//   inside the src directory/folder
//   g++ main.cpp rubikscube.cpp ; ./a
//   clear

//   clear ; g++ main.cpp rubikscube.cpp ; ./a ; clear