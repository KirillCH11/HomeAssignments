/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/


#ifndef ClassTransformer_H   
#define ClassTransformer_H

#include <cstdint>
class Weapon
{
private:
	uint _weapoons;
public:
	uint getWeapoons();
};


class Transformer
{
public:
	Transformer();
	bool start_shooting();
 	bool start_moving();
 	void setHeight(uint height);
 	uint getHeight();
 	void setWeight(uint weight);
 	uint getWeight();
 	void setPower(uint power);
 	uint getPower();
 	void setFirepower(uint firepower);
 	uint getFirepower();
 	void setIntellect(uint intellect);
 	uint getIntellect();
 	~Transformer();
protected:
	uint _height;
	uint _weight;
	uint _power;
	uint _firepower;
	uint _intellect;
};
#endif
