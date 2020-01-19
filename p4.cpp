/*If 1<= n <=9, then print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2, etc.); otherwise, print Greater than 9 instead.*/

#include<iostream>
 using namespace std;

 int main(){
     unsigned int a;
     cin>> a;
     if(a==1){
         cout<<"one";
     }
     else if(a==2){cout<<"two";}
     else if(a==3){cout<<"three";}
     else if(a==4){cout<<"four";}
     else if(a==5){cout<<"five";}
     else if(a==6){cout<<"six";}
     else if(a==7){cout<<"seven";}
     else if(a==8){cout<<"eight";}
     else if(a==9){cout<<"nine";}
     else{
         cout<<"Greater than 9";
     }
 }