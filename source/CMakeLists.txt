include_directories(${CMAKE_CURRENT_SOURCE_DIR})

if(NOT DEFINED WONDER_LIBRARIES)
  message(FATAL_ERROR "Please compile using the repo's root CMakeLists.txt")
endif()

add_executable(${EXE_NAME}
  CommandSystem.cpp
  Game.cpp
  Main.cpp
  StringUtil.cpp
  SuperString.cpp
  Renderer.cpp
  Command.cpp
  Item.cpp
  World.cpp
  Room.cpp
  WalkCommand.cpp
  InputDriver.cpp
)

target_compile_definitions(${EXE_NAME} PUBLIC ${RADIX_DEFINITIONS})
target_link_libraries(${EXE_NAME} ${WONDER_LIBRARIES})
install(TARGETS ${EXE_NAME} DESTINATION bin)
add_custom_target(run COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${EXE_NAME}${CMAKE_EXECUTABLE_SUFFIX} DEPENDS ${EXE_NAME})
add_custom_target(debug COMMAND gdb --args ${CMAKE_CURRENT_BINARY_DIR}/${EXE_NAME}${CMAKE_EXECUTABLE_SUFFIX} DEPENDS ${EXE_NAME})
#depends on package similarity-tester
add_custom_target(cpd COMMAND sim_c -f -F ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
