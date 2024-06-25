#include <stdio.h>
//1
int main(){
    int n; int result;
    scanf("%d",&n);
result=(n%2==0)?printf("even"):printf("odd");
}

//2
#include <ctype.h>
int main(){
    char s;
    scanf("%c",&s);
    
    if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
        printf("vowel");
}
else{
    printf("consonant");
}
}

//3
int main(){
    int n;
    scanf("%d",&n);
    if (n%4==0 && n%100!=0){
        printf("leap year");
    }
    else {
        printf("non leap year");
    }
}

//4 note demonstration

//5 quadrant

//6
int main(){
    int n,d,count=0; int digit;
    scanf("%d %d",&n,&d);
   
    int temp=n;
    while(temp!=0){
        digit=temp%10;
        if (digit!=d){
            count +=1;
        }
        temp=temp/10;
    } 
    printf("%d",count);
}

//7
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int maxn=-1000;int maxp=0;
for(int i=0;i<n;i++){
    if (arr[i]>=0){
        if(arr[i]>maxp){
            maxp=arr[i];
        }
        }
        else{
            if(arr[i]>maxn){
                maxn=arr[i];
            }
        }
}
printf("%d\n",maxp);
printf("%d\n",maxn);
printf("%d",maxp-maxn);

}

//8 fibonacci numbers addition in array upto the given numbers 

//9 in array print the sum of non prime digits

//10 in this question a-j ---> 0-9, user will input the number 12403 convert this in alphabetics -->bcead

//11 find the index of perfect cube in the array

//12 id=6442...now output will be P(6+4+4+2=16means p)..1-26--->A-Z
