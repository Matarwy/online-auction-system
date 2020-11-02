#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct items {
    int  startprice;
    string category, name, startdate, enddate;
    bool sold = 0;
};
struct members {
    int ID, points, password, password1, password2;
    string address, email, phonenumber, name;
    bool seller, buyer;
};
members member;
items s_item, item[3];
void member1() {
    member.ID = 1;
    member.phonenumber = "01004316474";
    member.points = 0;
    member.password = 00000;
    member.address = "Egypt";
    member.email = "example@gmail.com";
    member.name = "elhassan elsayed";
}
void itemreport(char& m) {
    if (m == 'a') {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "--------------------------------------------";
                cout << i << " : " << item[j].category << endl;
                cout << "item name :" << item[j].name << endl;
                cout << "item start price :" << item[j].startprice << endl;
                cout << "item availablity :";
                if (item[j].sold) {
                    cout << "sold" << endl;
                }
                else {
                    cout << "available" << endl;
                }
            }

        }
    }
}
void iteminfo(int& x) {
    for (int i = 0; i < 3; i++) {
        if (x == i) {
            cout << "----------------- " << item[i].name << " -------------------------" << endl;
            cout << "name:" << item[i].name << endl;
            cout << "category:" << item[i].category << endl;
            cout << "availability:";
            if (item[i].sold)
            {
                cout << " sold" << endl;
            }
            else {
                cout << "available" << endl;
            }
            cout << "start price:" << item[i].startprice << endl;
            cout << "strt date:" << item[i].startdate << endl;
            cout << "end date:" << item[i].enddate << endl;
            cout << "---------------------------------------------------" << endl;
        }
    }
}
void selling() {
    int x = 3;
    char y;
    cout << "you have " << x << " requests\n";
    cout << "if you want to go to Home page press(n) :\n";
    cout << "if you want to start the auction press(y) :\n";
    cin >> y;
    if (y == 'y') {
        cout << "you :let's start the auction.\n";
        cout << "buyer 1 :okay.\n";
        cout << "buyer 2 : let's go.\n";
        cout << "buyer 3 :why not.\n";
        cout << "you :the start price is :" << s_item.startprice << endl;
        cout << "buyer 2:" << s_item.startprice + 1000 << endl;
        cout << "buyer 1:" << s_item.startprice + 2000 << endl;
        cout << "buyer 2:" << s_item.startprice + 3000 << endl;
        cout << "buyer 3:" << s_item.startprice + 4000 << endl;
        cout << "buyer 1:" << s_item.startprice + 5000 << endl;
        cout << "buyer 2:" << s_item.startprice + 6000 << endl;
        cout << "buyer 3:" << s_item.startprice + 7000 << endl;
        cout << "buyer 2:" << s_item.startprice + 8000 << endl;
        for (int i = 1; i < 4; i++) {
            cout << i << " =>for sale\n";
        }
        cout << "you :it had sold to buyer 2 \n";
        cout << "you to buyer 2 :i will send you email\n ";
        cout << "how many stars you will give to the buyer\n";
        cin >> x;
        cout << "i will give you " << x << " stars" << endl;
        cout << "buyer 2:i will give you 5 stars";
        member.points += 1;
        cout << "enter(n) to Exit\n";
    }
}
void showselling(items& m) {
    char y;
    cout << "----------------- " << m.name << " -------------------------" << endl;
    cout << "name:" << m.name << endl;
    cout << "category:" << m.category << endl;
    cout << "availability:";
    cout << "available" << endl;
    cout << "start price:" << m.startprice << endl;
    cout << "strt date:" << m.startdate << endl;
    cout << "end date:" << m.enddate << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "if you want to go to Home page press(n) :\n";
    cout << "if you want to continue press(y) :\n";
    cin >> y;
    if (y == 'y') {
        selling();
    }
}
void sell_page() {
    char y;
    cout << "enter your itme category :\n";
    cin >> s_item.category;
    cout << "enter your item name :\n";
    cin >> s_item.name;
    cout << "enter your item startprice :\n";
    cin >> s_item.startprice;
    cout << "enter your item start date :\n";
    cin >> s_item.startdate;
    cout << "enter your item end date :\n";
    cin >> s_item.enddate;
    cout << "if you want to go to Home page press(n) :\n";
    cout << "if you want to continue press(y) :\n";
    cin >> y;
    if (y == 'y') {
        showselling(s_item);
    }
}
void request(int& g)
{
    int x;
    char y;
    string v;
    cout << "press (n) to send a request :";
    cin >> y;
    if (y == 'n') {
        cout << "seller:hi there let's begain the auction\n";
        cout << "replay:";
        cin >> v;
        cout << "you :" << v << endl;
        cout << "seller :there start price is :" << item[g].startprice << endl;
        cout << "press (y) to continue :\n";
        cout << "press (n) to go page home:\n";
        cin >> y;
        if (y == 'y') {
            cout << "replay:";
            cin >> v;
            cout << "you :" << v << endl;
            cout << "buyer1 :" << item[g].startprice + 1000 << endl;
            cout << "press (y) to continue :\n";
            cout << "press (n) to go page home:\n";
            cin >> y;
            if (y == 'y') {
                cout << "replay:enter a number";
                cin >> x;
                cout << "you :" << x << endl;
                cout << "buyer2 :" << 500 + x << endl;
                cout << "press (y) to continue :\n";
                cout << "press (n) to go page home:\n";
                cin >> y;
                if (y == 'y') {
                    cout << "replay:enter a number";
                    cin >> x;
                    cout << "you :" << x << endl;
                    cout << "buyer3 :" << 1000 + x << endl;
                    cout << "press (y) to continue :\n";
                    cout << "press (n) to go page home:\n";
                    cin >> y;
                    if (y == 'y') {
                        cout << "replay:enter a number";
                        cin >> x;
                        cout << "you :" << x << endl;
                        for (int i = 1; i < 4; i++) {
                            cout << i << " =>for sale" << endl;
                        }
                        cout << "seller:it sold to " << member.name << endl;;
                        item[g].sold = true;
                        cout << "seller:i will send you email to take the money\n";
                        cout << "seller: i will give you 4 stars\n";
                        x = 4;
                        if (x > 2) {
                            member.points += 1;
                        }
                        cout << "how many stars you will give to the seller: ";
                        cin >> x;
                        cout << "i will give you " << x << " stars" << endl;
                        cout << "press(n) to Exit :";
                        cin >> y;
                    }
                }
            }
        }
    }
}
void enroll(int& x)
{
    for (int i = 1; i < 4; i++)
    {
        if (x == 0)
        {
            cout << "-----------sign in----------\n";
            break;
        }
        else if (x == 1)
        {
            cout << "---------sign up-----------\n";
            break;
        }
        else
        {
            cout << "you have " << 4 - i << "times\n";
            cout << "invalid number try again:";
            cin >> x;
        }
    }
}

void car(int& x) {
    int p;
    if (x == 0) {
        for (int i = 0; i < 3; i++) {
            item[i].category = "car";
        }
        item[0].name = "BMW";
        item[1].name = "ford";
        item[2].name = "ferrari";
        item[0].startprice = 430000;
        item[1].startprice = 640000;
        item[2].startprice = 2000000;
        item[0].startdate = "6/6/2020";
        item[1].startdate = "6/6/2020";
        item[2].startdate = "6/6/2020";
        item[0].enddate = "6/7/2020";
        item[1].enddate = "6/8/2020";
        item[2].enddate = "6/9/2020";
        item[0].sold = false;
        item[1].sold = true;
        item[2].sold = false;
        for (int i = 0; i < 3; i++)
        {
            cout << i << " : " << item[i].name << endl;
        }
        cout << "enter your choice :";
        cin >> p;
        iteminfo(p);
        if (item[p].sold == false) {
            request(p);
        }
        else {
            cout << "the item had been sold\n";
        }
    }
}
void labtop(int& x) {
    int p;
    if (x == 1) {
        for (int i = 0; i < 3; i++) {
            item[i].category = "labtop";
        }
        item[0].name = "Lenovo lab";
        item[1].name = "applelab";
        item[2].name = "hp lab";
        item[0].startprice = 9000;
        item[1].startprice = 15000;
        item[2].startprice = 7000;
        item[0].startdate = "6/6/2020";
        item[1].startdate = "6/6/2020";
        item[2].startdate = "6/6/2020";
        item[0].enddate = "6/7/2020";
        item[1].enddate = "6/8/2020";
        item[2].enddate = "6/9/2020";
        item[0].sold = true;
        item[1].sold = false;
        item[2].sold = false;
        for (int i = 0; i < 3; i++)
        {
            cout << i << " : " << item[i].name << endl;
        }
        cout << "enter your choice :";
        cin >> p;
        iteminfo(p);
        if (item[p].sold == false) {
            request(p);
        }
        else {
            cout << "the item had been sold\n";
        }
    }
}
void TV(int& x) {
    int p;
    if (x == 2) {
        for (int i = 0; i < 3; i++) {
            item[i].category = "TV";
        }
        item[0].name = "Samsung tv";
        item[1].name = "elaraby tv";
        item[2].name = "tornetoo tv";
        item[0].startprice = 4300;
        item[1].startprice = 6400;
        item[2].startprice = 2000;
        item[0].startdate = "6/6/2020";
        item[1].startdate = "6/6/2020";
        item[2].startdate = "6/6/2020";
        item[0].enddate = "6/7/2020";
        item[1].enddate = "6/8/2020";
        item[2].enddate = "6/9/2020";
        item[0].sold = false;
        item[1].sold = false;
        item[2].sold = true;
        for (int i = 0; i < 3; i++)
        {
            cout << i << " : " << item[i].name << endl;
        }
        cout << "enter your choice :";
        cin >> p;
        iteminfo(p);
        if (item[p].sold == false) {
            request(p);
        }
        else {
            cout << "the item had been sold\n";
        }
    }
}
void house(int& x) {
    int p;
    if (x == 3) {
        for (int i = 0; i < 3; i++) {
            item[i].category = "house";
        }
        item[0].name = "house 50m*100m";
        item[1].name = "house 70m*110m";
        item[2].name = "house 90*140";
        item[0].startprice = 7000;
        item[1].startprice = 90000;
        item[2].startprice = 200000;
        item[0].startdate = "6/6/2020";
        item[1].startdate = "6/6/2020";
        item[2].startdate = "6/6/2020";
        item[0].enddate = "6/7/2020";
        item[1].enddate = "6/8/2020";
        item[2].enddate = "6/9/2020";
        item[0].sold = true;
        item[1].sold = false;
        item[2].sold = false;
        for (int i = 0; i < 3; i++)
        {
            cout << i << " : " << item[i].name << endl;
        }
        cout << "enter your choice :";
        cin >> p;
        iteminfo(p);
        if (item[p].sold == false) {
            request(p);
        }
        else {
            cout << "the item had been sold\n";
        }
    }
}
void mobile_phone(int& x) {
    int p;
    if (x == 4)
    {
        for (int i = 0; i < 3; i++) {
            item[i].category = "mobile phone";
        }
        item[0].name = "Huawei";
        item[1].name = "oppo";
        item[2].name = "Redmi";
        item[0].startprice = 4300;
        item[1].startprice = 6400;
        item[2].startprice = 2000;
        item[0].startdate = "6/6/2020";
        item[1].startdate = "6/6/2020";
        item[2].startdate = "6/6/2020";
        item[0].enddate = "6/7/2020";
        item[1].enddate = "6/8/2020";
        item[2].enddate = "6/9/2020";
        item[0].sold = true;
        item[1].sold = false;
        item[2].sold = false;
        for (int i = 0; i < 3; i++)
        {
            cout << i << " : " << item[i].name << endl;
        }
        cout << "enter your choice :";
        cin >> p;
        iteminfo(p);
        if (item[p].sold == false) {
            request(p);
        }
        else {
            cout << "the item had been sold\n";
        }
    }
}
void showitem() {
    char y;
    string category[5] = { "car","labtop","TV","house","mobile phone" };
    cout << "---------------------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << i << " : " << category[i] << endl;
    }
    cout << "if you want to go to Home page press(n) :\n";
    cout << "if you want to continue press(y) :\n";
    cin >> y;
    if (y == 'y') {
        cout << "chose what you want to buy:";
        int x;
        cin >> x;
        for (int c = 0; c < 5; c++)
        {
            if (x == c) {
                cout << "------------------- " << category[x] << "------------" << endl;
                car(x);
                labtop(x);
                TV(x);
                house(x);
                mobile_phone(x);
            }
        }
    }
}
void sell_buy(members& m) {
    int y;
    cout << "enter (1) to sell:\n";
    cout << "enter (2) to buy:\n";
    cin >> y;
    for (int i = 1; i < 4; i++) {
        if (y == 1) {
            m.seller = true;
            m.buyer = false;
            break;
        }
        else if (y == 2) {
            m.seller = false;
            m.buyer = true;
            break;
        }
        else {
            cout << "you have " << 4 - i << " times" << endl;
            cout << "invalid number try again" << endl;
            cin >> y;
        }
    }
}
void buyorsell(members& m) {
    sell_buy(m);
    if (m.buyer) {
        showitem();
    }
    else {
        sell_page();
    }
}
void memberinfo(char& y, members& m)
{
    if (y == 'm')
    {
        char v;
        cout << "-------------- MEMBER informatin -----------------" << endl;
        cout << "member ID is:" << m.ID << endl;
        cout << "name:" << m.name << endl;
        cout << "delivary address:" << m.address << endl;
        cout << "E-mail:" << m.email << endl;
        cout << "Phone number:" << m.phonenumber << endl;
        cout << "your points:" << m.points << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "if you want to see item report press(a)" << endl;
        cout << "if you want to buy or sell press any key" << endl;
        cin >> v;
        if (v == 'a') {
            itemreport(v);
        }
        else {
            buyorsell(m);
        }
    }
}
void sign_in(int& x, char& y, members& m)
{
    if (x == 0)
    {
        cout << "enter your email :";
        cin >> m.email;
        cout << "enter your password :";
        cin >> m.password;
        cout << "press m to continue :";
        cin >> y;
        memberinfo(y, m);
    }
}
void sign_up(char& y, members& m)
{
    int x;
    cin >> x;
    enroll(x);
    if (x == 0) {
        sign_in(x, y, m);
    }
    else if (x == 1)
    {
        cout << "member ID :" << m.ID << endl;
        cout << "enter your name :";
        cin >> m.name;
        cout << "enter your delivery address :";
        cin >> m.address;
        cout << "enter your email (@gmail.com) :";
        cin >> m.email;
        cout << "enter your password :";
        cin >> m.password1;
        cout << "confirm password :";
        cin >> m.password2;
        for (int j = 1; j < 4; j++)
        {
            if (m.password2 == m.password1)
            {
                cout << "your password saved" << endl;
                break;
            }
            else
            {
                cout << "you have " << 4 - j << " times" << endl;
                cout << "your confirmation password doesn't correct try again :";
                cin >> m.password2;
            }

        }
        cout << "enter your phone number :";
        cin >> m.phonenumber;
        cout << "press m to continue : ";
        cin >> y;
        memberinfo(y, m);
    }
}

int main()
{

    char y;
    char enter;
    member1();
    cout << "-------welcom to online auction system-----\n";
    cout << "enter (0) to sign in:\n";
    cout << "enter (1) to sign up:\n";
    sign_up(enter, member);
    while (true)
    {
        cout << "press (m)to go to Home page\n";
        cin >> y;
        memberinfo(y, member);
    }
    return 0;
}
