#include <iostream>
#include <fstream> //for file input and output
#include <string>// for string input

using namespace std;

int main()
{
/*writing to a flie. output.txt file will be created in the directory of this source file */

ofstream outFile("output.txt");
outfile <<"writing to a file." <<end 1;
outfile.close();

//reading from a file
ifstream inFile ("output.txt");
string content;
while (std::getline(inFile ,content))
{
    cout << content <<end1;
}
inFile.close();// close the file after reading its contents

return 0;

}