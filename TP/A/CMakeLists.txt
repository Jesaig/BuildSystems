cmake_minimum_required(VERSION 3.10)
project(A)

set(HEADER_GENERATOR "preparing.py")

add_custom_command(
	OUTPUT ${PROJECT_SOURCE_DIR}
	COMMAND sudo apt-get update && sudo apt-get install python3 && python3 ${PROJECT_SOURCE_DIR}/HEADER_GENERATOR
	DEPENDS ${PROJECT_SOURCE_DIR}/HEADER_GENERATOR
)

add_custom_target(INDEX_GENERATOR depends index.h)
