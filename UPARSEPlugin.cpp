#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "UPARSEPlugin.h"

void UPARSEPlugin::input(std::string file) {
 inputfile = file;
}

void UPARSEPlugin::run() {}

void UPARSEPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "usearch -cluster_otus ";
myCommand += inputfile;
myCommand += " -otus ";
myCommand += outputfile+".fa";
myCommand += " -uparseout ";
myCommand += outputfile+".txt";
myCommand += " -relabel Otu";
std::cout<<myCommand<<std::endl;
 system(myCommand.c_str());
}

PluginProxy<UPARSEPlugin> UPARSEPluginProxy = PluginProxy<UPARSEPlugin>("UPARSE", PluginManager::getInstance());
