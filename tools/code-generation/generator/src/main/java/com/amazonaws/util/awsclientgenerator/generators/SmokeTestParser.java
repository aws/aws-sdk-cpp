
package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
//import software.amazon.smithy.model.node.Node;
//import software.amazon.smithy.model.node.StringNode;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
//import java.nio.file.DirectoryStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.*;

import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;


//import java.util.HashSet;
//import java.util.Set;

//import java.util.Set;
import lombok.Data;


import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.amazonaws.util.awsclientgenerator.domainmodels.smoketests.SmokeTestDocument;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.C2JCodegenAdapter;
import java.io.File;
import java.io.FileWriter;

public class SmokeTestParser {
    public static final String SMOKE_TEST_SOURCE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm";
    public static final String CMAKE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestCmake.vm";
    private static final String RESOURCE_SMITHY_DIR = "smithy-models";
    private static final String CMAKE_LISTS_TXT = "CMakeLists.txt";
    private static final String SMOKE_TESTS_CPP_FORMAT = "%sSmokeTests.cpp";
    private static final String OUTPUT_LOCATION_FORMAT = "output/%s";

    protected final VelocityEngine velocityEngine;
    protected final Map<String, Shape> shapeMap;
    protected final Map<String, Operation> operationsMap;

    private final String serviceName;
    private final Path outputLocation;
    private final C2JCodegenAdapter codegenAdapter;
    public SmokeTestParser(final ServiceModel serviceModel,
                           final String serviceName,
                           final String outputLocation) throws Exception {

        this.serviceName = serviceName;
        this.outputLocation = Paths.get(outputLocation);

        if (!Files.exists(this.outputLocation)) {
            Files.createDirectories(this.outputLocation); // Creates the directory and any necessary parent directories
            System.out.println("Directory created: " + this.outputLocation.toString());
        }
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());
        velocityEngine.init();
        this.shapeMap = serviceModel.getShapes();
        this.operationsMap = serviceModel.getOperations();

        codegenAdapter = new C2JCodegenAdapter(serviceModel);
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
        public List<String> getterCodeBlock;
        public String functionBlock;
        boolean expectSuccess;
        public Optional<String> errorShapeId;
        //capture auth scheme as that decides the client constructor 
        public String auth;
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
        //makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, fileName));
        makeFile(template, context, String.format(outputLocation+"/%s",fileName));
    }

    public void generateTestCmakeFile(String fileName) throws IOException {
        Template template = velocityEngine.getTemplate(CMAKE_TEMPLATE, StandardCharsets.UTF_8.name());
        VelocityContext context = new VelocityContext();
        context.put("projectName", serviceName);
        //makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, fileName));
        makeFile(template, context,  String.format(outputLocation+"/%s",fileName));

    }


    public static Map<String, Object> parseInput(Map<String, Object> input) {
        Map<String, Object> paramsMap = new HashMap<>();

        // Iterate over the input and add to paramsMap
        for (Map.Entry<String, Object> entry : input.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();

            // Add key-value pairs to paramsMap
            paramsMap.put(key, value);
        }

        return paramsMap;
    }

    public static String convertSnakeToPascal(String snakeCase) {
        StringBuilder result = new StringBuilder();
        String[] words = snakeCase.split("_");

        // Capitalize the first word
        result.append(words[0].substring(0, 1).toUpperCase())
                .append(words[0].substring(1).toLowerCase());

        // Capitalize the first letter of each remaining word and append
        for (int i = 1; i < words.length; i++) {
            result.append(words[i].substring(0, 1).toUpperCase())
                    .append(words[i].substring(1).toLowerCase());
        }

        return result.toString();
    }



    //get immediate children and their shape names if any
    Map<String, String> getShapeFields(Shape shape)
    {
        Map<String, String> result = new HashMap<>();

        if(shape.isMap())
        {
            result.put(shape.getMapKey().getShape().getName(),
                    shape.getMapValue().getShape().getName()
                    );
        }
        else if(shape.isStructure())
        {
            shape.getMembers().entrySet().stream().forEach(entry -> {
                result.put(entry.getKey(),
                        entry.getValue().getShape().getName()
                );
            });
        }
        return result;
    }

    private List<TestcaseParams> extractTests(SmokeTestDocument smoketests, String serviceName)
    {   
        List<TestcaseParams> testcaseList = new ArrayList<TestcaseParams>();

        smoketests.getTestCases().stream().forEach(test -> {

            TestcaseParams testcase = new TestcaseParams();

            testcase.setClientName(this.serviceName);

            testcase.setTestcaseName( test.getId() );

            testcase.setOperationName( test.getOperationName() );

            Operation operation = this.operationsMap.get(test.getOperationName());

            if(operation != null) {
                //get service traits
                if(operation.getSignerName().equals("Aws::Auth::SIGV4_SIGNER")) {
                    testcase.setAuth("sigv4");
                }
                else
                {
                    testcase.setAuth("sigv4a");
                }
            }
            ClientConfiguration config = new ClientConfiguration();
            config.setRegion(test.getConfig().getRegion());
            config.setUseDualstack(test.getConfig().getUseDualstack());
            config.setUseFips(test.getConfig().getUseFips());

            if(test.getExpectation().getSuccess() != null)
            {
                testcase.setExpectSuccess(true);
            }
            else
            {
                testcase.setExpectSuccess(false);
            }

            testcase.setConfig(config);

            Map<String, Object> paramsMap = parseInput(test.getInput());

            //extract all helper functions in the context of the current test case
            Map<String, String> functionMap = new HashMap<String, String>();

            String toplevelShapeName =  test.getOperationName() + "Input";

            Shape topLevelShape = this.shapeMap.get(toplevelShapeName);

            //build code to populate the input parameters
            StringBuilder sb = new StringBuilder();
            Map<String, Shape> fieldShapeMap = codegenAdapter.getMemberShapes(topLevelShape);

            //declare top level variable
            sb.append(String.format("%sRequest %s;\n",test.getOperationName(), "input") );
            for (Map.Entry<String, Object> entry : paramsMap.entrySet()) {
                String key = entry.getKey();
                Object value = entry.getValue();
                Shape fieldShape = fieldShapeMap.get(key);

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

            testcase.setFunctionBlock(sb.toString());

            List<String> lines = new ArrayList<>();

            // Iterate through each value in the map
            for (String value : functionMap.values()) {
                // Split the value by newline (\n)
                String[] splitLines = value.split("\n");

                // Add each line to the vector
                lines.addAll(Arrays.asList(splitLines));
            }

            testcase.setGetterCodeBlock(lines);

            testcaseList.add(testcase);
        });

        return testcaseList;
    }

    public List<TestcaseParams> parse(String filepath ) throws IOException {

        File jsonFile = new File(filepath);
        if(!filepath.endsWith(".json") || !jsonFile.exists())
        {
            return new ArrayList<>();
        }
        Path jsonFilePath = jsonFile.toPath();
        GsonBuilder gsonBuilder = new GsonBuilder();
        Gson gson = gsonBuilder.create();
        SmokeTestDocument smoketests = null;
        String jsonContent = new String(Files.readAllBytes(jsonFilePath));

        smoketests = gson.fromJson(jsonContent, SmokeTestDocument.class);


        return extractTests(smoketests, serviceName);
    }
}