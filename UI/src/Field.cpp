#include "Field.h"

Field::Field()
{
    state = EMPTY;
}

Field::~Field()
{
    //dtor
}

bool Field::isFieldEmpty()
{
    if(state == EMPTY) return true;
    return false;
}

void Field::fillField(STATE status)
{
    state = status;
}
