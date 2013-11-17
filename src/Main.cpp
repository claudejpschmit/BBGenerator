#include "SongDatabase.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <sys/time.h>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream input("test.txt");
    BBGENERATOR::Database database(&input);
    input.close();

    //Initializing Random Number Generator
    timeval tv;
    gettimeofday(&tv, NULL);
    boost::mt19937 rng;
    boost::random::uniform_int_distribution<> dist(1,database.getListLength());
    rng.seed(1000000 * tv.tv_sec + tv.tv_usec);
     //access like: database.getLine(dist(rng) - 1)

    return 0;
}
