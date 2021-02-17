//POP 2018-12-12 projekt 1 Radys Piotr EiT 2 175580 Code::Blocks 17.12



#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
void wyrysowanie(int x,int y,int a, int b,int c,int d,int e,int f, int g, int h, int k, int l)
{
    char pion = 0xBA;
    char poziom = 0xCD;
    char gl = 0xC9;
    char gp = 0xBB;
    char dl = 0xC8;
    char dp = 0xBC;
    cout<<gl;
    for(int i =0;i<y;i++)
    {
        cout<<poziom;
    }
    cout<<gp<<endl;


    for(int i =0;i<y;i++)
    {
        cout<<pion;
     for(int j =0;j<x;j++)
    {
        if(b==i&&a==j)
        {
         cout<<"R";
        }
        else if(d==i&&c==j)
        {
         cout<<"X";
        }
        else if(h==i&&g==j)
        {
         cout<<"X";
        }
        else if(f==i&&e==j)
        {
         cout<<"O";
        }
        else if(l==i&&k==j)
        {
         cout<<"O";
        }
        else
        {
            cout<<" ";
        }

    }
        cout<<pion<<endl;
    }
    cout<<dl;
    for(int i =0;i<y;i++)
    {
        cout<<poziom;
    }
    cout<<dp;
}



int main()
{
    char rozmiar;
    int x,y,xl,yl,xp,yp,xm,ym,xf,yf,xk,yk;
    srand(time(NULL));
    cout<<"W celu wlaczenia pomocy wcisnij '?',jezli chcesz wyjsc wcisnij 'q'";
    cout<< "Wybierz rozmiar mapy"<<endl;
    cout<< "1) Mala"<<endl<<"2) Srednia"<<endl<<"3) Duza"<<endl;
    while(x!=10 && x!=20 && x!=30){
    cin >> rozmiar;
    switch(rozmiar)
    {
    case '1':
        x=10;
        y=10;
        break;
    case '2':
        x=20;
        y=20;
        break;
    case '3':
        x=30;
        y=30;
    break;
    case '?':
    cout<<"Twoim celem jest przemieszczenie paczki (X) na miejsce mety (O)."<<endl;
    cout<<"W tym celu powinienes poruszac sie robotnikiem(R) i przesunac ja na miejsce mety."<<endl;
    cout<<"W tym celu powinienes uzyc klawiszy 'w' 's' 'a' i 'd'";
    break;
    case 'q':
    return 0;
    break;
    default:
    cout << "zly klawisz" << endl;
    break;
    }}
    xl=rand()%x;
    yl=rand()%y;
    xp=(rand()%(x-2))+1;
    yp=(rand()%(y-2))+1;
    xm=rand()%x;
    ym=rand()%y;
    xk=(rand()%(x-2))+1;
    yk=(rand()%(y-2))+1;
    xf=rand()%x;
    yf=rand()%y;
    while((xl==xp && yl==yp) || (xl==xm && yl==ym) || (xl==xk && yl==yk) || (xl==xf && yl==yf))
    {
     xl=rand()%x;
     yl=rand()%y;
    }
    while( (xp==xm && yp==ym) || (xp==xk && yp==yk) || (xp==xf && yp==yf))
    {
     xp=(rand()%(x-2))+1;
     yp=(rand()%(y-2))+1;
    }
    while( (xm==xk && ym==yk) || (xm==xf && ym==yf))
    {
     xm=rand()%x;
     ym=rand()%y;
    }
    while(xk==xf && yk==yf)
    {
     xk=(rand()%(x-2))+1;
     yk=(rand()%(y-2))+1;
    }




    wyrysowanie(x,y,xl,yl,xp,yp,xm,ym,xk,yk,xf,yf);
    char a;


    while(((xp!=xm || yp!=ym) || (xk!=xf || yk!=yf)) && ((xk!=xm || yk!=ym) || (xp!=xf || yp!=yf)) ){
    cin >> a;
    system("cls");


    switch (a)
    {case 's':

    if(xl==xp && yl+1==yp)
    {
        if(yk!=yp+1 || (xp!=xk)){
        if (yp<(y-1)){
        yl+=1;
        yp+=1;}
        }
    }
    else if(xl==xk && yl+1==yk)
    {
        if(yp!=yk+1 || (xp!=xk)){
        if (yk<(y-1)){
        yl+=1;
        yk+=1;}
        }
    }
    else if (yl<(y-1))
    {
        yl+=1;
    }

    break;
    case 'w':
        if(xl==xp && yl-1==yp)
    {
        if(yk!=yp-1 || (xp!=xk)){
        if (yp>0){
        yl-=1;
        yp-=1;}
        }
    }
    else if(xl==xk && yl-1==yk)
    {
        if(yp!=yk-1 || (xp!=xk)){
        if (yk>0){
        yl-=1;
        yk-=1;}
        }
    }
    else if (yl>0)
    {
        yl-=1;
    }
    break;
    case 'a':
    if(xl-1==xp && yl==yp)
    {
        if(xp!=xk+1 || (yp!=yk)){
        if (xp>0){
        xl-=1;
        xp-=1;}
        }
    }
    else if(xl-1==xk && yl==yk)
    {
        if(xk!=xp+1 || (yp!=yk)){
        if (xk>0){
        xl-=1;
        xk-=1;}
        }
    }
    else if (xl>0)
    {
        xl-=1;
    }
    break;
    case 'd':
    if(xl+1==xp && yl==yp)
    {
        if(xp!=xk-1 || (yp!=yk)){
        if (xp<(x-1)){
        xl+=1;
        xp+=1;}
        }
    }
    else if(xl+1==xk && yl==yk)
    {
        if(xk!=xp-1 || (yp!=yk)){
        if (xk<(x-1)){
        xl+=1;
        xk+=1;}
        }
    }
    else if (xl<(x-1))
    {
        xl+=1;
    }
    break;
    case 'q':
        return 0;
    break;
    case '?':
    cout<<"Twoim celem jest przemieszczenie paczki (X) na miejsce mety (O)."<<endl;
    cout<<"W tym celu powinienes poruszac sie robotnikiem (R) i przesunac ja na miejsce mety."<<endl;
    cout<<"W tym celu powinienes uzyc klawiszy 'w' 's' 'a' i 'd'";
    break;
    }
    wyrysowanie(x,y,xl,yl,xp,yp,xm,ym,xk,yk,xf,yf);
    }
    cout<<endl<<"Gratulacje, wygrales!";

    return 0;
}
