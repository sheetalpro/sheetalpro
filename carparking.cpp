#include<iostream>
using namespace std;
main()
{
    cout<<"\n\t\t CAR PARKING"<<endl<<endl;
    int enter;
    int car=0,bike=0,rikshaw=0;
    while(true){
        cout<<"press 1 to enter car"<<endl;
        cout<<"press 2 to enter bike"<<endl;
        cout<<"press 3 to enter rikshaw"<<endl;
        cout<<"press 4 to show the record"<<endl;
        cout<<"press 5 to delete the record"<<endl;
        cout<<"press 6 to exit"<<endl;
        cin>>enter;
        if(enter==1)
        {
            car++;
            cout<<"car is added"<<endl;
        }
        else if(enter==2){
            bike++;
            cout<<"bike is added"<<endl;
        }
        else if(enter==3)
        {
            rikshaw++;
            cout<<"rikshaw is added"<<endl;
        }
        else if(enter==4){
            cout<<"\n---Data---"<<endl<<endl;
            cout<<"Cars:"<<car<<endl;
            cout<<"Bikes:"<<bike<<endl;
            cout<<"Rikshaws:"<<rikshaw<<endl;
        }
        else if(enter==5){
            car=0;
            bike=0;
            rikshaw=0;
            cout<<"\nYour record is deleted"<<endl<<endl;
        }
        else if(enter==6){
            exit(0);
        }
    }
}