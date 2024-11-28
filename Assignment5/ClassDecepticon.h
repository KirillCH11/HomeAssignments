/* Churkin Kirill st129364@student.spbu.ru
	task 5
*/

#ifndef ClassDecepticon_H
#define ClassDecepticon_H
#include "ClassTransformer.h"

class Decepticon: public Transformer
{
public:
    Decepticon();
    Decepticon(uint mask, uint speed);
    void transform() override;
    void openFire() override;
    void ulta() override;

    bool running();
    void setMask(uint mask);
    uint getMask() const;
    void setSpeed(uint speed);
    uint getSpeed() const;
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
    bool operator>(const Decepticon& other)const;
    bool operator<(const Decepticon& other)const;

    ~Decepticon();
private:
    uint _mask;
    uint _speed;
};
#endif
