/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/


#ifndef ClassTransformer_H   
#define ClassTransformer_H
#include <string>
#include <iostream> 


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
	Transformer(uint height, uint weight, uint power, uint firepower, uint intellect);
	bool start_shooting();
 	bool start_moving();
 	void setHeight(uint height);
 	uint getHeight() const;
 	void setWeight(uint weight);
 	uint getWeight() const;
 	void setPower(uint power);
 	uint getPower() const;
 	void setFirepower(uint firepower);
 	uint getFirepower() const;
 	void setIntellect(uint intellect);
 	uint getIntellect() const;
 	~Transformer();
 	friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);
 	bool operator>(const Transformer& other)const;
 	bool operator<(const Transformer& other)const;
 	
private:
	uint _height;
	uint _weight;
	uint _power;
	uint _firepower;
	uint _intellect;
};
#endif
