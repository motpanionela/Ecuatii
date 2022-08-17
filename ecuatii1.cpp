#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int a,b,c,d,e;
cout <<"enter a ";
cin >>a;
cout <<"enter b ";
cin >>b;
cout <<"enter c ";
cin >>c;
cout <<"enter d ";
cin >>d;
cout <<"enter e ";
cin >>e;
int R = ( a + b - c + d ) + ( a - b + e ) + ( a * e + b - d ) + ( e + b - c ) + ( e + a - c ) ;
cout << " ( a + b - c + d ) + ( a - b + e ) + ( a * e + b - d ) + ( e + b - c ) + ( e + a - c ) " <<endl
s;
int r1 = ( a + b - c + d );
cout <<"( a + b - c + d )"<<r1<<endl;

int r2 = ( a - b + e ) ;
cout <<"( a - b + e )"<< r2 <<endl;

int r3 = ( a * e + b - d );
cout <<"( a * e + b - d )"<<r3<<endl;

int r4 =  ( e + b - c ) ;
cout <<" ( e + b - c )"<< r4 <<endl;

int r5 = (  e + a - c );
cout <<"( e + a - c )"<<r5<<endl;

int r6 = r1+r2 ;
cout <<"r6="<< r6 <<endl;
int r7 = r3+r4 ;
cout <<"r7="<< r7 <<endl;
int r8 = r5+r6 ;
cout <<"r8="<< r8 <<endl;
int r9 = r7+r8 ;
cout <<"r9="<< r9 <<endl;
cout <<"\n\n\n\t\t\tREZULTATUL ECUATIEI ESTE " << r9;
	return 0;
}
