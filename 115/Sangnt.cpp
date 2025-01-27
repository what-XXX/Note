#include <bits/stdc++.h>
using namespace std;
long N=21;
//int du[10000005];
int du[21];

void sang(){
	fill(du, du+N, 2);  		// các số đều có 2 ước số
	du[0]=0;            		// ước của số 0 là 0
	du[1]=1;					// ước của số 1 là 1
	for (int i=2; i<N;i++)		// xét các số từ 2 trở đi
	  for (int j=2;i*j<=N;j++)  // xét các ước tạo được với i thì cộng 1 vào du[i*j]
	     du[i*j]++;	
}

int main(){
	sang();
}