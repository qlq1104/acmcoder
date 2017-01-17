#include <iostream>
using namespace std;
int main() {
    int n, m, a, s, flag = 0;
    cin >> n;
    while (n--) {
        cin >> m;
        s = 0;
        while (m--) {
            cin >> a;
            s += a;
        }
        if (!flag) {
            flag = 1;
        } else {
            cout << endl ;
        }
        cout << s << endl; 
    }
    return 0;
}
