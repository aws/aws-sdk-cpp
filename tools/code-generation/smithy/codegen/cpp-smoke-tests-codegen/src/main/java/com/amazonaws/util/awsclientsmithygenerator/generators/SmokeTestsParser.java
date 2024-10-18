package com.amazonaws.util.awsclientsmithygenerator.generators;

import lombok.Data;

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
import java.nio.file.attribute.PosixFilePermission;
import java.nio.file.attribute.PosixFilePermissions;
import java.util.List;
import java.util.Optional;
import java.util.Map;
import java.util.HashMap;
import java.util.HashSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.codegen.core.SymbolProvider;

import software.amazon.smithy.aws.smoketests.model.AwsVendorParams;
import software.amazon.smithy.aws.smoketests.model.S3VendorParams;
import software.amazon.smithy.aws.smoketests.model.AwsSmokeTestModel;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;


//import com.amazonaws.util.awsclientsmithygenerator.generators.common.CppSymbolVisitor;

public class SmokeTestsParser implements Runnable{
    final private Model model;
    final private SmithyCodegenAdapter codegenAdapter;
    final private PluginContext context;
    final private SymbolProvider symbolProvider;
    final private Map<ShapeId, String> operationToServiceMap;
    final private Map<String, ServiceShape> serviceShapeMap;
    // Static member to store the flipped map
    private  Map<String, String> SMITHY_C2J_SERVICE_NAME_MAP;
    final private  Set<String> serviceFilter;

    public SmokeTestsParser(PluginContext context)
    {
        this.context = context;
        this.model = context.getModel();
        this.codegenAdapter = new SmithyCodegenAdapter(model);
        this.symbolProvider = new CppSymbolVisitor(model);
        this.operationToServiceMap = new HashMap<>();
        this.serviceShapeMap = new HashMap<>();
        this.serviceFilter = new HashSet<>();
        this.SMITHY_C2J_SERVICE_NAME_MAP = new HashMap<>();
        //parse the filter
        Map<String, Node> settings = context.getSettings().getStringMap();
        if(settings.containsKey("serviceFilter"))
        {
            Node value = settings.get("serviceFilter");
            if(value.isArrayNode())
            {
                for(Node element : value.asArrayNode().get() )
                {
                    if(element.isStringNode())
                    {
                        serviceFilter.add(element.asStringNode().get().getValue());
                    }
                }
            }
        }
        //parse mapping and store
        Type mapType = new TypeToken<Map<String, String>>(){}.getType();
        if(settings.containsKey("c2jMap"))
        {
            Node value = settings.get("c2jMap");
            if(value.isStringNode())
            {
                Gson gson = new Gson();
                SMITHY_C2J_SERVICE_NAME_MAP = gson.fromJson(value.asStringNode().get().getValue(), mapType);
            }
        }

        // Iterate over all Service shapes in the model which has at least one operation that has smoke test
        // create a reverse map of operations to service shapes 
        model.getServiceShapes().stream()
        .filter(serviceShape -> {
            try {
                return serviceFilter.isEmpty() || serviceFilter.contains(toKebabCase(getServiceName(serviceShape)));
            } catch (Exception e) {
                // Log the exception and exclude this serviceShape from the result
                System.err.println("Error getting service name: " + e.getMessage());
                return false; // Skip this serviceShape if exception occurs
            }}
        )
        .filter(serviceShape -> 
            serviceShape.getAllOperations().stream()
                .anyMatch(operationShapeId ->  model.getShape(operationShapeId).isPresent() && 
                                               model.getShape(operationShapeId).get().getTrait(SmokeTestsTrait.class).isPresent())
        )
        .forEach(serviceShape -> {
            String serviceName = serviceShape.getId().getName();

            // Iterate over operations with the SmokeTestsTrait
            serviceShape.getAllOperations().stream()
                .forEach(operation -> {
                    // Populate the maps with only those services with smoke test operations
                    this.operationToServiceMap.put(operation, serviceName);
                    this.serviceShapeMap.put(serviceName, serviceShape);
                });
        });

        System.out.println(String.format("Number of services with smoke tests detected=%d",serviceShapeMap.size()));
    }

    public static String removeSpaces(String input)
    {
        return input.replace(" ", "");
    }

    public static String toKebabCase(String input) {
        // Remove leading and trailing spaces, replace spaces with hyphens, and convert to lowercase
        return input.trim().toLowerCase().replace(" ", "-");
    }

    private String getServiceName(ServiceShape serviceShape) throws Exception
    {   
        if(!serviceShape.getTrait(ServiceTrait.class).isPresent())
        {
            //System.err.println(String.format("No service trait detected in service shape with name=%s",serviceShape.getId().getName()));
            throw new Exception(String.format("No service trait detected in service shape with name=%s",serviceShape.getId().getName()));
        }

        //this.model.getShape(serviceShapeId)
        String clientName = serviceShape.getTrait(ServiceTrait.class).get().getSdkId();

        return clientName;
    }

    public String getC2JServiceName(String smithyServiceName)
    {
        if(SMITHY_C2J_SERVICE_NAME_MAP.containsKey(smithyServiceName))
        {
            return SMITHY_C2J_SERVICE_NAME_MAP.get(smithyServiceName);
        }
        return smithyServiceName;
    }

    //for given smoke test trait in an operation for a service, parse smoke tests
    private List<SmokeTestData> parseSmokeTests(
        SmokeTestsTrait smokeTestsTrait, 
        OperationShape operationShape,
        ServiceShape serviceShape )
    {
        final List<SmokeTestData> testcases = new ArrayList<>();

        smokeTestsTrait.getTestCases().stream().forEach(testcase -> {

            //parse each test case
            //operation name
            SmokeTestData test = new SmokeTestData();
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

                List<String> functionOrder = new ArrayList<>();

                //get input shape
                Optional<Shape> topLevelShape = model.getShape(operationShape.getInput().get());

                if(topLevelShape.isPresent()) {
                    Map<String, Shape> fieldShapeMap = codegenAdapter.getMemberShapes(topLevelShape.get());

                    //declare top level variable
                    CppBlockWriter blockWriter = new CppBlockWriter(0)
                        .addCode(String.format("%sRequest %s;\n", test.getOperationName(), "input"));
            
                    for (Map.Entry<String, Node> paramEntry : testcase.getParams().get().getStringMap().entrySet()) {
                        String key = paramEntry.getKey();
                        Shape fieldShape =  fieldShapeMap.get(key);
                        if (fieldShape == null) {
                            continue;
                        }
                        
                        Node value = paramEntry.getValue();
                        try {
                            blockWriter.addCode(String.format("input.Set%s(%s);\n", key,

                                codegenAdapter.GenerateCppSetters(
                                        test.getOperationName().toLowerCase() + "_elem",
                                        value,
                                        fieldShape, //useful for C++ return type object
                                        0, //useful for depth
                                        0, //useful for array elements at same depth
                                        functionMap,
                                        functionOrder)
                                ));
                        } catch (Exception e) {
                            throw new RuntimeException(e);
                        }
                    }
                    
                    //test.setRequestBlock(sb.toString());
                    System.out.println(String.format("block Code:%s", blockWriter.getCode()));
                    test.setRequestBlock(blockWriter.getCode());

                    List<String> lines = new ArrayList<>();

                    // Iterate through each value in the map
                    for (String functionName : functionOrder) 
                    {
                        String value = functionMap.get(functionName);
                        
                        if(value != null)
                        {
                            // Split the value by newline (\n)
                            String[] splitLines = value.split("\n");

                            // Add each line to the vector
                            lines.addAll(Arrays.asList(splitLines));
                        }
                    }

                    test.setTestDataCodeBlock(lines);
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
            ClientConfiguration config = new ClientConfiguration();
            
            if(AwsSmokeTestModel.hasAwsVendorParams(testcase))
            {
                AwsVendorParams params = AwsSmokeTestModel.getAwsVendorParams(testcase).get();
                config.setAwsParams(Optional.of(params));
            }
            else if (serviceShape.getId().getName().equalsIgnoreCase("s3") && 
                AwsSmokeTestModel.hasS3VendorParams(testcase))
            {
                
                S3VendorParams s3params = AwsSmokeTestModel.getS3VendorParams(testcase).get();
                config.setS3Params(Optional.of(s3params));                
            }

            test.setConfig(config);

            test.setTestcaseName(testcase.getId());

            //check which auth trait is present
            if (serviceShape.getTrait(SigV4Trait.class).isPresent())
            {
                test.setAuth("sigv4");
            }
            else if(serviceShape.getTrait(SigV4ATrait.class).isPresent())
            {
                test.setAuth("sigv4a");
            }
            else if(serviceShape.getTrait(HttpBearerAuthTrait.class).isPresent())
            {
                test.setAuth("bearer");
            }

            testcases.add(test);
        });
        return testcases;
    }

    //model contains information from all the smithy files
    //extract services to smoke tests
    public Map<ServiceShape, List<SmokeTestData> > extractServiceSmokeTests()
    {
        Map<ServiceShape, List<SmokeTestData> > serviceSmokeTestsMap = new HashMap<>();
     
        //first filter operations that have smoke test trait
        //on those operation shapes, find service trait

        model.getOperationShapes().stream().
        filter(operationShape -> operationShape.getInput().isPresent()).
        filter(operationShape -> operationShape.getTrait(SmokeTestsTrait.class).isPresent() ).
        filter(operationShape ->  operationToServiceMap.containsKey(operationShape.getId()) ).
        forEach(operationShape -> {
            SmokeTestsTrait smokeTestsTrait = operationShape.getTrait(SmokeTestsTrait.class).get();
            //get serviceShape
            String serviceName = operationToServiceMap.get(operationShape.getId());
            ServiceShape serviceShape = serviceShapeMap.get(serviceName);
            System.out.println("OperationShape: " + operationShape.getId().getName());
            System.out.println("serviceName: " + serviceName);

            List<SmokeTestData> tests = parseSmokeTests(
                smokeTestsTrait, 
                operationShape,
                serviceShape );
            //add to tests for the same service
            if(serviceSmokeTestsMap.containsKey(serviceShape))
            {
                serviceSmokeTestsMap.get(serviceShape).addAll(tests);
            }
            else
            {
                serviceSmokeTestsMap.put(serviceShape, tests);
            }

        });
        
        return serviceSmokeTestsMap;
    }

    @Override
    public void run(){
        System.out.println("run smoke tests parser");
        SmokeTestsSourceDelegator delegator = new SmokeTestsSourceDelegator(this.context.getFileManifest(), this.symbolProvider);
        SmokeTestsCMakeDelegator cmakedelegator = new SmokeTestsCMakeDelegator(this.context.getFileManifest(), this.symbolProvider);
        Map<ServiceShape, List<SmokeTestData> > smoketests =  extractServiceSmokeTests();
        //make service specific folder
        smoketests.entrySet().stream().forEach(entry -> {
                ServiceShape serviceShape = entry.getKey();
                try{
                    String client = getServiceName(serviceShape);
                    String c2jClientname = getC2JServiceName(toKebabCase(client));
                    
                    Path relativePath = Paths.get( c2jClientname );
                    System.out.println(String.format("path=%s",relativePath.toString() + "/"+ removeSpaces(client) + "SmokeTests.cpp"));
                    
                    delegator.useFileWriter( relativePath.toString() + "/"+ removeSpaces(client) + "SmokeTests.cpp", client, writer -> {
                        System.out.println("generating smoke test source code");
                        writer.generate(entry.getValue());              
                    });

                    cmakedelegator.useFileWriter( relativePath.toString() + "/"+ "CMakeLists.txt", client, writer -> {
                        System.out.println("generating smoke test cmake code");
                        writer.generate();
                    });
                }
                catch (Exception e) {
                    System.err.println("Exception detected=" + e.toString());
                }
        });

        delegator.flushWriters();
        cmakedelegator.flushWriters();
        
    }
    
    
}
