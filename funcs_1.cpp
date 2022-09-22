double itc_pow(int num, int step){
    int n = num;
    for (int i = 0; i < step - 1; i++){
        n *= num;
    }
    return n;
}
bool itc_ispositive(int num){
    return num >= 0;
}
bool itc_ispositive_d(double num){
    return num >= 0;
}
