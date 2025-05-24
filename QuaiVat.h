#include "NPC.h"
#include "Hanh.h"
#include "HeHoa.h"
#include "HeKim.h"
#include "HeMoc.h"
#include "HeTho.h"
#include "HeThuy.h"

#pragma once

class QuaiVat : public NPC {
private:
    string LoaiQuaiVat;
public:
    void Nhap();
};