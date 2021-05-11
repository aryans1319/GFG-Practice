class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	   // sort(arr,arr+n);
	   // int sec;
	   // for(int i=n-2;i>=0;i--){
	   //     if(arr[i]!=arr[n-1])
	   //     sec=arr[i];
	   //     return sec;
	   // }
	   // return -1;
	   
	  int first,second;
	  first=second=-1;
	  for(int i=0;i<n;i++){
	      if(arr[i]>first){
	          second=first;
	          first=arr[i];
	      }
	      else if(arr[i]!=first && arr[i]>second)
	      second=arr[i];
	  }
	  return second;
	}
};
