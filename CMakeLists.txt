cmake_minimum_required(VERSION 3.28)
project(BlackJack)

set(exec BlackJack)
set(src
	src/main.cpp
	src/card.cpp
)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

add_executable(${exec} ${src})
target_include_directories(${exec} PUBLIC
	${CMAKE_SOURCE_DIR}/include
)

if(UNIX)
	target_include_directories(${exec} PUBLIC
		${CMAKE_SOURCE_DIR}/vendor/raylib/unix/include
	)
	target_link_directories(${exec} PUBLIC
		${CMAKE_SOURCE_DIR}/vendor/raylib/unix/lib
	)

	target_link_libraries(${exec} PUBLIC
		libraylib.a
		X11
	)
elseif(WIN32)
	target_include_directories(${exec} PUBLIC
		${CMAKE_SOURCE_DIR}/vendor/raylib/windows/include
	)
	target_link_directories(${exec} PUBLIC
		${CMAKE_SOURCE_DIR}/vendor/raylib/windows/lib
	)

	target_link_libraries(${exec} PUBLIC
		libraylib.a
		gdi32
		winmm
	)
endif()
