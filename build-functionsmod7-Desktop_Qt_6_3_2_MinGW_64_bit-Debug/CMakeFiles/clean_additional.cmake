# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\functionsmod7_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\functionsmod7_autogen.dir\\ParseCache.txt"
  "functionsmod7_autogen"
  )
endif()
