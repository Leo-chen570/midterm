#include<stdio.h>
int main(){
    printf("输入一段字符(总长度不超过50个)\n");
    char x[50];
    int i = 0;
    int amount = 0;
    int k = 0;
    while((x[i]= getchar()) != '\n'){
        i++;
    }
    for(k = 0;k<i;){
        if((a[k]>='A'&&a[k]<='Z')||(a[k]>='a'&&a[k]<='z')){
            k++;
        }else{
            amount++;
            k++;
        }
    }
   printf("单词的个数: %d\n",amount);
    return 0;
} 

