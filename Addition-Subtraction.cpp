double add(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double i_comp = Ai + Bi;
    double j_comp = Aj + Bj;
    double k_comp = Ak + Bk; 
    
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> + <" << Bi << "," << Bj << "," << Bk << "> = "<<"("<< i_comp << ")i + (" << j_comp << ")j + (" << k_comp << ")k\n";
    return i_comp;
    return j_comp;
    return k_comp;
}

double subtract(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double i_comp = Ai - Bi;
    double j_comp = Aj - Bj;
    double k_comp = Ak - Bk; 
    
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> - <" << Bi << "," << Bj << "," << Bk << "> = "<<"("<< i_comp << ")i + (" << j_comp << ")j + (" << k_comp << ")k\n";
    return i_comp;
    return j_comp;
    return k_comp;
}

int main(){
  add(1, 2, 3, 4, 5, 6);
  subtract(1, 2, 3, 4, 5, 6);
}
