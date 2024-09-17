
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
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.traits.HttpBearerAuthTrait;
import software.amazon.smithy.smoketests.traits.SmokeTestsTrait;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.net.URISyntaxException;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.Stream;


public class SmithyParser {

    public static final String SMOKE_TEST_SOURCE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm";
    public static final String CMAKE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestCmake.vm";
    private static final String RESOURCE_SMITHY_DIR = "smithy-models";
    private static final String CMAKE_LISTS_TXT = "CMakeLists.txt";
    private static final String SMOKE_TESTS_CPP_FORMAT = "%sSmokeTests.cpp";
    private static final String OUTPUT_LOCATION_FORMAT = "output/%s";

    @Data
    public static final class ClientConfiguration {
        public String region;
        public List<String> sigv4aRegionSet;
        public boolean useFips;
        public boolean useDualstack;
    };

    @Data
    public static final class TestcaseParams {
        public String testcaseName;
        public String clientName;
        public ClientConfiguration config;
        public String operationName;
        public String inputShapeName;
        public String outputShapeName;
        Map<String, Node> paramsMap;
        boolean expectSuccess;
        Optional<String> errorShapeId;
        //capture auth scheme as that decides the client constructor
        String auth;
    };

    @Data
    public static final class Failure {
        public String error;
    };

    private final VelocityEngine velocityEngine;
    private final File smithyFile;
    private final String serviceName;

    public static SmithyParser BuildFromServiceName(final String serviceName, final String smithyModelPath) throws URISyntaxException {
        final Path path = Path.of(smithyModelPath);
        try (final Stream<Path> paths = Files.walk(path)) {
            final File smithyFile = paths.filter(file -> file.toString().contains(serviceName))
                    .findFirst()
                    .orElseThrow(() -> new RuntimeException("Could not find service " + serviceName))
                    .toFile();
            return new SmithyParser(serviceName, smithyFile);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    public SmithyParser(final String serviceName, final File smithyModelFile)  {
        this.serviceName = serviceName;
        this.smithyFile = smithyModelFile;
        this.velocityEngine = new VelocityEngine();
        this.velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        this.velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        this.velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        this.velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        this.velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());
        this.velocityEngine.init();
    }

    public void GenerateTests() throws IOException {
        ModelAssembler assembler = Model.assembler();
        assembler.addImport(this.smithyFile.toPath());
        List<TestcaseParams> testcaseParams = extractTests(assembler);
        generateTestSourceFile(testcaseParams, String.format(SMOKE_TESTS_CPP_FORMAT, serviceName));
        generateTestCmakeFile(CMAKE_LISTS_TXT);
        assembler.reset();
    }

    private void makeFile(Template template, VelocityContext context, final String fileName) throws IOException {
        final File outputFile = new File(fileName);
        outputFile.getParentFile().mkdirs();
        outputFile.createNewFile();
        try (FileWriter fileWriter = new FileWriter(outputFile)){
            template.merge(context, fileWriter);
        } catch (IOException e) {
            throw new RuntimeException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
    }

    public void generateTestSourceFile( List<TestcaseParams> tests, String fileName) throws IOException {
        Template template = velocityEngine.getTemplate(SMOKE_TEST_SOURCE_TEMPLATE, StandardCharsets.UTF_8.name());
        VelocityContext context = createSmokeTestContext(tests);
        makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, fileName));
    }

    public void generateTestCmakeFile(String fileName) throws IOException {
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

    private List<TestcaseParams> extractTests(ModelAssembler assembler) {
        final List<TestcaseParams> testcases = new ArrayList<>();
        // Assemble the model
        if(assembler.discoverModels().assemble().getResult().isPresent())
        {
            Model model = assembler.discoverModels().assemble().getResult().get(); 

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
        }
        return testcases;
    }
}