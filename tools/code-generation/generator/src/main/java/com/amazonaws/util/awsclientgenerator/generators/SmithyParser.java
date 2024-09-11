
package com.amazonaws.util.awsclientgenerator.generators;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.loader.ModelAssembler;
//import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.StringNode;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.ErrorFormatter;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;

import software.amazon.smithy.smoketests.traits.SmokeTestsTrait;
import software.amazon.smithy.model.shapes.ServiceShape;

import software.amazon.smithy.aws.traits.ServiceTrait;
import java.util.stream.Collectors;
import java.util.Map;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Optional;
import java.util.Set;
import java.util.Iterator;

//import java.util.Set;
import java.util.List;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.node.Node;
import lombok.Data;


import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;


public class SmithyParser {
    protected final VelocityEngine velocityEngine;
    protected ModelAssembler assembler;
    public SmithyParser()throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());
        velocityEngine.init();

        assembler = Model.assembler();
    }


    @Data
    public static final class ClientConfiguration{

        public String region;
        public List<String> sigv4aRegionSet;
        public boolean useFips;
        public boolean useDualstack;
    };
    @Data
    public static final class TestcaseParams{
        public String testcaseName;
        public String clientName;
        public ClientConfiguration config;
        public String operationName;
        public String inputShapeName;
        public String outputShapeName;
        Map<String, Node> paramsMap;
        boolean expectSuccess;
        Optional<String> errorShapeId;
    };

    @Data
    public static final class Failure{
        public String error;
    };

    protected static VelocityContext createSmokeTestContext(List<TestcaseParams> test)
    {
        VelocityContext context = new VelocityContext();
        context.put("tests", test);
        return context;
    }

    protected final SdkFileEntry makeFile(Template template, VelocityContext context, String path, boolean needsBOM) {
        StringWriter sw = new StringWriter();
        template.merge(context, sw);

        try {
            sw.close();
        } catch (IOException e) {
            throw new SourceGenerationFailedException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
        sw.flush();
        StringBuffer sb = new StringBuffer();
        sb.append(sw.toString());

        SdkFileEntry file = new SdkFileEntry();
        file.setPathRelativeToRoot(path);
        file.setSdkFile(sb);
        file.setNeedsByteOrderMark(needsBOM);
        return file;
    }

    public SdkFileEntry generateTestSourceFile( List<TestcaseParams> tests){
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createSmokeTestContext(tests);
        //ErrorFormatter errorFormatter = new ErrorFormatter();
        //context.put("errorConstNames", errorFormatter.formatErrorConstNames(serviceModel.getNonCoreServiceErrors()));
        //context.put("CppViewHelper", CppViewHelper.class);

        String clientName = tests.stream().findFirst().get().getClientName();

        String fileName = String.format("generated/tests/smoke-tests/%s/%sSmokeTests.cpp", clientName, clientName);

        return makeFile(template, context, fileName, true);
    }

    public List<TestcaseParams> parse(String location) {
        List<TestcaseParams> testcaseList = new ArrayList<TestcaseParams>();
        String currentDirectory = System.getProperty("user.dir");
        System.out.println("Current working directory: " + currentDirectory);

        Path directoryPath = Paths.get(location);
        // Load a Smithy model from a file
        //ModelAssembler assembler = Model.assembler();
        
        // Stream all files in the directory
        try (Stream<Path> fileStream = Files.list(directoryPath)) {
            // Filter for .smithy files and add each to the assembler
            fileStream.filter(path -> path.toString().endsWith(".json"))
            .forEach(assembler::addImport);
            
            // Assemble the model
            if(assembler.discoverModels().assemble().getResult().isPresent())
            {
                Model model = assembler.discoverModels().assemble().getResult().get(); //validate().get();

                Optional<ServiceShape> service = model.getServiceShapes().stream().filter( serviceShape -> serviceShape.getTrait(ServiceTrait.class).isPresent() ).findFirst();

                if (service.isPresent())
                {
                    //only filter operations with smoke test trait
                    Map<OperationShape, SmokeTestsTrait> operationShapestoSmokeTestsTraitsMap = model.getOperationShapes().stream().filter(operationShape -> 
                    operationShape.getTrait(SmokeTestsTrait.class).isPresent() ).
                    collect(Collectors.toMap(
                        operationShape -> operationShape,
                        operationShape -> operationShape.getTrait(SmokeTestsTrait.class).get()
                    ));

                    

                    //for each key value, generate code for all the traits
                    operationShapestoSmokeTestsTraitsMap.entrySet().stream()
                        .forEach(entry -> {
                            OperationShape operationShape = entry.getKey();
                            SmokeTestsTrait smokeTestsTrait = entry.getValue();
                            // Perform your logic with operationShape and smokeTestsTrait
                            System.out.println("OperationShape: " + operationShape);
                            System.out.println("SmokeTestsTrait: " + smokeTestsTrait);

                            smokeTestsTrait.getTestCases().stream().forEach(testcase -> {
                                //parse each test case
                                //operation name
                                TestcaseParams test = new TestcaseParams();
                                String clientName = service.get().getId().getName();
                                test.setClientName(clientName.substring(0, clientName.indexOf('_')));
                                test.setOperationName(operationShape.getId().getName());

                                String inputShapeName = operationShape.getInput()
                                        .map(inputShape -> inputShape.getName().replaceAll("Input","Request") )
                                        .orElse(operationShape.getId().getName()+ "Request");

                                test.setInputShapeName(inputShapeName);

                                String outputShapeName = operationShape.getOutput()
                                        .map(outputShape -> outputShape.getName().replaceAll("Output","Result"))
                                        .orElse(operationShape.getId().getName()+ "Result");
                                
                                test.setOutputShapeName(outputShapeName);

                                //get params
                                if(testcase.getParams().isPresent())
                                {
                                    test.setParamsMap(testcase.getParams().get().getStringMap());
                                }
                                
                                //get expectations
                                if(testcase.getExpectation().isSuccess())
                                {
                                    test.setExpectSuccess(true);
                                }
                                else
                                {
                                    
                                    test.setExpectSuccess(false);
                                    if(testcase.getExpectation().getFailure().isPresent() &&
                                        testcase.getExpectation().getFailure().get().getErrorId().isPresent())
                                    {
                                        test.setErrorShapeId(Optional.of(testcase.getExpectation().getFailure().get().getErrorId().get().getName()) );
                                    }
                                }

                                //get configuration properties
                                if (testcase.getVendorParams().isPresent())
                                {
                                    ClientConfiguration config = new ClientConfiguration();
                                    if(testcase.getVendorParams().get().getStringMap().containsKey("region"))
                                    {
                                        config.setRegion(testcase.getVendorParams().get().getStringMap().get("region").asStringNode().get().getValue());
                                    }
                                    
                                    if(testcase.getVendorParams().get().getStringMap().containsKey("sigv4aRegionSet"))
                                    {
                                        Iterator<Node> paramIter = testcase.getVendorParams().get().getStringMap().get("sigv4aRegionSet").asArrayNode().get().iterator();
                                        List<String> params = new ArrayList<String>();
                                        while (paramIter.hasNext()) {
                                            params.add(paramIter.next().asStringNode().get().getValue());
                                        }
                                        config.setSigv4aRegionSet(params );
                                    }
                                    
                                    if(testcase.getVendorParams().get().getStringMap().containsKey("useFips"))
                                    {
                                        config.setUseFips(testcase.getVendorParams().get().getStringMap().get("useFips").asBooleanNode().get().getValue());
                                    }
                                    else
                                    {
                                        config.setUseFips(false);
                                    }

                                    if(testcase.getVendorParams().get().getStringMap().containsKey("useDualstack"))
                                    {
                                        config.setUseFips(testcase.getVendorParams().get().getStringMap().get("useDualstack").asBooleanNode().get().getValue());
                                    }
                                    else
                                    {
                                        config.setUseDualstack(false);
                                    }
                                    test.setConfig(config);                                    
                                }

                                test.setTestcaseName(testcase.getId());

                                testcaseList.add(test);
                            });
                    });

                    // Print the model (or process it further)
                    System.out.println(model);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();  // Handle the exception
        }
        assembler.reset();

        return testcaseList;
    }
}