
project(c+11examples)

set(CMAKE_CXX_FLAGS "-std=c++0x")

add_executable(lambda
	lambda.cpp
)

add_executable(auto
	auto.cpp
)

add_executable(initializer
	initializer.cpp
)

add_executable(default
	default.cpp
)
