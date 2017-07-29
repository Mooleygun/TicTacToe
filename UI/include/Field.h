#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include <windows.h>

using namespace std;

enum STATE
{
    EMPTY = 0,
    CIRCLE = 1,
    CROSS = 2
};

class Field
{
    public:
        Field();
        virtual ~Field();
        STATE state;
        bool isFieldEmpty();
        void fillField(STATE state);

    protected:

    private:

};

#endif // FIELD_H
