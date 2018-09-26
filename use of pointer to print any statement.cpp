#include<iostream> 
#include<string.h>
#include<math.h>
using namespace std;
enum xyz
{
    a, b, c
};
int main() 
{
    int x = a, y = b, z = c;
    int &p = x, &q = y, &r = z;
    p = ++x;
    q = ++y;
    r = ++c;
    cout<< p << q << r;
    return 0;
}
