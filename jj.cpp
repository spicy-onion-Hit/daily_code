#include <iostream>
using namespace std;
#define REP(i, n)  for(int i = 0; i < n; i++)
#define T double
#define PTT pair<T,T>
#define fir first
#define se second
class Singleton{
private:
    static Singleton* instance;
    Singleton(){};
public:
    static Singleton* create(){
        instance = new Singleton();
        return instance;
    }


};

int main(){
    Singleton* c = Singleton.create();
    
   // a.show();

    system("pause");
}