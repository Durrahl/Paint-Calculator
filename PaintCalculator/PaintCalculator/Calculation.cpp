#include "stdafx.h"
#include "Calculation.h"



Calculation::Calculation()
{
}

float Calculation::findVolume(Room room)
{
		//--Declarations
	const float PPMS = 100; //Ml of Paint Per Square meter.
	float roomVolume = 0;
	float doorVolume = 0;
	float windowVolume = 0;
	float areaToPaint = 0;
	float totalPaint = 0;
		
		//--Calculate Volumes
			//Room Volume
		roomVolume = ((room.depth * room.height)+(room.height*room.width))*2;
			//Door Volume
		doorVolume = room.numOfDoors * (room.doorHeight*room.doorWidth);
			//Window Volume
		windowVolume = room.numOfWindows * (room.windowHeight*room.windowWidth);
			//Total Paint Area
		areaToPaint = roomVolume - (doorVolume + windowVolume);
			//Total paint Required
		totalPaint = areaToPaint * PPMS;
		return totalPaint;
}

Calculation::~Calculation()
{
}
