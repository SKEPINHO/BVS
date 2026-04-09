// BVS3_2sk.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

#include "BVS.h"

int main()
{
    BVS strom;
    strom.vloz(20);
    strom.vloz(10);
    strom.vloz(5);
    strom.vloz(17);
    strom.vloz(30);
    strom.vloz(25);

   // strom.vypisDoHloubky();
    strom.vypisDoSirky();
   //std::cout << std::endl <<
   //   (strom.jeVeStrome(25) ? "true" : "false");
}