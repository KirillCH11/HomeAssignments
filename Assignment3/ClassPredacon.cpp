/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/


#include <iostream>
#include "ClassPredacon.h"



Predacon::Predacon(){};
bool Predacon::transform() 
{
	return true;
};

bool Predacon::running()
{
	return true;
};

void Predacon::setMask(uint mask)
{
	_mask=mask;
};
	
uint Predacon::getMask()
{
	return _mask;
};
	
void Predacon::setSpeed(uint speed)
{
	_speed=speed;
};
	
uint Predacon::getSpeed()
{
	return _speed;
};
Predacon::~Predacon(){}
