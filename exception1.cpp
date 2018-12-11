#include <iostream>

using namespace std;

int mightgowrong() {
    throw string("Strange way of defining string class");
    
    return 0;
}

int main()
{
    cout<<"Hello World\n";
    
    try {
        mightgowrong();
    }
    catch (int e) {
        cout<<"Error COde"<< e<<endl;
    }
    
    catch (string &e) {
        cout<<"String Error Msg:"<< e << endl;
    }
    
    cout<<"Still Running\n";
    return 0;
}
