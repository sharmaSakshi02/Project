#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //Food item sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //Total price if items
    int Total_rooms=0, Totalpasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have:";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;

    m:
    cout<<"\n\n\t\t\t Please select from the menu options:";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken_roll";
    cout<<"\n 7) Information Regarding Sales and Collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+(quant*1200);
            cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you";
        }
        else
                cout<<"\n\t Only"<<Qrooms-Srooms<<" rooms remaining in hotel";
        break;

        case 2:
        cout<<"\n\n Enter Pasta Quantity: ";
        cin>>quant;
        if(Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            Totalpasta=Totalpasta+(quant*250);
            cout<<"\n\n\t\t"<<quant<<"  pasta is the order!";
        }
        else
                cout<<"\n\t Only"<<Qpasta-Spasta<<" pasta remaining in hotel";
        break;

        case 3:
        cout<<"\n\n Enter Burger Quantity: ";
        cin>>quant;
        if(Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            Total_burger=Total_burger+(quant*120);
            cout<<"\n\n\t\t"<<quant<<"  burger/s is the order!";
        }
        else
                cout<<"\n\t Only"<<Qburger-Sburger<<" burger remaining in hotel";
        break;

        case 4:
        cout<<"\n\n Enter noodle Quantity: ";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles=Total_noodles+(quant*250);
            cout<<"\n\n\t\t"<<quant<<"  noodle is the order!";
        }
        else
                cout<<"\n\t Only"<<Qnoodles-Snoodles<<" noodle remaining in hotel";
        break;

        case 5:
        cout<<"\n\n Enter Shake Quantity: ";
        cin>>quant;
        if(Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            Total_shake=Total_shake+(quant*100);
            cout<<"\n\n\t\t"<<quant<<"  shake is the order!";
        }
        else
                cout<<"\n\t Only"<<Qshake-Sshake<<" shake remaining in hotel";
        break;

        case 6:
        cout<<"\n\n Enter Chicken_Roll Quantity: ";
        cin>>quant;
        if(Qchicken-Schicken>=quant)
        {
            Schicken=Schicken+quant;
            Total_chicken=Total_chicken+(quant*200);
            cout<<"\n\n\t\t"<<quant<<"  Chicken-roll is the order!";
        }
        else
                cout<<"\n\t Only"<<Qchicken-Schicken<<" Chicken-roll remaining in hotel";
        break;

        case 7:
        cout<<"\n\t\tDetails of sales and collection";
        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining Rooms: "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;

        cout<<"\n\n Number of pastas we had: "<<Qpasta;
        cout<<"\n\n Number of pasta we sold "<<Spasta;
        cout<<"\n\n Remaining Pasta: "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection for the day: "<<Totalpasta;

        cout<<"\n\n Number of burgers we had: "<<Qburger;
        cout<<"\n\n Number of burger we sold "<<Sburger;
        cout<<"\n\n Remaining Burger: "<<Qburger-Sburger;
        cout<<"\n\n Total Burger collection for the day: "<<Total_burger;

        cout<<"\n\n Number of noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
        cout<<"\n\n Total Noodle collection for the day: "<<Total_noodles;

        cout<<"\n\n Number of shakes we had: "<<Qshake;
        cout<<"\n\n Number of shake we sold "<<Sshake;
        cout<<"\n\n Remaining Shakes: "<<Qshake-Sshake;
        cout<<"\n\n Total shake collection for the day: "<<Total_shake;

        cout<<"\n\n Number of Chicken-Rolls we had: "<<Qchicken;
        cout<<"\n\n Number of Chicken-Rolls we sold "<<Schicken;
        cout<<"\n\n Remaining Chickem-Roll: "<<Qchicken-Schicken;
        cout<<"\n\n Total Chicken-Roll collection for the day: "<<Total_chicken;

        cout<<"\n\n Overall Collection for the day: "<<Total_rooms+Totalpasta+Total_burger+Total_noodles+Total_shake+Total_chicken;

       break;

       case 8:
       exit(0);

       default:
       cout<<"\n Please select the numbers mentioned above!";
       
    }
    goto m;


}