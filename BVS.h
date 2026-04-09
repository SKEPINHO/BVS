#pragma once

#include "BVSItem.h"

class BVS
{
public:
	BVS();
	~BVS();
	void vloz(int hodnota);
	void vypisDoHloubky();
    void vypisDoSirky();
	bool jeVeStrome(int hodnota);
	//void smaz(int hodnota);
private:
	BVSItem* mKoren;

	void vypisDoHloubky(BVSItem* item);
	//BVSItem* smaz(BVSItem* item, int hodnota);
};

