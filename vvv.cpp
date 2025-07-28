#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr; string tmp;
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        arr.push_back(stod(tmp));
    }
    cout << endl << arr.size() << endl;
    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}