#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int sum=0;
    while (num !=1 && sum<450) {
        
if (num%2 == 0) {
    num = num/2;
} else {
    num = (num*3)+1;
}
        sum++;
}    
    if (num ==1) {
    return sum;
    } else {
        return -1;
    }
}

