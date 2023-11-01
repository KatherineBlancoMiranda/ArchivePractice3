#include "filemanager.h"

vector<string> FileManager::getFiles(string path)
{
    DIR* directory;

    struct dirent* diread;

    vector<string> toReturn;

    if ((directory = opendir(path.c_str())) != nullptr) {

        while ((diread = readdir(directory)) != nullptr) {


            if (diread->d_type != DT_DIR) {

                toReturn.push_back(diread->d_name);

            }

        }

        closedir(directory);

    }

    else {

        cout << "Not found" << endl;

    }

    return toReturn;

}

