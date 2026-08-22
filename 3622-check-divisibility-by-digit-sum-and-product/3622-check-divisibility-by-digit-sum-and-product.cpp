class Solution {
public:
    bool checkDivisibility(int n) {
        
        int temp=n;
        int sum=0;
        int prod=1;
        int ls;
        while(temp!=0){
            
            ls=temp%10;
         
            sum=sum+ls;
           
            prod=prod*ls;
            cout<<prod;
            temp=temp/10;
        }
        if(n%(sum+prod)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};