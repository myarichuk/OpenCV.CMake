
cmake_minimum_required (VERSION 3.13)
project ("OpenCV CMake Reference Sample")

include(cmake/build_external_project.cmake)
build_external_project(
	opencv 
	${CMAKE_CURRENT_BINARY_DIR}/external 
	https://github.com/opencv/opencv.git 
	master
        -DBUILD_opencv_core=ON
        -DBUILD_opencv_highgui=ON
        -DBUILD_opencv_imgproc=ON
        -DBUILD_opencv_contrib=ON
        -DBUILD_DOCS:BOOL=FALSE
        -DBUILD_EXAMPLES:BOOL=FALSE
        -DBUILD_TESTS:BOOL=FALSE
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS:BOOL=FALSE
        -DBUILD_NEW_PYTHON_SUPPORT:BOOL=OFF
        -DBUILD_WITH_DEBUG_INFO=OFF
        -DWITH_CUDA:BOOL=FALSE
        -DWITH_FFMPEG:BOOL=FALSE
        -DWITH_MSMF:BOOL=FALSE
        -DWITH_IPP:BOOL=FALSE
        -DBUILD_PERF_TESTS:BOOL=FALSE
        -DBUILD_PNG:BOOL=ON
        -DBUILD_JPEG:BOOL=ON
        -DBUILD_WITH_STATIC_CRT:BOOL=OFF
        -DBUILD_FAT_JAVA_LIB=OFF
	    -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/opencv
	)





add_subdirectory ("OpenCV.CMake")
