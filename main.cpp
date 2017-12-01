//Electrical Resistance of a Wire
//Lab 4
//Oisin Dake
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.12159265359
double resistance(double rad, double len, double rho);
int main(void)
{

    double r, l, resistivity, res;//store values
    cout << "Electrical Resistance of a Wire" << endl;//display

    do
    {
        cout << "Enter a radius value greater than 0: ";//do loop to ensure input is < than 0
        cin >> r;
    }
    while (r <= 0);

    do
    {
        cout << "Enter a lenght value greater than 0: ";//do loop to ensure input is < than 0
        cin >> l;
    }
    while ( l<= 0);

    do
    {
        cout << "Enter a resistivity value greater than 0: ";//do loop to ensure input is < than 0
        cin >> resistivity;
    }
    while (resistivity <= 0);




    res = resistance(r,l,resistivity);// calculation

    cout << "Electrical resistance: " << res << " = " << res;//display result

    return 0;
}



double resistance(double rad, double len, double rho)
{
    double area;
    double res;

    area = PI *rad * rad;//equation for area
    res= rho*(len/area);//equation for resistivity

    return res ;
}
