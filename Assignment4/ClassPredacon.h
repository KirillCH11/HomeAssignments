/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/

#ifndef ClassPredacon_H
#define ClassPredacon_H
#include "ClassTransformer.h"

class Predacon: public Transformer
{
public:
    Predacon();
    Predacon(uint mask, uint speed);
    bool transform();
    bool running();
    void setMask(uint mask);
    uint getMask() const;
    void setSpeed(uint speed);
    uint getSpeed() const;
    friend std::ostream& operator<<(std::ostream& os, const Predacon& predacon);
    bool operator>(const Predacon& other)const;
    bool operator<(const Predacon& other)const;

    ~Predacon();
private:
    uint _mask;
    uint _speed;
};
#endif
