
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import com.google.common.base.CaseFormat;
import software.amazon.smithy.aws.smoketests.model.AwsVendorParams;
import software.amazon.smithy.codegen.core.SymbolWriter;

import java.util.List;
import java.util.Objects;

public final class SmokeTestsSourceWriter extends SymbolWriter<SmokeTestsSourceWriter, CppImportContainer>{
    private final String clientNamespace;
    private final List<SmokeTestData> smoketests;

    public SmokeTestsSourceWriter(String namespace,List<SmokeTestData> smoketests) {
        super(new CppImportContainer(namespace));
        this.clientNamespace = SmokeTestsParser.removeSpaces(namespace);
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
        write("Aws::$L::$LClientConfiguration clientConfiguration;",
                        clientNamespace,
                        CaseFormat.LOWER_CAMEL.to(CaseFormat.UPPER_CAMEL, clientNamespace));
        if(test.getConfig().getParams() instanceof AwsVendorParams)
        {
            AwsVendorParams configParams = (AwsVendorParams) test.getConfig().getParams();
            if(!configParams.getRegion().isEmpty())
            {
                write("clientConfiguration.region = \"$L\";",configParams.getRegion());
            }
            write("clientConfiguration.useFIPS = $L;",configParams.useFips())
            .write("clientConfiguration.useDualStack = $L;",configParams.useDualstack());
        }
        //for s3, needs to be handled when client code is ready to use the parameters passed in client configuration

        if(Objects.equals(test.getAuth(), "sigv4") || Objects.equals(test.getAuth(), "sigv4a"))
        {
            write("auto clientSp = Aws::MakeShared<$LClient>(ALLOCATION_TAG, clientConfiguration);",
                    CaseFormat.LOWER_CAMEL.to(CaseFormat.UPPER_CAMEL, clientNamespace));
        }
        //comments
        if( !test.getTestDataCodeBlock().isEmpty() )
        {
            write("//Prepare test data");
        }
        //write blocks
        test.getTestDataCodeBlock().forEach(getter -> {
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
