#include<iostream>
using namespace std;
enum class demo{
    january,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main(){
    //demo d=demo::january;       //we have to use SCOPE RESOLUTION OPERATOR
    for(int i=static_cast<int>(demo::january);i<=static_cast<int>(demo::december);i++){
        //demo d=demo::january;       //we have to use SCOPE RESOLUTION OPERATOR
        demo curr_month=static_cast<demo>(i);
        cout<<"Month "<<static_cast<int>(curr_month)+1<<" : ";

        switch (curr_month){
            case demo::january:
                cout<< "January" ;
                break;
            case demo::february:
                cout<<"February";
                break;
            case demo::march:
                cout<<"March";
                break;
            case demo::april:
                cout<<"April";
                break;
            case demo::may:
                cout<<"May";
                break;
            case demo::june:
                cout<<"June";
                break;
            case demo::july:
                cout<<"July";
                break;
            case demo::august:
                cout<<"August";
                break;
            case demo::september:
                cout<<"September";
                break;
            case demo::october:
                cout<<"October";
                break;
            case demo::november:
                cout<<"November";
                break;
            case demo::december:
                cout<<"December";
                break;
            
                
        }
        cout<<endl;

    }
}