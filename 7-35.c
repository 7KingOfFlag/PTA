#include<stdio.h>

int gcd(int a,int b);

int main(void){
    int n,a,b,i,sumA=0,sumB=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d/%d",&a,&b);
        if(i==0){
            sumA+=a;
            sumB+=b;
        }else{
            if(sumB==b){
                sumA+=a;
            }else if(sumB%b==0){
                sumA+=a*sumB/b;
            }else if(b%sumB==0){
                sumA=sumA*(b/sumB)+a;
                sumB=b;
            }else{
                sumA=sumA*b+a*sumB;
                sumB*=b;
            }
        }
    }

    if(sumA>0){
        i=gcd(sumA,sumB);
    }else if(sumA<0){
        i=gcd((-1)*sumA,sumB);
    }

    

    printf("%d/%d",sumA,sumB);
    return 0;
}
int gcd(int a,int b){
    int t;
    if(a==b){
        return a;
    }else{
        if(a<b){
            t=a;
            a=b;
            b=t;
        }
        while(a%b!=0 && b!=1 && a!=1){
            t=a%b;
            a=b;
            b=t;
        }
        return b;
    }
}