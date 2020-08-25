cmake_minimum_required(VERSION 3.16)

# Set the project name
project(Proficiency VERSION 1.0)

configure_file(ProficiencyConfig.h.in ProficiencyConfig.h)

# Add the executable
add_executable(Proficiency main.cpp List.cpp List.h)

# Add to the end to add directory to list of paths to search for include files
target_include_directories(Proficiency PUBLIC "${PROJECT_BINARY_DIR}")