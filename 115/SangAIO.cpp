#include <bits/stdc++.h>
using namespace std;
const int nmax = 10000001;
#define task "SangAIO"

int t_uoc[nmax + 1];

void SangAIO() {
    int i, j;
    i = 2;
    fill(t_uoc, t_uoc + nmax + 1, 0);
    while (i <= sqrt(nmax)) {
        t_uoc[i]++;
        for (j = 2; j <= nmax / i; j++) {
            t_uoc[i * j] += i;
        }
        i++;
    }
}

bool nt(int a) {
    return t_uoc[a] == 1;
}

bool sohh(int a) {
    return t_uoc[a] == a;
}

bool giau(int a) {
    return t_uoc[a] > a;
}

void Mo() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen(task".inp","r",stdin);
	freopen(task".out","w",stdout);
}


int main() {
    Mo();
    time_t t1 = time(nullptr);
    SangAIO();
    cout<<"Các số nguyên tố: " << "\n";
    for (int i = 1; i <= 20; i++) {
        cout <<i << " "<< boolalpha << nt(i) << " ";
    }
    cout<<"\nCác số hoàn hảo: " << "\n";
    for (int i = 1; i <= 20; i++) {
        if (sohh(i)) {
            cout << i << " " << boolalpha << sohh(i) << " ";
        }
    }
    cout<<"\nCác số giàu có: " << "\n";
    for (int i = 1; i <= 20; i++) {
        if (giau(i)) {
            cout << i << " " << boolalpha << giau(i) << " ";
        }
    }
    time_t t2 = time(nullptr);
    cout <<"\nThời gian chạy: "<< (t2 - t1) / 1000.0 <<" giây";
    return 0;
}