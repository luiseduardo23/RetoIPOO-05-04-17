#include <iostream>

using namespace std;
int main(){

int a= 0;

cout << "ingrese un numero" << endl;
cin >> a;

int b= 0;

cout << "ingrese otro numero" << endl;
cin >> b;
 
 if((a>0)and(b>0)){
     cout <<'c'<< endl;
     
 }else{
	 if (b<0){
		 if((a>5)or(b<-5)){
			 cout <<'d'<< endl;
		 }else{
			 if((a<=5)and(b>5)){
				 cout <<'f'<< endl;
			 }else{
				 cout <<'k'<< endl;
			 }
		 }
	 }else{
		 if((a>0)and(b=0)){
			 cout <<'u'<< endl;
		 }else{
			cout <<'v'<< endl;
		 }
	 }
 }
}

