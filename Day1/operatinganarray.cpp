bool searchEle(int a[],int x)
{
    int i,j=0;
    for(int i=0;i<100;i++){
    if(a[i]==x)
        j=1;
    }
    return j;
}
bool insertEle(int a[],int y,int yi)
{

a[yi]=y;
return true;
}

bool deleteEle(int a[],int z)
{
    int i,j;
    for(i=0;i<100;i++){
        if(a[i]==z){
        for(int j=i;j<100-1;j++)
        a[j+1]=a[j];
         
            
        }
          
        
    }
       return true;
}