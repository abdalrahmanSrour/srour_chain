# Add library include folder
include_directories(${Srour_Chain_SOURCE_DIR}/SrourChainLib/inc)
# link library
link_directories(${Srour_Chain_SOURCE_DIR}/SrourChainLib/src)

add_executable(SrourChainMiningDiff3Example main.cpp)
target_link_libraries(SrourChainMiningDiff3Example SrourChainLib)
