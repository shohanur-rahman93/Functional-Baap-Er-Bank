#include <iostream>
#include <vector>
using namespace std;

string isTwoColoringPossible(vector<int>& arr) {
    int evenSum = 0, oddSum = 0;

    for (int num : arr) {
        if (num % 2 == 0)
            evenSum += num;
        else
            oddSum += num;
    }

    if (evenSum != 0 && oddSum != 0)
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        cout << isTwoColoringPossible(arr) << endl;
    }

    return 0;
}
