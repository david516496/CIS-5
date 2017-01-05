/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Jan 5, 2016, 1:35 AM
 * Purpose:  Calculate Pocket Change
 */

//System Libraries Here
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int quarter=25, // Number of cents in coinage
              dime=10,
              nickel=5,
              penny=1;
    char nQuarts, nDimes, nNickls, nPenies;
    unsigned short total; // Total chamge in cents
              
    //Input or initialize values Here
    cout<<"This calculates the amount of Pocket Change"<<endl;
    cout<<"How many quarters nickels, dimes and pennies do"<<endl;
    cout<<"you have in your pocket?"<<endl;
    cout<<"Type in all on the same line i.e. 3402"<<endl;
    cout<<"Max of any value must be less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPenies;
    
    //Process/Calculations Here
    total = (nQuarts-48)*quarter +
            (nDimes-48)*dime     +
            (nNickls-48)*nickel +
            (nPenies-48)*penny;
    
    //Output Located Here
    cout<<"The coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;

    //Exit
    return 0;
}

