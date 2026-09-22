cmake_minimum_required(VERSION 4.3)
project(1437)

set(CMAKE_CXX_STANDARD 20)


add_library(1437 STATIC
        utils.h
        structDemos.h
        structDemos.cpp
        readDictionary.cpp
        readDictionary.h
        BigFoot.cpp
        BigFoot.h
        InventoryItem.cpp
        InventoryItem.h
        RNGWrapper.cpp
        RNGWrapper.h
        ImageBMP.cpp
        ImageBMP.h
        demos.h
        CustomerOrder.cpp
        CustomerOrder.h
)

target_include_directories(1437 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#add_executable(1437 main.cpp
#        utils.h
#        structDemos.h
#        structDemos.cpp
#        readDictionary.cpp
#        readDictionary.h
#        BigFoot.cpp
#        BigFoot.h
#        InventoryItem.cpp
#        InventoryItem.h
#        RNGWrapper.cpp
#        RNGWrapper.h
#        ImageBMP.cpp
#        ImageBMP.h
#        demos.h
#        CustomerOrder.cpp
#        CustomerOrder.h
#)
