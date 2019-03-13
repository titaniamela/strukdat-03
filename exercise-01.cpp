/*
Nama        : Shania Salsabila
NPM         : 140810180014
Deskripsi   : excercise-01
Tahun       : 2019
*/
#include <iostream>
#include <math.h>

using namespace std;

typedef struct {
    float panjang;
    float lebar;
} segiempat;

void input (segiempat *s){
    cout<<"Panjang persegi: ";cin>>s->panjang;
    cout<<"Lebar persegi: ";cin>>s->lebar;
}
float keliling (segiempat s){
    float kell;
    kell= 2*(s.panjang+s.lebar);
return kell;
}
float luas (segiempat s){
    float luas;
    luas= s.panjang*s.lebar;
return luas;
}
float diagonal (segiempat s){
    int a2=s.lebar*s.lebar;
    int b2=s.panjang*s.panjang;
    float diagonal;
    diagonal= sqrt(a2+b2);
return diagonal;
}
void print (segiempat s){
    cout<<"\nKeliling segiempat: "<<keliling(s);
    cout<<"\nLuas segiempat: "<<luas(s);
    cout<<"\nDiagonal: "<<diagonal(s);
}

int main()
{
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
}
