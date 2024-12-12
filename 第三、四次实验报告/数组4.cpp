#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            if (k == 0 || list3[k - 1] != list1[i]) { // ∑¿÷π÷ÿ∏¥
                list3[k++] = list1[i];
            }
            i++;
        }
        else if (list1[i] > list2[j]) {
            if (k == 0 || list3[k - 1] != list2[j]) { // ∑¿÷π÷ÿ∏¥
                list3[k++] = list2[j];
            }
            j++;
        }
        else { // list1[i] == list2[j]
            if (k == 0 || list3[k - 1] != list1[i]) { // ∑¿÷π÷ÿ∏¥
                list3[k++] = list1[i];
            }
            i++;
            j++;
        }
    }
    while (i < size1) {
        if (k == 0 || list3[k - 1] != list1[i]) { // ∑¿÷π÷ÿ∏¥
            list3[k++] = list1[i];
        }
        i++;
    }
    while (j < size2) {
        if (k == 0 || list3[k - 1] != list2[j]) { // ∑¿÷π÷ÿ∏¥
            list3[k++] = list2[j];
        }
        j++;
    }
}

int main() {
    const int MAX_SIZE = 80;
    int size1, size2;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2]; // 
    cout << "Enter list1:";
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }
    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);
    cout << "The merged list is: ";
    for (int i = 0; i < size1 + size2; i++) {
        if (i == 0 || list3[i] != list3[i - 1]) {
            cout << list3[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
