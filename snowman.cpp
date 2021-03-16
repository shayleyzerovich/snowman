#include "snowman.hpp"
# include <iostream>
# include <array>


using namespace std;

    const int length = 8;
    const int options = 4;
//the letters
    const int H=7;
    const int N=6;
    const int L=5;
    const int R=4;
    const int X=3;
    const int Y=2;
    const int T=1;
    const int B=0;

    const array<array<string, options>, length>  translation = 
    {{
        {"      \n _===_\n",  "  ___\n .....\n", "   _ \n  /_\\\n", "  ___ \n (_*_)\n" }, //H

        {",", ".", "_", " "}, //N

        {"(.", "(o", "(O", "(-"}, //L

        {".)", "o)", "O)", "-)"}, //R

        {" <", "\\ ", " /", "  "}, //X

        {" >", "/ ", " \\", "  "}, //Y

        {"( : )", "(] [)", "(> <)", "(   )"}, //T

        {" ( : )", " (\" \")", " (___)", " (   )"} //B


    }};

    namespace ariel{
        string snowman(int num){
            
            if(num < 11111111 || num > 44444444){ 
                    throw runtime_error {"Exception - Invalid code"}; // means that there are more/less than 8 digits
               }

            int counter = 0;
            array<string, length> arr; // to help print the snowman
            int selection = 0;

            while(counter < length){

                selection = num%10-1; // to get the last digit and -1 for the number to be between 0-3

               if(selection < 0 || selection > 3){ 
                    throw runtime_error {"Exception - Invalid code"}; // means that there are digits that bigger than 4 or smaller than 1
               }
                 num /=10; // to cut the last digit
                 arr.at(counter) = translation.at(counter)[selection];
                
                // counter represnt num row and selection represent num column 

                 counter++;
             }

            if(num != 0){
                throw runtime_error {"Exception - Invalid code"};
                //there are more than 8 digits
            }
                string snow_man = 
                arr.at(H)+
                arr.at(X).at(0)+
                arr.at(L)+
                arr.at(N)+
                arr.at(R)+
                arr.at(Y).at(0)+"\n"+
                arr.at(X).at(1)+
                arr.at(T)+
                arr.at(Y).at(1)+"\n"+
                arr.at(B);

                // at(0) we will recevie nothing and at at(1) we will recive the char

          return snow_man;
        return "";

        } 
    }
