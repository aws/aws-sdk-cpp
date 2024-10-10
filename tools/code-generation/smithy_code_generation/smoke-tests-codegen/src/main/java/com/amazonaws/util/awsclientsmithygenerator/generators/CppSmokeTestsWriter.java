
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.utils.SimpleCodeWriter;
import software.amazon.smithy.codegen.core.SymbolWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.common.CppImportContainer;

import java.util.List;

import com.google.common.base.Optional;
public final class CppSmokeTestsWriter extends SymbolWriter<CppSmokeTestsWriter, CppImportContainer>{
    private String namespace;
    //protected CppBlockWriter blockWriter;    
    public CppSmokeTestsWriter(String namespace) {
        super(new CppImportContainer(namespace));
        this.namespace = namespace;
    }

    protected void useNamespaces()
    {
        write("${L|}","using namespace Aws::Auth;\n" + //
                        "using namespace Aws::Http;\n" + //
                        "using namespace Aws::Client;\n").
        write("using namespace Aws::$L;" ,namespace ).
        write("using namespace Aws::$L::Model;", namespace);
    };

    //SimpleCodeWriter writer 
    protected void addHeaderBlock()
    {
        write("${L|}",
        
        "#include <aws/testing/AwsCppSdkGTestSuite.h>\n" + //
        "#include <aws/testing/AwsTestHelpers.h>\n" + //
        "#include <aws/core/client/AsyncCallerContext.h>\n" + //
        "#include <aws/core/client/ClientConfiguration.h>\n" + //
        "#include <aws/core/client/CoreErrors.h>\n" + //
        "#include <aws/core/auth/AWSCredentialsProviderChain.h>\n" + //
        "#include <aws/core/http/HttpTypes.h>\n" + //
        "#include <aws/core/utils/logging/LogMacros.h>\n" + //
        "#include <aws/core/utils/memory/AWSMemory.h>\n" + //
        "#include <aws/core/utils/UnreferencedParam.h>\n" + //
        "#include <aws/core/utils/Outcome.h>\n" + //
        "#include <aws/core/utils/memory/stl/AWSSet.h>\n" + //
        "#include <aws/core/utils/memory/stl/AWSStringStream.h>\n" + //
        "#include <utility>\n" +
        "#include <algorithm>\n"
        );
    }

    protected void addClientHeader(TestcaseParams test)
    {
        write("#include <aws/$L/$LClient.h>", test.getClientName().toLowerCase(), test.getClientName() );
    };

    protected void addRequestHeader(TestcaseParams test)
    {
        write("#include <aws/$L/model/$LRequest.h>", test.getClientName().toLowerCase(), test.getOperationName());
    };

    protected void defineTestFixture(TestcaseParams test)
    {
        write("class $LSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {", test.getClientName()).
        indent().write("static const char ALLOCATION_TAG[];").
        dedent().write("}");
    }

    protected void defineTestCase(TestcaseParams test)
    {
        //declare test fixture
        write("TEST_F($LSmokeTestSuite, $L )",test.getClientName(), test.getTestcaseName()).write("{").indent().
        write("Aws::$L::$LClientConfiguration& clientConfiguration;", test.getClientName(),test.getClientName());
        if(!test.getConfig().getRegion().isEmpty())
        {
            write("clientConfiguration.region = $L;",test.getConfig().getRegion());
        }
        write("clientConfiguration.useFIPS = $L;",test.getConfig().isUseFips())
        .write("clientConfiguration.useDualstack = $L;",test.getConfig().isUseDualstack());
        
        if(test.getAuth() == "sigv4" || test.getAuth() == "sigv4a")
        {
            write("auto clientSp = Aws::MakeShared<$LClient>(ALLOCATION_TAG, clientConfiguration);",test.getClientName());
        }
        //comments
        write("//populate input params").write("//Prepare getters");
        //write blocks
        test.getGetterCodeBlock().stream().forEach(getter -> {
            write("$L", getter);
        });
        write("${L|}", test.getFunctionBlock());
        write("auto outcome = clientSp->$L(input);",test.getOperationName());
        if (test.isExpectSuccess())
        {
            write("EXPECT_TRUE( outcome.IsSuccess());");
        }
        else
        {
            write("EXPECT_FALSE( outcome.IsSuccess());");
        }

        dedent().write("}");
    }


    public String GetSmokeTestsCode(List<TestcaseParams> tests)
    {
        //tests will belong to one client, so choose first one
        TestcaseParams firstTest = tests.stream().findFirst().orElse(null);
        if(firstTest != null)
        {
            addHeaderBlock();
            addClientHeader(firstTest);
            
            tests.stream().forEach(test -> {
                addRequestHeader(test);
            });
            write("namespace $LSmokeTest{", firstTest.getClientName());
            useNamespaces();

            defineTestFixture(firstTest);
            tests.stream().forEach(test -> {
                defineTestCase(test);
            });
            write("}");
        }
        return toString();
    }

    /**
        * The Factory class for creating CppWriters
     */
    public static final class CppSmokeTestsWriterFactory implements SymbolWriter.Factory<CppSmokeTestsWriter> {

        @Override
        public CppSmokeTestsWriter apply(String filename, String namespace) {
            return new CppSmokeTestsWriter(namespace);
        }
    }

    
}
