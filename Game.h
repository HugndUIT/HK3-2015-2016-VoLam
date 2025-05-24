#include "NPC.h"
#include "NhanVat.h"
#include "QuaiVat.h"

#pragma once

class Game {
    vector<NPC*> DanhSachNPC;
public:
    void Nhap();
    void NPCMaxSatThuong();
    void Combat();
    ~Game() {
        for (auto npc : DanhSachNPC) {
            delete npc;
        }
    }
};