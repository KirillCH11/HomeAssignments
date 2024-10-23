/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/


#include <iostream>
#include "ClassDecepticon.h"



Decepticon::Decepticon(){};
bool Decepticon::transform() 
{
	return true;
};

bool Decepticon::running()
{
	return true;
};

void Decepticon::setMask(uint mask)
{
	_mask=mask;
};
	
uint Decepticon::getMask()
{
	return _mask;
};
	
void Decepticon::setSpeed(uint speed)
{
	_speed=speed;
};
	
uint Decepticon::getSpeed()
{
	return _speed;
};
Decepticon::~Decepticon(){}
