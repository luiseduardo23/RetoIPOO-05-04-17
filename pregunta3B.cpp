#include <iostream>

using namespace std;
int main(){

int a= 0;

cout << "ingrese un numero" << endl;
cin >> a;

int b= 0;

cout << "ingrese otro numero" << endl;
cin >> b;

int c= 0;

cout << "ingrese otro numero" << endl;
cin >> c;
 
 if((a>0)and(b>0)){
     cout <<2*c<< endl;
     
 }else{
	 if (a<0){
		 if((b>5)or(b<-5)){
			 cout <<3*c<< endl;
		 }else{
			 if((a<=5)and(b>5)){
				 cout <<5*c<< endl;
			 }else{
				 cout <<4*c<< endl;
			 }
		 }
	 }else{
		 if((b=0)and(a>0)){
			 cout <<5*c<< endl;
		 }else{
			cout <<'c'<< endl;
		 }
	 }
 }
}

