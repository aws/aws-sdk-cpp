
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.utils.SimpleCodeWriter;
import java.util.List;
public final class CppSmokeTestsWriter extends SimpleCodeWriter{
    //protected CppBlockWriter blockWriter;    
    public CppSmokeTestsWriter() {
        super();
    }


    //SimpleCodeWriter writer 
    public void addToHeaderSection(List<String> header)
    {
        
    };

    public void defineTestFixture(String client)
    {

    }

    public void writeTestCase(TestcaseParams test)
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

        write("//populate input params").write("//Prepare getters");
        for (String line in test.getGetterCodeBlock())
        {
            write("$L", line);
        }
        

        dedent().write("}");
    }

    
}
