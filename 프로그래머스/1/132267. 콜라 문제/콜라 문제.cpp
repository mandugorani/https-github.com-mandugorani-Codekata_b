using namespace std;
int solution(int a, int b, int n) {
    int pepsis = 0;
    
    while (n>= a) {
        int gainpepsi = (n / a) * b;
        pepsis += gainpepsi;
        n = (n% a) + gainpepsi;
    }
    return pepsis;
}