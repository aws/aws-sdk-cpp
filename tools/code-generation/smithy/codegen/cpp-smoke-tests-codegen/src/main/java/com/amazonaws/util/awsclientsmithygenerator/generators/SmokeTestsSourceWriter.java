
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;
import software.amazon.smithy.codegen.core.SymbolWriter;
import java.util.List;

public final class SmokeTestsSourceWriter extends SymbolWriter<SmokeTestsSourceWriter, CppImportContainer>{
    private final String clientNamespace;
    private final String folderNamespace;
    private final String c2jNamespace;
    private final List<SmokeTestData> smoketests;

    //protected CppBlockWriter blockWriter;    
    public SmokeTestsSourceWriter(String namespace,List<SmokeTestData> smoketests) {
        super(new CppImportContainer(namespace));
        this.clientNamespace = SmokeTestsParser.removeSpaces(namespace);
        this.folderNamespace = SmokeTestsParser.toKebabCase(namespace);
        this.c2jNamespace = SmithyC2JNamespaceMap.getC2JServiceName(this.folderNamespace);
        this.smoketests = smoketests;
    }

    protected void useNamespaces()
    {
        write("${L|}","using namespace Aws::Auth;\n" + //
                        "using namespace Aws::Http;\n" + //
                        "using namespace Aws::Client;\n").
        write("using namespace Aws::$L;" ,clientNamespace ).
        write("using namespace Aws::$L::Model;", clientNamespace);
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

    protected void addClientHeader()
    {
        write("#include <aws/$L/$LClient.h>", c2jNamespace, clientNamespace );
    };

    protected void addRequestHeader(SmokeTestData test)
    {
        write("#include <aws/$L/model/$LRequest.h>", c2jNamespace, test.getOperationName());
    };

    protected void defineTestFixture()
    {
        write("class $LSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {", clientNamespace).
        indent().
        write("public:").
        write("static const char ALLOCATION_TAG[];").
        dedent().
        write("};");
        write("const char $LSmokeTestSuite::ALLOCATION_TAG[] = \"$LSmokeTest\";",clientNamespace,clientNamespace);
    }

    protected void defineTestCase(SmokeTestData test)
    {
        //declare test fixture
        write("TEST_F($LSmokeTestSuite, $L )",clientNamespace, test.getTestcaseName()).write("{").indent().
        write("Aws::$L::$LClientConfiguration clientConfiguration;", clientNamespace,clientNamespace);
        if(test.getConfig().hasAwsParams())
        {
            if(!test.getConfig().getAwsParams().getRegion().isEmpty())
            {
                write("clientConfiguration.region = \"$L\";",test.getConfig().getAwsParams().getRegion());
            }
            write("clientConfiguration.useFIPS = $L;",test.getConfig().getAwsParams().useFips())
            .write("clientConfiguration.useDualStack = $L;",test.getConfig().getAwsParams().useDualstack());
        }
        if(test.getAuth() == "sigv4" || test.getAuth() == "sigv4a")
        {
            write("auto clientSp = Aws::MakeShared<$LClient>(ALLOCATION_TAG, clientConfiguration);",clientNamespace);
        }
        //comments
        if( !test.getTestDataCodeBlock().isEmpty() )
        {
            write("//Prepare test data");
        }
        //write blocks
        test.getTestDataCodeBlock().stream().forEach(getter -> {
            write("$L", getter);
        });
        write("//populate input params").
        write("${L|}", test.getRequestBlock());
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


    public String generate()
    {
        write("${L|}",
        "/**\n" + //
        " * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.\n" + //
        " * SPDX-License-Identifier: Apache-2.0.\n" + //
        " */"
        );

        //tests will belong to one client, so choose first one
        smoketests.forEach(
            test -> {
                test.getSymbols().forEach(sym -> this.getImportContainer().importSymbol(sym));
                this.getImportContainer().importOperationInput(test.operationName);
            }    
        );

        write("${L|}",this.getImportContainer().toString());

        write("namespace $LSmokeTest{", clientNamespace);
        useNamespaces();

        defineTestFixture();
        smoketests.forEach(this::defineTestCase);
        write("}");
        
        return toString();
    }

    /**
        * The Factory class for creating CppWriters
     */
    public static final class SmokeTestsSourceWriterFactory implements SymbolWriter.Factory<SmokeTestsSourceWriter> {
        private final List<SmokeTestData> smoketests;

        public SmokeTestsSourceWriterFactory(List<SmokeTestData> smoketests){
            this.smoketests = smoketests;
        }

        @Override
        public SmokeTestsSourceWriter apply(String filename, String namespace) {
            return new SmokeTestsSourceWriter(namespace, this.smoketests);
        }
    }
    
}
