#include "Soldier.h"
#include "Gun.h"

void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    //sanduo.addBulletToGun(20);
    sanduo.fire();
}

int main()
{
    test();
    return 0;
}