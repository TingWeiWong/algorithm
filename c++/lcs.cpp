#include<iostream>
using namespace std;
int lcs_recursive(char *x,char *y,int m,int n){
	if (m == 0 or n ==0){
		return 0;
	}
	else if  (x[m-1] == y[n-1]){
		return lcs_recursive(x,y,m-1,n-1)+1;
	}
	else{
		return max(lcs_recursive(x,y,m-1,n),lcs_recursive(x,y,m,n-1));

	}

}
int main(){
	char x[] = "AGGTAB";
	char y[] = "GXTXAYB";
	int m = 6 ;
	int n = 7 ;
	cout << "LCS = " << lcs_recursive(x,y,m,n)<<endl;
	system( "read -n 1 -s -p \"Press any key to continue...\"" ); 
	return 0;
}