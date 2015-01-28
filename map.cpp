#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
//rb_map
	map<int,string> hash_map;
	//three type insert
	hash_map.insert(pair<int,string>(13,"thirteen"));
	hash_map.insert(map<int,string>::value_type(15,"fifteen"));
	hash_map[8] = "eight";
	//遍历
	map<int,string>::iterator iter;
	for(iter = hash_map.begin(); iter != hash_map.end(); iter++){
		//cout << "* iterator: " << *iter << endl;            //会报错！！type不对
		cout << "key: " << iter->first << " value: " << iter->second <<endl;
	}
	//size
	cout << "this hash_map size is: " << hash_map.size() <<endl;
	//find
	map<int, string>::iterator find_iter;
	find_iter = hash_map.find(15);
	if(find_iter != hash_map.end()){
		cout << "find this key in hash, and key is: " <<find_iter -> first << " value: " << find_iter -> second <<endl;
	}
//undered map
	unordered_map<int,string> unorder_map;
	//three type insert
	unorder_map.insert(pair<int,string>(24,"forteen"));
	unorder_map.insert(map<int,string>::value_type(1,"one"));
	unorder_map[9] = "nine";
	//遍历
	unordered_map<int, string>::iterator unorder_iter;
	for(unorder_iter = unorder_map.begin(); unorder_iter != unorder_map.end(); unorder_iter++){
		cout << "key: " << unorder_iter->first << " value: " << unorder_iter->second <<endl;
	}
	//size
	cout << "this unorder_map size is: " << unorder_map.size() <<endl;
	//find
	unordered_map<int, string>::iterator unorder_find_iter;
	unorder_find_iter = unorder_map.find(9);
	if(unorder_find_iter != unorder_map.end()){
		cout << "find this key in hash, and key is: " <<unorder_find_iter -> first << " value: " << unorder_find_iter -> second <<endl;
	}
	else
		cout << "did not find" << endl; 


	return 0;
}