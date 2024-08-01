CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(test/googletest)


ADD_EXECUTABLE(main
    src/main.cpp
    src/Book.cpp
    src/Media.cpp
    src/Movie.cpp
    src/Show.cpp
    src/StackMaker.cpp
    src/SearchClass.cpp
    src/Data.cpp
    

)


ADD_EXECUTABLE(runAllTest
    src/Book.cpp
    src/Media.cpp
    src/Movie.cpp
    src/Show.cpp
    src/StackMaker.cpp
    src/testMedia.cpp
    test/runAllTests.cpp
    src/SearchClass.cpp
    src/Data.cpp
)

TARGET_LINK_LIBRARIES(runAllTest gtest)
TARGET_COMPILE_DEFINITIONS(runAllTest PRIVATE gtest_disable_pthreads=ON)