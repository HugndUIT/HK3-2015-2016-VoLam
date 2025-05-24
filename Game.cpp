#include "Game.h"

void Game::Nhap() {
    int SoLuong;
    cin >> SoLuong;
    for (int i = 0; i < SoLuong; i++) {
        int Loai;
        cout << "Nhap loai NPC (1: Nhan vat, 2: Quai vat): ";
        cin >> Loai;
        NPC* Temp = nullptr;
        if (Loai == 1) {
            Temp = new NhanVat;
        }
        else {
            Temp = new QuaiVat;
        }
        Temp->Nhap();
        DanhSachNPC.push_back(Temp);
    }
}

void Game::NPCMaxSatThuong() {
    double Max = -1;
    NPC* MaxDameNPC = nullptr;
    for (NPC* Temp : DanhSachNPC) {
        if (Temp->GetSatThuong() > Max) {
            Max = Temp->GetSatThuong();
            MaxDameNPC = Temp;
        }
    }
    MaxDameNPC->Xuat();
}

double TotalDame(NPC* PlayerOne, NPC* PlayerTwo) {
    double TotalDamePlayer1 = 0;
    if (PlayerOne->GetHe() == "Tho") {
        if (PlayerTwo->GetHe() == "Kim")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.1;
        else if (PlayerTwo->GetHe() == "Thuy")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.2;
        else if (PlayerTwo->GetHe() == "Moc")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 0.8;
        else
            TotalDamePlayer1 += PlayerOne->GetSatThuong();
    }
    else if (PlayerOne->GetHe() == "Kim") {
        if (PlayerTwo->GetHe() == "Thuy")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.1;
        else if (PlayerTwo->GetHe() == "Moc")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.2;
        else if (PlayerTwo->GetHe() == "Hoa")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 0.8;
        else
            TotalDamePlayer1 += PlayerOne->GetSatThuong();
    }
    else if (PlayerOne->GetHe() == "Thuy") {
        if (PlayerTwo->GetHe() == "Moc")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.1;
        else if (PlayerTwo->GetHe() == "Hoa")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.2;
        else if (PlayerTwo->GetHe() == "Tho")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 0.8;
        else
            TotalDamePlayer1 += PlayerOne->GetSatThuong();
    }
    else if (PlayerOne->GetHe() == "Moc") {
        if (PlayerTwo->GetHe() == "Hoa")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.1;
        else if (PlayerTwo->GetHe() == "Tho")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.2;
        else if (PlayerTwo->GetHe() == "Kim")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 0.8;
        else
            TotalDamePlayer1 += PlayerOne->GetSatThuong();
    }
    else if (PlayerOne->GetHe() == "Hoa") {
        if (PlayerTwo->GetHe() == "Tho")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.1;
        else if (PlayerTwo->GetHe() == "Kim")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 1.2;
        else if (PlayerTwo->GetHe() == "Thuy")
            TotalDamePlayer1 += PlayerOne->GetSatThuong() * 0.8;
        else
            TotalDamePlayer1 += PlayerOne->GetSatThuong();
    }
    return TotalDamePlayer1;
}

void Game::Combat() {
    NPC* PlayerOne = nullptr;
    NPC* PlayerTwo = nullptr;
    int Loai;
    cout << "Nhap loai NPC (1: Nhan vat, 2: Quai vat): ";
    cin >> Loai;
    if (Loai == 1) {
        PlayerOne = new NhanVat;
    }
    else {
        PlayerOne = new QuaiVat;
    }
    cout << "Nhap loai NPC (1: Nhan vat, 2: Quai vat): ";
    cin >> Loai;
    if (Loai == 1) {
        PlayerTwo = new NhanVat;
    }
    else {
        PlayerTwo = new QuaiVat;
    }
    PlayerOne->Nhap();
    PlayerTwo->Nhap();
    if (TotalDame(PlayerOne, PlayerTwo) > TotalDame(PlayerTwo, PlayerOne)) {
        cout << "Player 1 gay nhieu sat thuong hon\n";
    }
    else if (TotalDame(PlayerOne, PlayerTwo) < TotalDame(PlayerTwo, PlayerOne)) {
        cout << "Player 2 gay nhieu sat thuong hon\n";
    }
    else {
        cout << "Player 1 va Player 2 gay sat thuong bang nhau\n";
    }
    delete PlayerOne;
    delete PlayerTwo;
}