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

int lcs_dynamic(char *x,char *y){
	int m = strlen(x);
	int n = strlen(y);
	int aux_matrix = array[m+1][n+1]
	
	return 0;
}




int main(){
	char x[] = "AGGTAB";
	char y[] = "GXTXAYB";
	int m = 6 ;
	int n = 7 ;
	int test[5] = {};
	cout << "LCS = " << lcs_recursive(x,y,m,n)<<endl;
	cout << test;
	return 0;
}