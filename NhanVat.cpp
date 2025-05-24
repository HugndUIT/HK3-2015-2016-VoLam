#include "NhanVat.h"

void NhanVat::Nhap() {
    cout << "Nhap Ten: ";
    getline(cin, Name);
    NPC::Nhap();
    cout << "Chon Mon Phai: ";
    getline(cin, MonPhai);
    if (MonPhai == "Thieu Lam" || MonPhai == "Thien Vuong Bang") {
        He = new Kim;
    }
    else if (MonPhai == "Nga Mi" || MonPhai == "Thuy Yen Mon") {
        He = new Thuy;
    }
    else if (MonPhai == "Ngu Doc Giao" || MonPhai == "Duong Mon") {
        He = new Moc;
    }
    else if (MonPhai == "Cai Bang" || MonPhai == "Thien Nhan Giao") {
        He = new Hoa;
    }
    else {
        He = new Tho;
    }
    SatThuong = CapDo * 5;
}