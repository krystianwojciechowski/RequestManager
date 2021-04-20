//
// Created by krystian on 20.04.2021.
//

#ifndef REQUESTMANAGER_CONFIG_H
#define REQUESTMANAGER_CONFIG_H


#include <string>

class Config {
protected:
    static inline Config*  config;
    Config();
    const static inline std::string path_to_config = std::string("./config");
    const static inline std::string delimiter = "=";
    void split(const std::string* string,std::string* ptr);
    void split(const std::string* string,const std::string* delimiter,std::string* ptr);
public:
    std::string read_property(const std::string* property_name);
    void write_property(const std::string* property_name,const std::string* property_value);
    static Config* get_instance();
    Config(Config &clone) = delete;
    void operator=(const Config&) = delete;

};


#endif //REQUESTMANAGER_CONFIG_H
