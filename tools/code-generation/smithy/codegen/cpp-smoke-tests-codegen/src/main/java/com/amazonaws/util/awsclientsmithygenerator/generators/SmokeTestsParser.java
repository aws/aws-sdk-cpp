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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.stream.Collectors;
import java.util.stream.Stream;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.codegen.core.SymbolProvider;

import software.amazon.smithy.aws.smoketests.model.AwsVendorParams;
import software.amazon.smithy.aws.smoketests.model.S3VendorParams;
import software.amazon.smithy.aws.smoketests.model.AwsSmokeTestModel;


//import com.amazonaws.util.awsclientsmithygenerator.generators.common.CppSymbolVisitor;

public class SmokeTestsParser implements Runnable{
    final private Model model;
    final private SmithyCodegenAdapter codegenAdapter;
    final private PluginContext context;
    final private SymbolProvider symbolProvider;

    public SmokeTestsParser(PluginContext context)
    {
        this.context = context;
        this.model = context.getModel();
        codegenAdapter = new SmithyCodegenAdapter(model);
        this.symbolProvider = new CppSymbolVisitor(model);
    }

    private String getServiceName(ShapeId serviceShapeId)
    {
        String clientName = serviceShapeId.getName();
        System.out.println("clientName="+clientName);

        int underscoreIndex = clientName.indexOf('_');
        // Check if underscore exists, otherwise return the whole string
        clientName = underscoreIndex != -1 ? clientName.substring(0, underscoreIndex) : clientName;
        return clientName;
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
                                        functionMap)
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
                    for (String value : functionMap.values()) {
                        // Split the value by newline (\n)
                        String[] splitLines = value.split("\n");

                        // Add each line to the vector
                        lines.addAll(Arrays.asList(splitLines));
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
    public Map<ShapeId, List<SmokeTestData> > extractServiceSmokeTests()
    {
        Map<ShapeId, List<SmokeTestData> > serviceSmokeTestsMap = new HashMap<>();

        Map<ShapeId, String> operationToServiceMap = new HashMap<>();
        Map<String, ServiceShape> serviceShapeMap = new HashMap<>();
        
        // Iterate over all Service shapes in the model and create map of operation to 
        model.getServiceShapes().stream().forEach(serviceShape -> {
            String serviceName = serviceShape.getId().getName();
            serviceShape.getAllOperations().stream().forEach(operation -> {
                operationToServiceMap.put( operation, serviceName);
                serviceShapeMap.put(serviceName,serviceShape );
            });
        });

     
        //first filter operations that have smoke test trait
        //on those operation shapes, find service trait

        model.getOperationShapes().stream().
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
            if(serviceSmokeTestsMap.containsKey(serviceShape.getId()))
            {
                serviceSmokeTestsMap.get(serviceShape.getId()).addAll(tests);
            }
            else
            {
                serviceSmokeTestsMap.put(serviceShape.getId(), tests);
            }

        });
        
        return serviceSmokeTestsMap;
    }

    @Override
    public void run(){

        System.out.println("run smoke tests parser");

        SmokeTestsSourceDelegator delegator = new SmokeTestsSourceDelegator(this.context.getFileManifest(), this.symbolProvider);
        SmokeTestsCMakeDelegator cmakedelegator = new SmokeTestsCMakeDelegator(this.context.getFileManifest(), this.symbolProvider);

        Map<ShapeId, List<SmokeTestData> > smoketests =  extractServiceSmokeTests();
        
        //make service specific folder
        smoketests.entrySet().stream().forEach(entry -> {
                String serviceName = getServiceName(entry.getKey());
                Path relativePath = Paths.get( serviceName );
                System.out.println(String.format("path=%s",relativePath.toString() + "/"+ serviceName + "SmokeTests.cpp"));
                
                delegator.useFileWriter( relativePath.toString() + "/"+ getServiceName(entry.getKey()) + "SmokeTests.cpp", serviceName, writer -> {
                    System.out.println("generating smoke test source code");
                    writer.generate(entry.getValue());              
                });

                cmakedelegator.useFileWriter( relativePath.toString() + "/"+ "CMakeLists.txt", serviceName, writer -> {
                    System.out.println("generating smoke test cmake code");
                    writer.generate();
                });
        });

        delegator.flushWriters();
        cmakedelegator.flushWriters();
        
    }
    
    
}
