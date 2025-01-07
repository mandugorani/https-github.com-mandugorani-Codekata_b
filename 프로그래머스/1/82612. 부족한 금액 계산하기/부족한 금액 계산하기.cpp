using namespace std;

long long solution(int price, int money, int count)
{
    long long totalcost = 0;
    
    for(int n=1;
       n<= count;
       ++n){
        totalcost += price*n;
    }
    long long m = totalcost - money;
    
    return m > 0 ? m : 0;
}