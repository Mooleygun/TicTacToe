#ifndef FIELD_H
#define FIELD_H

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

    protected:
        STATE state;
    private:

};

#endif // FIELD_H
