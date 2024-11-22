/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/

#ifndef ClassPredacon_H   
#define ClassPredacon_H
#include "ClassTransformer.h"

class Predacon: public Transformer 
{
public:
	Predacon();
	bool transform();
	bool running();
	void setMask(uint mask);
 	uint getMask();
 	void setSpeed(uint speed);
 	uint getSpeed();
 	~Predacon();
private:
	uint _mask;
	uint _speed;
};
#endif
