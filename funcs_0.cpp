int itc_skv(int num){
    if (num > 0){
        return num * num;
    }else{
        return -1;
    }
}
int itc_spr(int a, int b){
    if (a > 0 && b > 0){
        return a * b;
    }else{
        return -1;
    }
}

int itc_sqrt(int num){
    int i = 1;
    while (i < num){
        if (i * i == num){
            return i;
        }
        i++;
    }
    return -1;
}

int itc_str(int a, int b, int c){
    if ((a < b + c && b < a + c && c < b + a) && (a > 0 && b > 0 && c > 0)){
        double p = 0.5 * (a + b + c);
        return itc_sqrt(p * (p - a) * (p - b) * (p - c));
    }else{
        return -1;
    }

}

double itc_scir(int radius){
    if (radius > 0){
        return 3.14 * (radius * radius);
    }else{
        return -1;
    }

}

