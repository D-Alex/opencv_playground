find_package(PkgConfig REQUIRED)
pkg_check_modules(OPENCV opencv REQUIRED)

include_directories(SYSTEM ${OPENCV_INCLUDE_DIRS})
link_directories(${OPENCV_LIBRARY_DIRS})
add_definitions(${OPENCV_CFLAGS_OTHER})

add_executable(opencv-playground main.cpp)
target_link_libraries(opencv-playground ${OPENCV_LIBRARIES})
