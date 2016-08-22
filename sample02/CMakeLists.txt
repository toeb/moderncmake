project(sample)




add_executable(sampleExecutable
	src/main.cpp
	src/make_greeting.cpp
	)

target_include_directories(sampleExecutable PUBLIC headers)


