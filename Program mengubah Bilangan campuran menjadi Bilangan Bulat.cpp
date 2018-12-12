#include<iostream>
#include<conio.h>
using namespace std;
struct pecahan
{
    int pb;
    int py;
};
int main(int argc,char *argv[])
{
    int B;
    pecahan P,Q;
    cout<<"=====PROGRAM MENGUBAH BILANGAN CAMPURAN MENJADI BILANGAN BULAT=====\n"<<endl;
    cout<<"masukan bilangan pembilang :";
    cin>>P.pb;
    cout<<"masukan bilangan penyebut :";
    cin>>Q.py;
    cout<<"masukan bilangan asli :";
    cin>>B;
    cout<<"\t"<<(B)<<endl;
    cout<<"\t*"<<endl;
    cout<<"\t"<<(Q.py)<<endl;
    cout<<"\t+"<<endl;
    cout<<"\t"<<(P.pb)<<endl;
    if("*,+")
        cout<<"hasilnya ="<<(B)*(Q.py)+(P.pb)<<endl;
        return 0;
}
