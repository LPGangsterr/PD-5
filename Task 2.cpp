#include <iostream>
using namespace std;


double pyaramidVolume(float length,float width,float height,string choice)
{
	double Volume = (1/3.0) * length * width * height;
if(choice  ==  "centimeters")
{
	Volume = Volume * 1000000;

}
if(choice  ==  "kilometers")
{
	Volume = Volume * (1/1000000000);
	
}
if(choice  ==  "millimeters")
{
	Volume = Volume * 1000000000;
	
}
return Volume;
}


main()
{
	float height;
	float width;
	float length;
	string choice;
	cout  <<  "Enter Length: ";
	cin  >>  length;
	cout  <<  "Enter width: ";
	cin  >>  width;
	cout  <<  "Enter height: ";
	cin  >>  height;
	cout  <<  "Enter choice: ";
	cin  >>  choice;
	cout  <<  pyaramidVolume(length,width,height,choice);

	}