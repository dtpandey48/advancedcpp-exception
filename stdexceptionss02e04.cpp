#include <iostream>

using namespace std;

class CanGoWrong{
    public:
        CanGoWrong(){
            char *pMemory = new char[999999999999999999];
            delete[] pMemory;
        }
};


int main()
{
    cout<<"Hello World\n";
    
    try {
        CanGoWrong wrong;
    }
    catch (std::bad_alloc &e) {
        cout<<"Caught Exception:"<< e.what()<<endl;
    }
    
    catch (string &e) {
        cout<<"String Error Msg:"<< e << endl;
    }
    
    cout<<"Still Running\n";
    return 0;
}
