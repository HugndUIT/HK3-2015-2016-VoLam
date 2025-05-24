#include "QuaiVat.h"

void QuaiVat::Nhap() {
    cout << "Nhap Loai Quai Vat: ";
    getline(cin, LoaiQuaiVat);
    if (LoaiQuaiVat == "Thong Thuong") {
        SatThuong = CapDo * 3;
    }
    else {
        SatThuong = CapDo * 7;
    }
    cout << "Nhap he quai vat: ";
    string Loai;
    cin >> Loai;
    if (Loai == "Kim") {
        He = new Kim;
    }
    else if (Loai == "Thuy") {
        He = new Thuy;
    }
    else if (Loai == "Moc") {
        He = new Moc;
    }
    else if (Loai == "Hoa") {
        He = new Hoa;
    }
    else {
        He = new Tho;
    }
    NPC::Nhap();
}