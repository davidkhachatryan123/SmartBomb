# CMakeList.txt : CMake project for SmartBomb, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Add source to this project's executable.
add_executable (SmartBomb "SmartBomb.cpp" "SmartBomb.h"
"BombMovement/Bomb.cpp"
"Tracking/Tracking.h"
"Tracking/David/KCF.h" "Tracking/David/KCF.cpp"
"UI/Draw/Draw.cpp" "UI/Draw/Draw.h"
"UI/CaptureVideo/Capture.h"
"UI/CaptureVideo/CaptureLocalVideo/CaptureLocalVideo.cpp" "UI/CaptureVideo/CaptureLocalVideo/CaptureLocalVideo.h"
"UI/CaptureVideo/CaptureBombVideo/CaptureBombVideo.cpp" "UI/CaptureVideo/CaptureBombVideo/CaptureBombVideo.h"
"UI/SendVideo/Display.h"
"UI/SendVideo/LocalDisplay/LocalDisplay.cpp" "UI/SendVideo/LocalDisplay/LocalDisplay.h"
"UI/SendVideo/GroundDisplay/GroundDisplay.cpp" "UI/SendVideo/GroundDisplay/GroundDisplay.h"
"XMovement/XMovement.h"
"XMovement/Keyboard/Keyboard.cpp" "XMovement/Keyboard/Keyboard.h"
"XMovement/Joystick/Joystick.cpp" "XMovement/Joystick/Joystick.h"
"Structures/Coordinates.h"
"Structures/KeyboardArrows.h"
)

target_link_libraries(SmartBomb ${OpenCV_LIBS})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SmartBomb PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
