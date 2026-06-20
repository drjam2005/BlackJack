cmake_minimum_required(VERSION 3.28)
project(BlackJack)

set(exec BlackJack)
set(src
	src/main.cpp
	src/card.cpp
	src/renderer.cpp
	src/updater.cpp
	src/game.cpp
)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_STANDARD 20)

add_executable(${exec} ${src})
target_include_directories(${exec} PUBLIC
	${CMAKE_SOURCE_DIR}/include
)

target_compile_options(${exec}
	PUBLIC -Wno-enum-compare
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
