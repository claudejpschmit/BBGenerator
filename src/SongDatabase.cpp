#include "SongDatabase.hpp"

namespace BBGENERATOR { 
    using namespace std;

    Database::Database(ifstream *input) 
    {
        string line;
        while (getline(*input, line)) {
            database.push_back(line);
        }

    }

    Database::~Database() 
    {

    }

    string Database::getLine(int number)
    {
        return database[number];
    }

    int Database::getListLength()
    {
        return database.size();
    }
}
