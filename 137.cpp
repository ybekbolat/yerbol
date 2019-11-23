#include <bits/stdc++.h>
using namespace std;

int result(char cuser, char ccomp)
{
    if ((cuser == 'k') && (ccomp == 'b') || (cuser == 'n') && (ccomp == 'k') || (cuser == 'b') && (ccomp == 'n')) return -1;
    if ((cuser == 'k') && (ccomp == 'n') || (cuser == 'n') && (ccomp == 'b') || (cuser == 'b') && (ccomp == 'k')) return 1;
    if (cuser == ccomp) return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(static_cast<unsigned>(time(NULL)));
    int user_wins = 0;
    int comp_wins = 0;
    int play;
    while(true)
        {
            cout << "Камень, ножницы, или бумага?(k/n/b): ";
            char cuser;
            cin >> cuser;
            char ccomp;
            int cc = 0;
            cc = rand() % 3;
            if (cc == 0) ccomp = 'k';
            if (cc == 1) ccomp = 'n';
            if (cc == 2) ccomp = 'b';

            if (result(cuser,ccomp) == -1)
                {
                    comp_wins++;
                    cout <<"Компьютер победил! (" << user_wins << ":" << comp_wins << ")" << endl;
                    cout<<"Хотите продолжить игру?(1-да,2-нет)"<<endl;
                    cin>>play;
                    if(play==1)
                        continue;
                    else if(play==2)
                        break;
                    else
                        cout<<"Error"<<endl;
                        cout<<"Хотите продолжить игру?(1-да,2-нет)"<<endl;
                        cin>>play;
                        if(play==1)
                            continue;
                        else if(play==2)
                            break;
                }
            else if (result(cuser,ccomp) == 0)
                {
                    cout <<"Ничья!(" << user_wins << ":" << comp_wins << ")" << endl;
                    cout<<"Хотите продолжить игру?(1-да,2-нет)"<<endl;
                    cin>>play;
                    if(play==1)
                        continue;
                    else if(play==2)
                        break;
                    else
                        cout<<"Error"<<endl;
                        cout<<"Хотите продолжить игру?(1-да,2-нет)"<<endl;
                        cin>>play;
                        if(play==1)
                            continue;
                        else if(play==2)
                            break;
                }
            else if (result(cuser,ccomp) == 1)
                {
                    user_wins++;
                    cout<<"Вы победили! (" << user_wins << ":" << comp_wins << ")" << endl;
                    cout<<"Хотите продолжить игру?(1-да,2-нет)"<<endl;
                    cin>>play;
                    if(play==1)
                        continue;
                    else if(play==2)
                        break;
                    else
                        cout<<"Error"<<endl;
                        cout<<"Хотите продолжить игру?(1-да,2-нет)"<<endl;
                        cin>>play;
                        if(play==1)
                            continue;
                        else if(play==2)
                            break;
                }
            else
                {
                    cout<<"Ошибка! Неверный ввод!"<< endl;
                }
        }
    if (comp_wins > user_wins)
        cout << endl << "Компьютер победил! ("<< user_wins << ":" << comp_wins << ")";
    else if (comp_wins < user_wins)
        cout << endl << "Поздравляем! Вы победили ("<< user_wins << ":" << comp_wins << ")";
    else if (comp_wins = user_wins)
        cout << endl << "Ничья! ("<< user_wins << ":" << comp_wins << ")";
    return 0;
}
