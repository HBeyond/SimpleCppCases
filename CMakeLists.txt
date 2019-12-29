cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 14)
project(SimpleCases)

# cmake modules
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)


###############################################################################
# Libraries
###############################################################################
find_package(Gflags REQUIRED)                                   # gflags
find_package(Glog REQUIRED)                                     # glog
#find_package(Boost COMPONENTS filesystem date_time REQUIRED)    # boost
#find_package(Eigen3 REQUIRED)                                   # Eigen
#find_package(OpenCV 3 REQUIRED)                                 # OpenCV

# public and prive dependency include directories
list(APPEND DEPEND_INCLUDES
        ${GFLAGS_INCLUDE_DIRS}
        ${Boost_INCLUDE_DIRS}
        ${GLOG_INCLUDE_DIRS}
        )

# public and private dependency libraries
list(APPEND DEPEND_LIBS
        glog gflags
        )

include_directories(
        ${GFLAGS_INCLUDE_DIRS}
        ${GLOG_INCLUDE_DIRS}
#        ${EIGEN3_INCLUDE_DIRS}
#        ${Boost_INCLUDE_DIRS}
#        ${OpenCV_INCLUDE_DIRS}
)


###############################################################################
# Project Setting
###############################################################################
#default built type
IF (NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE RELEASE)
ENDIF ()
message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")

# build setting
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

###############################################################################
# Application
###############################################################################
# feaext lib
#set(PRJ_LIB fexext)

add_subdirectory(forfor)
add_subdirectory(mainArguments)
add_subdirectory(main_test)
add_subdirectory(stringFind)
add_subdirectory(coutTable)
add_subdirectory(vectorVariance)
add_subdirectory(argv_test)
add_subdirectory(map_test)
add_subdirectory(read_write_txt)
add_subdirectory(checkStringIsNumber)
add_subdirectory(stringToNumber)
add_subdirectory(timestamp_ms_level)
add_subdirectory(AfterLogError)
add_subdirectory(forSelf--)

