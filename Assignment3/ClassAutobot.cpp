/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/


#include <iostream>
#include "ClassAutobot.h"



Autobot::Autobot():Transformer(){};
bool Autobot::transform() 
{
	return true;
};

bool Autobot::running()
{
	return true;
};

void Autobot::setMask(uint mask)
{
	_mask=mask;
};
	
uint Autobot::getMask()
{
	return _mask;
};
	
void Autobot::setSpeed(uint speed)
{
	_speed=speed;
};
	
uint Autobot::getSpeed()
{
	return _speed;
};
Autobot::~Autobot(){}
