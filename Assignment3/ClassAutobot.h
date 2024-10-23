/* Churkin Kirill st129364@student.spbu.ru
	task 3
*/

#ifndef ClassAutobot_H   
#define ClassAutobot_H
#include "ClassTransformer.h"

class Autobot: public Transformer 
{
public:
	Autobot();
	bool transform();
	bool running();
	void setMask(uint mask);
 	uint getMask();
 	void setSpeed(uint speed);
 	uint getSpeed();
private:
	uint _mask;
	uint _speed;
	~Autobot();
};
#endif
