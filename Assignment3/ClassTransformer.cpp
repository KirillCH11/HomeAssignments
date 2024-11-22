/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/


#include <iostream>
#include "ClassTransformer.h"


uint Weapon::getWeapoons()
{
	return _weapoons;
};


Transformer::Transformer()
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
	
uint Transformer::getHeight()
{
	return _height;
};
	
void Transformer::setWeight(uint weight)
{
	_weight=weight;
};
	
uint Transformer::getWeight()
{
	return _weight;
};

void Transformer::setPower(uint power)
{
	_power=power;
};
	
uint Transformer::getPower()
{
	return _power;
};

void Transformer::setFirepower(uint firepower)
{
	_firepower=firepower;
};
	
uint Transformer::getFirepower()
{
	return _firepower;
};

void Transformer::setIntellect(uint intellect)
{
	_intellect=intellect;
};
	
uint Transformer::getIntellect()
{
	return _intellect;
};

Transformer::~Transformer(){};
