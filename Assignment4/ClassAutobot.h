/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/

#ifndef ClassAutobot_H
#define ClassAutobot_H
#include "ClassTransformer.h"

class Autobot: public Transformer
{
public:
    Autobot();
    Autobot(uint mask, uint speed);
    bool transform();
    bool running();
    void setMask(uint mask);
    uint getMask() const;
    void setSpeed(uint speed);
    uint getSpeed() const;
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
    bool operator>(const Autobot& other)const;
    bool operator<(const Autobot& other)const;

    ~Autobot();
private:
    uint _mask;
    uint _speed;
};
#endif
