/* 
Q  		Given a number N, print sum of all even numbers from 1 to N

		Sample Input 1 :
 		6
		Sample Output 1 :
		12


*/



#include<iostream>
using namespace std;


int main(){

   	
  	int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2==0){
        	sum+=i;
            
        }
        i=i+1;
        
    }
    cout<<sum<<endl;
}

