#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int a, int b) {
    if (a>b) {
        swap(a,b);
    }
    long long sum =0;
    
    for(long long i=a;
        i<=b;
        i++) 
    {
        sum += i;
    }
    
    return sum;
}