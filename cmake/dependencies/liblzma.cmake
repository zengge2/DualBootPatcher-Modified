find_package(LibLZMA REQUIRED)

add_library(LibLZMA::LibLZMA UNKNOWN IMPORTED)
set_target_properties(
    LibLZMA::LibLZMA
    PROPERTIES
    IMPORTED_LINK_INTERFACE_LANGUAGES "C"
    IMPORTED_LOCATION "${LIBLZMA_LIBRARIES}"
    INTERFACE_INCLUDE_DIRECTORIES "${LIBLZMA_INCLUDE_DIRS}"
)