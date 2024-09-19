
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


import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
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


public class SmithyParser {

    public static final String SMOKE_TEST_SOURCE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm";
    public static final String CMAKE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestCmake.vm";
    private static final String RESOURCE_SMITHY_DIR = "smithy-models";
    private static final String CMAKE_LISTS_TXT = "CMakeLists.txt";
    private static final String SMOKE_TESTS_CPP_FORMAT = "%sSmokeTests.cpp";
    private static final String OUTPUT_LOCATION_FORMAT = "output/%s";
    Model model;
    @Data
    private class CppDataPacker{
        public String functionCall;
        public StringBuilder functionDefinition;
    }

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
        public List<String> getterCodeBlock;
        public String functionBlock;
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

    public static SmithyParser BuildFromServiceName(final String serviceName) throws URISyntaxException {
        URL resource = Thread.currentThread().getContextClassLoader().getResource(RESOURCE_SMITHY_DIR);
        final Path path = Paths.get(Objects.requireNonNull(resource).toURI());
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

    public static OperationShape getOperationShape(Model model, String operationName) {
        ShapeId operationId = ShapeId.from(operationName);  // Get operation by ShapeId
        Shape shape = model.expectShape(operationId);

        if (shape instanceof OperationShape) {
            return (OperationShape) shape;
        } else {
            throw new IllegalArgumentException("Shape is not an operation.");
        }
    }

    public static String getShapeName(Shape shape) {
        String input = String.valueOf(shape.getId());
        // Find the index of the '#' character
        int index = input.indexOf('#');

        if (index != -1) {
            // If '#' is found, return the substring after it
            return input.substring(index + 1);
        } else {
            // If no '#' is found, return the entire string
            return input;
        }
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

    Map<String, Shape> getMemberShapes(Shape shape)
    {
        Map<String, Shape> result = new HashMap<>();
        Map<String, MemberShape> members = shape.getAllMembers();

        // Convert MemberShape to Shape and populate the result map
        result = members.entrySet().stream()
        .collect(Collectors.toMap(
                Map.Entry::getKey, // Use the original key
                entry -> {
                    ShapeId targetShapeId = entry.getValue().getTarget();
                    return model.getShape(targetShapeId).orElse(null);
                }
        ));
        // Optionally filter out entries with null shapes
        result = result.entrySet().stream()
                .filter(entry -> entry.getValue() != null)
                .collect(Collectors.toMap(
                        Map.Entry::getKey,
                        Map.Entry::getValue
                ));

        return result;
    }

    private String GenerateCppSetters(
            String key,
            Node value,
            Shape shape, //useful for C++ return type object
            int level, //useful for depth
            int count, //useful for array elements at same depth
            Map<String, CppDataPacker> functionMap
    ) throws Exception
    {
        if(shape == null)
        {
            throw new Exception("Invalid shape found");
        }
        //if object is a structure, then return will be a function call and the function definition will be in
        // functionMap
        //if object is a simple type, then return will just be the value.
        String functionName = new String();
        String indentPrefix = "\t";
        String varName = key.toLowerCase();
        String functionNameSuffix = convertSnakeToPascal(varName + "_lvl" + level + "_idx" + count);

        //for simple types, use initializer list for narrow types
        if (
                value.isNumberNode() || value.isBooleanNode()
        )
        {
            functionName = String.format("{%s}",value);
        }
        else if (value.isStringNode() )
        {
            functionName = String.format("{\"%s\"}",value);
        }
        else if (value.isObjectNode() )
        {
            if(value.asObjectNode().isEmpty()) {
                throw new Exception("object node is empty");
            }
            //shape has to be list
            if(!(shape.getType() == ShapeType.STRUCTURE) && !(shape.getType() == ShapeType.MAP) &&
                    !(shape.getType() == ShapeType.UNION)
            )
            {
                throw new Exception(String.format("Conflict. shape of type:%s, name:%s. Node is a map",shape.getType(), shape.getId()));
            }
            CppDataPacker data = new CppDataPacker();
            StringBuilder sb = new StringBuilder();
            functionName = String.format("Get%s()", functionNameSuffix);
            String shapeName = getShapeName(shape);
            //value
            Map<String, Shape> fieldShapeMap = getMemberShapes(shape);
            //define function body
            sb.append(String.format("%s %s\n{\n", shapeName, functionName));

            //declare variable
            sb.append(String.format("%s%s %s ;\n",indentPrefix,shapeName,varName));
            //iterate over map keys

            Map<String, Node> map = value.asObjectNode().get().getStringMap();
            for (Map.Entry<String, Node> entry : map.entrySet()) {

                String mapKey = entry.getKey();
                Node mapValue = entry.getValue();

                Shape fieldShape = fieldShapeMap.get(mapKey);

                //set elements of the variable
                sb.append(String.format("%s%s.Set%s( %s );\n", indentPrefix, varName, mapKey,
                        GenerateCppSetters(mapKey,
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
        else if (value.isArrayNode())
        {
            if(value.asArrayNode().isEmpty())
            {
                throw new Exception("array node is empty");
            }
            //shape has to be list
            if(!(shape.getType() == ShapeType.LIST))
            {
                throw new Exception(String.format("Conflict. shape of type:%s, name:%s. Node is a list",shape.getType(), shape.getId()));
            }
            CppDataPacker data = new CppDataPacker();
            StringBuilder sb = new StringBuilder();
            functionName = String.format("Get%s()",functionNameSuffix);

            //assume objects will be same type
            List<Node> list = value.asArrayNode().get().getElements();  // Safely cast to List

            String listType = getShapeName(shape);

            //open function body
            sb.append(String.format("Aws::Vector<%s> %s\n{\n",listType, functionName));

            //vector setter
            sb.append(String.format("%sAws::Vector<%s> %s = {",indentPrefix,listType, varName));

            //list is assumed to have homogenous type,
            MemberShape listShapeId = shape.asListShape().get().getMember();
            Optional<Shape> listMemberShape = model.getShape(listShapeId.getTarget());

            if(listMemberShape.isEmpty())
            {
                throw new Exception("List member shape is empty");
            }

            for (int i = 0; i < list.size(); i++)
            {
                Node element = list.get(i);

                sb.append(
                        String.format("%s",
                                GenerateCppSetters(key,
                                        element,
                                        listMemberShape.get(),
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


    public static Optional<Shape> getInputShape(OperationShape operation, Model model) {
        return operation.getInput().map(model::expectShape);
    }

    private List<TestcaseParams> extractTests(ModelAssembler assembler)
    {
        final List<TestcaseParams> testcases = new ArrayList<>();
        // Assemble the model
        if(assembler.discoverModels().assemble().getResult().isPresent())
        {
            model = assembler.discoverModels().assemble().getResult().get();

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
                                Map<String, CppDataPacker> functionMap = new HashMap<String, CppDataPacker>();

                                //build code to populate the input parameters
                                StringBuilder sb = new StringBuilder();

                                //get input shape
                                Optional<Shape> topLevelShape = model.getShape(operationShape.getInput().get());

                                if(topLevelShape.isPresent()) {
                                    Map<String, Shape> fieldShapeMap = getMemberShapes(topLevelShape.get());

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
                                                    GenerateCppSetters(
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
                                    for (CppDataPacker value : functionMap.values()) {
                                        // Split the value by newline (\n)
                                        String[] splitLines = value.functionDefinition.toString().split("\n");

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
        }
        return testcases;
    }
}