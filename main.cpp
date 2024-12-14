#include "t.h"
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;        
    int a[n], b[m];
    for (int x : a) cin >> x;
    for (int x : b) cin >> x;
    cin.ignore();
    bool flag;
    cin >> flag;
    if (flag) sorttrue(a,b,n,m);
    else sortfalse(a,b,n,m);
    return 0;
}