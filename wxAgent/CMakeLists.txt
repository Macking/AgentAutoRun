cmake_minimum_required(VERSION 2.8)
PROJECT(wxAgent)

# find and use widgets
FIND_PACKAGE(wxWidgets REQUIRED)
INCLUDE(${wxWidgets_USE_FILE})

add_subdirectory(Controller)