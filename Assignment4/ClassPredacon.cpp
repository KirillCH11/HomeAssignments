/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/


#include <iostream>
#include "ClassPredacon.h"


Predacon::Predacon(): _mask(0), _speed(0) {}
Predacon::Predacon(uint mask, uint speed): _mask(mask), _speed(speed) {}
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

uint Predacon::getMask() const
{
    return _mask;
};

void Predacon::setSpeed(uint speed)
{
    _speed=speed;
};

uint Predacon::getSpeed() const
{
    return _speed;
};
Predacon::~Predacon() {}

std::ostream& operator<<(std::ostream& os, const Predacon& predacon)
{
    os << "Predacon:" << std::endl << "Mask: " << predacon.getMask() << std::endl
       << "Speed: " << predacon.getSpeed() << std::endl;
    return os;
};

bool Predacon::operator>(const Predacon& other) const
{
    return _speed > other._speed;
};

bool Predacon::operator<(const Predacon& other) const
{
    return _speed < other._speed;
};
