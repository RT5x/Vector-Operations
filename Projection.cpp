#include <iostream>
#include <cmath>

// Vector v is vector A
// Vector u is vector B
// Want to find projection of u onto v (projection of B onto A)
double magnitude(double Ai, double Aj, double Ak){
    double result = sqrt(pow(Ai,2) + pow(Aj, 2) + pow(Ak, 2));
    return result;
}
double dot_product(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double result = (Ai * Bi) + (Aj * Bj) + (Ak * Bk);
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> . <" << Bi << "," << Bj << "," << Bk << "> = "<< result << "\n";
    return result;
}

double projectB_A(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
double const = ((Ai * Bi) + (Aj * Bj) + (Ak * Bk)) / (pow(Ai,2) + pow(Aj, 2) + pow(Ak, 2))  // projection = const * vector A

  double i_comp = const * Ai;
  double j_comp = const * Aj;
  double k_comp = const * Ak; 
  
      std::cout << "Projection of B onto A = "<<"("<< i_comp << ")i + (" << j_comp << ")j + (" << k_comp << ")k\n";
    return i_comp;
    return j_comp;
    return k_comp;

}

int main(){

  // Projection:
  projectB_A(1, 2, 3, 4, 5, 6);
  

}
