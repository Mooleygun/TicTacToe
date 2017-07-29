#include "Field.h"

Field::Field()
{
    this->state = EMPTY;
}

Field::~Field()
{
    //dtor
}

bool Field::isFieldEmpty()
{
    if(this->state == EMPTY) return true;
    return false;
}

void Field::fillField(STATE state)
{
    this->state = state;
}
