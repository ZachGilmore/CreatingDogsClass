#pragma once
class Dog2
{

public:

	string breed;
	string color;
	string name;

	Dog2()	//Default Constructor
	{
		cout << "Hi I am dog" << endl;

	}

	//Dogs(string aName)	//First overloaded constructor, receives a single name
	//{
	//	name = aName;
	//}

	//Dogs(string aName, string aBreed)	//Second overloaded constructor, receives a name and breed
	//{
	//	name = aName;
	//	breed = aBreed;
	//}

	//void toString()	//Method outputs the dogs properties
	//{
	//	cout << "This dog's name is: " << name << ", its breed is: " << breed << ", and its color is: " << color << "." << endl;
	//}
};

