#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> map;
    int max = 0;
    int maxIndex = 0;

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        sum += a;
        map[a]++;
        if (map[a] > max) {
            max = map[a];
            maxIndex = a;
        }
    }

    cout << sum / 10 << '\n' << maxIndex;
}