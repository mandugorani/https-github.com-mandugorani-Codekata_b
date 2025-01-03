#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer= "";
    bool zzaksu = false;
    if (n%2== 0) {
        bool zzaksu = true;
    }else{
        bool zzaksu = false;
    }
    for (int i=0;
        i<n;
        i++){
        if (zzaksu){
            if (i%2== 0){
                answer += "수";
            }else{
                answer += "박";
            }
            
            }else{
            if (i%2 ==0) {
                answer += "수";
            }else{
                answer += "박";
            }
        }
    }
    return answer;
    }
