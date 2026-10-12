cmake_minimum_required(VERSION 3.20)
project(CPP-Advanced)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/0*/Ex*/*.cpp")

foreach (src ${SOURCES})
    file(RELATIVE_PATH rel "${CMAKE_SOURCE_DIR}" "${src}")
    string(REPLACE "/" "_" target "${rel}")
    string(REPLACE ".cpp" "" target "${target}")
    string(REPLACE "-" "_" target "${target}")
    add_executable(${target} ${src})

    # Every tests/<name>.in next to an exercise becomes one test, expected output in <name>.out
    get_filename_component(dir "${src}" DIRECTORY)
    file(GLOB inputs CONFIGURE_DEPENDS "${dir}/tests/*.in")
    foreach (input ${inputs})
        get_filename_component(case "${input}" NAME_WE)
        add_test(NAME ${target}.${case}
                COMMAND ${CMAKE_COMMAND}
                -DEXE=$<TARGET_FILE:${target}>
                -DINPUT=${input}
                -DEXPECTED=${dir}/tests/${case}.out
                -P ${CMAKE_SOURCE_DIR}/cmake/RunTest.cmake)
    endforeach ()
endforeach ()
