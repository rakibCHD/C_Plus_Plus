#include <cstdlib>
#include <iostream>


using namespace std;

int main() {

    string batchFilePath = "\"C:\\Users\\My PC\\Desktop\\SystemInfo.bat\"";

    int result = system(batchFilePath.c_str());

    if (result == 0)
        cout << "Batch file executed successfully!" << endl;
    else
        cout << "Failed to execute the batch file." << endl;

    return 0;
}
