#include <iostream>
#include <conio.h>
#include <windows.h>

#define UP 'w'
#define DOWN 's'
#define RIGHT 'd'
#define LEFT 'a' 

using namespace std;

void gotoXY(int x, int y) //좌표를 옮겨주는 함수
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}

int main()
{
    int inputKey;
    int x = 0;
    int y = 0;

    while (true)
    {
        system("cls"); // 원래 있던 '*' 없애기
        gotoXY(x, y);
        cout << "*";

        // _getch()로 입력값을 받음
        inputKey = _getch();

        if (inputKey == UP)
        {
            y -= 1;
            if (y < 0)
            {
                y = 0;
            }
        }
        else if (inputKey == DOWN)
        {
            y += 1;
        }
        else if (inputKey == RIGHT)
        {
            x += 1;
        }
        else if (inputKey == LEFT)
        {
            x -= 1;
            if (x < 0)
            {
                x = 0;
            }
        }
    }
}