
package com.amazonaws.util.awsclientsmithygenerator.generators;

import lombok.Data;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.aws.traits.auth.SigV4ATrait;
import software.amazon.smithy.aws.traits.auth.SigV4Trait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.loader.ModelAssembler;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.HttpBearerAuthTrait;
import software.amazon.smithy.smoketests.traits.SmokeTestsTrait;
import java.nio.file.Path;

import java.io.File;
import java.io.FileWriter;
import java.io.InputStream;
import java.net.URISyntaxException;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;



public class SmithyParser2 {

    public static final String SMOKE_TEST_SOURCE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm";
    public static final String CMAKE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestCmake.vm";
    private static final String RESOURCE_SMITHY_DIR = "smithy-models";
    private static final String CMAKE_LISTS_TXT = "CMakeLists.txt";
    private static final String SMOKE_TESTS_CPP_FORMAT = "%sSmokeTests.cpp";
    private static final String OUTPUT_LOCATION_FORMAT = "output/%s";
    Model model;
    ModelAssembler assembler;
    SmithyCodegenAdapter codegenAdapter;

    @Data
    public static final class Failure {
        public String error;
    };

    private final VelocityEngine velocityEngine;
    private final Set<Path> sources;

    public SmithyParser2(Model model ,Set<Path> sources)  {
        System.out.println(String.format("SmithyParser2 being constructed, resource loader=%s",ClasspathResourceLoader.class.getName()));
        this.velocityEngine = new VelocityEngine();
        this.velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        this.velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        this.velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        this.velocityEngine.setProperty("context.scope_control.template", true);
        
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        //this.velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());
        
               this.velocityEngine.init();

        this.sources = sources;

        this.model = model;
        codegenAdapter = new SmithyCodegenAdapter(model);

        
    }

    public void GenerateSmokeTests(){
        System.out.println("GenerateSmokeTests called");
        try{
            sources.stream().filter(path -> path.toString().endsWith(".json") || path.toString().endsWith(".smithy")).
            forEach(path -> {
    
                String filename = path.getFileName().toString();
                int dotIndex = filename.lastIndexOf('.'); // Find the last dot index
                String serviceName = (dotIndex != -1) ? filename.substring(0, dotIndex) : filename; // Extract name until dot
                System.out.println(String.format("serviceName=%s",serviceName));

                try{
                    List<TestcaseParams> testcaseParams = extractTests();
                    GenerateSmokeTestsourceFile(testcaseParams, String.format(SMOKE_TESTS_CPP_FORMAT, serviceName));
                    generateTestCmakeFile(CMAKE_LISTS_TXT, serviceName);
                } catch (Exception e) {
                    throw new RuntimeException(e);
                }
    
            });
            
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
        

       
        //assembler.reset();
    }

    private void makeFile(Template template, VelocityContext context, final String fileName) throws Exception {
        final File outputFile = new File(fileName);
        outputFile.getParentFile().mkdirs();
        outputFile.createNewFile();
        try (FileWriter fileWriter = new FileWriter(outputFile)){
            template.merge(context, fileWriter);
        } catch (Exception e) {
            throw new RuntimeException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
    }

    public void GenerateSmokeTestsourceFile( List<TestcaseParams> tests, String fileName) throws Exception {
        Template template = velocityEngine.getTemplate(SMOKE_TEST_SOURCE_TEMPLATE, StandardCharsets.UTF_8.name());
        VelocityContext context = createSmokeTestContext(tests);
        makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, fileName));
    }

    public void generateTestCmakeFile(String fileName, final String serviceName) throws Exception {
        Template template = velocityEngine.getTemplate(CMAKE_TEMPLATE, StandardCharsets.UTF_8.name());
        VelocityContext context = new VelocityContext();
        context.put("projectName", serviceName);
        makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, fileName));
    }

    private VelocityContext createSmokeTestContext(List<TestcaseParams> test)  {
        VelocityContext context = new VelocityContext();
        context.put("tests", test);
        return context;
    }

    private List<TestcaseParams> extractTests()
    {
        final List<TestcaseParams> testcases = new ArrayList<>();

        if(model == null)
        {
            return testcases;
        }

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

            //for each operation with smoketest, extract trait info and parse into java classes
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
                            Map<String, String> functionMap = new HashMap<String, String>();

                            //build code to populate the input parameters
                            StringBuilder sb = new StringBuilder();

                            //get input shape
                            Optional<Shape> topLevelShape = model.getShape(operationShape.getInput().get());

                            if(topLevelShape.isPresent()) {
                                Map<String, Shape> fieldShapeMap = codegenAdapter.getMemberShapes(topLevelShape.get());

                                //declare top level variable
                                sb.append(String.format("%sRequest %s;\n", test.getOperationName(), "input"));
                                for (Map.Entry<String, Node> paramEntry : testcase.getParams().get().getStringMap().entrySet()) {
                                    String key = paramEntry.getKey();

                                    Shape fieldShape =  fieldShapeMap.get(key);

                                    Node value = paramEntry.getValue();

                                    if (fieldShape == null) {
                                        continue;
                                    }

                                    try {
                                        sb.append(String.format("input.Set%s(%s);\n", key,

                                                codegenAdapter.GenerateCppSetters(
                                                        test.getOperationName().toLowerCase() + "_elem",
                                                        value,
                                                        fieldShape, //useful for C++ return type object
                                                        1, //useful for depth
                                                        0, //useful for array elements at same depth
                                                        functionMap)
                                        ));
                                    } catch (Exception e) {
                                        throw new RuntimeException(e);
                                    }
                                }

                                test.setFunctionBlock(sb.toString());

                                List<String> lines = new ArrayList<>();

                                // Iterate through each value in the map
                                for (String value : functionMap.values()) {
                                    // Split the value by newline (\n)
                                    String[] splitLines = value.split("\n");

                                    // Add each line to the vector
                                    lines.addAll(Arrays.asList(splitLines));
                                }

                                test.setGetterCodeBlock(lines);
                            }
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

                        //check which auth trait is present
                        if (service.get().getTrait(SigV4Trait.class).isPresent())
                        {
                            test.setAuth("sigv4");
                        }
                        else if(service.get().getTrait(SigV4ATrait.class).isPresent())
                        {
                            test.setAuth("sigv4a");
                        }
                        else if(service.get().getTrait(HttpBearerAuthTrait.class).isPresent())
                        {
                            test.setAuth("bearer");
                        }

                        testcases.add(test);
                    });
            });
        }

        return testcases;
    }
}