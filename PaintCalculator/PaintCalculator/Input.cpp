#include "stdafx.h"
#include "Input.h"
#include <iostream>
#include <string>
#include "Room.h"
#include "Calculation.h"

Input::Input()
{

}

float Input::Gather()
{
		//--Decleration
	Room room; //Object used to store room dimensions;
	Calculation calc;

		//--Text variables.
	std::string dimFields[9] = { 
		"Depth of the Room","Width of the Room",
		"Height of the Room","Number of Windows in the Room",
		"Window Height","Window Width ",
		"Number of Doors in the Room","Door Height",
		"Door Width" };
		
		//--Value variables.
	float dimValue[9] = { 0,0,0,0,0,0,0,0,0 };

		//--Start of input gathering.
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Please input the " << dimFields[i] << " : ";
		dimValue[i] = getInput();
	}

		//--Displaying Gathered input.
	std::cout << "------- INPUT --------" << std::endl;
	for (int i = 0; i < 9; i++)
	{
		std::cout << dimFields[i] << ": ";
		std::cout << dimValue[i] << std::endl;
	}

		//--Placing Collected input into room Object
	room.depth = dimValue[0];
	room.width = dimValue[1];
	room.height = dimValue[2];
	room.numOfWindows = dimValue[3];
	room.windowHeight = dimValue[4];
	room.windowWidth = dimValue[5];
	room.numOfDoors = dimValue[6];
	room.doorHeight = dimValue[7];
	room.doorWidth = dimValue[8];

		//--Return to main
	return calc.findVolume(room); //Pass room object to calculations and return result to main.
}


Input::~Input()
{
}

float Input::getInput()
{
		//--Declerations
	std::string inputStr;
	bool acceptInput = false;
	float input;

	
		//--Attempt to gather and parse inputs.
	while(acceptInput == false) {
		std::cin >> inputStr; //Take input for requested mesure.
		try
		{
			input = std::stof(inputStr);
			acceptInput = true;
		}
		catch (const std::exception&) //Catch for if the user input is not castable to float.
		{
			std::cout << std::endl << "The input cannot contain alphabetical characters, Please input it again using only numerical characters: ";
		}
	}

		//--Return to Gather()
	return input;
}
