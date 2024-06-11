#include <iostream>
#include <math.h>
using namespace std;
int main (){


int x = 12;
int y = 3;
float sigma = 2.1836;
float lamda = 1.11695;
float alfa = 328.67;
float f;


f = ((3*((x+sigma*y)/(pow(x, 2)-pow(y, 2)))) - (lamda*(alfa-13.7)));

cout << " el resultado es: "<< f << endl;



return 0 ;
}