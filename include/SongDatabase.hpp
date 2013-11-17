#include <iostream>
#include <fstream>
#include <string>
#include <vector>

namespace BBGENERATOR {
    
    using namespace std;

    class Database {
    public:
        Database(ifstream *input);
        ~Database();
        
        string getLine(int number); 
        int getListLength();

    private:
        vector<string> database;
    };

  }
