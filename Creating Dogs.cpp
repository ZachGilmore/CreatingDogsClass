//Zach Gilmore
//CSC 140
//April 19th, 2021
//Project: Creating Dogs

#include <iostream>
#include <vector>

using namespace std;
#include "Dogs.h"   //Class calls go below namespace
//#include "Dog2.h" //Trouble shooting class

 //Function signature
void dogBreeder(vector<Dogs>& doggo);
void printProps(vector<Dogs> objs);

int main()
{
    //Vector Initialization
    vector<Dogs> doggo;

    //First Dog Object
    Dogs doggo1;    //Creates object via default constructor
    doggo1.name = "Rupert"; //Update propterties sequentially
    //cout << doggo1.name; //Test call
    doggo1.breed = "Pittie";
    doggo1.color = "black and white spotted";
    doggo.push_back(doggo1);    //Add object to the vector
    doggo1.toString();          //Method test call

    //Second Dog Object
    Dogs doggo2("Squish");  //Create object using single parameter constructor
    doggo2.breed = "Bulldog";
    doggo2.color = "brown";
    doggo.push_back(doggo2);
    doggo2.toString();
    
    //Third Dog Object
    Dogs doggo3("Gilligan", "Shih Tzu"); //Create object using double parameter constructor
    doggo3.color = "black and white";
    doggo.push_back(doggo3);
    doggo3.toString();

    //Fourth Dog Object
    dogBreeder(doggo);    //Create object via a function
    
    //Call print function
    printProps(doggo);

}

void dogBreeder(vector<Dogs>& doggo)    //Passing by reference instead of value
{
    //Vars for user input
    string uName;
    string uBreed;
    string uColor;

    Dogs doggo4;    //Using a default constructor for user specs
    cout << "\nEnter a name for your dog: ";
    cin >> uName;
    cout << endl;

    cout << "Enter a breed for your dog: ";
    cin >> uBreed;
    cout << endl;

    cout << "Enter a color for your dog: ";
    cin >> uColor;
    cout << endl;

    doggo4.funcSet(uName, uBreed, uColor);  //For more succinct code
    doggo.push_back(doggo4);
}

//Vector print function
void printProps(vector<Dogs> objs)
{
    //Use a foreach loop
    for (Dogs finalPrint: objs)
    {
        finalPrint.toString();
        cout << endl;
    }
}
