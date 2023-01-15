// nemico che va a caso
#pragma once

#include "Enemy.hpp"
#include "Hero.hpp"


class Drunk : public Enemy
{
public:
	Drunk();
	Drunk(int y, int x,int diff);
	    //sprite diverso ma uguale
    void createProjectile(Board &board_win, Character &hero, Direction dir) override;
    //uguale a shooter ma meno range
    void checkProjectile(Board &board_win, Hero &hero);
	// override di characters
	void chooseDirection(Board &board_win, Character &hero) override;
};