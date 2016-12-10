#include <iostream>
#include <conio.h>
using namespace std;
void main ()
{
int t[3][3];
for(int i1=0; i1 <= 2; ++i1){
	for(int i2=0; i2 <=2;++i2){
		cin >> t[i1][i2];
	}
}

int sum[]={0,0,0},sum2[]={1,1,1};

for(int i3=0; i3 <= 2; ++i3){
	for(int i4=0; i4 <= 2; ++i4){
		sum[i3] = sum[i3]+t[i3][i4];
	}
}
for(int ii=0; ii <= 2; ++ii){
	for(int ii2=0; ii2 <= 2; ++ii2){
		sum2[ii]*= t[ii2][ii];
	}
}
cout << "Summa str 1:" << sum[0] << endl;
cout << "Summa str 2:" << sum[1] << endl;
cout << "Summa str 3:" << sum[2] << endl;
cout << "Summa stolb 1:" << sum2[0] << endl;
cout << "Summa stolb 2:" << sum2[1] << endl;
cout << "Summa stolb 3:" << sum2[2] << endl;
system("pause");}
