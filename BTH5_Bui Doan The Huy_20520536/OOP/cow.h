#pragma once
#pragma once
#include "cattle.h"

#pragma once
class cow : public cattle
{
public:
    cow();
    ~cow();
    void Keu() override;
    int Sua() override;
    int SinhCon() override;
    int getloai() override;
};
