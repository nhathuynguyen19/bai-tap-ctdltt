#include <iostream>
using namespace std;

struct Nut {
    int Info;
    Nut *Left, *Right;
};

int ChieuCao(Nut* T) {
    if (T == NULL) return 0;
    int left = ChieuCao(T->Left);
    int right = ChieuCao(T->Right);
    return 1 + max(left, right);
}

int main() {

}