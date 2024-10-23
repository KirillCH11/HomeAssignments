/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/

#ifndef ClassDecepticon_H   
#define ClassDecepticon_H
#include "ClassTransformer.h"

class Decepticon: public Transformer 
{
public:
	Decepticon();
	bool transform();
	bool running();
	void setMask(uint mask);
 	uint getMask();
 	void setSpeed(uint speed);
 	uint getSpeed();
private:
	uint _mask;
	uint _speed;
	~Decepticon();
};
#endif
