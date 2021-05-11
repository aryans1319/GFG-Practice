
pair<long long, long long> getMinMax(long long a[], int n) {
    
        long long rem=a[0];
        for(int i=0;i<n;i++){
            rem=min(rem,a[i]);
        }
        long long res=a[0];
        for(int j=0;j<n;j++){
            res=max(res,a[j]);
        }
        
        return {rem,res};
        
        
    
}