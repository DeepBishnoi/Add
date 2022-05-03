#include<iostream>
using namespace std;

class Studnet
{
public:
       int RollNO;
    string Name;
    int AnnualFee;

    void Detail()
    {
        cout<<"Student Roll NO: "<<RollNO<<endl;
        cout<<"Student Name: "<<Name<<endl;
        cout<<"Anuual Fee: "<<AnnualFee<<endl;
    }
};

int main()
{
    Studnet obj[3];

    cout<<"Please fill student Detail"<<endl;
    cout<<"\t RollNo \t Name \t AnuualFee"<<endl;

    for(int loop=0;loop<3;loop++)
    {

        cin>>obj[loop].RollNO;
        cin>>obj[loop].Name;
        cin>>obj[loop].AnnualFee;

    }
     cout<<"Please fill student Detail"<<endl;
    cout<<"\t RollNo \t Name \t AnuualFee"<<endl;

     for(int loop=0;loop<3;loop++)
    {

        cout<<"\t"<<obj[loop].RollNO;
        cout<<"\t"<<obj[loop].Name;
        cout<<"\t"<<obj[loop].AnnualFee;
        cout<<endl;

    }


    return 0;
}
