#include "NPC.h"

string NPC::GetHe() {
    return He->GetTenHe();
}

double NPC::GetSatThuong() {
    return SatThuong;
}

void NPC::Xuat() {
    cout << Name << " " << CapDo << " " << SatThuong << " ";
    He->Xuat();
}

void NPC::Nhap() {
    cout << "Nhap Cap Do: ";
    cin >> CapDo;
    cin.ignore();
}