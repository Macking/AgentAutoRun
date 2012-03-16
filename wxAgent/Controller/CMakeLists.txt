
SET(SRCS
	MainFrm.cpp
	MainFrm.h
	)

add_executable(wxAgentController WIN32 ${SRCS})
TARGET_LINK_LIBRARIES(wxAgentController ${wxWidgets_LIBRARIES})