// Vector dot product of A . B with components of i, j and k
double dot_product(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double result = (Ai * Bi) + (Aj * Bj) + (Ak * Bk);
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> . <" << Bi << "," << Bj << "," << Bk << "> = "<< result << "\n";
    return result;
}

int main(){
  dot_product(1, 2, 3, 4, 5, 6);
}
