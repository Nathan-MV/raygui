# Setup the project and settings
project(raygui C)
set(PROJECT_VERSION 4.5.0)
set(API_VERSION 450)

include(GNUInstallDirs)

set(RAYGUI_HEADER src/raygui.h)
set(RAYGUI_SOURCE src/raygui.c)

# Read the contents of the source file
file(READ ${RAYGUI_HEADER} FILE_CONTENTS)

# Write the contents to the destination file
file(WRITE ${RAYGUI_SOURCE} "${FILE_CONTENTS}")

add_library(raygui STATIC ${RAYGUI_SOURCE} ${RAYGUI_HEADER})

set_target_properties(raygui PROPERTIES
                      PUBLIC_HEADER "${RAYGUI_HEADER}"
                      VERSION ${PROJECT_VERSION}
                      SOVERSION ${API_VERSION}
                      )

if (WITH_PIC)
    set_property(TARGET raygui PROPERTY POSITION_INDEPENDENT_CODE ON)
endif ()

target_link_libraries(raygui PRIVATE raylib)

# Registering include directories
target_include_directories(raygui
                           PUBLIC
                           $<INSTALL_INTERFACE:include>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                           PRIVATE
                           ${CMAKE_CURRENT_SOURCE_DIR}
                           )

# Copy the header files to the build directory for convenience
file(COPY ${RAYGUI_HEADER} DESTINATION "include")
