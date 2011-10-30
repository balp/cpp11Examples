
project(c+11examples)

set(CMAKE_CXX_FLAGS "-g -std=c++0x -pthread")

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

add_executable(nullptr
	nullptr.cpp
)

add_executable(delegate
	nullptr.cpp
)

add_executable(move
	move.cpp
)

add_executable(thread
	thread.cpp
)
target_link_libraries(thread
  pthread
)
