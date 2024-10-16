package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.utils.SimpleCodeWriter;
import software.amazon.smithy.codegen.core.SymbolWriter;
import java.util.List;

import com.google.common.base.Optional;
public final class SmokeTestsCMakeWriter extends SymbolWriter<SmokeTestsCMakeWriter, CppImportContainer>{
    private String namespace;
    private String folderNamespace;
    //protected CppBlockWriter blockWriter;    
    public SmokeTestsCMakeWriter(String namespace) {
        super(new CppImportContainer(namespace));
        this.namespace = namespace;
        this.folderNamespace = SmokeTestsParser.toKebabCase(namespace);
    }


    public String generate()
    {
        String projectNameCaps = folderNamespace.toUpperCase();
        String awsTestSrc = "AWS_" + projectNameCaps + "_GENERATED_SMOKE_TEST_SRC" ;

        write(""" 
            add_project($L-smoke-tests
            \"Tests for the AWS $L C++ SDK\" 
             testing-resources
             aws-cpp-sdk-$L
             aws-cpp-sdk-core
            )
            """,folderNamespace, projectNameCaps,folderNamespace
        );

        write(""" 
            file(GLOB AWS_$L_GENERATED_SMOKE_TEST_SRC
                \"$${CMAKE_CURRENT_SOURCE_DIR}/*.cpp\"
            )
            if(MSVC AND BUILD_SHARED_LIBS)
                add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
            endif()

            if (CMAKE_CROSSCOMPILING)
                set(AUTORUN_UNIT_TESTS OFF)
            endif()

            if (AUTORUN_UNIT_TESTS)
                enable_testing()
            endif()
            """,projectNameCaps
        );


        write(""" 
            if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
                add_library($${PROJECT_NAME} "$${$L}")
            else()
                add_executable($${PROJECT_NAME} "$${$L}")
            endif()

            set_compiler_flags($${PROJECT_NAME})
            set_compiler_warnings($${PROJECT_NAME})

            target_link_libraries($${PROJECT_NAME} $${PROJECT_LIBS})
            """, awsTestSrc, awsTestSrc);

        write(""" 
            if (AUTORUN_UNIT_TESTS)
                ADD_CUSTOM_COMMAND( TARGET $${PROJECT_NAME} POST_BUILD
                    COMMAND $${CMAKE_COMMAND} -E env LD_LIBRARY_PATH=$${AWS_AUTORUN_LD_LIBRARY_PATH}:$$ENV{LD_LIBRARY_PATH} $$<TARGET_FILE:$${PROJECT_NAME}>
                    ARGS \"--gtest_brief=1\")
            endif()
            if(NOT CMAKE_CROSSCOMPILING)
                SET_TARGET_PROPERTIES($${PROJECT_NAME} PROPERTIES OUTPUT_NAME $${PROJECT_NAME})
            endif()
            """);
        return toString();
    }

        /**
        * The Factory class for creating CppWriters
     */
    public static final class SmokeTestsCMakeWriterFactory implements SymbolWriter.Factory<SmokeTestsCMakeWriter> {

        @Override
        public SmokeTestsCMakeWriter apply(String filename, String namespace) {
            return new SmokeTestsCMakeWriter(namespace);
        }
    }

}