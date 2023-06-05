#include <iostream>;
#include <cstdio>;
#include <conio.h>;
#include <windows.h>;
#include <time.h>;

float money = 300.0;
float bankacc = 0.0;
int choice;
using namespace std;
float properties[6];// 1pen 2usb  3hardrive 4keyboard 5computer 6cars
float pricessell[6];
float pricessbuy[6];

int Bank()
{
    int bankchoice;
    int value;
    value = 0;
    printf("▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ");
    printf("░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ");

    printf("            ██████╗░░█████╗░███╗░░██╗██╗░░██╗");
    printf("            ██╔══██╗██╔══██╗████╗░██║██║░██╔╝");
    printf("            ██████╦╝███████║██╔██╗██║█████═╝░");
    printf("            ██╔══██╗██╔══██║██║╚████║██╔═██╗░");
    printf("            ██████╦╝██║░░██║██║░╚███║██║░╚██╗");
    printf("            ╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝");
    printf("                                                                                     ");
    printf("    money    -- ",money);
    printf("bank account -- ",bankacc);
    printf("       [1]   WPLAC   ");
    printf("       [2]   WYPLAC  ");
    printf("       [3]   POWROT DO MENU GLOWNEGO");
    printf("                                                                                     ");
    printf("▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ");
    printf("░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ");
    cout << "Wybierz numer 1 - 3";
    cin >> bankchoice;
    cout << "Ile pieniędzy chcesz wpłacić";
    cin >> value;
    if (bankchoice == 1)
    {
        if (money < value)
        {
            getch();
            cout << "Zbyt malo pieniedzy aby wpalacic";
            Sleep(150);
            getch();
            Bank();
        }
        else 
        {
            bankacc += value;
            money -= value;
            getch();
            cout << "Pieniadze wplacone";
            Sleep(150);
            getch();
            Bank();
        }
    }
    if (bankchoice == 2)
    {
        if (bankacc < value)
        {
            getch();
            cout << "Zbyt malo pieniedzy aby wyplacic";
            Sleep(150);
            getch();
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
int Play()
{
    printf("▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ");
    printf("░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ");

    printf("            ██████╗░██╗░░░██╗░██████╗██╗███╗░░██╗███████╗░██████╗░██████╗");
    printf("            ██╔══██╗██║░░░██║██╔════╝██║████╗░██║██╔════╝██╔════╝██╔════╝");
    printf("            ██████╦╝██║░░░██║╚█████╗░██║██╔██╗██║█████╗░░╚█████╗░╚█████╗░");
    printf("            ██╔══██╗██║░░░██║░╚═══██╗██║██║╚████║██╔══╝░░░╚═══██╗░╚═══██╗");
    printf("            ██████╦╝╚██████╔╝██████╔╝██║██║░╚███║███████╗██████╔╝██████╔╝");
    printf("            ╚═════╝░░╚═════╝░╚═════╝░╚═╝╚═╝░░╚══╝╚══════╝╚═════╝░╚═════╝░");
    printf("    money    -- ", money);
    printf("    bank account -- ", bankacc);
    printf("                  [1] - INFO               ");
    printf("                  [2] - BANK               ");
    printf("                  [3] - KUP                ");
    printf("                  [4] - SPRZEDAJ           ");
    printf("                  [5] - WYJDZ              ");
    printf("                  [6] - EKWIPUNEK          ");
    printf("                  [7] - WYLOT              ");
    printf("                                                                                      ");
    printf("▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄");
    printf("░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░");
    Keyy();
}

int Info()
{
    int infochoice;
    printf("▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ");
    printf("░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ");
    printf("            ██╗███╗░░██╗███████╗░█████╗░");
    printf("            ██║████╗░██║██╔════╝██╔══██╗");
    printf("            ██║██╔██╗██║█████╗░░██║░░██║");
    printf("            ██║██║╚████║██╔══╝░░██║░░██║");
    printf("            ██║██║░╚███║██║░░░░░╚█████╔╝");
    printf("            ╚═╝╚═╝░░╚══╝╚═╝░░░░░░╚════╝░");
    printf("                                                                                     ");
    printf("    wpisz liczby w nawiasach kwadratowych aby dostac sie do okreslonych miejsc       ");
    printf("                       kupuj i sprzedawaj produkty aby sie wzbogacic                 ");
    printf("               wplacaj pieniadze do banku aby nie straci ich w czasie gry            ");
    printf("                                                                                     ");
    printf("                            [1] - POWROT DO MENU GLOWNEGO                            ");
    printf("▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ▄▄ ");
    printf("░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ░░ ");
    cin >> infochoice;
    if (infochoice == 1) { Play(); }
    else { Info(); }
}

int Keyy()
{
    cout << "Wpisz wartość 1 - 7";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Info();
        break;
    case 2:

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
    Play();




}



