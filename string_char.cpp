#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "qwertyui";
	printf("%s\n",s.c_str());				//printf %s 不能直接输出一个string，因为%s对应的是一个string的首地址。
	cout << "string number two char is: " <<s[2] << endl;			//string 本身就可以直接用序号访问。
	char* c;
	int s_len = s.length();
	cout << "string length - 1 unit is : " << s[s_len - 1] <<endl;

	c = (char*)malloc((s_len + 1) * sizeof(char));					//因为定义的时候是一个*c 指针，没有申请内存，所以不这么写出错了
	//c = s.c_str();						//c_str()返回的是一个临时指针，不能对其进行操作
	const char* c_const = s.c_str();
	cout << "const char is :" << c_const <<endl;
	printf("const char adress is : %p\n",&c_const);				   //没错，他就是个地址。
	//strcpy(c,s.c_str());											//两种copy都好使
	s.copy(c,s_len,0);
	printf("char array is %s\n",c);			

	char c_str[5] = "zxcv";
	string c_to_string(c_str,5);
	cout << "c_to_string is " <<c_to_string << endl;
	return 0;
}