#include <bits/stdc++.h>
#include <cmath>
#include <random>
#include <cstring>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int mode,plmode,dmode;

char arr[15]={};

void whatarr(){
    cin.getline(arr,15);
    if(strcmp(arr,"yuanshen start") == 0){
        cout << "破译成功！" << endl;
    }else{
        cout << "破译失败！" << endl;
        cout << "请重新输入：";
        for(int i=0;;i++){
            cin.getline(arr,15);
            if(strcmp(arr,"yuanshen start") == 0){
                cout << "破译成功！" << endl;
                break;
            }else{
                cout << "破译失败！" << endl;
                cout << "请重新输入：";
            }
        }
    }
}
void menu(){
    cout<<"请选择模式："<<endl;
    cout << "1.1player" << endl;
    cout << "2.2player" << endl;
    cin >> plmode;
    if(plmode==1){
        cout<<"请选择难度："<<endl;
        cout << "1.easy" << endl;
        cout << "2.normal" << endl;
        cout << "3.hard" << endl;
        cout << "4.hell" << endl;
        cout << "5.exit" << endl;
        cin >> mode;
    }else{
        cout<<"请选择难度："<<endl;
        cout << "1.normal" << endl;
        cout<<"2.hard" << endl;
        cin>>dmode;
    }
}
int main(){
    menu();
    if(mode==1){
    int player;
    cout <<  "请输入一个100以内的整数:";
    cin >> player;
    if(player>100){
        cout <<"没长眼睛吗孩子"<<endl;
    }
    int tplayer;
    if(player<=30){
        for(int i=player-15;i>=0;){
            cout << "请2p猜出1p的数:";
            cin >> tplayer;
            if(tplayer!=i){
                cout << "猜错了，请再输一个吧" << endl;
            }else{
                cout << "恭喜你，猜对了！" << endl;
                break;
            }
        }
    }else if(player>30 && player<=70){
        for(int i=player+10-30+5;i>=0;){
           cout << "请2p猜出1p的数:";
            cin >> tplayer;
            if(tplayer!=i){
                cout << "猜错了，请再输一个吧" << endl;
            }else{
                cout << "恭喜你，猜对了！" << endl;
                break;
            }
        }
    }else if(player<70 && player>=100){
        for(int i=player/2+10;i>=0;){
            cout << "请2p猜出1p的数:";
            cin >> tplayer;
            if(tplayer!=i){
                cout << "猜错了，请再输一个吧" << endl;
            }else{
                cout << "恭喜你，猜对了！" << endl;
                break;
            }

        }
    }
}

    int pl;

    if(mode==2){
        double num;
        cout <<  "请输入一个100以内的数:";
        cin>>num;
        if(num>100 || num<0){
            cout<<"sz中开吧" << endl;
            cout<<"请重新输入：";
            for(int i=0;;i++){
                cin>>num;
                if(num<=100){
                    break;
                }else{
                    cout<<"请重新输入：";
                }
            }
        }
        if(num<30 && num>=0){
            num=(sqrt(num)-cbrt(num)*num)+(sqrt(num)-cbrt(num));
            cout<<"请输入一个数：";
            cin>>pl;
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请再输一个吧";
                for(int i=0;;i++){
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请再输一个吧";
                    }
                }
            }
        }
        
        if(num<60 && num>=30){
            num=sqrt(num-num/2+num-10-cbrt(num-sqrt(num)));
            cout<<"请输入一个数：";
            cin>>pl;
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请再输一个吧";
                for(int i=0;;i++){
                    num=sqrt(num-num/3+num-1-cbrt(num-sqrt(num+num-sqrt(num))));
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！";
                        break;
                    }else{
                        cout<<"猜错了，请再输一个吧";
                    }
                }
            }
        }

        if(num<98 && num>=60){
            num=cbrt(num+num/10)-cbrt(num+num/10-num+cbrt(num));
            cout<<"请输入一个数：";
            cin>>pl;
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请再输一个吧";
                for(int i=0;;i++){
                    num+=1-(cbrt(num)/10);
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请再输一个吧";
                    }
                }
            }
        }

        if(num==99 || num==100){
            cout << "加入隐藏关卡" << endl;
            cout << "dzvsxmzs xyvwy" << endl;
            Sleep(2000);
            cout << "密码破译，请输入原文：" << endl;
            Sleep(2000);
            cout << "此有bug" << endl;
            Sleep(2000);
            whatarr();
        }
    }


    if(mode==3){
        int num;
        cout <<  "请输入一个300以内的整数:";
        cin>>num;
        if(num>=300){
            cout<<"输入错误，请重新输入：";
            for(int i=0;;i++){
                cin>>num;
                if(num<300){
                    break;
                }else{
                    cout<<"请重新输入：";
                }
            }
        }

        if(num>0 && num<100){
            cout<<"请输入一个数：";
            cin>>pl;
            //随机数模块
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> dis(1, pl);
            num=dis(gen);
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请重新输入：";
                for(int i=0;;i++){
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请重新输入：";
                    }
                }
            }
        }
        
        if(num>=100 && num<200){
            cout<<"请输入一个数：";
            cin>>pl;
            for(int i=0;i<pl%10;i++){
                num=num+pl+1;
                if(num>=10000){
                    break;
                }
            }
            for(int i=0;i<pl;i++){
                num+=5;
                if(num>20000){
                    break;
                }
            }
            //wg别开 cout<<num<<endl;
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请重新输入：";
                for(int i=0;;i++){
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请重新输入：";
                    }
                }
            }
        }

        if(num>=200 && num<300){
            cout<<"请输入一个数：";
            cin>>pl;
            if(pl>num){
                for(int i=0;i<pl;i++){
                    num+=5;
                    num-=4;
                    num*=3;
                    num/=2;
                    if(num>=20000){
                        break;
                    }
                }
            }else if(pl==num){
                for(int i=pl;i<num+pl/2;i+=5){
                        num+=2;
                        num*=2;
                    if(num>=50000){
                        break;
                    }
                }
            }else{
                for(int i=0;i<num;i++){
                    num+=i;
                    num-=2;
                    for(int j=0;j<=10;j++){
                        num-=1;
                    }
                    if(num>10000 || num<=0){
                        break;
                    }
                }
            }
            /*wg别开 cout<<num<<endl;*/
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请重新输入：";
                for(int i=0;;i++){
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请重新输入：";
                    }
                }
            }
        }
    }


    if(mode==4){
        double num;
        int hard;
        cout <<  "请输入一个500以内的数:";
        cin>>num;
        if(num>=500){
            cout<<"错误，请重新输入：";
            for(int i=0;;i++){
                cin>>num;
                if(num>=500){
                    cout<<"错误，请重新输入：";
                }else{
                    break;
                }
            }
        }
        cout<<"请选择难度：" << endl;
        cout << "1.normal(number)" << endl << "2.hell(random)" << endl;
        cin>>hard;
        if(hard>2 || hard<1){
            cout<<"错误，请重新输入：";
            for(int i=0;;i++){
                cin>>hard;
                if(hard>2 || hard<1){
                    cout<<"错误，请重新输入：";
                }else{
                    break;
                }
            }
        }
        if(hard==1){
            cout<<"请输入一个数：";
            cin>>pl;
            if(pl<=num){
                for(int i=0;i<=num-pl;i++){
                    num+=pl-i+pl/num+cbrt(pl)+sqrt(pl)+pl/2+pl/3;
                    if(num>=5000){
                        break;
                    }
                }
            }else{
                for(int i=0;i<=pl-num;i++){
                    num+=num+pl-i+pl/num+cbrt(pl)+sqrt(pl)*cbrt(pl);
                    if(num>=5000){
                        break;
                    }
                }
            }
            /*cout<<num << endl;*/
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请重新输入：";
                for(int i=0;;i++){
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请重新输入：";
                    }
                }
            }
        }else if(hard==2){
            double num1;
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> dis(1.000, 500.000);
            num=dis(gen);
            num1=dis(gen);
            cout<<"请输入一个数：";
            cin>>pl;
            if(pl<=num){
                for(int i=0;i<=num-pl;i++){
                    num+=num+num1+sqrt(num)-cbrt(num1);
                    if(num>=5000){
                        break;
                    }
                }
            }else{
                num1=dis(gen)+num1;
                for(int i=0;i<=pl-num;i++){
                    num+=num+num1-num*2+num*3;
                    if(num>=5000){
                        break;
                    }
                }
            }
            /*cout<<num << endl;*/
            if(pl==num){
                cout<<"恭喜你，猜对了！" << endl;
            }else{
                cout<<"猜错了，请重新输入：";
                for(int i=0;;i++){
                    cin>>pl;
                    if(pl==num){
                        cout<<"恭喜你，猜对了！" << endl;
                        break;
                    }else{
                        cout<<"猜错了，请重新输入：";
                    }
                }
            }
        }
    }

    if(mode==5){
        int ol;
        cout<<"退出游戏"<<endl;
        cout<<"留下来吧孩子"<<endl;
        cout<<"请你做出选择:离开还是留下："<<endl;
        cout<<"1.离开"<<endl;
        cout<<"2.留下"<<endl;
        cin>>ol;
        if(ol==1){
            cout << "goodbye!" << endl;
            return 0;
        }else if(ol==2){
            return main();
        }
      }
    if(dmode==1){
        int num,count;
        cout<<"1p:请输入一个500内的数:";
        cin>>num;
        if(num>=500){
            cout<<"错误,请重新输入：";
            for(int i=0;;i++){
                cin>>num;
                if(num>=500){
                    cout<<"错误,请重新输入：";
                }else{
                    break;
                }
            }
        }
        system("cls");
        cout<<"2p:请输入一个数：";
        cin>>count;
        if(count==num){
            cout<<"恭喜你，猜对了！" << endl;
        }else{
            for(int i=0;;i++){
                cout<<"猜错了，请重新输入：";
                cout<<"请输入一个数：";
                cin>>count;
                if(count==num){
                    cout<<"恭喜你，猜对了！" << endl;
                    break;
            }
        }
        }
    }
    if(dmode==2){
        double num,count;
        cout<<"1p:请输入一个500内的数:";
        cin>>num;
        if(num>=500){
            cout<<"错误,请重新输入：";
            for(int i=0;;i++){
                cin>>num;
                if(num>=500){
                    cout<<"错误,请重新输入：";
                }else{
                    break;
                }
            }
        }
        system("cls");
        if(num<=50){
            for(int i=0;;i*=2){
                num=i+num;
                if(num>=1000){
                    break;
                }
            }
            num=cbrt(num)+sqrt(num);
        }else{
            for(int i=0;;i++){
                num=i+sqrt(i);
                if(num>=1000){
                    break;
                }
            }
        }
        cout<<"2p:请输入一个数：";
        cin>>count;
        if(count==num){
            cout<<"恭喜你，猜对了！" << endl;
        }else{
            for(int i=0;;i++){
                cout<<"猜错了，请重新输入：";
                cout<<"请输入一个数：";
                cin>>count;
                if(count==num){
                    cout<<"恭喜你，猜对了！" << endl;
                    break;
            }
        }
        }
    }

      return 0;
    }

