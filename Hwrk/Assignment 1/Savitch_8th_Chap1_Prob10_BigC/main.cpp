/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Output Big C
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char c; // Variable to build big c with
    //Input or initialize values Here
    cout<<"This program outputs a large c with"<<endl;
    cout<<"With letter user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    cout<<"  "<<c<<"      "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<"  "<<c<<"      "<<c<<endl;
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    //Exit
    return 0;
}

