/* Enter your solutions in this file */
#include <stdio.h>

int max(int z[], int no) {
    int temp = 0;
    for(int i = 1;i < no;i++){
        int j =i -1;
        if(z[i] < z[j]) {
            temp = z[j];
            z[j] = z[i];
            z[i] = temp;
        }
    }
return z[no-1];
}
int min(int z[], int no) {
    int temp = 0;
    for(int i = 1;i < no;i++){
        int j = i-1;
        if(z[i] > z[j]){
            temp = z[j];
            z[j] = z[i];
            z[i] = temp;
        }
    }
return z[no-1];
}
float average(int z[], int no) {
     float sum = 0.0;
     for(int i = 0;i < no;i++){
         sum = sum + z[i];
     }
     float avg = sum / no;
     return avg;
 }
 int mode(int z[], int no){
    int temp = 0;
    for(int k = 0;k < no;k++){
        for(int i = 1;i < no;i++){
            int j = i-1;
            if(z[i] < z[j]){
                temp = z[j];
                z[j] = z[i];
                z[i] = temp;
            }
        }
    }
    int count = 1;
    int store = 0;
    int result = z[no-1];
    for(int i = 1;i < no;i++){
        int j = i-1; 
        if(z[i] != z[j]){
            count = 1;
        }
        else if(count >= store){
            count = count + 1;
            store = count;
            result = z[j];
        }
        else{
            count = count + 1;
        }

     }
    return result;
}
int factors(int n, int ret[]){
    int count=0;
 for(int i=2;i<=n;i++) {
     if(n%i == 0){
         ret[count]=i;
         n=n/i;
         i=1;
         count++;
     }
 }
 return count;
}






