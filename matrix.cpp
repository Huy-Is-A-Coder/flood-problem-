#include<iostream>

void flood(int arr[100][100], int n, int m, int locx, int locy){
	
	if(locx<0||locx>n||locx>m||locy<0||locy>n||locy>m){
		return;
	}
	if(arr[locx][locy] != 1){
		return;
	}
	
	arr[locx][locy] = 2;
	
	flood(arr, n, m, locx - 1, locy);
	flood(arr, n, m, locx + 1, locy);
	flood(arr, n, m, locx, locy + 1);
	flood(arr, n, m, locx, locy - 1);
	
}

int main(){
	
	int n, m, arr[100][100], x, y;
	
	std::cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			std::cin>>arr[i][j];
		}
	}
	
	std::cout<<"chose the location you want to flood: ";
	std::cin>>x>>y;
	
	flood(arr, n, m, x, y);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			std::cout<<arr[i][j]<<'\t';
		}
		std::cout<<'\n';
	}
	
	return 0;
}