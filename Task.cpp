#include <iostream>
using namespace std;
int main()
 {
    int num_of_items;
    float price;
    int quantity;
    float cart;
    float totalPrice=0;

    cout<< "Enter the number of items: ";
    cin >> num_of_items;

    for(int i=0; i<num_of_items; ++i) {
        cout << "Enter the price & quantity of item " << (i+1) << ": ";
        cin >> price>>quantity;

        cart = price*quantity;
        totalPrice += cart;
    }

    cout<<"Total cost: "<<totalPrice<<endl;

}


