#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <string>
#define Cursor set_cursor(x, y);

using namespace std;

bool Draw(char, int);
void ChangePosition(int, int);
void DrawHorizontal(int, int, int);
void DrawVertical(int, int, int);
void DrawSlash(int, int, int);
void DrawBackSlash(int, int, int);
void DrawCircle(int, int);
void set_cursor(int, int);
void DrawBoard();
bool DrawX1();
bool DrawX2();
bool DrawX3();
bool DrawX4();
bool DrawX5();
bool DrawX6();
bool DrawX7();
bool DrawX8();
bool DrawX9();
bool C1();
bool C2();
bool C3();
bool C4();
bool C5();
bool C6();
bool C7();
bool C8();
bool C9();
void game();
int menu();
int times = 0;
int d1 = 0;
int d2 = 0;
int d3 = 0;
int d4 = 0;
int d5 = 0;
int d6 = 0;
int d7 = 0;
int d8 = 0;
int d9 = 0;
int x[9] = { 0 };
int c[9] = { 0 };
string occupied = "Box already occupied, choose a new move";
string finish = "You Win!";
int win = 0;

int main()
{
    int choice = 0;
   
   
    do {
        choice = menu();
        system("CLS");
        if (choice == 1)
            game();
    } while (choice != 2 );
    cout << "\n\n\n   You played the game " << times << " times in this session!\n";
    cout << "   We hope you'll play the game again!\n"
        << "   Goodbye!";
  
    _getch();
    return 0;
}
void game()
{

    int m1 = 0, m2 = 0;
    int z = 0;
    char p1, p2;
    char choice;
    int n = 1000;
    int choice1 = 0, choice2 = 0;
    bool retry1 = false, retry2 = false;

    for (int a = 0; a < 1000;a++)
    {
        cout << "\nPlayer 1 choose your choice (X or O):" << flush;
        cin >> choice;
        if (choice == 'X' || choice == 'x')
        {
            p1 = 'X';
            p2 = 'O';
            a = 1001;
        }
        else if (choice == 'O' || choice == 'o' || choice == '0')
        {
            p1 = 'O';
            p2 = 'X';
            a = 1001;
        }
        else
            cout << "Invalid choice, try again" << flush;
    }
    system("CLS");
    DrawBoard();
    cout << setw(20) << "\nType a number between 1 to 9 to place your choice on that block\n";
    for (int s = 10; s > z;)
    {
        if (z == 10)
            break;
        do {
            cout << "\nPlayer 1 Choose your move:";
            cin >> m1;
            if (m1 > 0 && m1 < 10)
                retry1 = Draw(p1, m1);
            else
                cout << "Invalid move, please choose a valid move!\n";


            if (x[0] > 0 && x[1] > 0 && x[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else if (x[0] > 0 && x[3] > 0 && x[6] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[0] > 0 && x[4] > 0 && x[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[6] > 0 && x[4] > 0 && x[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[6] > 0 && x[7] > 0 && x[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[2] > 0 && x[5] > 0 && x[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[3] > 0 && x[4] > 0 && x[5] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[1] > 0 && x[4] > 0 && x[7] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else if (c[0] > 0 && c[1] > 0 && c[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else if (c[0] > 0 && c[3] > 0 && c[6] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[0] > 0 && c[4] > 0 && c[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[6] > 0 && c[4] > 0 && c[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[6] > 0 && c[7] > 0 && c[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[2] > 0 && c[5] > 0 && c[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[3] > 0 && c[4] > 0 && c[5] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[1] > 0 && c[4] > 0 && c[7] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }

        } while (retry1 == 0);

        if (z == 10)
            break;

        z++;
        if (z == 9)
            break;

        do {
            if (z == 10)
                break;
            cout << "\nPlayer 2 Choose your move:";
            cin >> m2;
            if (m2 > 0 && m2 < 10)
                retry2 = Draw(p2, m2);
            else
                cout << "Invalid move, please choose a valid move!\n";

            if (x[0] > 0 && x[1] > 0 && x[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else if (x[0] > 0 && x[3] > 0 && x[6] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[0] > 0 && x[4] > 0 && x[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[6] > 0 && x[4] > 0 && x[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[6] > 0 && x[7] > 0 && x[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[2] > 0 && x[5] > 0 && x[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[3] > 0 && x[4] > 0 && x[5] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (x[1] > 0 && x[4] > 0 && x[7] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else if (c[0] > 0 && c[1] > 0 && c[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else if (c[0] > 0 && c[3] > 0 && c[6] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[0] > 0 && c[4] > 0 && c[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[6] > 0 && c[4] > 0 && c[2] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[6] > 0 && c[7] > 0 && c[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[2] > 0 && c[5] > 0 && c[8] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[3] > 0 && c[4] > 0 && c[5] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }
            else  if (c[1] > 0 && c[4] > 0 && c[7] > 0)
            {
                cout << finish;
                win++;
                z = 10;
                break;
            }

        } while (retry2 == 0);
        z++;

    }
   
    if (win == 0 && z == 9)
        cout << "\nThe Game was a draw!\n";
        cout << "\nPress any key to go back to the main menu";
    _getch();
   
}

int menu()
{
    for (int a = 0; a < 10; a++)
    {
        x[a] = 0;
        c[a] = 0;
    }
    win = 0;
     d1 = 0;
     d2 = 0;
     d3 = 0;
     d4 = 0;
     d5 = 0;
     d6 = 0;
     d7 = 0;
     d8 = 0;
     d9 = 0;
    int choice = 0;
    int n = 1000;
    system("CLS");
    cout << setw(70) << "Welcome to the game of Tic Tac Toe!\n" << flush;
    cout << setw(80) << "Ver 1.0\n" << flush;
    if (choice == 0 && times == 0)
        cout << "  1.Play the game\n" << flush;
    else
        cout << "  1.Play another game?\n" << flush;
 
        cout << "  2.Exit\n" << flush;
    for (int a = 0; a < n; a++) {
        cout << "  Choose your option: " << flush;
        cin >> choice;
        if (choice == 1) {
            times++;
            n = a - 1;
            return 1;
        }
        else if (choice == 2) {
            n = a - 1;
            return 2;
        }
        else
            cout << "Invalid choice try again\n" << flush;
    }
 
    system("CLS");
}

void set_cursor(int x = 0, int y = 0)
{
    HANDLE handle;
    COORD coordinates;
    handle = GetStdHandle(STD_OUTPUT_HANDLE);
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(handle, coordinates);
}
bool Draw(char p, int m)
{
    bool retry = false;

    if (p == 'X' && m == 1)
        retry = DrawX1();
    else if (p == 'X' && m == 2)
        retry = DrawX2();
    else if (p == 'X' && m == 3)
        retry = DrawX3();
    else if (p == 'X' && m == 4)
        retry = DrawX4();
    else if (p == 'X' && m == 5)
        retry = DrawX5();
    else if (p == 'X' && m == 6)
        retry = DrawX6();
    else if (p == 'X' && m == 7)
        retry = DrawX7();
    else if (p == 'X' && m == 8)
        retry = DrawX8();
    else if (p == 'X' && m == 9)
        retry = DrawX9();
    else if (p == 'O' && m == 1)
        retry = C1();
    else if (p == 'O' && m == 2)
        retry = C2();
    else if (p == 'O' && m == 3)
        retry = C3();
    else if (p == 'O' && m == 4)
        retry = C4();
    else if (p == 'O' && m == 5)
        retry = C5();
    else if (p == 'O' && m == 6)
        retry = C6();
    else if (p == 'O' && m == 7)
        retry = C7();
    else if (p == 'O' && m == 8)
        retry = C8();
    else if (p == 'O' && m == 9)
        retry = C9();

    if (retry == true)
        return true;
    else
        return false;

}
void DrawHorizontal(int x = 0, int y = 0, int l = 0)
{
    char line = '_';
    int i = 0;

    while (i <= l) {
        cout << line;
        Cursor;
        x++;
        i++;
    }
}
void DrawVertical(int x = 0, int y = 0, int l = 0) {

    char line = '|';
    int i = 0;

    while (i <= l) {
        cout << line << endl;
        Cursor;
        y++;
        i++;
    }
}
void DrawSlash(int x = 0, int y = 0, int l = 0)
{
    char line = '/';
    int i = 0;

    while (i <= l) {
        cout << line << endl;
        Cursor;
        y++;
        x--;
        i++;
    }
}
void DrawBackSlash(int x = 0, int y = 0, int l = 0)
{
    int i = 0;
    char line = '\\';

    while (i <= l) {
        cout << line << endl;
        Cursor;
        y++;
        x++;
        i++;
    }
}
void DrawCircle(int x = 0, int y = 0)
{
    // radius 
    const float RAD = 3.5;

    // tolerance 
    const float TOL = 3.5;

    for (float a = -RAD; a <= RAD; a++)
    {
        Cursor;

        for (float b = -RAD; b <= RAD; b++)
        {
            float eq = a * a + b * b - RAD * RAD;

            abs(eq) < TOL ? cout << "*" : cout << " ";
        }

        cout << "\n";

        y++;
    }
}

void DrawBoard()
{
    DrawHorizontal(1, 9, 85);
    DrawHorizontal(1, 20, 85);
    DrawVertical(30, 0, 30);
    DrawVertical(60, 0, 31);
}
bool DrawX1() {
    if (d1 == 0) {
        DrawSlash(18, 1, 8);
        DrawBackSlash(11, 1, 8);
        x[0] = 1;
    }
    else
        cout << occupied;
    d1++;
    if (d1 > 1)
        return false;
    else
        return true;
}
bool DrawX2() {
    if (d2 == 0) {
        DrawSlash(49, 1, 8);
        DrawBackSlash(42, 1, 8);
        x[1] = 1;
    }
    else
        cout << occupied;
    d2++;
    if (d2 > 1)
        return false;
    else
        return true;
}
bool DrawX3() {
    if (d3 == 0) {
        DrawSlash(76, 1, 8);
        DrawBackSlash(69, 1, 8);
        x[2] = 1;
    }
    else
        cout << occupied;
    d3++;
    if (d3 > 1)
        return false;
    else
        return true;
}
bool DrawX4() {
    if (d4 == 0) {
        DrawSlash(18, 11, 8);
        DrawBackSlash(11, 11, 8);
        x[3] = 1;
    }
    else
        cout << occupied;
    d4++;
    if (d4 > 1)
        return false;
    else
        return true;
}
bool DrawX5() {
    if (d5 == 0) {
        DrawSlash(49, 11, 8);
        DrawBackSlash(42, 11, 8);
        x[4] = 1;
    }
    else
        cout << occupied;
    d5++;
    if (d5 > 1)
        return false;
    else
        return true;
}
bool DrawX6() {
    if (d6 == 0) {
        DrawSlash(76, 11, 8);
        DrawBackSlash(69, 11, 8);
        x[5] = 1;
    }
    else
        cout << occupied;
    d6++;
    if (d6 > 1)
        return false;
    else
        return true;
}
bool DrawX7() {
    if (d7 == 0) {
        DrawSlash(18, 22, 8);
        DrawBackSlash(11, 22, 8);
        x[6] = 1;

    }
    else
        cout << occupied;
    d7++;
    if (d7 > 1)
        return false;
    else
        return true;
}
bool DrawX8() {
    if (d8 == 0) {
        DrawSlash(49, 22, 8);
        DrawBackSlash(42, 22, 8);
        x[7] = 1;

    }
    else
        cout << occupied;
    d8++;
    if (d8 > 1)
        return false;
    else
        return true;
}
bool DrawX9() {
    if (d9 == 0) {
        DrawSlash(76, 22, 8);
        DrawBackSlash(69, 22, 8);
        x[8] = 1;

    }
    else
        cout << occupied;
    d9++;
    if (d9 > 1)
        return false;
    else
        return true;
}
bool C1() {
    if (d1 == 0)
    {
        DrawCircle(15, 0);
        c[0] = 1;
    }
    else
        cout << occupied;
    d1++;
    if (d1 > 1)
        return false;
    else
        return true;
}
bool C2() {
    if (d2 == 0)
    {
        DrawCircle(45, 0);
        c[1] = 1;
    }
    else
        cout << occupied;
    d2++;
    if (d2 > 1)
        return false;
    else
        return true;
}
bool C3() {
    if (d3 == 0)
    {
        DrawCircle(73, 0);
        c[2] = 1;
    }
    else
        cout << occupied;
    d3++;
    if (d3 > 1)
        return false;
    else
        return true;
}
bool C4() { 
    if (d4 == 0)
    {
        DrawCircle(15, 11);
        c[3] = 1;
    }
    else
        cout << occupied;
    d4++;
    if (d4 > 1)
        return false;
    else
        return true;
}
bool C5() {
    if (d5 == 0)
    {
        DrawCircle(45, 11);
        c[4] = 1;
    }
    else
        cout << occupied;
    d5++;
    if (d5 > 1)
        return false;
    else
        return true;
}
bool C6() {
    if (d6 == 0)
    {
        DrawCircle(73, 11);
        c[5] = 1;
    }
    else
        cout << occupied;
    d6++;
    if (d6 > 1)
        return false;
    else
        return true;
}
bool C7() {
    if (d7 == 0)
    {
        DrawCircle(15, 22);
        c[6] = 1;
    }
    else
        cout << occupied;
    d7++;
    if (d7 > 1)
        return false;
    else
        return true;
}
bool C8() {
    if (d8 == 0)
    {
        DrawCircle(45, 22);
        c[7] = 1;
    }
    else
        cout << occupied;
    d8++;
    if (d8 > 1)
        return false;
    else
        return true;
}
bool C9() { 
    if (d9 == 0)
    {
        DrawCircle(73, 22);
        c[8] = 1;
    }
    else
        cout << occupied;
    d9++;
    if (d9 > 1)
        return false;
    else
        return true;
}
