#include <iostream>
using namespace std;
template <typename T,typename U>
//this template will work with many data types
//if you need more options add more typenames

//this lets you have any data type
//you can use the typename to add various datatypes so that way it can accept up to that many data types
//auto keyword wiull determine what type to return
//you can have it return type t or u but whatever you pass to t or u will be that type
auto max(T x, U y){
    return( x > y) ? x : y;
}
int main(){
    //describe what a funcion looks like
    //helps with overrides
    cout << max(1,2) << "\n";
    cout << max(5.5,7.8)<< "\n";
    cout << max(5,6.1)<<"\n";
    cout << max('A',2);
    return 0;
}