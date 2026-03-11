#include <iostream>
using namespace std;
main (){
	int num=0;
	cout<<"Ingrese el Numero: ";
	cin>> num; 
		if (num>0) {
		// entra aca cuando la condicion es verdadera 
			cout <<"Positivo"<<endl;
	}else{ //<=0
		//anidar estructuras
		if(num==0){
			cout<<"Neutro"<<endl;
	}else{
			cout<<"Negativo"<<endl;
		}
}
 system("pause");
}
