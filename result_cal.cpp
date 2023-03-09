#include<iostream>
#include<conio.h>
using namespace std;

int res_cal(int n);
int pass_fail(float avg);

int main(){
    int n, i;
    float result, avg; 

    cout<<"Enter the subject number : ";
    cin>>n;

    int a[n];
    cout<<res_cal(n);
    return 0;
}

int res_cal(int n){
    int i, a[n];
    float result, avg; 
    for(i=1; i<=n; i++){
        cout<<"Enter the "<<i<<" subject number : ";
        cin>>a[i];

        if(a[i]<0 || a[i]>100){
            cout<<"Invalid marks, Please enter marks in the range of 0 to 100. "<<endl;
            i--;
            continue;
        }

        result=result+a[i];
    }
    cout<<result<<endl;
    avg=result/n;
    
    cout<<pass_fail(avg);
    getch();
}

int pass_fail(float avg){
    cout<<avg;
    cout<<endl;
    if(avg<=100 && avg>=91){
        cout<< "O (Outstanding) you passed with "<<avg<<"%";
    }
    else if (avg<=90 && avg>=81){
        cout<< "A+ (Excellent) you passed with "<<avg<<"%";
    }
    else if(avg<=80 && avg>=71){
        cout<< "A (Very Good) you passed with "<<avg<<"%";
    }
    else if (avg<=70 && avg>=61){
        cout<< "B+ (Good) you passed with "<<avg<<"%";
    }
    else if (avg<=60 && avg>=51){
        cout<< "B (Above Average) you passed with "<<avg<<"%";
    }
    else if (avg<=50 && avg>=41){
        cout<< "C (Average) you passed with "<<avg<<"%";
    }
    else if (avg<=40 && avg>=33){
        cout<< "P (Pass) you passed with "<<avg<<"%";
    }
    else{
        cout<< "F (Fail) you passed with "<<avg<<"%";
    }
    getch();
}
