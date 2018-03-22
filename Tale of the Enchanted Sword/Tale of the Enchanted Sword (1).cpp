# include <iostream>
# include <iomanip>
# include <cmath>
# include <fstream>
# include <cstdlib>
# include <ctime>
#include <string>
#include <conio.h>

using namespace std;

#define KEY_ENTER 13

ifstream WEST ("WEST.txt");
ifstream EAST ("EAST.txt");
ifstream NORTH ("NORTH.txt");
ifstream SOUTH ("SOUTH.txt");

int minfig(int gyv,int auks);
int gameoverW();

int WESTF();
int EASTF();
int SOUTHF();
int NORTHF();

void city (int *x,int *y,int *z,int f);
void shop (int *a,int *b,int *c,int ib);
void shop1(int *aa,int *bb,int *cc);
void shop2(int *aaa,int *bbb,int *ccc);
void shop3(int *aaaa,int *bbbb,int *cccc);
void shop4(int *aaaaa,int *bbbbb,int *ccccc);

void save(int *h,int *g,int *k,int fl,int zn,int n);


int login (string *name,int *a,int n);
int turiu (string *name,int *a);



int main ()
{



int gyv=150,gold=150,k=2,ib=0;
int n,lose;


system("color f0");
cout<<"Sveikas atvykes i zaidima !!!"<<endl;
if(WESTF()!=0){

cout<<" Iveikei 20 aukstu ir u-lipi ant boksto stogo . Pries tave didziulė skrynia . Ja atidares radai auksini rakta su M raide ir ketvirtadali zemelapio.\nGrizai pas riterius ."<<endl;
cout<<"Riteriu vadas : Tu radai rakta !!! Kvieciu tave i riteriu gretas ! Ar sutinki ?"<<endl;
cout<<"Ilgai nemastes tu sutikai .";
cout<<endl<<endl<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<"Sveikinu iveikus demo versija . Tau atrakinta pilna versija . Sekmes !!!"<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<endl<<endl;
cout<<"SPAUSK ENTER";
cin.get();
system("cls");

cout <<"Kai riteriai tave pasamde , tu treniravaisi . Dabar tavo treniruotes baigtos . Gali pirkti daiktus parduotuveje , losti kazino , kautis arenoje del pinigu arba mokytis bibliotekoje .\n Kiekviena karta grizes i miesta turesi sias 4 galimybes"<<endl;
cout <<"Isejes is miesto galesi issisaugoti savo progresa . Tada turei kovoti viename is likusiu 3 bokstu . Tavo gyvybes padidejo iki 150 . Sekmės !!!"<<endl<<endl;

ib=1;

city(&gyv,&gold,&k,ib);
save(&gyv,&gold,&k,ib,lose,n);



city(&gyv,&gold,&k,ib);
save(&gyv,&gold,&k,ib,lose,n);


city(&gyv,&gold,&k,ib);
save(&gyv,&gold,&k,ib,lose,n);
















}else goto viskas;
viskas :
return 0;

}


void city(int *x,int *y,int *z,int f){
int kelias,dk ;
int gyv= *x,gold= *y,sw= *z,fl= f;


cout<<"Kur nori nueiti ? ( Spausk 1 - Parduotuve ; 2 - Kazino ; 3 - Arena ). "<<endl;
cout<<"Tavo pasirinkimas :: ";
cin>>kelias;

if (kelias ==1) shop(&gyv,&gold,&sw,fl);

cout <<"Ar nori nueiti dar kur nors ? ( Spausk  1 - TAIP ; 2 - NE) .  "<<endl;
cout<<"Tavo pasirinkimas :: ";
cin>>dk;
if (dk==1) {
    system("cls");
    city (x,y,z,f);
}

*x=gyv;
*y=gold;
*z=sw;





}


int MAP (int E , int N , int S){
int bokst;
cout <<"I kuri boksta keliausi ? "<<endl;
if (E==0) cout<<"1) Rytini "<<endl;
if (N==0) cout<<"2) Siaurini "<<endl;
if (S==0) cout<<"3) Pietini  "<<endl;
cout<<"Tavo pasirinkimas (irasyk boksto numeri ) :: ";
cin>>bokst;
if (bokst==1) EASTF();
if (bokst==2) NORTHF();
if (bokst==3) SOUTHF();
}


void shop (int *a,int *b,int *c,int ib){
system("cls");
cout<<"Sveikas atvykes i parduotuve !!!"<<endl<<endl;
cout<<"Turi "<<*a<<" monetu. Jei pirksi sarvus tavo gyvybes dides, jei ginkla, dides tavo kardo pajegumas."<<endl<<endl;
if (ib==1) shop1(a,b,c);
else if (ib==2) shop2(a,b,c);
else if (ib==3) shop3(a,b,c);
else if (ib==4) shop4(a,b,c);
}

void shop1(int *aa,int *bb,int *cc){
int gold1=*aa,armor1=*bb,sw1=*cc;
int pir,pirk,ex,nk,ns;
cout<<"Siandien siulome : "<<endl<<endl;
cout<<"Ginklai ( didėja tavo pajegumas) : "<<endl;
cout<<"1) Medinis kardas             - 25 monetos  . Pajegumas "<<sw1<<" -> 2,5 . "<<endl;
cout<<"2) Aprudijes gelezinis kardas - 50 monetu   . Pajegumas "<<sw1<<" -> 3   . "<<endl;
cout<<"3) Gelezinis kardas           - 75 monetos  . Pajegumas "<<sw1<<" -> 3,5 . "<<endl;
cout<<"4) Bronzinis kardas           - 100 monetos . Pajegumas "<<sw1<<" -> 4   . "<<endl;

cout<<endl;
cout<<"Sarvai (didina tavo gyvybes) :  "<<endl;
cout<<"1) Valstiečio apranga         - 25 monetos . Gyvybes "<<armor1<<" -> 175  . "<<endl;
cout<<"2) Riterio medvilnine apranga - 50 monetu  . Gyvybes "<<armor1<<" -> 200  . "<<endl;
cout<<"3) Odine apranga              - 75 monetos . Gyvybes "<<armor1<<" -> 225  . "<<endl;
cout<<"4) Riterio odine apranga      - 100 monetu . Gyvybes "<<armor1<<" -> 250  . "<<endl;

cout<<endl;
cout<<"Ar nori ka nors pirkti ? Jei taip spausk 1 , jei ne spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pir;
if (pir==1){
cout<<"Ka nori pirkti ? Jei karda spausk 1 , jei sarvus spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pirk;
if(pirk==1){
cout<<"Kuri karda nori pirkti ? Spausk kardo numeri , tada ENTER . ";
cin>>nk;
if (nk==1 ) {
if (gold1>=25) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 2,5 !"<<endl;
    gold1=gold1-25;
            sw1=2.5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (nk==2 ) {
if (gold1>=50) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 3 !"<<endl;
    gold1=gold1-50;
            sw1=3;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (nk==3 ) {
            if (gold1>=75) {
            cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 3.5 !"<<endl;
            gold1=gold1-75;
            sw1=3.5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (nk==4 ) {
            if (gold1>=100) {
            cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 4 !"<<endl;
            gold1=gold1-100;
            sw1=4;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}

} else if (pirk==2){
    cout<<"Kuriuos sarvus nori pirkti ? Spausk sarvu  numeri , tada ENTER . ";
cin>>ns;
if (ns==1 ) {
if (gold1>=25) {
    cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 175 !"<<endl;
    gold1=gold1-25;
            armor1=175;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (ns==2 ) {
if (gold1>=50) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 200 !"<<endl;
            gold1=gold1-50;
            armor1=200;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (ns==3 ) {
            if (gold1>=75) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 225 !"<<endl;
            gold1=gold1-75;
            armor1=225;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (ns==4 ) {
            if (gold1>=100) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 250 !"<<endl;
            gold1=gold1-100;
            armor1=250;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}
}

cout<<"Ar nori nusipirkti dar ką nors ? Spausk 1 jei taip , jei ne spausk 2 , tada ENTER :) ";
cin>>ex;
if(ex==1) shop1(&gold1,&armor1,&sw1);
else {
    cout<<"Aciu kad pirkai :) "<<endl;
    *aa=gold1;
    *bb=armor1;
    *cc=sw1;
}
}
}

void shop2(int *aaa,int *bbb,int *ccc){
int gold1=*aaa,armor1=*bbb,sw1=*ccc;
int pir,pirk,ex,nk,ns;
cout<<"Siandien siulome : "<<endl<<endl;
cout<<"Ginklai ( didėja tavo pajegumas) : "<<endl;
cout<<"1) Geresnis Medinis kardas             - 75 monetos   . Pajegumas "<<sw1<<" -> 4.5 . "<<endl;
cout<<"2) Geresnis Aprudijes gelezinis kardas - 100 monetu   . Pajegumas "<<sw1<<" -> 5   . "<<endl;
cout<<"3) Geresnis Gelezinis kardas           - 125 monetos  . Pajegumas "<<sw1<<" -> 5.5 . "<<endl;
cout<<"4) Geresnis Bronzinis kardas           - 150 monetos  . Pajegumas "<<sw1<<" -> 6   . "<<endl;

cout<<endl;
cout<<"Sarvai (didina tavo gyvybes) :  "<<endl;
cout<<"1) Geresne Valstiečio apranga         - 75 monetos   . Gyvybes "<<armor1<<" -> 275  . "<<endl;
cout<<"2) Geresne Riterio medvilnine apranga - 100 monetu   . Gyvybes "<<armor1<<" -> 300  . "<<endl;
cout<<"3) Geresne Odine apranga              - 125 monetos  . Gyvybes "<<armor1<<" -> 325  . "<<endl;
cout<<"4) Geresne Riterio odine apranga      - 150 monetu   . Gyvybes "<<armor1<<" -> 350  . "<<endl;

cout<<endl;
cout<<"Ar nori ka nors pirkti ? Jei taip spausk 1 , jei ne spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pir;
if (pir==1){
cout<<"Ka nori pirkti ? Jei karda spausk 1 , jei sarvus spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pirk;
if(pirk==1){
cout<<"Kuri karda nori pirkti ? Spausk kardo numeri , tada ENTER . ";
cin>>nk;
if (nk==1 ) {
if (gold1>=75) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 4.5 !"<<endl;
    gold1=gold1-75;
            sw1=4.5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (nk==2 ) {
if (gold1>=100) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 5 !"<<endl;
    gold1=gold1-100;
            sw1=5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (nk==3 ) {
            if (gold1>=125) {
            cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 5.5 !"<<endl;
            gold1=gold1-125;
            sw1=5.5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (nk==4 ) {
            if (gold1>=150) {
            cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 6 !"<<endl;
            gold1=gold1-150;
            sw1=6;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}

} else if (pirk==2){
    cout<<"Kuriuos sarvus nori pirkti ? Spausk sarvu  numeri , tada ENTER . ";
cin>>ns;
if (ns==1 ) {
if (gold1>=75) {
    cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 275 !"<<endl;
    gold1=gold1-75;
            armor1=275;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (ns==2 ) {
if (gold1>=100) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 300 !"<<endl;
            gold1=gold1-100;
            armor1=300;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (ns==3 ) {
            if (gold1>=125) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 325 !"<<endl;
            gold1=gold1-125;
            armor1=325;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (ns==4 ) {
            if (gold1>=150) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 350 !"<<endl;
            gold1=gold1-150;
            armor1=350;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}
cout<<"Ar nori nusipirkti dar ką nors ? Spausk 1 jei taip , jei ne spausk 2 , tada ENTER :) ";
cin>>ex;
if(ex==1) shop2(&gold1,&armor1,&sw1);
else {
    cout<<"Aciu kad pirkai :) "<<endl;
    *aaa=gold1;
    *bbb=armor1;
    *ccc=sw1;
}
}
}
}

void shop3(int *aaaa,int *bbbb,int *cccc){
int gold1=*aaaa,armor1=*bbbb,sw1=*cccc;
int pir,pirk,ex,nk,ns;
cout<<"Siandien siulome : "<<endl<<endl;
cout<<"Ginklai ( didėja tavo pajegumas) : "<<endl;
cout<<"1) Sidabrinis kardas            - 150 monetos   . Pajegumas "<<sw1<<" -> 6.5 . "<<endl;
cout<<"2) Raganiaus sidabrinis kardas  - 170 monetu   . Pajegumas "<<sw1<<" -> 7   . "<<endl;
cout<<"3) Karaliaus sidabrinis kardas  - 195 monetos  . Pajegumas "<<sw1<<" -> 7.5 . "<<endl;
cout<<"4) Auksinis kardas              - 210 monetos  . Pajegumas "<<sw1<<" -> 8   . "<<endl;

cout<<endl;
cout<<"Sarvai (didina tavo gyvybes) :  "<<endl;
cout<<"1) Riterio gelezine apranga        - 150 monetos   . Gyvybes "<<armor1<<" -> 375  . "<<endl;
cout<<"2) Riterio grudinto plieno apranga - 170 monetu   . Gyvybes "<<armor1<<" -> 400  . "<<endl;
cout<<"3) Sidabrine apranga               - 195 monetos  . Gyvybes "<<armor1<<" -> 425  . "<<endl;
cout<<"4) Auksine apranga                 - 210 monetu   . Gyvybes "<<armor1<<" -> 450  . "<<endl;

cout<<endl;
cout<<"Ar nori ka nors pirkti ? Jei taip spausk 1 , jei ne spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pir;
if (pir==1){
cout<<"Ka nori pirkti ? Jei karda spausk 1 , jei sarvus spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pirk;
if(pirk==1){
cout<<"Kuri karda nori pirkti ? Spausk kardo numeri , tada ENTER . ";
cin>>nk;
if (nk==1 ) {
if (gold1>=150) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 6,5 !"<<endl;
    gold1=gold1-150;
            sw1=6,5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (nk==2 ) {
if (gold1>=170) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 7 !"<<endl;
    gold1=gold1-170;
            sw1=7;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (nk==3 ) {
            if (gold1>=190) {
            cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 7,5 !"<<endl;
            gold1=gold1-190;
            sw1=7,5;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (nk==4 ) {
            if (gold1>=210) {
            cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 8 !"<<endl;
            gold1=gold1-210;
            sw1=8;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}

} else if (pirk==2){
    cout<<"Kuriuos sarvus nori pirkti ? Spausk sarvu  numeri , tada ENTER . ";
cin>>ns;
if (ns==1 ) {
if (gold1>=150) {
    cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 375 !"<<endl;
    gold1=gold1-150;
            armor1=375;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (ns==2 ) {
if (gold1>=170) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 400 !"<<endl;
            gold1=gold1-170;
            armor1=400;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (ns==3 ) {
            if (gold1>=190) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 425 !"<<endl;
            gold1=gold1-190;
            armor1=425;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (ns==4 ) {
            if (gold1>=210) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 450 !"<<endl;
            gold1=gold1-210;
            armor1=450;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}
cout<<"Ar nori nusipirkti dar ką nors ? Spausk 1 jei taip , jei ne spausk 2 , tada ENTER :) ";
cin>>ex;
if(ex==1) shop2(&gold1,&armor1,&sw1);
else {
    cout<<"Aciu kad pirkai :) "<<endl;
    *aaaa=gold1;
    *bbbb=armor1;
    *cccc=sw1;
}
}
}
}

void shop4(int *aaaaa,int *bbbbb,int *ccccc){
int gold1=*aaaaa,armor1=*bbbbb,sw1=*ccccc;
int pir,pirk,ex,nk,ns;
cout<<"Siandien siulome : "<<endl<<endl;
cout<<"Ginklai ( didėja tavo pajegumas) : "<<endl;
cout<<"1) Karaliaus auksinis kardas           - 250 monetos   . Pajegumas "<<sw1<<" -> 8.5 . "<<endl;
cout<<"2) Deimantinis kardas                  - 300 monetu   . Pajegumas "<<sw1<<" -> 9   . "<<endl;


cout<<endl;
cout<<"Sarvai (didina tavo gyvybes) :  "<<endl;
cout<<"1) Raganiaus auksine apranga     - 230 monetos  . Gyvybes "<<armor1<<" -> 475  . "<<endl;
cout<<"2) Karaliaus auksine apranga     - 250 monetu   . Gyvybes "<<armor1<<" -> 500  . "<<endl;
cout<<"3) Karaliaus deimantine apranga  - 270 monetos  . Gyvybes "<<armor1<<" -> 525  . "<<endl;
cout<<"4) Meliodo sarvai                - 350 monetu   . Gyvybes "<<armor1<<" -> 600  . "<<endl;

cout<<endl;
cout<<"Ar nori ka nors pirkti ? Jei taip spausk 1 , jei ne spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pir;
if (pir==1){
cout<<"Ka nori pirkti ? Jei karda spausk 1 , jei sarvus spausk 2, tada ENTER   :) "<<endl;
cout<<"Tavo pasirinkimas : ";
cin >>pirk;
if(pirk==1){
cout<<"Kuri karda nori pirkti ? Spausk kardo numeri , tada ENTER . ";
cin>>nk;
if (nk==1 ) {
if (gold1>=250) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 8,5 !"<<endl;
    gold1=gold1-250;
            sw1=8;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (nk==2 ) {
if (gold1>=300) {
    cout<<"Nusipirkai si karda . Tavo pajegumas padidejo iki 9 !"<<endl;
    gold1=gold1-300;
            sw1=9;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}

} else if (pirk==2){
    cout<<"Kuriuos sarvus nori pirkti ? Spausk sarvu  numeri , tada ENTER . ";
cin>>ns;
if (ns==1 ) {
if (gold1>=230) {
    cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 475 !"<<endl;
    gold1=gold1-230;
            armor1=475;
}else cout<<"Tau nepakanka pinigu ! "<<endl;

}else if (ns==250 ) {
if (gold1>=100) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 500 !"<<endl;
            gold1=gold1-250;
            armor1=500;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}   else if (ns==270 ) {
            if (gold1>=125) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 525 !"<<endl;
            gold1=gold1-125;
            armor1=525;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}  else if (ns==4 ) {
            if (gold1>=350) {
            cout<<"Nusipirkai siuos sarvus . Tavo gyvybes padidejo iki 600 !"<<endl;
            gold1=gold1-350;
            armor1=600;
}else cout<<"Tau nepakanka pinigu ! "<<endl;


}
cout<<"Ar nori nusipirkti dar ką nors ? Spausk 1 jei taip , jei ne spausk 2 , tada ENTER :) ";
cin>>ex;
if(ex==1) shop2(&gold1,&armor1,&sw1);

}else {
    cout<<"Aciu kad pirkai :) "<<endl;
    *aaaaa=gold1;
    *bbbbb=armor1;
    *ccccc=sw1;
}
}
}

void save(int *h,int *g,int *k,int fl,int zn,int n){
int he=*h, auk=*g,sw=*k,flo=fl,zaid=zn;
string nick[n];
int heal[n],auks[n],swo[n],floa[n];
ifstream fin("Save/Load.txt");
for (int i=1;i<=n;i++){
    getline(fin,nick[i]);
    fin>>heal[i];
    fin>>auks[i];
    fin>>swo[i];
    fin>>floa[i];
}
heal[zaid]=he;
auks[zaid]=auk;
swo[zaid]=sw;
floa[zaid]=flo;
ofstream SAVE ("Save/Load.txt");
SAVE<<n;
for (int c=1;c<=n;c++){
    SAVE<<nick[c];
    SAVE<<heal[c];
    SAVE<<auks[c];
    SAVE<<swo[c];
    SAVE<<floa[c];


}





}

int login (string *name,int *a,int n) {
system("cls");
int p;
cout<<"Sveikas, ar turi vartotoją ? Spausk 1 jei taip arba 2 jei ne. Tada spausk ENTER  ! ";
cin>>p;
if (p==1) turiu(name,a);
if (p==2) neturiu(name,a);
else login(name,a,n);
}

int turiu (string *name,int *a) {
string vardas,pass;
int zn, n;
ifstream num("login.txt");
num>>n;
cout<<"Ivesk savo prisijungimo vardą (tada spausk ENTER) :: ";
cin>>vardas;
cout<<"Ivesk savo slaptazodi (tada spausk ENTER)         :: ";
cin>>pass;
cout<<"Ivesk savo zaidejo numeri (tada spausk ENTER) :: ";
cin>>zn;
ifstream Server ("Server.txt");
Server>>n;
string vardai[n];
string passai[n];
int nium[n];
int baik=0;
for (int l=0;l<n;l++){
getline(Server,vardai[l]);
getline(Server,passai[l]);
Server>>nium[l];
if (vardai[l]==vardas && passai[l]==pass && nium[l]==zn) baik++;
}

if(baik>0){
*name=vardas;
*a=zn;
}

else {
    int pas;
    cout<<"Prisijungimo duomenys neteisingi . Ar bandysi dar karta ? Jei taip spausk 1 tada ENTER :: ";
    cin>>pas;
    if (pas==1) turiu (name,a);

}

}

int neturiu() {



}
















































int SOUTHF(){

int aS;
string klausimasS,ats1S,ats2S,ats3S,ats4S,taS,atsS;

cout<<"Atvykai i Pietini boksta . Taves cia laukia 20 aukstu , kuriuose turesi atsakyti i klausimus .\nTau bus pateikti klausimai su atsakymu variantais . Visi klausimai yra susije su bendru issilavinimu.\nAtsakius neteisingai tau teks kautis su auksto sargu . Linkiu sekmes !!!"<<endl;
cout<<endl;
for (int i =1;i<=20;i++){

getline(SOUTH,klausimasS);
getline(SOUTH,ats1S);
getline(SOUTH,ats2S);
getline(SOUTH,ats3S);
getline(SOUTH,ats4S);
getline(SOUTH,taS);


cout <<i<<" klausimas !"<<endl;
cout<<klausimasS<<endl;
cout<<ats1S<<endl;
cout<<ats2S<<endl;
cout<<ats3S<<endl;
cout<<ats4S<<endl;
cin>>atsS;
if (atsS==taS) {
        system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
}else if  (minfig(150,i)==0) {
    return 0;
}


      else {
         system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
      }
}
}
int EASTF(){

int a;
string klausimasE,ats1E,ats2E,ats3E,ats4E,taE,atsE;

cout<<"Atvykai i Rytini boksta . Taves cia laukia 20 aukstu , kuriuose turesi atsakyti i klausimus .\nTau bus pateikti klausimai su atsakymu variantais . Visi klausimai yra susije su bendru issilavinimu.\nAtsakius neteisingai tau teks kautis su auksto sargu . Linkiu sekmes !!!"<<endl;
cout<<endl;
for (int i =1;i<=20;i++){

getline(EAST,klausimasE);
getline(EAST,ats1E);
getline(EAST,ats2E);
getline(EAST,ats3E);
getline(EAST,ats4E);
getline(EAST,taE);


cout <<i<<" klausimas !"<<endl;
cout<<klausimasE<<endl;
cout<<ats1E<<endl;
cout<<ats2E<<endl;
cout<<ats3E<<endl;
cout<<ats4E<<endl;
cin>>atsE;
if (atsE==taE) {
        system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
}else if  (minfig(150,i)==0) {
    return 0;
}


      else {
         system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
      }
}
}
int NORTHF(){

int a;
string klausimas,ats1,ats2,ats3,ats4,ta,ats;

cout<<"Atvykai i Siaurini boksta . Taves cia laukia 20 aukstu , kuriuose turesi atsakyti i klausimus .\nTau bus pateikti klausimai su atsakymu variantais . Visi klausimai yra susije su bendru issilavinimu.\nAtsakius neteisingai tau teks kautis su auksto sargu . Linkiu sekmes !!!"<<endl;
cout<<endl;
for (int i =1;i<=20;i++){

getline(NORTH,klausimas);
getline(NORTH,ats1);
getline(NORTH,ats2);
getline(NORTH,ats3);
getline(NORTH,ats4);
getline(NORTH,ta);


cout <<i<<" klausimas !"<<endl;
cout<<klausimas<<endl;
cout<<ats1<<endl;
cout<<ats2<<endl;
cout<<ats3<<endl;
cout<<ats4<<endl;
cin>>ats;
if (ats==ta) {
        system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
}else if  (minfig(100,i)==0) {
    return 0;
}


      else {
         system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
      }
}
}

int WESTF(){

int aW;
string klausimasW,ats1W,ats2W,ats3W,ats4W,taW,atsW;

cout<<"Atvykai i Vakarini boksta . Taves cia laukia 20 aukstu , kuriuose turesi atsakyti i klausimus .\nTau bus pateikti klausimai su atsakymu variantais . Visi klausimai yra susije su bendru issilavinimu.\nAtsakius neteisingai tau teks kautis su auksto sargu . Linkiu sekmes !!!"<<endl;
cout<<endl;
for (int i =1;i<=20;i++){

getline(WEST,klausimasW);
getline(WEST,ats1W);
getline(WEST,ats2W);
getline(WEST,ats3W);
getline(WEST,ats4W);
getline(WEST,taW);


cout <<i<<" klausimas !"<<endl;
cout<<klausimasW<<endl;
cout<<ats1W<<endl;
cout<<ats2W<<endl;
cout<<ats3W<<endl;
cout<<ats4W<<endl;
cin>>atsW;
if (atsW==taW) {
        system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
}else if  (minfig(100,i)==0) {
    return 0;
}


      else {
         system("CLS");
        cout<<"Atsakei teisingai ir pasiekei "<<i+1<<" auksta !!!"<<endl;;
      }
}
}
int minfig (int gyv,int auks){
int zala;
int prar;
int k=auks;
int kof=auks;
int magija;
char pas;
int  boss=auks*20;
while (boss>0){
if(boss>0){
if(gyv>0){
srand(k+1);
zala=kof*(1+rand()%10);
if (zala%10==0 ) cout <<"Kritinis smugis";
boss=boss-zala;
if (boss>0) {
    cout<<"Padarei "<<zala<<" zalos . Priesui liko "<<boss<<" gyvybiu . "<<endl;
    k=k+1;
    srand(k+1);
    prar=kof*(1+rand()%5);
    if (prar%5==0 ) cout <<"Kritinis smugis";
    gyv=gyv-prar;
    if (gyv>0) {
            cout<<"Praradai  "<<prar<<" gyvybiu . Tau liko "<<gyv<<" gyvybiu . "<<endl;
            cout<<"Ar nori pabandyti pasinaudoti magija ? Naudodamas magija gali padaryti priesui zalos arba prarasti 5 gyvybes.  "<<endl;
            cout<<" Ivesk (a) (be ()) jei nori arba (b) (be () jei nenori ."<<endl;
            cout<<"Tavo pasirinkimas :: ";
            cin>>pas;
            if (pas=='a'){
                srand(time(0));
                magija=rand()%2;
                if(magija==0){
                    boss=boss-10*auks;
                    if (boss>0)  cout<<"Magija pavyko . Padarei "<<auks*10<<" zalos priesui. Jam liko "<<boss<<" gyvybiu ."<<endl;
                    else cout <<"Priesui liko 0 gyvybiu"<<endl;
}
                else {
                    gyv=gyv-5;
                    if (gyv>0) cout<<"Magija nepavyko . Praradai 5 gyvybes."<<endl;
                    else cout <<"Turi 0 gyvybiu !!!";

};
}






}else {
    cout<<"Tau liko 0 gyvybiu !!!"<<endl;
    return gameoverW();
}
}else {
    cout <<"Po tavo smugio priesui  liko 0 gyvybiu."<<endl;
    cout<<"Laimejai . Eik i kita auksta."<<endl;
return auks;
}
}
}
}
}
int gameoverW(){
cout<<"Gaila , bet tu buvai nuzudytas. Pradek is naujo."<<endl;
return 0;
}


























