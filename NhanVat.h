#include "NPC.h"
#include "Hanh.h"
#include "HeHoa.h"
#include "HeKim.h"
#include "HeMoc.h"
#include "HeTho.h"
#include "HeThuy.h"

#pragma once

class NhanVat : public NPC {
private:
    string MonPhai;
public:
    void Nhap();
};