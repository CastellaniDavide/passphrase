/*
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// input data
int N, K;
string passphrase;

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input0.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    cin >> N >> K;
    cin >> passphrase;

    // insert your code here
    for(int j = 0; j < K; j++)
    {
        for(int i = 0; i < passphrase.length(); i++)
        {
            if(passphrase.at(i) < passphrase.at(i + 1))
            {
                passphrase.erase(passphrase.begin() + i);
                break;
            }
            if(i = passphrase.length() -1)
            {
                passphrase.erase(passphrase.length() - K);
                cout << passphrase << endl;
                return 0;
            }
        }
    }

    cout << passphrase << endl; // print the result
    return 0;
}
