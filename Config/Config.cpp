//
// Created by krystian on 20.04.2021.
//

#include <fstream>
#include "Config.h"

Config *Config::get_instance() {
    if(config  == nullptr){
        config = new Config();
    }

    return config;
}

std::string Config::read_property(const std::string *property_name) {
     std::fstream file;
     file.open(this->path_to_config,std::ios::in);
     std::string* line;
     std::string* split;
     while(getline(file,*line)){
         this->split(line,split);
         if(split != nullptr){
             break;
         }
     }

     file.close();
     //config structure will be similar to .env
     return split != nullptr ? split[1] : "";
}

void Config::split(const std::string *string,std::string* ptr) {
   this->split(string,&this->delimiter,ptr);
}

void Config::split(const std::string *string, const std::string *delimiter,std::string* ptr) {
    std::string array[1];
    std::string* temp_ptr = array;
    size_t position,last_position=0;
    int count=0;
    while((position = string->find(*delimiter))!=std::string::npos);
     {
        std::string found = string->substr(last_position,position);
        last_position = position + delimiter->length();
        unsigned size = count*sizeof(std::string);
        std::string* temp = (std::string*)malloc(size);
        std::copy(temp,temp+size,temp);
        temp_ptr = temp;
        temp = nullptr;
        count++;
    }


    if(count<1){
        //delimiter was not found,there is nothing to split
        ptr = nullptr;
    } else {
        ptr = temp_ptr;
    }
}

void Config::write_property(const std::string *property_name, const std::string *property_value) {
    std::fstream file;
    file.open(this->path_to_config,std::ios::app);
    file<<*property_name<<"="<<*property_value<<"/n";
}

Config::Config() = default;
