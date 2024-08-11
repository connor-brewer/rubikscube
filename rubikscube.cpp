



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






void RCube::makeCube() {
    
    for (int i = 0; i < cube_.faces.size(); i++) {
        cube_.faces.at(i).colors.clear();
    }
    cube_.faces.clear();
    
    Face oneblue;
    oneblue.colors = {"blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue"};

    Face twoyellow;
    twoyellow.colors = {"yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
    
    Face threered;
    threered.colors = {"red", "red", "red", "red", "red", "red", "red", "red", "red"};
    
    Face fourorange;
    fourorange.colors = {"orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange"};
    
    Face fivegreen;
    fivegreen.colors = { "green", "green", "green", "green", "green", "green", "green", "green", "green"};
    
    Face sixwhite;
    sixwhite.colors = { "white", "white", "white", "white", "white", "white", "white", "white", "white"};
    
    Cube c;
    c.faces.push_back(oneblue);
    c.faces.push_back(twoyellow);
    c.faces.push_back(threered);
    c.faces.push_back(fourorange);
    c.faces.push_back(fivegreen);
    c.faces.push_back(sixwhite);

    cube_ = c;
}  



void RCube::move_cube_U() {

    std::string face_two_pixel_zero = cube_.faces.at(2).colors.at(0);
    std::string face_two_pixel_one = cube_.faces.at(2).colors.at(1);
    std::string face_two_pixel_two = cube_.faces.at(2).colors.at(2);

    std::string face_zero_pixel_zero = cube_.faces.at(0).colors.at(0);
    std::string face_zero_pixel_one = cube_.faces.at(0).colors.at(1);
    std::string face_zero_pixel_two = cube_.faces.at(0).colors.at(2);

    std::string face_three_pixel_zero = cube_.faces.at(3).colors.at(0);
    std::string face_three_pixel_one = cube_.faces.at(3).colors.at(1);
    std::string face_three_pixel_two = cube_.faces.at(3).colors.at(2);

    std::string face_four_pixel_zero = cube_.faces.at(4).colors.at(0);
    std::string face_four_pixel_one = cube_.faces.at(4).colors.at(1);
    std::string face_four_pixel_two = cube_.faces.at(4).colors.at(2);

    cube_.faces.at(0).colors.at(0) = face_two_pixel_zero;
    cube_.faces.at(0).colors.at(1) = face_two_pixel_one;
    cube_.faces.at(0).colors.at(2) = face_two_pixel_two;

    cube_.faces.at(3).colors.at(0) = face_zero_pixel_zero;
    cube_.faces.at(3).colors.at(1) = face_zero_pixel_one;
    cube_.faces.at(3).colors.at(2) = face_zero_pixel_two;

    cube_.faces.at(4).colors.at(0) = face_three_pixel_zero;
    cube_.faces.at(4).colors.at(1) = face_three_pixel_one;
    cube_.faces.at(4).colors.at(2) = face_three_pixel_two;

    cube_.faces.at(2).colors.at(0) = face_four_pixel_zero;
    cube_.faces.at(2).colors.at(1) = face_four_pixel_one;
    cube_.faces.at(2).colors.at(2) = face_four_pixel_two;

    // top face

    std::string face_one_pixel_zero = cube_.faces.at(1).colors.at(0);
    std::string face_one_pixel_one = cube_.faces.at(1).colors.at(1);
    std::string face_one_pixel_two = cube_.faces.at(1).colors.at(2);

    std::string face_one_pixel_three = cube_.faces.at(1).colors.at(3);
    std::string face_one_pixel_five = cube_.faces.at(1).colors.at(5);

    std::string face_one_pixel_six = cube_.faces.at(1).colors.at(6);
    std::string face_one_pixel_seven = cube_.faces.at(1).colors.at(7);
    std::string face_one_pixel_eight = cube_.faces.at(1).colors.at(8);

    cube_.faces.at(1).colors.at(0) = face_one_pixel_six;
    cube_.faces.at(1).colors.at(2) = face_one_pixel_zero;
    cube_.faces.at(1).colors.at(6) = face_one_pixel_eight;
    cube_.faces.at(1).colors.at(8) = face_one_pixel_two;

    cube_.faces.at(1).colors.at(1) = face_one_pixel_three;
    cube_.faces.at(1).colors.at(3) = face_one_pixel_seven;
    cube_.faces.at(1).colors.at(5) = face_one_pixel_one;
    cube_.faces.at(1).colors.at(7) = face_one_pixel_five;
    

}


void RCube::move_cube_U_prime() {
    RCube::move_cube_U();
    RCube::move_cube_U();
    RCube::move_cube_U();
}






void RCube::move_cube_x() {


    

    std::string face_zero_pixel_zero = cube_.faces.at(0).colors.at(0);
    std::string face_zero_pixel_one = cube_.faces.at(0).colors.at(1);
    std::string face_zero_pixel_two = cube_.faces.at(0).colors.at(2);
    std::string face_zero_pixel_three = cube_.faces.at(0).colors.at(3);
    std::string face_zero_pixel_four = cube_.faces.at(0).colors.at(4);
    std::string face_zero_pixel_five = cube_.faces.at(0).colors.at(5);
    std::string face_zero_pixel_six = cube_.faces.at(0).colors.at(6);
    std::string face_zero_pixel_seven = cube_.faces.at(0).colors.at(7);
    std::string face_zero_pixel_eight = cube_.faces.at(0).colors.at(8);

    std::string face_five_pixel_zero = cube_.faces.at(5).colors.at(0);
    std::string face_five_pixel_one = cube_.faces.at(5).colors.at(1);
    std::string face_five_pixel_two = cube_.faces.at(5).colors.at(2);
    std::string face_five_pixel_three = cube_.faces.at(5).colors.at(3);
    std::string face_five_pixel_four = cube_.faces.at(5).colors.at(4);
    std::string face_five_pixel_five = cube_.faces.at(5).colors.at(5);
    std::string face_five_pixel_six = cube_.faces.at(5).colors.at(6);
    std::string face_five_pixel_seven = cube_.faces.at(5).colors.at(7);
    std::string face_five_pixel_eight = cube_.faces.at(5).colors.at(8);

    std::string face_one_pixel_zero = cube_.faces.at(1).colors.at(0);
    std::string face_one_pixel_one = cube_.faces.at(1).colors.at(1);
    std::string face_one_pixel_two = cube_.faces.at(1).colors.at(2);
    std::string face_one_pixel_three = cube_.faces.at(1).colors.at(3);
    std::string face_one_pixel_four = cube_.faces.at(1).colors.at(4);
    std::string face_one_pixel_five = cube_.faces.at(1).colors.at(5);
    std::string face_one_pixel_six = cube_.faces.at(1).colors.at(6);
    std::string face_one_pixel_seven = cube_.faces.at(1).colors.at(7);
    std::string face_one_pixel_eight = cube_.faces.at(1).colors.at(8);

    std::string face_four_pixel_zero = cube_.faces.at(4).colors.at(0);
    std::string face_four_pixel_one = cube_.faces.at(4).colors.at(1);
    std::string face_four_pixel_two = cube_.faces.at(4).colors.at(2);
    std::string face_four_pixel_three = cube_.faces.at(4).colors.at(3);
    std::string face_four_pixel_four = cube_.faces.at(4).colors.at(4);
    std::string face_four_pixel_five = cube_.faces.at(4).colors.at(5);
    std::string face_four_pixel_six = cube_.faces.at(4).colors.at(6);
    std::string face_four_pixel_seven = cube_.faces.at(4).colors.at(7);
    std::string face_four_pixel_eight = cube_.faces.at(4).colors.at(8);











    std::string face_three_pixel_zero = cube_.faces.at(3).colors.at(0);
    std::string face_three_pixel_one = cube_.faces.at(3).colors.at(1);
    std::string face_three_pixel_two = cube_.faces.at(3).colors.at(2);

    std::string face_three_pixel_three = cube_.faces.at(3).colors.at(3);
    std::string face_three_pixel_five = cube_.faces.at(3).colors.at(5);

    std::string face_three_pixel_six = cube_.faces.at(3).colors.at(6);
    std::string face_three_pixel_seven = cube_.faces.at(3).colors.at(7);
    std::string face_three_pixel_eight = cube_.faces.at(3).colors.at(8);








    std::string face_two_pixel_zero = cube_.faces.at(2).colors.at(0);
    std::string face_two_pixel_one = cube_.faces.at(2).colors.at(1);
    std::string face_two_pixel_two = cube_.faces.at(2).colors.at(2);

    std::string face_two_pixel_three = cube_.faces.at(2).colors.at(3);
    std::string face_two_pixel_five = cube_.faces.at(2).colors.at(5);

    std::string face_two_pixel_six = cube_.faces.at(2).colors.at(6);
    std::string face_two_pixel_seven = cube_.faces.at(2).colors.at(7);
    std::string face_two_pixel_eight = cube_.faces.at(2).colors.at(8);



























    //cube_.faces.at(0) = face_five;

    cube_.faces.at(0).colors.at(0) = face_five_pixel_two;
    cube_.faces.at(0).colors.at(3) = face_five_pixel_one;
    cube_.faces.at(0).colors.at(6) = face_five_pixel_zero;
    cube_.faces.at(0).colors.at(1) = face_five_pixel_five;
    cube_.faces.at(0).colors.at(4) = face_five_pixel_four;
    cube_.faces.at(0).colors.at(7) = face_five_pixel_three;
    cube_.faces.at(0).colors.at(8) = face_five_pixel_six;
    cube_.faces.at(0).colors.at(5) = face_five_pixel_seven;
    cube_.faces.at(0).colors.at(2) = face_five_pixel_eight;



    //cube_.faces.at(5) = face_four;

    cube_.faces.at(5).colors.at(0) = face_four_pixel_two;
    cube_.faces.at(5).colors.at(1) = face_four_pixel_five;
    cube_.faces.at(5).colors.at(2) = face_four_pixel_eight;
    cube_.faces.at(5).colors.at(3) = face_four_pixel_one;
    cube_.faces.at(5).colors.at(4) = face_four_pixel_four;
    cube_.faces.at(5).colors.at(5) = face_four_pixel_seven;
    cube_.faces.at(5).colors.at(6) = face_four_pixel_zero;
    cube_.faces.at(5).colors.at(7) = face_four_pixel_three;
    cube_.faces.at(5).colors.at(8) = face_four_pixel_six;







    //cube_.faces.at(4) = face_one;

    cube_.faces.at(4).colors.at(0) = face_one_pixel_six;
    cube_.faces.at(4).colors.at(1) = face_one_pixel_three;
    cube_.faces.at(4).colors.at(2) = face_one_pixel_zero;
    cube_.faces.at(4).colors.at(3) = face_one_pixel_seven;
    cube_.faces.at(4).colors.at(4) = face_one_pixel_four;
    cube_.faces.at(4).colors.at(5) = face_one_pixel_one;
    cube_.faces.at(4).colors.at(6) = face_one_pixel_eight;
    cube_.faces.at(4).colors.at(7) = face_one_pixel_five;
    cube_.faces.at(4).colors.at(8) = face_one_pixel_two;




    //cube_.faces.at(1) = face_zero;

    cube_.faces.at(1).colors.at(0) = face_zero_pixel_six;
    cube_.faces.at(1).colors.at(1) = face_zero_pixel_three;
    cube_.faces.at(1).colors.at(2) = face_zero_pixel_zero;
    cube_.faces.at(1).colors.at(3) = face_zero_pixel_seven;
    cube_.faces.at(1).colors.at(4) = face_zero_pixel_four;
    cube_.faces.at(1).colors.at(5) = face_zero_pixel_one;
    cube_.faces.at(1).colors.at(6) = face_zero_pixel_eight;
    cube_.faces.at(1).colors.at(7) = face_zero_pixel_five;
    cube_.faces.at(1).colors.at(8) = face_zero_pixel_two;









    // orange side

    

    cube_.faces.at(3).colors.at(0) = face_three_pixel_two;
    cube_.faces.at(3).colors.at(2) = face_three_pixel_eight;
    cube_.faces.at(3).colors.at(6) = face_three_pixel_zero;
    cube_.faces.at(3).colors.at(8) = face_three_pixel_six;

    cube_.faces.at(3).colors.at(1) = face_three_pixel_five;
    cube_.faces.at(3).colors.at(3) = face_three_pixel_one;
    cube_.faces.at(3).colors.at(5) = face_three_pixel_seven;
    cube_.faces.at(3).colors.at(7) = face_three_pixel_three;










    // red side

    

    cube_.faces.at(2).colors.at(0) = face_two_pixel_six;
    cube_.faces.at(2).colors.at(2) = face_two_pixel_zero;
    cube_.faces.at(2).colors.at(6) = face_two_pixel_eight;
    cube_.faces.at(2).colors.at(8) = face_two_pixel_two;

    cube_.faces.at(2).colors.at(1) = face_two_pixel_three;
    cube_.faces.at(2).colors.at(3) = face_two_pixel_seven;
    cube_.faces.at(2).colors.at(5) = face_two_pixel_one;
    cube_.faces.at(2).colors.at(7) = face_two_pixel_five;







}










void RCube::move_cube_y() {
    // this works for y
    
    Face face_zero = cube_.faces.at(0);
    Face face_two = cube_.faces.at(2);
    Face face_three = cube_.faces.at(3);
    Face face_four = cube_.faces.at(4);


    cube_.faces.at(0) = face_two;
    cube_.faces.at(2) = face_four;
    cube_.faces.at(3) = face_zero;
    cube_.faces.at(4) = face_three;


    //top side

    std::string face_one_pixel_zero = cube_.faces.at(1).colors.at(0);
    std::string face_one_pixel_one = cube_.faces.at(1).colors.at(1);
    std::string face_one_pixel_two = cube_.faces.at(1).colors.at(2);

    std::string face_one_pixel_three = cube_.faces.at(1).colors.at(3);
    std::string face_one_pixel_five = cube_.faces.at(1).colors.at(5);

    std::string face_one_pixel_six = cube_.faces.at(1).colors.at(6);
    std::string face_one_pixel_seven = cube_.faces.at(1).colors.at(7);
    std::string face_one_pixel_eight = cube_.faces.at(1).colors.at(8);

    cube_.faces.at(1).colors.at(0) = face_one_pixel_six;
    cube_.faces.at(1).colors.at(2) = face_one_pixel_zero;
    cube_.faces.at(1).colors.at(6) = face_one_pixel_eight;
    cube_.faces.at(1).colors.at(8) = face_one_pixel_two;

    cube_.faces.at(1).colors.at(1) = face_one_pixel_three;
    cube_.faces.at(1).colors.at(3) = face_one_pixel_seven;
    cube_.faces.at(1).colors.at(5) = face_one_pixel_one;
    cube_.faces.at(1).colors.at(7) = face_one_pixel_five;

    //bottom side

    std::string face_five_pixel_zero = cube_.faces.at(5).colors.at(0);
    std::string face_five_pixel_one = cube_.faces.at(5).colors.at(1);
    std::string face_five_pixel_two = cube_.faces.at(5).colors.at(2);

    std::string face_five_pixel_three = cube_.faces.at(5).colors.at(3);
    std::string face_five_pixel_five = cube_.faces.at(5).colors.at(5);

    std::string face_five_pixel_six = cube_.faces.at(5).colors.at(6);
    std::string face_five_pixel_seven = cube_.faces.at(5).colors.at(7);
    std::string face_five_pixel_eight = cube_.faces.at(5).colors.at(8);

    cube_.faces.at(5).colors.at(0) = face_five_pixel_two;
    cube_.faces.at(5).colors.at(2) = face_five_pixel_eight;
    cube_.faces.at(5).colors.at(6) = face_five_pixel_zero;
    cube_.faces.at(5).colors.at(8) = face_five_pixel_six;

    cube_.faces.at(5).colors.at(1) = face_five_pixel_five;
    cube_.faces.at(5).colors.at(3) = face_five_pixel_one;
    cube_.faces.at(5).colors.at(5) = face_five_pixel_seven;
    cube_.faces.at(5).colors.at(7) = face_five_pixel_three;
}

void RCube::move_cube_x_prime() {
    RCube::move_cube_x();
    RCube::move_cube_x();
    RCube::move_cube_x();
}

void RCube::move_cube_y_prime() {
    RCube::move_cube_y();
    RCube::move_cube_y();
    RCube::move_cube_y();
}

void RCube::move_cube_z() {
    RCube::move_cube_x_prime();
    RCube::move_cube_y_prime();
    RCube::move_cube_x();
}



void RCube::move_cube_z_prime() {
    RCube::move_cube_y();
    RCube::move_cube_x();
    RCube::move_cube_y_prime();
}

void RCube::move_cube_D() {
    RCube::move_cube_z();
    RCube::move_cube_z();
    RCube::move_cube_U();
    RCube::move_cube_z();
    RCube::move_cube_z();
}



void RCube::move_cube_R() {
    RCube::move_cube_z_prime();
    RCube::move_cube_U();
    RCube::move_cube_z();
}


void RCube::move_cube_L() {
    RCube::move_cube_z();
    RCube::move_cube_U();
    RCube::move_cube_z_prime();
}



void RCube::move_cube_F() {
    RCube::move_cube_x();
    RCube::move_cube_U();
    RCube::move_cube_x_prime();
}


void RCube::move_cube_B() {
    RCube::move_cube_x_prime();
    RCube::move_cube_U();
    RCube::move_cube_x();
}



RCube::Cube RCube::getCube() {
    return cube_;
}



void RCube::move_cube_D_prime() {
    RCube::move_cube_D();
    RCube::move_cube_D();
    RCube::move_cube_D();
}

void RCube::move_cube_R_prime() {
    RCube::move_cube_R();
    RCube::move_cube_R();
    RCube::move_cube_R();
}

void RCube::move_cube_L_prime() {
    RCube::move_cube_L();
    RCube::move_cube_L();
    RCube::move_cube_L();
}

void RCube::move_cube_F_prime() {
    RCube::move_cube_F();
    RCube::move_cube_F();
    RCube::move_cube_F();
}

void RCube::move_cube_B_prime() {
    RCube::move_cube_B();
    RCube::move_cube_B();
    RCube::move_cube_B();
}


void RCube::move_cube_M() {
    RCube::move_cube_x_prime();
    RCube::move_cube_R();
    RCube::move_cube_L_prime();
}

void RCube::move_cube_E() {
    RCube::move_cube_y_prime();
    RCube::move_cube_U();
    RCube::move_cube_D_prime();
}

void RCube::move_cube_S() {
    RCube::move_cube_z();
    RCube::move_cube_F_prime();
    RCube::move_cube_B();

}

void RCube::move_cube_M_prime() {
    RCube::move_cube_x();
    RCube::move_cube_R_prime();
    RCube::move_cube_L();
}

void RCube::move_cube_E_prime() {
    RCube::move_cube_y();
    RCube::move_cube_U_prime();
    RCube::move_cube_D();
}

void RCube::move_cube_S_prime() {
    RCube::move_cube_z_prime();
    RCube::move_cube_B_prime();
    RCube::move_cube_F();
}











































void RCube::outputStandardCube() {

    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    



    int color_of_face_zero = 9;
    int color_of_face_one = 14;
    int color_of_face_two = 12;
    int color_of_face_three = 4;
    int color_of_face_four = 10;
    int color_of_face_five = 7;


    SetConsoleTextAttribute(hConsole, color_of_face_three);

    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << " " << std::endl;
    

    for (int j = 0; j < 6; j++) {
        
        SetConsoleTextAttribute(hConsole, color_of_face_zero);
        std::cout << "     ############";
        SetConsoleTextAttribute(hConsole, color_of_face_one);
        std::cout << "     ############";
        SetConsoleTextAttribute(hConsole, color_of_face_four);
        std::cout << "     ############";
        SetConsoleTextAttribute(hConsole, color_of_face_five);
        std::cout << "     ############";
        std::cout << "" << std::endl;
    }
  

    SetConsoleTextAttribute(hConsole, color_of_face_two);

    std::cout << " " << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << "                      ############" << std::endl;
    std::cout << " " << std::endl;

    SetConsoleTextAttribute(hConsole, 7);

}





void RCube::switchColors() {
    if (is_orange_) {
        is_orange_ = false;
    } else {
        is_orange_ = true;
    }
}




void RCube::outputCube() {

    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::vector<std::string> colors_of_face_three = cube_.faces.at(3).colors;


    int the_color = 0;
    if (is_orange_) {
        the_color = 4;
    } else {
        the_color = 13;
    }




    std::cout << "    "; 

    for (int i = 8; i >= 0; i--) {
        if (colors_of_face_three.at(i) == "white") {
            SetConsoleTextAttribute(hConsole, 7);
        } else if (colors_of_face_three.at(i) == "blue") {
            SetConsoleTextAttribute(hConsole, 9);
        } else if (colors_of_face_three.at(i) == "green") {
            SetConsoleTextAttribute(hConsole, 10);
        } else if (colors_of_face_three.at(i) == "red") {
            SetConsoleTextAttribute(hConsole, 12);
        } else if (colors_of_face_three.at(i) == "orange") {
            SetConsoleTextAttribute(hConsole, the_color);
        } else if (colors_of_face_three.at(i) == "yellow") {
            SetConsoleTextAttribute(hConsole, 14);
        }
        std::cout << "#";
        if (i == 6 || i == 3 || i == 0) {
            std::cout << "" << std::endl;
            std::cout << "    ";
        }
    }

    std::cout << "" << std::endl;
    SetConsoleTextAttribute(hConsole, 7);




    std::vector<std::string> colors_of_face_zero = cube_.faces.at(0).colors; 
    std::vector<std::string> colors_of_face_one = cube_.faces.at(1).colors; 
    std::vector<std::string> colors_of_face_four = cube_.faces.at(4).colors; 
    std::vector<std::string> colors_of_face_five = cube_.faces.at(5).colors;
    std::vector<std::string> colors_of_face_two = cube_.faces.at(2).colors; 


    // make a vector of these hardcoded indexes, then do the check on each
    
    std::vector<int> indxs;
    indxs.push_back(6);
    indxs.push_back(3);
    indxs.push_back(0);

    indxs.push_back(0);
    indxs.push_back(1);
    indxs.push_back(2);

    indxs.push_back(2);
    indxs.push_back(5);
    indxs.push_back(8);

    indxs.push_back(0);
    indxs.push_back(1);
    indxs.push_back(2);



    indxs.push_back(6 + 1);
    indxs.push_back(3 + 1);
    indxs.push_back(0 + 1);

    indxs.push_back(0 + 3);
    indxs.push_back(1 + 3);
    indxs.push_back(2 + 3);

    indxs.push_back(2 - 1);
    indxs.push_back(5 - 1);
    indxs.push_back(8 - 1);

    indxs.push_back(0 + 3);
    indxs.push_back(1 + 3);
    indxs.push_back(2 + 3);



    indxs.push_back(6 + 1 + 1);
    indxs.push_back(3 + 1 + 1);
    indxs.push_back(0 + 1 + 1);

    indxs.push_back(0 + 3 + 3);
    indxs.push_back(1 + 3 + 3);
    indxs.push_back(2 + 3 + 3);

    indxs.push_back(2 - 1 - 1);
    indxs.push_back(5 - 1 - 1);
    indxs.push_back(8 - 1 - 1);

    indxs.push_back(0 + 3 + 3);
    indxs.push_back(1 + 3 + 3);
    indxs.push_back(2 + 3 + 3);




    // std::cout << "at line " << __LINE__ << " the value of ___ is "<< __ <<  std::endl; 


    


    int aye = 0;
    for (int p = 0; p < 3; p++) {
        for (int j = 0; j < 3; j++) {
            if (colors_of_face_zero.at(indxs.at(aye)) == "white") {
                SetConsoleTextAttribute(hConsole, 7);
            } else if (colors_of_face_zero.at(indxs.at(aye)) == "blue") {
                SetConsoleTextAttribute(hConsole, 9);
            } else if (colors_of_face_zero.at(indxs.at(aye)) == "green") {
                SetConsoleTextAttribute(hConsole, 10);
            } else if (colors_of_face_zero.at(indxs.at(aye)) == "red") {
                SetConsoleTextAttribute(hConsole, 12);
            } else if (colors_of_face_zero.at(indxs.at(aye)) == "orange") {
                SetConsoleTextAttribute(hConsole, the_color);
            } else if (colors_of_face_zero.at(indxs.at(aye)) == "yellow") {
                SetConsoleTextAttribute(hConsole, 14);
            }
            std::cout << "#";
            aye++;
        }

        std::cout << " ";

        for (int j = 0; j < 3; j++) {
            if (colors_of_face_one.at(indxs.at(aye)) == "white") {
                SetConsoleTextAttribute(hConsole, 7);
            } else if (colors_of_face_one.at(indxs.at(aye)) == "blue") {
                SetConsoleTextAttribute(hConsole, 9);
            } else if (colors_of_face_one.at(indxs.at(aye)) == "green") {
                SetConsoleTextAttribute(hConsole, 10);
            } else if (colors_of_face_one.at(indxs.at(aye)) == "red") {
                SetConsoleTextAttribute(hConsole, 12);
            } else if (colors_of_face_one.at(indxs.at(aye)) == "orange") {
                SetConsoleTextAttribute(hConsole, the_color);
            } else if (colors_of_face_one.at(indxs.at(aye)) == "yellow") {
                SetConsoleTextAttribute(hConsole, 14);
            }
            std::cout << "#";
            aye++;
        }

        std::cout << " ";

        for (int j = 0; j < 3; j++) {
            if (colors_of_face_four.at(indxs.at(aye)) == "white") {
                SetConsoleTextAttribute(hConsole, 7);
            } else if (colors_of_face_four.at(indxs.at(aye)) == "blue") {
                SetConsoleTextAttribute(hConsole, 9);
            } else if (colors_of_face_four.at(indxs.at(aye)) == "green") {
                SetConsoleTextAttribute(hConsole, 10);
            } else if (colors_of_face_four.at(indxs.at(aye)) == "red") {
                SetConsoleTextAttribute(hConsole, 12);
            } else if (colors_of_face_four.at(indxs.at(aye)) == "orange") {
                SetConsoleTextAttribute(hConsole, the_color);
            } else if (colors_of_face_four.at(indxs.at(aye)) == "yellow") {
                SetConsoleTextAttribute(hConsole, 14);
            }
            std::cout << "#";
            aye++;
        }

        std::cout << " ";

        for (int j = 0; j < 3; j++) {
            if (colors_of_face_five.at(indxs.at(aye)) == "white") {
                SetConsoleTextAttribute(hConsole, 7);
            } else if (colors_of_face_five.at(indxs.at(aye)) == "blue") {
                SetConsoleTextAttribute(hConsole, 9);
            } else if (colors_of_face_five.at(indxs.at(aye)) == "green") {
                SetConsoleTextAttribute(hConsole, 10);
            } else if (colors_of_face_five.at(indxs.at(aye)) == "red") {
                SetConsoleTextAttribute(hConsole, 12);
            } else if (colors_of_face_five.at(indxs.at(aye)) == "orange") {
                SetConsoleTextAttribute(hConsole, the_color);
            } else if (colors_of_face_five.at(indxs.at(aye)) == "yellow") {
                SetConsoleTextAttribute(hConsole, 14);
            }
            std::cout << "#";
            aye++;
        }

        std::cout << "" << std::endl;

    }





















    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "" << std::endl;

    
    std::cout << "    ";

    for (int i = 0; i < 9; i++) {
        if (colors_of_face_two.at(i) == "white") {
            SetConsoleTextAttribute(hConsole, 7);
        } else if (colors_of_face_two.at(i) == "blue") {
            SetConsoleTextAttribute(hConsole, 9);
        } else if (colors_of_face_two.at(i) == "green") {
            SetConsoleTextAttribute(hConsole, 10);
        } else if (colors_of_face_two.at(i) == "red") {
            SetConsoleTextAttribute(hConsole, 12);
        } else if (colors_of_face_two.at(i) == "orange") {
            SetConsoleTextAttribute(hConsole, the_color);
        } else if (colors_of_face_two.at(i) == "yellow") {
            SetConsoleTextAttribute(hConsole, 14);
        }
        std::cout << "#";
        if (i == 2 || i == 5 || i == 8) {
            std::cout << "" << std::endl;
            std::cout << "    ";
        }
        
    }
    std::cout << "" << std::endl;







    SetConsoleTextAttribute(hConsole, 7);
}








void RCube::outputCubeNice() {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int the_color = 0;
    if (is_orange_) {
        the_color = 4;
    } else {
        the_color = 13;
    }

    


   


   




    int pixel_temp = 0;
    int face_temp = 0;





    int acolor = 0; face_temp = 1; pixel_temp = 2; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        acolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        acolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        acolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        acolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        acolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        acolor = 14;
    }


   
    int bcolor = 0; face_temp = 1; pixel_temp = 1; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        bcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        bcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        bcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        bcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        bcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        bcolor = 14;
    }



    int ccolor = 0; face_temp = 1; pixel_temp = 0; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        ccolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        ccolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        ccolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        ccolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        ccolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        ccolor = 14;
    }





    int dcolor = 0; face_temp = 1; pixel_temp = 5; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        dcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        dcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        dcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        dcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        dcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        dcolor = 14;
    }

    
    int ecolor = 0; face_temp = 1; pixel_temp = 4; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        ecolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        ecolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        ecolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        ecolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        ecolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        ecolor = 14;
    }

    
    int fcolor = 0; face_temp = 1; pixel_temp = 3; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        fcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        fcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        fcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        fcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        fcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        fcolor = 14;
    }

    
    int gcolor = 0; face_temp = 1; pixel_temp = 8; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        gcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        gcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        gcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        gcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        gcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        gcolor = 14;
    }

    
    int hcolor = 0; face_temp = 1; pixel_temp = 7; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        hcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        hcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        hcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        hcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        hcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        hcolor = 14;
    }

    
    int lcolor = 0; face_temp = 0; pixel_temp = 5; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        lcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        lcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        lcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        lcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        lcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        lcolor = 14;
    }

    
    int icolor = 0; face_temp = 1; pixel_temp = 6; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        icolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        icolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        icolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        icolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        icolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        icolor = 14;
    }

    
    int jcolor = 0; face_temp = 0; pixel_temp = 1; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        jcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        jcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        jcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        jcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        jcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        jcolor = 14;
    }

    
    int kcolor = 0; face_temp = 0; pixel_temp = 8; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        kcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        kcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        kcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        kcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        kcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        kcolor = 14;
    }

    
    int mcolor = 0; face_temp = 0; pixel_temp = 4; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        mcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        mcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        mcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        mcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        mcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        mcolor = 14;
    }

    
    int ncolor = 0; face_temp = 2; pixel_temp = 5; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        ncolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        ncolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        ncolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        ncolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        ncolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        ncolor = 14;
    }

    
    int ocolor = 0; face_temp = 0; pixel_temp = 7; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        ocolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        ocolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        ocolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        ocolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        ocolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        ocolor = 14;
    }

    
    int pcolor = 0; face_temp = 2; pixel_temp = 4; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        pcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        pcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        pcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        pcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        pcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        pcolor = 14;
    }

    
    int qcolor = 0; face_temp = 0; pixel_temp = 2; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        qcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        qcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        qcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        qcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        qcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        qcolor = 14;
    }

    
    int rcolor = 0; face_temp = 2; pixel_temp = 0; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        rcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        rcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        rcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        rcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        rcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        rcolor = 14;
    }

    
    int scolor = 0; face_temp = 2; pixel_temp = 2; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        scolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        scolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        scolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        scolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        scolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        scolor = 14;
    }

    
    int tcolor = 0; face_temp = 2; pixel_temp = 7; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        tcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        tcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        tcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        tcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        tcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        tcolor = 14;
    }

    
    int ucolor = 0; face_temp = 2; pixel_temp = 6; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        ucolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        ucolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        ucolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        ucolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        ucolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        ucolor = 14;
    }

    
    int vcolor = 0; face_temp = 2; pixel_temp = 8; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
       vcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        vcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        vcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        vcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        vcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        vcolor = 14;
    }

    
    int wcolor = 0; face_temp = 2; pixel_temp = 1; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        wcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        wcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        wcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        wcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        wcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        wcolor = 14;
    }

    
    int xcolor = 0; face_temp = 0; pixel_temp = 0; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
       xcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        xcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        xcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        xcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        xcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        xcolor = 14;
    }

    
    int ycolor = 0; face_temp = 0; pixel_temp = 3; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        ycolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        ycolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        ycolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        ycolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        ycolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        ycolor = 14;
    }

    
    int zcolor = 0; face_temp = 0; pixel_temp = 6; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        zcolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        zcolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        zcolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        zcolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        zcolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        zcolor = 14;
    }

    
    int zerocolor = 0; face_temp = 2; pixel_temp = 3; if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "white") {
        zerocolor = 7;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "blue") {
        zerocolor = 9;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "green") {
        zerocolor = 10;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "red") {
        zerocolor = 12;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "orange") {
        zerocolor = the_color;
    } else if (cube_.faces.at(face_temp).colors.at(pixel_temp) == "yellow") {
        zerocolor = 14;
    }

    
    int default_color = 7;
    
    //   long line --->                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       //



    //		       //
    //   	       //


    SetConsoleTextAttribute(hConsole, 7);

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    


    
    
    
    std::cout << "                           ,+'"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "C"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "                        ,+'"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "CCCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "                     ,+'"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "CCCCCCCCCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "                  ,+'"; SetConsoleTextAttribute(hConsole, bcolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "CCCCCCC"; SetConsoleTextAttribute(hConsole, dcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "               ,+'"; SetConsoleTextAttribute(hConsole, bcolor); std::cout << "############"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "*"; SetConsoleTextAttribute(hConsole, dcolor); std::cout << "$$$$$$$$$$$$"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "            ,+'"; SetConsoleTextAttribute(hConsole, ccolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, bcolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "*******"; SetConsoleTextAttribute(hConsole, dcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, gcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;     

    std::cout << "            '+,"; SetConsoleTextAttribute(hConsole, ccolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, fcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "*******"; SetConsoleTextAttribute(hConsole, hcolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, gcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;                              

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "CC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, fcolor); std::cout << "$$$$$$$$$$$$"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "*"; SetConsoleTextAttribute(hConsole, hcolor); std::cout << "############"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "CC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, fcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "CCCCCCC"; SetConsoleTextAttribute(hConsole, hcolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;     

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "CCCCCCCCCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;     

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "##"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "CCCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "##"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "#####"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "C"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "#####"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "#####"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "***"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "***"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "#####"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;    

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "CC"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "###"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "******"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "******"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "###"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "CC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "******"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "###"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "###"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "******"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl; 

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "***"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "***"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "CCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl; 

    std::cout << "            '+,"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "######"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "               '+,"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "###"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "###"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "$$$$$$"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                  '+,"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "$$$"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                     '+,"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "CCCCCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                        '+,"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "CCC"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                           '+,|,+'" << std::endl;
   
 




    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    SetConsoleTextAttribute(hConsole, 7);
}










void RCube::stateOfCubeInWords() {
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "The state of the cube is:" << std::endl;
    for (int i = 0; i < cube_.faces.size(); i++) {
        std::cout << "FACE " << i << ":" << std::endl;
        int counter = 0;
        for (int j = 0; j < cube_.faces.at(0).colors.size(); j++) {
            std::cout << cube_.faces.at(i).colors.at(j) << " " << std::endl;
            counter++;
            if (counter == 3) {
                std::cout << "" << std::endl;
                counter = 0;
            }
        }
        std::cout << "" << std::endl;
    }

    std::cout << "" << std::endl;
}







void RCube::scramble() {
    int rand_num = 0;
    for (int i = 0; i < 20; i++) {
        rand_num = std::rand() % 6;
        if (rand_num == 0) {
            RCube::move_cube_U();
        } else if (rand_num == 1) {
            RCube::move_cube_D();
        } else if (rand_num == 2) {
            RCube::move_cube_R();
        } else if (rand_num == 3) {
            RCube::move_cube_L();
        } else if (rand_num == 4) {
            RCube::move_cube_F();
        } else if (rand_num == 5) {
            RCube::move_cube_B();
        }
    }
    

}









































// different prototypes, thought they were interesting to keep







/*

std::cout << "                           ,+'I'+,		       " << std::endl;
std::cout << "                        ,+'IIIIIII'+,   	       " << std::endl;
std::cout << "                     ,+'IIIIIIIIIIIII'+,	       " << std::endl;
std::cout << "                  ,+'######IIIIIII######'+,      " << std::endl;
std::cout << "               ,+'############I############'+,   " << std::endl;
std::cout << "            ,+'IIIIII######IIIIIII######IIIIII'+," << std::endl;
std::cout << "            '+,IIIIII######IIIIIII######IIIIII,+'" << std::endl;
std::cout << "            |II'+,############I############,+'II|" << std::endl;
std::cout << "            |IIIII'+,######IIIIIII######,+'IIIII|" << std::endl;
std::cout << "            |IIIII###'+,IIIIIIIIIIIII,+'###IIIII|" << std::endl;
std::cout << "            |##III######'+,IIIIIII,+'######III##|" << std::endl;
std::cout << "            |###########III'+,I,+'III###########|" << std::endl;
std::cout << "            |#####III###IIIIII|IIIIII###III#####|" << std::endl;
std::cout << "            |II###IIIIIIIIIIII|IIIIIIIIIIII###II|" << std::endl;
std::cout << "            |IIIIIIIIIII###III|III###IIIIIIIIIII|" << std::endl;
std::cout << "            |IIIII###III######|######III###IIIII|" << std::endl;
std::cout << "            '+,III############|############III,+'" << std::endl;
std::cout << "               '+,######III###|###III######,+'   " << std::endl;
std::cout << "                  '+,###IIIIII|IIIIII###,+'      " << std::endl;
std::cout << "                     '+,IIIIII|IIIIII,+'         " << std::endl;
std::cout << "                        '+,III|III,+'            " << std::endl;
std::cout << "                           '+,|,+'               " << std::endl;

*/










/*


    std::cout << "                           ,+'"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "a"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "                        ,+'"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "aaaaaaa"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "                     ,+'"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "aaaaaaaaaaaaa"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "                  ,+'"; SetConsoleTextAttribute(hConsole, bcolor); std::cout << "bbbbbb"; SetConsoleTextAttribute(hConsole, acolor); std::cout << "aaaaaaa"; SetConsoleTextAttribute(hConsole, dcolor); std::cout << "dddddd"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "               ,+'"; SetConsoleTextAttribute(hConsole, bcolor); std::cout << "bbbbbbbbbbbb"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "e"; SetConsoleTextAttribute(hConsole, dcolor); std::cout << "dddddddddddd"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;

    std::cout << "            ,+'"; SetConsoleTextAttribute(hConsole, ccolor); std::cout << "cccccc"; SetConsoleTextAttribute(hConsole, bcolor); std::cout << "bbbbbb"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "eeeeeee"; SetConsoleTextAttribute(hConsole, dcolor); std::cout << "dddddd"; SetConsoleTextAttribute(hConsole, gcolor); std::cout << "gggggg"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+," << std::endl;     

    std::cout << "            '+,"; SetConsoleTextAttribute(hConsole, ccolor); std::cout << "cccccc"; SetConsoleTextAttribute(hConsole, fcolor); std::cout << "ffffff"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "eeeeeee"; SetConsoleTextAttribute(hConsole, hcolor); std::cout << "hhhhhh"; SetConsoleTextAttribute(hConsole, gcolor); std::cout << "gggggg"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;                              

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "xx"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, fcolor); std::cout << "ffffffffffff"; SetConsoleTextAttribute(hConsole, ecolor); std::cout << "e"; SetConsoleTextAttribute(hConsole, hcolor); std::cout << "hhhhhhhhhhhh"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "ss"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "xxxxx"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, fcolor); std::cout << "ffffff"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "iiiiiii"; SetConsoleTextAttribute(hConsole, hcolor); std::cout << "hhhhhh"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "sssss"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;     

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "xxxxx"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "jjj"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "iiiiiiiiiiiii"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "www"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "sssss"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;     

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "yy"; SetConsoleTextAttribute(hConsole, xcolor); std::cout << "xxx"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "jjjjjj"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "iiiiiii"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "wwwwww"; SetConsoleTextAttribute(hConsole, scolor); std::cout << "sss"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "nn"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "yyyyy"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "jjjjjj"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "qqq"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "'+,"; SetConsoleTextAttribute(hConsole, icolor); std::cout << "i"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "rrr"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "wwwwww"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "nnnnn"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "yyyyy"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "mmm"; SetConsoleTextAttribute(hConsole, jcolor); std::cout << "jjj"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "qqqqqq"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "rrrrrr"; SetConsoleTextAttribute(hConsole, wcolor); std::cout << "www"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "ppp"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "nnnnn"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;    

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "zz"; SetConsoleTextAttribute(hConsole, ycolor); std::cout << "yyy"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "mmmmmm"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "qqqqqq"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "rrrrrr"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "pppppp"; SetConsoleTextAttribute(hConsole, ncolor); std::cout << "nnn"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "vv"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl;  

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "zzzzz"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "mmmmmm"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "lll"; SetConsoleTextAttribute(hConsole, qcolor); std::cout << "qqq"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, rcolor); std::cout << "rrr"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "000"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "pppppp"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "vvvvv"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl; 

    std::cout << "            |"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "zzzzz"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "ooo"; SetConsoleTextAttribute(hConsole, mcolor); std::cout << "mmm"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "llllll"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "000000"; SetConsoleTextAttribute(hConsole, pcolor); std::cout << "ppp"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "ttt"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "vvvvv"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|" << std::endl; 

    std::cout << "            '+,"; SetConsoleTextAttribute(hConsole, zcolor); std::cout << "zzz"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "oooooo"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "llllll"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "000000"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "tttttt"; SetConsoleTextAttribute(hConsole, vcolor); std::cout << "vvv"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "               '+,"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "oooooo"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "kkk"; SetConsoleTextAttribute(hConsole, lcolor); std::cout << "lll"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, zerocolor); std::cout << "000"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "uuu"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "tttttt"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                  '+,"; SetConsoleTextAttribute(hConsole, ocolor); std::cout << "ooo"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "kkkkkk"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "uuuuuu"; SetConsoleTextAttribute(hConsole, tcolor); std::cout << "ttt"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                     '+,"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "kkkkkk"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "uuuuuu"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                        '+,"; SetConsoleTextAttribute(hConsole, kcolor); std::cout << "kkk"; SetConsoleTextAttribute(hConsole, default_color); std::cout << "|"; SetConsoleTextAttribute(hConsole, ucolor); std::cout << "uuu"; SetConsoleTextAttribute(hConsole, default_color); std::cout << ",+'" << std::endl;

    std::cout << "                           '+,|,+'" << std::endl;

    */






   /*



    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    SetConsoleTextAttribute(hConsole, 7);


    std::cout << "                           ,+'a'+,		       " << std::endl;
    std::cout << "                        ,+'aaaaaaa'+,   	       " << std::endl;
    std::cout << "                     ,+'aaaaaaaaaaaaa'+,	       " << std::endl;
    std::cout << "                  ,+'bbbbbbaaaaaaadddddd'+,      " << std::endl;
    std::cout << "               ,+'bbbbbbbbbbbbedddddddddddd'+,   " << std::endl;
    std::cout << "            ,+'ccccccbbbbbbeeeeeeeddddddgggggg'+," << std::endl;
    std::cout << "            '+,ccccccffffffeeeeeeehhhhhhgggggg,+'" << std::endl;
    std::cout << "            |xx'+,ffffffffffffehhhhhhhhhhhh,+'ss|" << std::endl;
    std::cout << "            |xxxxx'+,ffffffiiiiiiihhhhhh,+'sssss|" << std::endl;
    std::cout << "            |xxxxxjjj'+,iiiiiiiiiiiii,+'wwwsssss|" << std::endl;
    std::cout << "            |yyxxxjjjjjj'+,iiiiiii,+'wwwwwwsssnn|" << std::endl;
    std::cout << "            |yyyyyjjjjjjqqq'+,i,+'rrrwwwwwwnnnnn|" << std::endl;
    std::cout << "            |yyyyymmmjjjqqqqqq|rrrrrrwwwpppnnnnn|" << std::endl;
    std::cout << "            |zzyyymmmmmmqqqqqq|rrrrrrppppppnnnvv|" << std::endl;
    std::cout << "            |zzzzzmmmmmmlllqqq|rrr000ppppppvvvvv|" << std::endl;
    std::cout << "            |zzzzzooommmllllll|000000ppptttvvvvv|" << std::endl;
    std::cout << "            '+,zzzoooooollllll|000000ttttttvvv,+'" << std::endl;
    std::cout << "               '+,ooooookkklll|000uuutttttt,+'   " << std::endl;
    std::cout << "                  '+,oookkkkkk|uuuuuuttt,+'      " << std::endl;
    std::cout << "                     '+,kkkkkk|uuuuuu,+'         " << std::endl;
    std::cout << "                        '+,kkk|uuu,+'            " << std::endl;
    std::cout << "                           '+,|,+'               " << std::endl;

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    

    std::cout << "                           ,+'C'+,		       " << std::endl;
    std::cout << "                        ,+'CCCCCCC'+,   	       " << std::endl;
    std::cout << "                     ,+'CCCCCCCCCCCCC'+,	       " << std::endl;
    std::cout << "                  ,+'######CCCCCCC$$$$$$'+,      " << std::endl;
    std::cout << "               ,+'############*$$$$$$$$$$$$'+,   " << std::endl;
    std::cout << "            ,+'CCCCCC######*******$$$$$$CCCCCC'+," << std::endl;
    std::cout << "            '+,CCCCCC$$$$$$*******######CCCCCC,+'" << std::endl;
    std::cout << "            |CC'+,$$$$$$$$$$$$*############,+'CC|" << std::endl;
    std::cout << "            |CCCCC'+,$$$$$$CCCCCCC######,+'CCCCC|" << std::endl;
    std::cout << "            |CCCCC$$$'+,CCCCCCCCCCCCC,+'$$$CCCCC|" << std::endl;
    std::cout << "            |##CCC$$$$$$'+,CCCCCCC,+'$$$$$$CCC##|" << std::endl;
    std::cout << "            |#####$$$$$$CCC'+,C,+'CCC$$$$$$#####|" << std::endl;
    std::cout << "            |#####***$$$CCCCCC|CCCCCC$$$***#####|" << std::endl;
    std::cout << "            |CC###******CCCCCC|CCCCCC******###CC|" << std::endl;
    std::cout << "            |CCCCC******###CCC|CCC###******CCCCC|" << std::endl;
    std::cout << "            |CCCCC$$$***######|######***$$$CCCCC|" << std::endl;
    std::cout << "            '+,CCC$$$$$$######|######$$$$$$CCC,+'" << std::endl;
    std::cout << "               '+,$$$$$$CCC###|###CCC$$$$$$,+'   " << std::endl;
    std::cout << "                  '+,$$$CCCCCC|CCCCCC$$$,+'      " << std::endl;
    std::cout << "                     '+,CCCCCC|CCCCCC,+'         " << std::endl;
    std::cout << "                        '+,CCC|CCC,+'            " << std::endl;
    std::cout << "                           '+,|,+'               " << std::endl;

    

    */



        /*



                           ,+'a'+,
                        ,+'aaaaaaa'+,   
                     ,+'aaaaaaaaaaaaa'+,
                  ,+'bbbbbbaaaaaaadddddd'+,
               ,+'bbbbbbbbbbbbedddddddddddd'+,
            ,+'ccccccbbbbbbeeeeeeeddddddgggggg'+,
            '+,ccccccffffffeeeeeeehhhhhhgggggg,+'
            |xx'+,ffffffffffffehhhhhhhhhhhh,+'ss|
            |xxxxx'+,ffffffiiiiiiihhhhhh,+'sssss|
            |xxxxxjjj'+,iiiiiiiiiiiii,+'wwwsssss|
            |yyxxxjjjjjj'+,iiiiiii,+'wwwwwwsssnn|
            |yyyyyjjjjjjqqq'+,i,+'rrrwwwwwwnnnnn|
            |yyyyymmmjjjqqqqqq|rrrrrrwwwpppnnnnn|
            |zzyyymmmmmmqqqqqq|rrrrrrppppppnnnvv|
            |zzzzzmmmmmmlllqqq|rrr000ppppppvvvvv|
            |zzzzzooommmllllll|000000ppptttvvvvv|
            '+,zzzoooooollllll|000000ttttttvvv,+'
               '+,ooooookkklll|000uuutttttt,+'   
                  '+,oookkkkkk|uuuuuuttt,+'      
                     '+,kkkkkk|uuuuuu,+'         
                        '+,kkk|uuu,+'            
                           '+,|,+'               



    */
