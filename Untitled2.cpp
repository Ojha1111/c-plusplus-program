#include<iostream> 
using namespace std;
struct Bix
{
    short n;
};
int main()
{
    Bix b;
    Bix& rb = b;
    b.n = 5;
    cout << b.n << " " << rb.n << " ";
    rb.n = 8;
    
    return 0; 
}
