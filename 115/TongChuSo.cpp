#include <bits/stdc++.h>
using namespace std;
#define task "TongChuSo"
int t[10000001];

void khoitao() {
    
    for (int i = 0; i <= 9; i++) {
        t[i] = i;
    }
    for (int i = 10; i <= 10000000; i++) {
        t[i] = t[i / 10] + i % 10;
    }
    
}

int main() {
	ios_base::sync_with_stdio(false);	cin.tie(NULL); cout.tie(NULL);
    freopen( task".inp","r",stdin);
    freopen( task".out","w",stdout);
    time_t t1 = time(nullptr);
    khoitao();
    cout << t[9999999] << ' ';
    time_t t2 = time(nullptr);
    cout <<"\nThời gian chạy: "<< (t2 - t1) / 1000.0 <<" giây";
    return 0;
}
