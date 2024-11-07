/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/


#include <iostream>
#include "ClassTransformer.h"


uint Weapon::getWeapoons()
{
	return _weapoons;
};


Transformer::Transformer(): _height(0), _weight(0), _power(0), _firepower(0), _intellect(0)
{
    class Spark
	{
	private:
		std::string Spark_type;
	public:
		std::string Get_Spark_type()
		{
			return Spark_type;
		}
	};
	Spark spark;
	Weapon weapon;
	spark.Get_Spark_type();
	weapon.getWeapoons();
};


Transformer::Transformer(uint height, uint weight, uint power, uint firepower, uint intellect) 
    : _height(height), _weight(weight), _power(power), _firepower(firepower), _intellect(intellect){};
	

bool Transformer::start_shooting() 
{
	return true;
};

bool Transformer::start_moving()
{
	return true;
};

void Transformer::setHeight(uint height)
{
	_height=height;
};
	
uint Transformer::getHeight() const
{
	return _height;
};
	
void Transformer::setWeight(uint weight)
{
	_weight=weight;
};
	
uint Transformer::getWeight() const
{
	return _weight;
};

void Transformer::setPower(uint power)
{
	_power=power;
};
	
uint Transformer::getPower() const
{
	return _power;
};

void Transformer::setFirepower(uint firepower)
{
	_firepower=firepower;
};
	
uint Transformer::getFirepower() const
{
	return _firepower;
};

void Transformer::setIntellect(uint intellect)
{
	_intellect=intellect;
};
	
uint Transformer::getIntellect() const
{
	return _intellect;
};

Transformer::~Transformer(){}


std::ostream& operator<<(std::ostream& os, const Transformer& transformer) 
{
    os << "Transformer:" << std::endl << "Height: " << transformer.getHeight() << std::endl
    << "Weight: " << transformer.getWeight() << std::endl << "Power: " << transformer.getPower()
    << std::endl << "Firepower: " << transformer.getFirepower() << std::endl << "Intellect: " << transformer.getIntellect() << std::endl;
    return os;
};

bool Transformer::operator>(const Transformer& other) const 
{
    return _intellect > other._intellect;
};

bool Transformer::operator<(const Transformer& other) const 
{
    return _intellect > other._intellect;
};


int main()
{
    Transformer t1(7, 11, 15, 15, 15);
    Transformer t2(15, 15, 13, 13, 100);
    std::cout << t1;
    std::cout << t2;

    if (t1 > t2) 
    {
        std::cout <<"1 is the smartest!"<<std::endl;
    }
    else 
    {
        std::cout <<"2 is the smartest!"<<std::endl;
    }
    return 0;
};
