find_path(Neuron_INCLUDE_DIR neuron.h ${CMAKE_PREFIX_PATH}/include/neuron)
find_library(Neuron_LIBRARY NAMES neuron-base PATHS ${CMAKE_PREFIX_PATH}/lib)
if (Neuron_INCLUDE_DIR AND Neuron_LIBRARY)
    set(Neuron_FOUND TRUE)
endif()