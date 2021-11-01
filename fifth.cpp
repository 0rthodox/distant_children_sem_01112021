#include <iostream>

void swap_arrays(int n, int* array_0, int* array_1) {
    for(auto i = 0; i < n; i++) {
        std::swap(array_0[i], array_1[i]);
    }
}

//void swap_arrays(int n, int* array_0, int* array_1) {
//    for(auto i = 0; i < n; i++) {
//        auto& first = array_0[i];
//        auto& second = array_1[i];
//        first = first ^ second;
//        second = first ^ second;
//        first = first ^ second;
//    }
//}

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{
    int a[3];
    int* p = new int[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        p[i] = 0;

    swap_arrays(3, a, p);

    for (int i = 0; i < 3; i++)
        cout << p[i] << " ";
    cout << endl;
    delete[] p;
    return 0;
}
