#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int* create(int n, const int Low, const int High, int* a = 0, int i = 0) {
    if (a == 0) {
        a = new int[n];
    }

    if (i < n) {
        a[i] = Low + rand() % (High - Low + 1);
        create(n, Low, High, a, i + 1);
    }

    return a;
}

void print(int* a, int n, int i = 0) {
    if (i < n) {
        cout << setw(5) << a[i];
        print(a, n, i + 1);
    }
    else {
        cout << endl;
    }
}

double calculateAverage(int* a, int n, int i = 0, int sum = 0, int count = 0) {
    if (i < n) {
        if (i % 2 == 0) {
            sum += a[i];
            count++;
        }
        calculateAverage(a, n, i + 1, sum, count);
    }
    else {
        if (count == 0) {
            return 0.0;
        }
        return static_cast<double>(sum) / count;
    }
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    srand((unsigned)time(NULL));
    int Low = 1;
    int High = 100;

    int* a = create(n, Low, High);
    print(a, n);

    double average = calculateAverage(a, n);
    cout << "Average of elements: " << average << endl;

    delete[] a; // Звільнення пам'яті

    return 0;
}
