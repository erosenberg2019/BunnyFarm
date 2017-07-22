/*
 * main.cpp
 *
 *  Created on: Jul 22, 2017
 *      Author: Ethan Rosenberg
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	int namePickerFirst = 0;
	int namePickerSecond = 0;
	int colorPicker = 0;
	int spotPicker = 0;
	int spotColorPicker = 0;
	int genderPicker = 0;
	string nameFirst = "0";
	string nameSecond = "0";
	string gender = "0";
	string pronoun = "0";
	string color = "0";
	string spotColor = "0";

	srand (time(NULL));

//Declare all random variables
	genderPicker = rand() % 2 + 1;
	namePickerFirst = rand() % 5 + 1;
	namePickerSecond = rand() % 10 + 1;
	colorPicker = rand() % 4 + 1;
	spotPicker = rand() % 3 + 1;
	spotColorPicker = rand() % 4 + 1;
//pick Names and pronouns based off of gender
	if (genderPicker == 1)
	{
		gender = "Female";
		pronoun = "She";
		switch (namePickerFirst)
		{
		case 1:
			nameFirst = "Lola";
			break;
		case 2:
			nameFirst = "Daisy";
			break;
		case 3:
			nameFirst = "Lilly";
			break;
		case 4:
			nameFirst = "Buttercup";
			break;
		case 5:
			nameFirst = "Annabelle";
			break;
		}
	}
	else if (genderPicker == 2)
	{
		gender = "Male";
		pronoun = "He";
		switch (namePickerFirst)
		{
		case 1:
			nameFirst = "Thumper";
			break;
		case 2:
			nameFirst = "Chester";
			break;
		case 3:
			nameFirst = "Jack";
			break;
		case 4:
			nameFirst = "Peter";
			break;
		case 5:
			nameFirst = "Bugs";
			break;
		}
	}


//Pick last name
	switch (namePickerSecond)
	{
	case 1:
		nameSecond = "Smith";
		break;
	case 2:
		nameSecond = "Davis";
		break;
	case 3:
		nameSecond = "Wilson";
		break;
	case 4:
		nameSecond = "Lewis";
		break;
	case 5:
		nameSecond ="Clark";
		break;
	case 6:
		nameSecond ="Martin";
		break;
	case 7:
		nameSecond = "Walker";
		break;
	case 8:
		nameSecond = "Moore";
		break;
	case 9:
		nameSecond = "Taylor";
		break;
	case 10:
		nameSecond = "Jackson";
		break;
	}


//Pick color
	switch (colorPicker)
	{
	case 1:
		color = "White";
		break;
	case 2:
		color = "Black";
		break;
	case 3:
		color = "Grey";
		break;
	case 4:
		color = "Brown";
		break;
	}
//Pick spot colors/if the bunny has spots at all
	if (spotPicker <= 2)
	{
		//pick spot color
		switch (spotColorPicker)
		{
		case 1:
			//check if bunny is already white
			if (colorPicker == 1)
			{

			}
			else
			{
				spotColor = "White";
			}
			break;
		case 2:
			//check if bunny is already black
			if (colorPicker == 2)
			{

			}
			else
			{
				spotColor = "Black";
			}
			break;
		case 3:
			//check if bunny is already grey
			if (colorPicker == 3)
			{

			}
			else
			{
				spotColor = "Grey";
			}
			break;
		case 4:
			//check if bunny is already brown
			if (colorPicker == 4)
			{

			}
			else
			{
				spotColor = "Brown";
			}
			break;
		default:
			spotPicker = 2;
		}
	}
	else if (spotPicker == 3)
	{
		spotColor = "No";
	}

	//Tell user about the bunny that was born
	cout<<nameFirst<<" "<<nameSecond<<" was born!"<<endl;
	cout<<nameFirst<<" "<<nameSecond<<" is "<<gender<<", "<<pronoun<<" is "<<color<<", and has "<<spotColor<<" spots"<<endl;
	return 0;
}

