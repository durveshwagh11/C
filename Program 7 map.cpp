#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
typedef map<string,int> mapType;
mapType populationMap;
populationMap.insert(pair<string, int>("China", 1339));
populationMap.insert(pair<string, int>("India", 1187));
populationMap.insert(mapType::value_type("US", 310));
populationMap.insert(mapType::value_type("Indonesia", 234));
populationMap.insert(make_pair("Brasil", 193));
populationMap.insert(make_pair("Pakistan", 170));
mapType::iterator iter;
cout << "Size of populationMap: " << populationMap.size() << '\n';
string country_name;
cout<<"Enter name of the country\n";
cin>>country_name;
iter = populationMap.find(country_name);
if( iter != populationMap.end() )
cout << country_name <<"'s populations is "
<< iter->second << " million\n";
else
cout << "Key is not in populationMap" << '\n';
populationMap.clear();
}



