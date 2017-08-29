#include"common.h"

Watt::Watt(int watt)
{
    this->watt = watt;
}

Watt::Watt()
{
    this->watt = 0;
}

int Watt::getWatt()
{
    return watt;
}

dBm::dBm()
{
    dbm = -0x8000;
}
dBm::dBm(float powerdBm)
{
    dbm = static_cast<int>(10.0f * powerdBm);
}

dBm dBm::fromWatt(Watt w)
{
    dBm db;
    return db;
}
