include(${SOFA_CMAKE_DIR}/preProject.cmake)

set(HEADER_FILES

    initExternalBehaviorModel.h 
    FEMGridBehaviorModel.h 
    FEMGridBehaviorModel.inl 
	)

set(SOURCE_FILES

    initExternalBehaviorModel.cpp 
    FEMGridBehaviorModel.cpp 
        )

add_library(${PROJECT_NAME} SHARED ${HEADER_FILES} ${SOURCE_FILES})

set(COMPILER_DEFINES "SOFA_BUILD_ExternalBehaviorModel")
set(LINKER_DEPENDENCIES SofaGuiQt)



include(${SOFA_CMAKE_DIR}/postProject.cmake)