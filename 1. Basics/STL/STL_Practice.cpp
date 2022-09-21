#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int,int> p1, pair <int,int> p2){
    if(p1.second < p2.second){
        return true;
    }else if(p1.second > p2.second){
        return false;
    }else{
        if(p1.first > p2.first){
            return true;
        }else{
            return false;
        }
    }
}

int main(){

    // Pair in c++

    pair <int, int> p = {2,3};
    cout << "First value in pair: "  << p.first << endl;
    cout << "Second value in pair: "  << p.second << endl;

    // Vector in c++

    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << "First Value: " << v[0] << " Second Value: " << v[1] << endl;
    
    vector <int> v1(5, 10);
    cout << "Values in second vector are: " << endl;
    for(auto i:v1){
        cout << i << ", ";
    }
    cout << endl;

    vector <int> v2(v1);
    v2.push_back(15);
    v2.push_back(22);
    v2.push_back(5);
    v2.push_back(7);
    cout << "Values in third vector are: " << endl;
    vector<int>::iterator it1 = v2.begin();
    for(int i=0;i<v2.size();i++,it1++){
        cout << *(it1) << ", ";
    }
    cout << endl;

    cout << "Second way to print values: " << endl;
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++){   // alternatively we can use 'auto' keyword in place of vector<int>::iterator
        cout<< *(it) << " ,";
    }
    cout << endl;

    v2.erase(v2.begin() + 1); // deleting second value

    cout << "Printing third vector after deleting value at first index" << endl;
    for(auto it=v2.begin();it!=v2.end();it++){
        cout << *(it) << " ,";
    }
    cout << endl;

    v2.erase(v2.begin(), v2.begin()+4); // deleting first four values
    cout << "Printing third vector after deleting values at 0,1,2,3 index" << endl;
    for(auto it=v2.begin();it!=v2.end();it++){
        cout << *(it) << " ,";
    }
    cout << endl;

    cout << "Size of Third vector: " << v2.size() << endl;
    
    v2.pop_back(); 
    cout << "Pop Back in third vector: " << endl;
    for(auto i: v2){
        cout << i << ", ";
    }
    cout << endl;

    v2.insert(v2.begin()+2, 81);  
    cout << "Inserting value = 81 at index 2 in third vector: " << endl;
    for(auto i: v2){
        cout << i << ", ";
    }
    cout << endl;


    v2.insert(v2.begin()+1, 3, 18);  
    cout << "Inserting 3 times value = 18 from index=1 in third vector: " << endl;
    for(auto i: v2){
        cout << i << ", ";
    }
    cout << endl;


    // List in c++   

    list <int> l;
    l.push_back(18);
    l.push_back(14);
    l.push_front(12);           // push_front() supported in list but not in vector
    l.push_front(21);

    cout << "Values in list: " << endl;
    for(auto i:l){
        cout <<  i << ", ";
    }
    cout << endl;


    // Stack in c++

    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();            // deletes '4'
    
    cout << "Top value at stack: " << s.top() << endl;

    
    // Queue in c++

    queue <int> q;
    q.push(10);
    q.push(20);
    q.pop();            // deletes '10'
    q.push(30);

    cout << "Front value in queue: " << q.front() << endl;
    cout << "Back value in queue: " << q.back() << endl;


    // Priority Queue in c++

    priority_queue <int> pq;            // max heap
    pq.push(7);
    pq.push(5);
    pq.push(9);
    pq.push(2);
    pq.push(10);
    pq.push(6);

    cout << "Top value in priority queue 1: " << pq.top() << endl;
    
    pq.pop();

    cout << "Top value in priority queue 1 after pop: " << pq.top() << endl;

    priority_queue <int, vector<int>, greater<int>> pq1 ;               // min heap
    pq1.push(5);
    pq1.push(7);
    pq1.push(2);
    pq1.push(6);
    pq1.push(1);

    cout << "Top value in priority queue 2: " << pq1.top() << endl;
    
    pq1.pop();

    cout << "Top value in priority queue after pop: " << pq1.top() << endl;


    // Set in c++   (stores values in sorted order and only stores unique values)

    set <int> st;
    st.insert(1);
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(2);
    st.insert(4);       

    cout << "Values in set: " << endl;
    for(auto v: st){
        cout << v << ", ";
    }
    cout << endl;

    auto itr =  st.find(3);

    st.erase(itr);

    cout << "Values in set after deleting 3: " << endl;
    for(auto v: st){
        cout << v << ", ";
    }
    cout << endl;

    // Multi set in c++ (stores value in sorted order and values can repeat)

    multiset <int> ms;
    ms.insert(4);
    ms.insert(2);
    ms.insert(5);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    cout << "Values in multiset: " << endl;
    for(auto v: ms){
        cout << v << ", ";
    }
    cout << endl;

    auto iter =  ms.find(4);

    ms.erase(iter);

    cout << "Values in multiset after deleting 4: " << endl;
    for(auto v: ms){
        cout << v << ", ";
    }
    cout << endl;

    cout << "Count of value = 2 in multiset: " << ms.count(2) << endl;


    // Unordered set in c++ (stores value in random order and values are unique)

    unordered_set <int> us;
    us.insert(1);
    us.insert(6);
    us.insert(0);
    us.insert(4);
    us.insert(5);
    us.insert(2);
    us.insert(2);

    cout << "Values in unordered set: " << endl;
    for(auto v: us){
        cout << v << ", ";
    }
    cout << endl;  


    // Map in c++

    map <char, string> mp;
    mp['A'] = "Akshat";
    mp['B'] = "John";

    cout << "Value in map at key = 'A' is: " << mp['A'] << endl;
    cout << "Value in map at key = 'B' is: " << mp['B'] << endl;


    // Important Algortihms  in c++

    vector <int> temp;
    temp.push_back(3);
    temp.push_back(4);
    temp.push_back(1);
    temp.push_back(5);
    temp.push_back(2);

    cout << "Values before sorting: " << endl;
    for(auto i: temp){
        cout << i << ", ";
    }
    cout << endl;

    sort(temp.begin(),temp.end());  // Ascending order
    cout << "Values after sorting in ascending order: " << endl;
    for(auto i: temp){
        cout << i << ", ";
    }
    cout << endl;

    sort(temp.begin(),temp.end(), greater<int>());  // Descending order
    cout << "Values after sorting in descending order: " << endl;
    for(auto i: temp){
        cout << i << ", ";
    }
    cout << endl;

    vector <pair <int, int>> arr ={{1,3},{1,2},{2,4},{2,2},{3,4}};

    cout << "Values in array before custom sort: " << endl;
    for(auto p: arr){
        cout << "{" <<  p.first << " and " << p.second << "}, ";
    }
    cout << endl;

    sort(arr.begin(),arr.end(), comp);

    cout << "Values in array after custom sort: " << endl;
    for(auto p: arr){
        cout << "{" <<  p.first << " and " << p.second << "}, ";
    }
    cout << endl;


    // __builtin_popcount and __builtin_popcountll  in c++    (return number of set bits in a number)

    int num1 = 7;
    cout << "Set Bits in Integer " << num1 << " are: " << __builtin_popcount(num1) << endl;

    long long num2 = 1793319957101;
    cout << "Set Bits in Long Long " << num2 << " are: " << __builtin_popcountll(num2) << endl;


    // next_permutation in c++ (return next ordering of given value)

    string t = "213";
    sort(t.begin(),t.end());

    cout << "The value " << t << " can be written as: " << endl; 
    do{
        cout << t << ", ";
    }while(next_permutation(t.begin(),t.end()));
    cout << endl;

    // max_element and min_element in c++ (returns iterator to maximum and minimum value)

    vector <int> values;
    values.push_back(5);
    values.push_back(1);
    values.push_back(3);
    values.push_back(2);
    values.push_back(0);
    values.push_back(7);
    values.push_back(6);

    cout << "Max value in vector is: " << *(max_element(values.begin(),values.end())) << endl;
    cout << "Min value in vector is: " << *(min_element(values.begin(),values.end())) << endl;

    return 0;

}