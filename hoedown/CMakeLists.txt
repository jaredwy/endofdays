FILE(GLOB HOEDOWN_SOURCE 
    "src/*.c"
    "src/*.h")
set  (HOEDOWN_DEF_FILE
      "hoedown.def")
include_directories(src)
source_group("" FILES ${HOEDOWN_SOURCE})
add_library(hoedown SHARED ${HOEDOWN_SOURCE} ${HOEDOWN_DEF_FILE})

install (TARGETS hoedown
		 RUNTIME DESTINATION ${PROJECT_BINARY_DIR}/bin
		 LIBRARY DESTINATION ${PROJECT_BINARY_DIR}/bin)
