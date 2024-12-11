#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   float flotante =1.354;
    double doble =1.354;
    cout<<"el tamaño para flotante es: "<<sizeof (float)<<endl;
    cout<<"el tama para doble es: "<<sizeof (double)<<endl;
    cout<<flotante<<endl;
    cout<<doble<<endl;
    flotante=5.12345678987;
    doble=5.12345678987;
    cout<<setprecision(5);
    cout<<flotante<<endl;
    cout<<doble<<endl;
    cout<<setprecision(12);
    cout<<flotante<<endl;
    cout<<doble<<endl;
    cout<<setprecision(8);
    cout<<flotante<<endl;
    cout<<setprecision(13);
    cout<<doble<<endl;
}
