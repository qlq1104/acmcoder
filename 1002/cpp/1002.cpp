#include <iostream>
using namespace std;
int main() {
    int n, init = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        long long a, b;
        cin >> a >> b;
        if (init) {
            cout << endl << endl;
        } else {
            init = 1;
        }
        cout << "Case " << i+1 << ":" << endl;
        cout << a << " + " << b << " = " << a + b;
    }
    return 0;
}
