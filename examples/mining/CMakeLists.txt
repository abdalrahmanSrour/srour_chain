# Add library include folder
include_directories(${Srour_Chain_SOURCE_DIR}/SrourChainLib/inc)
# link library
link_directories(${Srour_Chain_SOURCE_DIR}/SrourChainLib/src)

add_executable(SrourChainMiningExample main.cpp)
target_link_libraries(SrourChainMiningExample SrourChainLib)
