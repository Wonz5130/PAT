#include<iostream>
using namespace std;
void output(int n){
	char n1;
	if(n/13 == 0){
		cout << 0;
		if(n%13>9){
			n1 = 'A'+n%13-10;
			cout << n1;
		}
		else cout << n%13;
	}
	else{
		if(n/13>9){
			n1 = 'A'+n/13-10;
			cout << n1;
		}
		else cout << n/13;
		if(n%13>9){
			n1 = 'A'+n%13-10;
			cout << n1;
		}
		else cout << n%13;
	}
}

int main(){
	int r,g,b;
	cin >> r >> g >> b;
	cout << "#";
	//red
	output(r);
	//green
	output(g);
	//blue
	output(b);
	return 0;
}