#include "Hanh.h"

#pragma once

class NPC {
protected:
    Hanh* He = nullptr;
    string Name;
    double CapDo, SatThuong;
public:
    string GetHe();
    double GetSatThuong();
    void Xuat();
    virtual void Nhap();
    virtual ~NPC() {
        delete He;
    }
};