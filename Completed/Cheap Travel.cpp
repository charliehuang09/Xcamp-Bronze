//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int number_of_trips, special_ticket_rides, one_ticket_price, special_ticket_price;
//    cin >> number_of_trips >> special_ticket_rides >> one_ticket_price >> special_ticket_price;
//    int output = 2147483647;
//    output = min(output, number_of_trips * one_ticket_price);
//    int small_ticket = number_of_trips % special_ticket_rides;
//    number_of_trips -= number_of_trips % special_ticket_rides;
//    int big_tickets = number_of_trips / special_ticket_rides;
//    output = min(output, (small_ticket * one_ticket_price) + (big_tickets * special_ticket_price));
//    output = min(output, ((number_of_trips / special_ticket_rides) + 1) * special_ticket_price);
//    cout << output;
//}