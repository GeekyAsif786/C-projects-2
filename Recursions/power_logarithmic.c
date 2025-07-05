#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1; //Base case
    if(b==1) return a; //Base case
    int ans=powerlog(a,b/2); //a^b = a^(b/2) * a^(b/2)
    if(b%2==0){
        return ans*ans; // for Even: a^b = a^(b/2) * a^(b/2)
    }
    else{
        return ans*ans*a; // for Odd: a^b = a^(b/2) * a^(b/2) * a
    }
    
}

int main(){
    int a,b;
    printf("Enter the base:\n");
    scanf("%d",&a);
    printf("Enter the power:\n");
    scanf("%d",&b);
    int ans=powerlog(a,b);
    printf("answer:%d",ans);
    return 0;
}