#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "include/dirent.h" 

using namespace std;

class FileManager {

public:



    vector<string> getFiles(string path);

};