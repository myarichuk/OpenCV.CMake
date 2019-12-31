cmake_minimum_required (VERSION 3.14)

set(BUILD_SHARED_LIBS OFF)
find_package(OpenCV REQUIRED)
add_executable (OpenCVCMake "OpenCV.CMake.cpp")

message("include => ${OpenCV_INCLUDE_DIRS}")
message("link => ${OpenCV_LIBS}")
target_include_directories(OpenCVCMake PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCVCMake PRIVATE ${OpenCV_LIBS})
