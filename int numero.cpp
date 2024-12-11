#include <iostream>
using namespace std;
main () 
{
	   int numero=7,edad;
	   string nombre;
	   do
	   {
	   	    cout<<"escriba su nombre \n";
            getline(cin,nombre);  
	   	    cout<<"ingrese su edad \n";
	   	    cin>>edad;
	   	    cout<<"su nombre es:"<<nombre<<endl;
	   	    cout<<"su edad es:"<<edad<<endl;
	   	    numero=numero+1;
	   }
	   while (numero<=8);
}
