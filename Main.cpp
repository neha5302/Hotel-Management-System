#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    // quantity of food items available in the hotel
    int qRooms=0, qPasta=0, qBurger = 0, qNoodles=0, qShakes=0, qChicken=0;
    // number of food items sold
    int sRooms=0, sPasta=0, sBurger = 0, sNoodles=0, sShakes=0, sChicken=0;
    // totalprice of rooms and each food item  
    int totalRooms=0,totalPasta=0,totalBurger=0,totalNoodles=0,totalShakes=0,totalChicken=0;

    cout<<"\n\t\tQuantity of items we have";
    cout<<"\nRooms available\n";
    cin>>qRooms;
    cout<<"\nQuantity of Pasta we have\n";
    cin>>qPasta;
    cout<<"\nQuantity of Burger we have\n";
    cin>>qBurger;
    cout<<"\nQuantity of Noodles we have\n";
    cin>>qNoodles;
    cout<<"\nQuantity of Shakes we have\n";
    cin>>qShakes;
    cout<<"\nQuantity of Chicken-roll we have\n";
    cin>>qChicken;

    m:
    cout<<"\n\t\t\nPlease select from the given menu options: ";
    cout<<"\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shakes";
    cout<<"\n 6) Chicken-roll";
    cout<<"\n 7) Informatiion regarding sales and collections ";
    cout<<"\n 8) Exit";
    
    cout<<"\n\nPlease enter your choice:\n";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\nEnter the number of rooms you want: ";
        cin>>quant;
        if (qRooms-sRooms>=quant)
        {
            sRooms += quant;
            totalRooms += (quant*2400);
            cout<<"\n\t"<<quant<<" room(s) have been alotted to you!"; 
        }else
        {
            cout<<"\nOnly "<<qRooms-sRooms<<" room(s) remaining at hotel";
        }
        
        break;
    
    case 2:
        cout<<"\n\n Enter the number of pasta you want: ";
        cin>>quant;
        if (qPasta-sPasta>=quant)
        {
            sPasta += quant;
            totalPasta += (quant*200);
            cout<<"\n\t"<<quant<<" pasta(s). Order is placed!"; 
        }else
        {
            cout<<"\nOnly "<<qPasta-sPasta<<" pasta(s) remaining at hotel";
        }
        break;
    
    case 3:
        cout<<"\n\n Enter the numbers of Burger you want: ";
        cin>>quant;
        if (qBurger-sBurger>=quant)
        {
            sBurger += quant;
            totalBurger += (quant*100);
            cout<<"\n\t"<<quant<<" Burger(s). Order is placed!"; 
        }else
        {
            cout<<"\nOnly "<<qBurger-sBurger<<" Burger(s) remaining at hotel";
        }
        break;
    
    case 4:
        cout<<"\n\n Enter the numbers of Noodles you want: ";
        cin>>quant;
        if (qNoodles-sNoodles>=quant)
        {
            sNoodles += quant;
            totalNoodles += (quant*200);
            cout<<"\n\t"<<quant<<" room(s) have been alotted to you!"; 
        }else
        {
            cout<<"\nOnly "<<qNoodles-sNoodles<<" Noodles(s) remaining at hotel";
        }  
        break;
    
    case 5:
        cout<<"\n\n Enter the numbers of Shakes you want: ";
        cin>>quant;
        if (qShakes-sShakes>=quant)
        {
            sShakes += quant;
            totalShakes += (quant*100);
            cout<<"\n\t"<<quant<<" room(s). Order is placed!"; 
        }else
        {
            cout<<"\nOnly "<<qShakes-sShakes<<" Shakes(s) remaining at hotel";
        }
        break;
    
    case 6:
        cout<<"\n\n Enter the numbers of Chicken-roll you want: ";
        cin>>quant;
        if (qChicken-sChicken>=quant)
        {
            sChicken += quant;
            totalChicken += (quant*250);
            cout<<"\n\t"<<quant<<" Chicken-roll(s). Order is placed!"; 
        }else
        {
            cout<<"\n\tOnly "<<qChicken-sChicken<<" Chicken-roll(s) remaining at hotel";
        }
        
        break;
    case 7:
    cout<<"\n\t\tDetails of sales and collection ";
    cout<<"\nNumber of rooms we had: "<<qRooms;
    cout<<"\nNumber of rooms occupied: "<<sRooms;
    cout<<"\nRemaining number of rooms: "<<qRooms-sRooms;
    cout<<"\nTotal rooms collection of the day: "<<totalRooms;

    cout<<"\n\nNumber of pasta(s) we had: "<<qPasta;
    cout<<"\nNumber of pasta(s) sold: "<<sPasta;
    cout<<"\nRemaining number of pasta(s): "<<qPasta-sPasta;
    cout<<"\nTotal pasta(s) collection of the day: "<<totalPasta;

    cout<<"\n\nNumber of Burger(s) we had: "<<sBurger;
    cout<<"\nNumber of Burger(s) sold: "<<sBurger;
    cout<<"\nRemaining number of Burger(s): "<<sBurger-sBurger;
    cout<<"\nTotal Burger(s) collection of the day: "<<totalBurger;

    cout<<"\n\nNumber of Noodles(s) we had: "<<qNoodles;
    cout<<"\nNumber of Noodles(s) sold: "<<sNoodles;
    cout<<"\nRemaining number of Noodles(s): "<<qNoodles-sNoodles;
    cout<<"\nTotal Noodles(s) collection of the day: "<<totalNoodles;

    cout<<"\n\nNumber of Shakes(s) we had: "<<qShakes;
    cout<<"\nNumber of Shakes(s) sold: "<<sShakes;
    cout<<"\nRemaining number of Shakes(s): "<<qShakes-sShakes;
    cout<<"\nTotal Shakes(s) collection of the day: "<<totalShakes;

    cout<<"\n\nNumber of Chicken-roll we had: "<<qChicken;
    cout<<"\nNumber of Chicken-roll sold: "<<sChicken;
    cout<<"\nRemaining number of Chicken-roll: "<<qChicken-sChicken;
    cout<<"\nTotal Chicken-roll collection of the day: "<<totalChicken;
    break;
    case 8:
         exit(0);
         break;
    default:
    cout<<"\n\n Please select the numbers mentioned above!";
    }
    goto m;
}