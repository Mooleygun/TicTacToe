#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player(char Sign);
        virtual ~Player();

    char sign;
    int points;
    protected:

    private:
};

#endif // PLAYER_H
