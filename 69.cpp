// 69. sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1){
            return x;
        }
        long long c = 2;
        long long f = x;
        long long i, raiz; //fiz long long pq tinha feito c int e deu overflow
        while (c <= f){
            i = (c+f)/2;
            raiz = i*i;

            if (raiz == x){
                return i;
            } else if (raiz > x){
                f = i-1;
            } else {
                c = i+1;
            }
        }
        return f;
    }
};
