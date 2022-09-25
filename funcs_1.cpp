#include "easy.h"

double itc_pow(int num, int step) {
    double res = 1;
    long long tmp_step;
    if (step < 0)
        tmp_step = -1 * step;
    else
        tmp_step = step;

    for (long long i = 0; i < tmp_step; ++i)
        res *= num;

    if (step < 0)
        res = 1 / res;
    return res;
}

bool itc_ispositive(int num){
    return num >= 0;
}
bool itc_ispositive_d(double num){
    return num >= 0;
}
