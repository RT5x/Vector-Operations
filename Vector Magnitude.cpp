#include <iostream>
#include <cmath>

double magnitude(double Ai, double Aj, double Ak){
    double result = sqrt(pow(Ai,2) + pow(Aj, 2) + pow(Ak, 2));
    return result;
}

int main(){
 magnitude(1, 2, 3); 
}
