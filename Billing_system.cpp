#include<iostream>
using namespace std;
int main(){
    int returntotalbill(void);
    int totalbill=returntotalbill();
  cout<<"Your bill amount is "<< totalbill<<endl;
  cout<<"Thank you for your order !"<<endl;
}
int returntotalbill(){
    char c;
    char item;
    char vegItem;
    char nonvegItem;
    int billAmount=0;
    char selectAgain;
    cout<<"--------------Welcome to UIET Canteen----------------------"<<endl;
    cout<<"--------------Welcome to online food order-----------------"<<endl;
    cout<<"--------------Please follow the below instruction----------"<<endl;
    cout<<"Step 1: Please press s to start your online food order"<<endl;
    cout<<"Step 2: You can order both veg and nonveg item"<<endl;
    cout<<"Step 3: Please press a to order veg item "<<endl;
    cout<<"Step 4: Please press b to order nonveg item"<<endl;
    cout<<"Step 5: You will get your final bill after your order"<<endl;
    start:
    cin>> c;
    if (c=='s' || c =='S'){
        items:
        cout<<"(a) veg items                   (b) nonveg items"<<endl;
        cin>>item;
       
        if (item=='a'|| item=='A'){
             vegItemList:
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
            cout<<"(1) Paneer Thali --- Rs 85"<<endl;
            cout<<"(2) Paneer Roll ---- Rs 50"<<endl;
            cout<<"(3) Tea --- Rs 20"<<endl;
            cout<<"(4) samosa  ----Rs 20"<<endl;
            cout<<"(5)  chole bhatura ---- RS 70"<<endl;
           
            cin >>vegItem;
            if (vegItem=='1'){
                billAmount=billAmount+85;
            }else if(vegItem=='2'){
                billAmount=billAmount+50;
            }else if(vegItem=='3'){
                billAmount=billAmount+20;
            }else if(vegItem=='4'){
                billAmount = billAmount+20;

            }else if(vegItem=='5'){
                billAmount=billAmount+70;
            }else{
                cout<<"You have entered wrong value,please try again!"<<endl;
                goto vegItemList;
            }
            cout<<"Do you want to add more items, y or n?"<<endl;
            cin >> selectAgain;
            if (selectAgain=='y'){
                goto items;
            }else{
                return billAmount;
            }
            
            }
        else if(item=='b'|| item=='B'){
         nonvegItemList:
            cout<<"Please select 1, 2, 3, 4, 5 as per your choice"<<endl;
            cout<<"(1) Egg Thali --- Rs 100"<<endl;
            cout<<"(2) Egg Roll ---- Rs 70"<<endl;
            cout<<"(3) Chicken Thali --- Rs 200"<<endl;
            cout<<"(4) Chicken Biryani  ----Rs 200"<<endl;
            cout<<"(5)  Malai Chicken ROll ---- RS 100"<<endl;
           
            cin>> nonvegItem;
            if (nonvegItem == '1'){
                billAmount=billAmount+100;
            }else if(nonvegItem == '2'){
                billAmount=billAmount+70;
            }else if(nonvegItem == '3'){
                billAmount=billAmount+200;
            }else if(nonvegItem == '4'){
                billAmount = billAmount+200;
            }else if(nonvegItem ==  '5'){
                billAmount=billAmount+100;
            }else{
                cout<<"You have entered wrong value,please try again!"<<endl;
                goto nonvegItemList;
            }
            cout<<"Do you want to add more items, y or n?"<<endl;
            cin >> selectAgain;
            if (selectAgain=='y'){
                goto items;
            }else{
                return billAmount;
            }
            
        }else{
            cout<<"You have entered the wrong character, Please try again!"<<endl;
           goto items;
        }
    }
    
    else{
        cout<<"You have entered the wrong character."<<endl;
        cout<<"Step 1: Please press s to start your online food order"<<endl;
        goto start;
    }
    return billAmount;
}
