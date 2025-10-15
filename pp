#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string offc = "Hello\nI am\nRenish";
    istringstream ff(offc);
    string word;
    int count=0;
    char ch;

    while( fin >> word) {
        count++;
    }

    cout << "File content:\n"<<offc<<endl;
    cout <<"Number of words:" << count<<endl;

    return 0;
}
