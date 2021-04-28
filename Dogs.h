#pragma once

class Dogs
{
public:

	string breed;
	string color;
	string name;

	Dogs()	//Default Constructor
	{

	}

	Dogs(string aName)	//First overloaded constructor, receives a single name
	{
		name = aName;
	}

	Dogs(string aName, string aBreed)	//Second overloaded constructor, receives a name and breed
	{
		name = aName;
		breed = aBreed;
	}

	void funcSet(string aName, string aBreed, string aColor) //Third overloaded constructor, for the dogBreeder() function
	{
		name = aName;
		breed = aBreed;
		color = aColor;
	}

	void toString()	//Method outputs the dogs properties
	{
		cout << "\nHi! My name is " << name << "! I'm a " << breed << " and I have " << color << " fur!" << endl;
	}


};


