/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.aws.traits.auth.SigV4ATrait;
import software.amazon.smithy.aws.traits.auth.SigV4Trait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.HttpBearerAuthTrait;
import software.amazon.smithy.smoketests.traits.SmokeTestsTrait;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;
import java.util.Optional;
import java.util.Map;
import java.util.HashMap;
import java.util.HashSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Set;
import java.util.Comparator;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.aws.smoketests.model.AwsSmokeTestModel;

public class SmokeTestsParser implements Runnable{
    final private Model model;
    final private SmithyCodegenAdapter codegenAdapter;
    final private PluginContext context;
    final private CppSymbolVisitor symbolProvider;
    final private Map<ShapeId, String> operationToServiceMap;
    final private Map<String, ServiceShape> serviceShapeMap;
    final private  Set<String> serviceFilter;

    public SmokeTestsParser(PluginContext context)
    {
        this.context = context;
        this.model = context.getModel();
        this.symbolProvider = new CppSymbolVisitor(model);
        this.codegenAdapter = new SmithyCodegenAdapter(model,this.symbolProvider);
        this.operationToServiceMap = new HashMap<>();
        this.serviceShapeMap = new HashMap<>();
        this.serviceFilter = new HashSet<>();
        //parse the filter
        Map<String, Node> settings = context.getSettings().getStringMap();
        if(settings.containsKey("serviceFilter"))
        {
            Node value = settings.get("serviceFilter");
            if(value.isArrayNode() && value.asArrayNode().isPresent())
            {
                for(Node element : value.asArrayNode().get() )
                {
                    if(element.isStringNode() && element.asStringNode().isPresent())
                    {
                        serviceFilter.add(element.asStringNode().get().getValue());
                    }
                }
            }
        }
        //parse mapping and store
        if(settings.containsKey("c2jMap"))
        {
            Node value = settings.get("c2jMap");
            if(value.isStringNode())
            {
                SmithyC2JNamespaceMap.getInstance(value.asStringNode().get().getValue());
            }
        }
        else
        {
            SmithyC2JNamespaceMap.getInstance("");
        }

        // Iterate over all Service shapes in the model which has at least one operation that has smoke test
        // create a reverse map of operations to service shapes 
        model.getServiceShapes().stream()
        .filter(serviceShape -> {
                return serviceFilter.isEmpty() || serviceFilter.contains(toKebabCase(getServiceName(serviceShape)));
            }
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
    }

    public static String removeSpaces(String input)
    {
        return input.replace(" ", "");
    }

    public static String toKebabCase(String input) {
        // Remove leading and trailing spaces, replace spaces with hyphens, and convert to lowercase
        return input.trim().toLowerCase().replace(" ", "-");
    }

    private String getServiceName(ServiceShape serviceShape)
    {   
        if(!serviceShape.getTrait(ServiceTrait.class).isPresent())
        {
            throw new RuntimeException(String.format("No service trait detected in service shape with name=%s",serviceShape.getId().getName()));
        }

        return serviceShape.getTrait(ServiceTrait.class).get().getSdkId();
    }

    //for given smoke test trait in an operation for a service, parse smoke tests
    private List<SmokeTestData> parseSmokeTests(
        SmokeTestsTrait smokeTestsTrait, 
        OperationShape operationShape,
        ServiceShape serviceShape )
    {
        final List<SmokeTestData> testcases = new ArrayList<>();

        smokeTestsTrait.getTestCases().stream().forEach(testcase -> {

            codegenAdapter.clearSymbols();

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

                    codegenAdapter.recordContainerForImport(topLevelShape.get());
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
                        
                            blockWriter.addCode(String.format("input.Set%s(%s);\n", GenericCodegenAdapter.capitalizeFirstLetter(key),

                            codegenAdapter.GenerateCppSetters(
                                    test.getOperationName().toLowerCase() + "_elem",
                                    value,
                                    fieldShape, //useful for C++ return type object
                                    0, //useful for depth
                                    0, //useful for array elements at same depth
                                    functionMap,
                                    functionOrder)
                            ));
                        
                    }
                    
                    //test.setRequestBlock(sb.toString());
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
            if(AwsSmokeTestModel.hasAwsVendorParams(testcase)) {
                ClientConfiguration config = new ClientConfiguration(AwsSmokeTestModel.getAwsVendorParams(testcase).get());
                test.setConfig(config);
            } else if (serviceShape.getId().getName().equalsIgnoreCase("s3") && AwsSmokeTestModel.hasS3VendorParams(testcase)) {
                ClientConfiguration config = new ClientConfiguration(AwsSmokeTestModel.getS3VendorParams(testcase).get());
                test.setConfig(config);               
            } else {
                throw testcase.getVendorParamsShape()
                        .map(shapeId -> new RuntimeException(String.format("Unsupported vendor shape %s, must be aws.test#AwsVendorParams or aws.test#S3VendorParams", shapeId.getName())))
                        .orElseThrow(() -> new RuntimeException("No Vendor parameter shape found, must be aws.test#AwsVendorParams or aws.test#S3VendorParams"));
            }
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
            test.setSymbols(codegenAdapter.getSymbols());

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
        sorted(Comparator.comparing(OperationShape::getId)).
        forEach(operationShape -> {
            SmokeTestsTrait smokeTestsTrait = operationShape.getTrait(SmokeTestsTrait.class).get();
            //get serviceShape
            String serviceName = operationToServiceMap.get(operationShape.getId());
            ServiceShape serviceShape = serviceShapeMap.get(serviceName);
            //for one service, we have one smoke test file
            //So, we for a given service we import dependencies (symbol types and their respective headers)
            List<SmokeTestData> tests = serviceSmokeTestsMap.getOrDefault(serviceShape, new ArrayList<>());

            tests.addAll(parseSmokeTests(
                smokeTestsTrait, 
                operationShape,
                serviceShape ));
            
            serviceSmokeTestsMap.put(serviceShape, tests);

        });
        
        return serviceSmokeTestsMap;
    }

    @Override
    public void run(){

        Map<ServiceShape, List<SmokeTestData> > smoketests =  extractServiceSmokeTests();

        //make service specific folder
        smoketests.forEach((serviceShape, value) -> {
                SmokeTestsSourceDelegator delegator = new SmokeTestsSourceDelegator(this.context.getFileManifest(), this.symbolProvider, value);
                SmokeTestsCMakeDelegator cmakedelegator = new SmokeTestsCMakeDelegator(this.context.getFileManifest(), this.symbolProvider);

                String client = getServiceName(serviceShape);
                String c2jClientname = SmithyC2JNamespaceMap.getInstance().getC2JServiceName(toKebabCase(client));

                Path relativePath = Paths.get(c2jClientname);
                System.out.println(toKebabCase(client) + " mapped to " + c2jClientname);

                delegator.useFileWriter(relativePath.toString() + "/" + removeSpaces(client) + "SmokeTests.cpp", client, writer -> {
                    System.out.printf("generating smoke test source code=%s%n", relativePath.toString() + "/" + removeSpaces(client) + "SmokeTests.cpp");
                    writer.generate();
                });

                cmakedelegator.useFileWriter(relativePath.toString() + "/" + "CMakeLists.txt", c2jClientname, writer -> {
                    System.out.printf("generating smoke test cmake code=%s%n", relativePath.toString() + "/" + "CMakeLists.txt");
                    writer.generate();
                });

                delegator.flushWriters();
                cmakedelegator.flushWriters();
        });

    }
    
    
}
