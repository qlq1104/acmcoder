#include <iostream>
using namespace std;
int main() {
    int n, m, a, s;
    cin >> n;
    while (n--) {
        s = 0;
        cin >> m;
        while (m--) {
            cin >> a;
            s += a;
        }
        cout << s << endl;
    }
    return 0;
}
