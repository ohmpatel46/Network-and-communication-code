#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0)); // for random number
    string sender,reciever;
    int cnt=0;
    cout<<"Sender:";
    cin>>sender;
    for(int i=0;i<sender.size();i++)
    {   if(sender[i]=='1')
            {cnt++;}
    }
        //converting to even parity
        if(cnt%2==0)
        {   cout<<"Even Parity"<<endl;
            sender=sender+"0";}
        else
        {   cout<<"Odd Parity"<<endl;
            sender=sender+"1";}
        cout<<"Sent data:"<<sender<<endl;
        
    reciever=sender;
    int randm = rand() % reciever.size(); //to generate random bit position //where noise will be inserted
    reciever[randm]='1'; //inserting the 1 at a random position as noise
    cout<<"Recived data:"<<reciever<<endl;
    
    for(int i=0;i<reciever.size();i++)
    {   if(reciever[i]=='1')
            {cnt++;}
    }
    
    if(cnt%2==1)//checking for even parity on reciever's end
    {    cout<<"Error Detected."<<endl;}
    else
    {   cout<<"No error detected."<<endl;
        reciever=reciever.erase(reciever.size()-1,1);
        cout<<"Reciver:"<<reciever;
    }
}