#include <bits/stdc++.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void Clearf() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position = {0, 0};
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD write;

    GetConsoleScreenBufferInfo(hOut, &csbi);
    FillConsoleOutputCharacter(hOut, ' ', 
        csbi.dwSize.X * csbi.dwSize.Y, Position, &write);
    FillConsoleOutputAttribute(hOut, 
        csbi.wAttributes,
        csbi.dwSize.X * csbi.dwSize.Y, Position, &write);
    SetConsoleCursorPosition(hOut, Position);
}
int main(){
    /*char arr[15]={};
    cin.getline(arr,15);
    for(int i=0;i<=14;i++){
        if(arr[i]>='a' && arr[i]<='e'){
            arr[i]+=21;
        }else if(arr[i]>='v' && arr[i]<='z'){
            arr[i]-=21;
        }else if(arr[i]>'e' && arr[i]<'v'){
            arr[i]+=5;
        }
    }
    cout<<arr;*/
    int a;
    cout<<"please input:";
    cin>>a;
    system("cls");
    cout<<"over!";
    return 0;
}