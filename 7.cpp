# include <iostream>
using namespace std;
class Dell {
    public:
    Dell (){  // Remember very very imp  is that this is a constructor and it should be capital with first letter and as should be same as the name of class.
        cout<<"hello world";  //ani ho constructor la compulsary bracket lagtach baba.
    }
};
int main(){
    Dell obj ; //creating an object. it will be call automaticlly to the constructor.
    return 0;
}