#include <iostream>
using namespace std;

int main() {
    int N1, N2, N;
    cout << "First num: \n";
    cin >> N1;


    cout << "Second num: \n";
    cin >> N2;


    cout << "Third num: \n";
    cin >> N;

    int additionalVotes1 = 0, additionalVotes2 = 0, additionalVotes3 = 0;

    if (N1 == N2 && N1 == N && N2 == N) {
        additionalVotes1 = additionalVotes2 = additionalVotes3 = 1;
    }
    else {
        int maxVotes = max(max(N1, N2), N);

        if (maxVotes == N1) {
            additionalVotes2 = maxVotes - N2 + 1;
            additionalVotes3 = maxVotes - N - 1;
        }
        else if (maxVotes == N2) {
            additionalVotes1 = maxVotes - N1 + 1;
            additionalVotes3 = maxVotes - N - 1;
        }
        else {
            additionalVotes1 = maxVotes - N1 + 1;
            additionalVotes2 = maxVotes - N2 + 1;
        }
    }

    cout << additionalVotes1 << " " << additionalVotes2 << " " << additionalVotes3 << endl;

    return 0;
}
