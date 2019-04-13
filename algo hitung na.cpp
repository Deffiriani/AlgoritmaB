#include <iostream>
using namespace::std;

double input (string text)
{
    double ttl;
    cout<<"input nilai"<<" "<<text<<" : ";
    cin>>ttl;
    return ttl;
}
void grade(double ttl)
{
    char nhrf;
    if (ttl>=81)
        nhrf ='A';
    else if (ttl>=61)
        nhrf ='B';
    else if (ttl>=41)
        nhrf ='C';
    else if (ttl>=21)
        nhrf ='D';
    else
        nhrf ='E';

    cout<<"Grade nilai: "<<nhrf;
}

struct ulg
{double uts,uas,tgs,absen;};

int main()
{
    float ttl;
    ulg lg;
    cout<<"<><><><><><><><><><><><><><><>"<<endl;
    lg.uts = input ("uts");
    lg.uas = input ("uas");
    lg.tgs = input ("tugas");
    lg.absen = input ("absen");
    cout<<"================================"<<endl;
    ttl=lg.uts*0.2+lg.uas*0.3+lg.tgs*0.35+lg.absen*0.15;
    cout<<"Nilai Total :"<<ttl<<endl;
    grade (ttl);
    cout<<endl;
    cout<<"\t<><><><><><><><><><><><><><><>"<<endl;
}
