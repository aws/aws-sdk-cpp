
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

import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.amazonaws.util.awsclientgenerator.domainmodels.smoketests.SmokeTestDocument;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;

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
        public Map<String, Object> paramsMap;
        public List<String> getterCodeBlock;
        public String functionBlock;
        boolean expectSuccess;
        public Optional<String> errorShapeId;
        //capture auth scheme as that decides the client constructor 
        public String auth;
    };

    @Data
    private class CppDataPacker{
        public String functionCall;
        public StringBuilder functionDefinition;
    }

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
        //list will be handled in a different way
        // else if(shape.isList())
        //        {
        //            shape.getMembers().entrySet().stream().forEach(entry -> {
        //                result.put(entry.getKey(),
        //                        entry.getValue().getShape().getName()
        //                );
        //            });
        //        }

        return result;
    }


    //at each level use shape object from model resolution to use the code generated appropriate type
    //use shapes map from service model to navigate and define appropriate type
    //use key to find appropriate
    private String traverseObject(
                                String key,
                                Object value,
                                Shape shape, //useful for C++ return type object
                                int level, //useful for depth
                                int count, //useful for array elements at same depth
                                Map<String, CppDataPacker> functionMap
                                )
    {
        if(shape == null)
        {
            throw new SourceGenerationFailedException("Invalid shape found");
        }
        //if object is a structure, then return will be a function call and the function definition will be in
        // functionMap
        //if object is a simple type, then return will just be the value.
        String functionName = new String();
        String indentPrefix = "\t";
        String varName = key.toLowerCase();
        String functionNameSuffix = convertSnakeToPascal(varName + "_lvl" + level + "_idx" + count);

        String type = shape.getName();
        //for simple types
        if (    (value instanceof Integer) ||
                (value instanceof Boolean) ||
                (value instanceof Float)
        )
        {
            functionName = String.format("{%s}",value);
        }
        else if (value instanceof String)
        {
            functionName = String.format("{\"%s\"}",value);
        }
        else if (value instanceof Map)
        {
            CppDataPacker data = new CppDataPacker();
            StringBuilder sb = new StringBuilder();
            functionName = String.format("Get%s()", functionNameSuffix);

            Map<String, String> fieldShapeNameMap = getShapeFields(shape);
            //define function body
            sb.append(String.format("%s %s\n{\n",shape.getName(), functionName));

            //declare variable
            sb.append(String.format("%s%s %s ;\n",indentPrefix,shape.getName(),varName));
            //iterate over map keys
            Map<?, ?> map = (Map<?, ?>) value;
            for (Map.Entry<?, ?> entry : map.entrySet()) {

                if (!(entry.getKey() instanceof String)) {
                    //key must be string
                    break;
                }

                String mapKey = (String) entry.getKey();
                Object mapValue = entry.getValue();

                String fieldShapeName = fieldShapeNameMap.get(mapKey);
                Shape fieldShape = (fieldShapeName != null && this.shapeMap.get(fieldShapeName) != null) ? this.shapeMap.get(fieldShapeName) : null;

                //set elements of the variable
                sb.append(String.format("%s%s.Set%s( %s );\n", indentPrefix, varName, mapKey,
                        traverseObject(mapKey,
                                mapValue,
                                fieldShape,
                                level + 1,
                                0,
                                functionMap
                        )
                ));
            }

            //prepare function code and save it for the variable name

            //return only the function name
            sb.append(String.format("%sreturn %s;\n}\n", indentPrefix,varName));

            data.setFunctionCall(functionName);
            data.setFunctionDefinition(sb);
            functionMap.put(functionName, data);
        }
        else if (value instanceof List)
        {
            CppDataPacker data = new CppDataPacker();
            StringBuilder sb = new StringBuilder();
            functionName = String.format("Get%s()",functionNameSuffix);

            //assume objects will be same type
            List<?> list = (List<?>) value;  // Safely cast to List

            //shape has to be list
            if(!shape.isList())
            {
                throw new SourceGenerationFailedException(String.format("Conflict. Object of type:%s, name:%s is list but shape is not list",shape.getType(), shape.getName()));
            }
            String listType = shape.getListMember().getShape().getName();

            //open function body
            sb.append(String.format("Aws::Vector<%s> %s\n{\n",listType, functionName));

            //vector setter
            sb.append(String.format("%sAws::Vector<%s> %s = {",indentPrefix,listType, varName));

            for (int i = 0; i < list.size(); i++)
            {
                Object element = list.get(i);

                sb.append(
                        String.format("%s",
                            traverseObject(key,
                                    element,
                                    shape.getListMember().getShape(),
                                    level + 1,
                                    i,
                                    functionMap
                            )
                        )
                );
                if(i != list.size()-1)
                {
                    sb.append(",\n");
                }
            }
            sb.append(String.format("%s};\n",indentPrefix));

            //close function body
            sb.append(String.format("%sreturn %s;\n}\n", indentPrefix,varName));

            data.setFunctionCall(functionName);
            data.setFunctionDefinition(sb);
            functionMap.put(functionName, data);
        }

        return functionName;
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

            testcase.setParamsMap(parseInput(test.getInput()));

            //extract all helper functions in the context of the current test case
            Map<String, CppDataPacker> functionMap = new HashMap<String, CppDataPacker>();

            String toplevelShapeName =  test.getOperationName() + "Input";

            Shape topLevelShape = this.shapeMap.get(toplevelShapeName);

            //build code to populate the input parameters
            StringBuilder sb = new StringBuilder();
            Map<String, String> fieldMap = getShapeFields(topLevelShape);

            //declare top level variable
            sb.append(String.format("%sRequest %s;\n",test.getOperationName(), "input") );
            for (Map.Entry<String, Object> entry : testcase.getParamsMap().entrySet()) {
                String key = entry.getKey();
                Object value = entry.getValue();

                String fieldShapeName = fieldMap.get(key);
                Shape fieldShape = (fieldShapeName != null) ? this.shapeMap.get(fieldShapeName) : null;
                sb.append(String.format("input.Set%s(%s);\n",key,
                        traverseObject(
                                test.getOperationName().toLowerCase()+"_elem",
                                value,
                                fieldShape, //useful for C++ return type object
                                1, //useful for depth
                                0, //useful for array elements at same depth
                                functionMap)
                        ));
            }

            testcase.setFunctionBlock(sb.toString());

            List<String> lines = new ArrayList<>();

            // Iterate through each value in the map
            for (CppDataPacker value : functionMap.values()) {
                // Split the value by newline (\n)
                String[] splitLines = value.functionDefinition.toString().split("\n");

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