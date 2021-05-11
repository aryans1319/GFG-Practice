#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int N,i;
	    cin>>N;
	    int arr[N];
	    for(i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    
	     for (int low = 0, high = N - 1; low < high; low++, high--){
      swap(arr[low], arr[high]);
   }
   for (int i = 0; i < N; i++){
      cout << arr[i] << " ";
   }
	        
	}
	return 0;
}