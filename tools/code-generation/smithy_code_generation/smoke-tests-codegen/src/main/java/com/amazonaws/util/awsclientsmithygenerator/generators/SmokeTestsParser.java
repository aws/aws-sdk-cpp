package com.amazonaws.util.awsclientsmithygenerator.generators;

import lombok.Data;

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
import java.nio.file.attribute.PosixFilePermission;
import java.nio.file.attribute.PosixFilePermissions;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class SmokeTestsParser {
    private Model model;
    
    public SmokeTestsParser(Model model)
    {
        this.model = model;
    }


    private List<TestcaseParams> parseSmokeTestTrait(SmokeTestsTrait smokeTestsTrait, OperationShape operationShape )
    {
        final List<TestcaseParams> testcases = new ArrayList<>();

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
        return testcases;
    }

    //model contains information from all the smithy files
    //extract services to smoke tests
    private Map<String, List<TestcaseParams> > extractServiceSmokeTests(Model model)
    {
        Map<ShapeId, String> operationToServiceMap = new HashMap<>();
        
        // Iterate over all Service shapes in the model and get the operations
        model.getServiceShapes().stream().forEach(service -> {
            String serviceName = service.getId().getName();
            service.getAllOperations().stream().forEach(operation -> {
                operationToServiceMap.put( operation, serviceName);
            });
        });

        Map<String, List<TestcaseParams> > serviceSmokeTestsMap = new HashMap<>();

        final List<TestcaseParams> testcases = new ArrayList<>();

        if(model == null)
        {
            return testcases;
        }
        
        //create a map of operations to shape



        //first filter operations that have smoke test trait
        //on those operation shapes, find service trait

        
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
                .filter(entry ->  entry.getKey().getTrait(ServiceTrait.class).isPresent() )
                .forEach(entry -> {
                    OperationShape operationShape = entry.getKey();
                    SmokeTestsTrait smokeTestsTrait = entry.getValue();

                    String service =  operationToServiceMap.get(operationShape.getId())

                    //add to map of services

                    String serviceId =  operationShape.getTrait(ServiceTrait.class).get().getSdkId().toLowerCase();

                    if (serviceSmokeTestsMap.containsKey( serviceId ))
                    {
                        serviceSmokeTestsMap.get(serviceId).add(null)
                    }
                    else
                    {
                        List<TestcaseParams> newList= new ArrayList<>();
                        serviceSmokeTestsMap.put(serviceId, newList);
                    }

                    //get service trait

                    // Perform your logic with operationShape and smokeTestsTrait
                    System.out.println("OperationShape: " + operationShape);
                    System.out.println("SmokeTestsTrait: " + smokeTestsTrait);

                    
            });
        }

        return testcases;
    }
    
}
