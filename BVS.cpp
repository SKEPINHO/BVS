#include "BVS.h"

#include <iostream>
#include <queue>

#include "BVSItem.h"


BVS::BVS()
	:mKoren(nullptr)
{
}

BVS::~BVS()
{
}

void BVS::vloz(int hodnota)
{
	BVSItem* novy = new BVSItem();
	novy->mHodnota = hodnota;

	if(mKoren == nullptr)
	{
		mKoren = novy;
		return;
	}

	BVSItem* aktualni = mKoren;
	while(aktualni != nullptr)
	{
		if(hodnota < aktualni->mHodnota) {
			if (aktualni->mLevy == nullptr) {
				aktualni->mLevy = novy;
				return;
			}
			else 
				aktualni = aktualni->mLevy;
		}
		else {
			if (aktualni->mPravy == nullptr) {
				aktualni->mPravy = novy;
				return;
			}
			else
				aktualni = aktualni->mPravy;
		}
	}
}

void BVS::vypisDoHloubky()
{
	vypisDoHloubky(mKoren);
}

void BVS::vypisDoSirky()
{
    if (mKoren == nullptr)
        return;

    std::queue<BVSItem*> fronta;
    fronta.push(mKoren);

    while (!fronta.empty())
    {
        BVSItem* aktualni = fronta.front();
        fronta.pop();

        std::cout << aktualni->mHodnota << " ";

        if (aktualni->mLevy != nullptr)
            fronta.push(aktualni->mLevy);
        if (aktualni->mPravy != nullptr)
            fronta.push(aktualni->mPravy);
    }
}

void BVS::vypisDoHloubky(BVSItem* prvek)
{
	if (prvek == nullptr)
		return;

	vypisDoHloubky(prvek->mLevy);
	std::cout << prvek->mHodnota << " ";
	vypisDoHloubky(prvek->mPravy);
}

bool BVS::jeVeStrome(int hodnota)
{
	BVSItem* aktualni = mKoren;
	while (aktualni != nullptr)
	{
		if (hodnota == aktualni->mHodnota)
			return true;
		else if (hodnota < aktualni->mHodnota)
			aktualni = aktualni->mLevy;
		else
			aktualni = aktualni->mPravy;
	}

	return false;
}