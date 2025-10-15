#include<iostream>
using namespace std;
class Box{
	private:
		int length;
	public:
		Box(){
			length=10;
			}
			friend void displayLength(Box b);
};
void displayLength(Box b){
	cout<<"Length is:"<<b.length<<endl;
}
int main(){
	Box bl;
	displayLength(bl);
	return 0;
}
