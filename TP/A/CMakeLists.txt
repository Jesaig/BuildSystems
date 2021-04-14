cmake_minimum_required(VERSION 3.10)

project(indexGenerator)

add_custom_command(
    OUTPUT index.h
    COMMAND python3 ${PROJECT_SOURCE_DIR}/preparing.py
    DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
    COMMENT "Generating index.h file from python code"
)

add_custom_target(indexGenerator 
				  DEPENDS index.h
				  COMMENT "Checking if regeneration is needed")
