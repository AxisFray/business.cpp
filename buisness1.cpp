﻿#include <iostream>;
#include <cstdio>;
#include <conio.h>;
#include <windows.h>;
#include <time.h>;
#include <cstdlib>
#include <ctime>
#include <math.h>;

int x;
float money = 300.0;
float increasebuy = 1, increasesell = 1;
float bankacc = 0.0;
int choice;
using namespace std;
float properties[6];// 1pen 2usb  3hardrive 4keyboard 5computer 6cars
float pricessell[6];
float pricesbuy[6];
string text[9];
string names[5];
void Play(), Keyy(),Bank();
void Bank()
{
    int bankchoice;
    float value;
    value = 0;
    system("cls");
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=BANK=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("                                                                                     \n");
    cout << "    money    -- " << round(money) << endl;
    cout << "    bank account -- " << round(bankacc) << endl;
    printf("       [1]   WPLAC   \n");
    printf("       [2]   WYPLAC  \n");
    printf("       [3]   POWROT DO MENU GLOWNEGO\n");
    printf("                                                                                     \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    cout << "Wybierz numer 1 - 3\n";
    cin >> bankchoice;
    cout << "Ile pieniędzy chcesz wpłacić\n";
    cin >> value;
    if (bankchoice == 1)
    {
        if (money < value)
        {
            system("cls");
            cout << "Zbyt malo pieniedzy aby wplacic\n";
            Sleep(1500);
            system("cls");
            Bank();
        }
        else 
        {
            bankacc += value;
            money -= value;
            system("cls");
            cout << "Pieniadze wplacone\n";
            Sleep(1500);
            system("cls");
            Bank();
        }
    }
    if (bankchoice == 2)
    {
        if (bankacc < value)
        {
            system("cls");
            cout << "Zbyt malo pieniedzy aby wyplacic\n";
            Sleep(150);
            system("cls");
            Bank();
        }
        else
        {
            bankacc -= value;
            money += value;
        }
    }
    if (bankchoice == 3)
    {
        Play();
    }
}
int random(int a,int b)
{
    srand(time(NULL));
    int random = a + rand() %b;
    return random;

}
void IncPrice()
{
    increasebuy = random(0, 5);
    increasesell = random(0, 5);
    for (x = 0; x <= 5; x++)
    {
        pricesbuy[x] *= increasebuy;
        pricessell[x] *= increasesell;
    }
}
void Event()
{   
    int charge;
    float zakr1 = money * 0.1 /1;
    float zakr2 = money * 0.9 / 1;
    charge = random(zakr1,zakr2);
    text[0] = "za nocleg w hotelu placisz " + charge;
    text[1] = "placisz mandat wynoszacy :" + charge;
    text[2] = "zrobiles wspaniale zakupy,placisz " + charge;
    text[3] = "za przejazd placisz " + charge;
    text[4] = "kupiles po drodze pamiatki, placisz " + charge;
    text[5] = "odwiedziles okoliczne atrakcje turystyczne,\n placisz " + charge;
    text[6] = "kolega oferuje ci darmowy przejazd samolotem w zamian \n w zamian za pomoc dawno temu \n nic nie tracisz";
    text[7] = "dostales spadek od babci,\n otrzymujesz " + charge;
    text[8] = "nocowales u rodziny, zaoszczedziles pieniadze,\n otrzymujesz " + charge;
        
}
void settings()
{
    for (x = 0; x <= 5; x++)
    {
        pricesbuy[x] = 0;
        pricessell[x] = 0;
    }
    names[0] = "pen";
    names[1] = "usb";
    names[2] = "harddrive";
    names[3] = "keyboard";
    names[4] = "computer";
    names[5] = "car";
}
void Owned()
{
    int w;
    for (w = 0; w <= 5; w++)
    {
        cout << "posiadasz :" << properties[w] << endl;
    }
    
}
void Play()
{
    system("cls");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=BUSINESS-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    
    cout << "    money    -- " << money << endl;
    cout << "    bank account -- " <<  bankacc << endl;
    printf("                  [1] - INFO               \n");
    printf("                  [2] - BANK               \n");
    printf("                  [3] - KUP                \n");
    printf("                  [4] - SPRZEDAJ           \n");
    printf("                  [5] - WYJDZ              \n");
    printf("                  [6] - EKWIPUNEK          \n");
    printf("                  [7] - WYLOT              \n");
    printf("                                                                                      \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    Keyy();
}

void Info()
{
    int infochoice;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=INFO-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("                                                                                     \n");
    printf("    wpisz liczby w nawiasach kwadratowych aby dostac sie do okreslonych miejsc       \n");
    printf("                       kupuj i sprzedawaj produkty aby sie wzbogacic                 \n");
    printf("               wplacaj pieniadze do banku aby nie straci ich w czasie gry            \n");
    printf("                                                                                     \n");
    printf("                            [1] - POWROT DO MENU GLOWNEGO                            \n");
    printf("                                                                                     \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    cin >> infochoice;
    if (infochoice == 1) { Play(); }
    else { Info(); }
}
//1pen 2usb  3hardrive 4keyboard 5computer 6cars
void Buy()
{
    system("cls");
    int buychoice, buynumber;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=KUP-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("                     [1] - pen");
    printf("                     [2] - usb");
    printf("                     [3] - harddrive");
    printf("                     [4] - keyboard");
    printf("                     [5] - computer");
    printf("                     [6] - car");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    Owned();
    printf("Wybierz numer 1 - 6");
    cin >> buychoice;
    cout << "Ile chcesz kupic" << names[buychoice - 1];
    cin >> buynumber;
    buychoice -= 1;
    if (money >= pricesbuy[buychoice] * buynumber)
    {
        properties[buychoice] += buynumber;
        money -= pricesbuy[buychoice] * buynumber;
    }
    else
    {
        system("cls");
        printf("WPISZ LICZBE 1 - 6");
        Sleep(1800);
        system("cls");
        Buy();
    }
}
void Keyy()
{
    cout << "Wpisz wartosc 1 - 7\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Info();
        break;
    case 2:
        Bank();
        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    }

}
int main()
{
    
 

}



