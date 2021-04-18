//
// Created by krystian on 18.04.2021.
//

#ifndef REQUESTMANAGER_FILECACHEMANAGER_H
#define REQUESTMANAGER_FILECACHEMANAGER_H


#include <string>

class FileCacheManager {
private:
    std::string path_to_cache;
public:
    std::string read(std::string filename);
    std::string read(std::string filename,unsigned chunk_size);
};


#endif //REQUESTMANAGER_FILECACHEMANAGER_H
