#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if (score >= 80)
        cout << "Grade A" << endl;
    if (score >= 70 && score < 80)
        cout << "Grade B" << endl;
    if (score >= 60 && score < 70)
        cout << "Grade C" << endl;
    if (score >= 50 && score < 60)
        cout << "Grade D" << endl;
    if (score < 50)
        cout << "Grade F" << endl;

    return 0;
}