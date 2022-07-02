#include <iostream>


// Vector cross product of A x B, with components of i, j and k
double cross_product(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double i_comp = (Aj * Bk) - (Bj * Ak);
    double j_comp = (Bi * Ak) - (Ai * Bk);
    double k_comp = (Ai * Bj) - (Aj * Bi); 
    
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> x <" << Bi << "," << Bj << "," << Bk << "> = "<<"("<< i_comp << ")i + (" << j_comp << ")j + (" << k_comp << ")k\n";
    return i_comp;
    return j_comp;
    return k_comp;
}

int main(){
cross_product(1, 2, 3, 4, 5, 6);    // Change this to alter the vectors you are trying to cross
}
