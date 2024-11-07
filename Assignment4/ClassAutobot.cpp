/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/


#include <iostream>
#include "ClassAutobot.h"


Autobot::Autobot(): _mask(0), _speed(0) {}
Autobot::Autobot(uint mask, uint speed): _mask(mask), _speed(speed) {}
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

uint Autobot::getMask() const
{
    return _mask;
};

void Autobot::setSpeed(uint speed)
{
    _speed=speed;
};

uint Autobot::getSpeed() const
{
    return _speed;
};
Autobot::~Autobot() {}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
    os << "Autobot:" << std::endl << "Mask: " << autobot.getMask() << std::endl
       << "Speed: " << autobot.getSpeed() << std::endl;
    return os;
};

bool Autobot::operator>(const Autobot& other) const
{
    return _speed > other._speed;
};

bool Autobot::operator<(const Autobot& other) const
{
    return _speed < other._speed;
};
