
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

import freemarker.template.Configuration;
import freemarker.template.Template;
import freemarker.template.TemplateException;
import freemarker.cache.FileTemplateLoader;
import java.nio.file.DirectoryStream;
public class SmithyParser {

    public static final String SMOKE_TEST_SOURCE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm";
    public static final String CMAKE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestCmake.vm";
    private static final String CMAKE_LISTS_TXT = "CMakeLists.txt";
    private static final String SMOKE_TESTS_CPP_FORMAT = "%sSmokeTests.cpp";
    private static final String OUTPUT_LOCATION_FORMAT = "%s/%s";
    private Model model;
    private SmithyCodegenAdapter codegenAdapter;
    private Configuration TemplateConfig;

    @Data
    public static final class Failure {
        public String error;
    };

    private final Set<Path> sources;

    public SmithyParser(Model model ,Set<Path> sources)  {

        TemplateConfig = new Configuration(Configuration.VERSION_2_3_31);
        TemplateConfig.setClassLoaderForTemplateLoading(
            SmithyParser.class.getClassLoader(), "templates");

        // Set the encoding for the template files (input)
        TemplateConfig.setDefaultEncoding("UTF-8");

        // Set encoding for the response (output)
        TemplateConfig.setOutputEncoding("UTF-8");

        System.out.println(String.format("SmithyParser being constructed, resource loader=%s",ClasspathResourceLoader.class.getName()));
        this.sources = sources;

        System.out.println(String.format("Number of sources=%d",sources.size()));

        this.model = model;
        codegenAdapter = new SmithyCodegenAdapter(model);
    }

    public void GenerateSmokeTests() throws Exception {
        
            try{
                sources.stream().forEach(path -> {
                    try (DirectoryStream<Path> stream = Files.newDirectoryStream(path))
                    {
                        for (Path file: stream) {
                            if (Files.isRegularFile(file) && 
                            
                                (file.toString().endsWith(".json") || file.toString().endsWith(".smithy"))
                            ) 
                            {
                                System.out.println("File: " + file.getFileName());

                                String filename = file.getFileName().toString();
                                int dotIndex = filename.lastIndexOf('.'); // Find the last dot index
                                String serviceName = (dotIndex != -1) ? filename.substring(0, dotIndex) : filename; // Extract name until dot
                                System.out.println(String.format("test for serviceName=%s",serviceName));
                
                                
                                List<TestcaseParams> testcaseParams = extractTests();
                                
                                //genrate test code
                                CppSmokeTestsWriter smithySmokeTests = new CppSmokeTestsWriter();
                                System.out.println(smithySmokeTests.GetSmokeTestsCode(testcaseParams));

                                GenerateSmokeTestsourceFile(testcaseParams, String.format(SMOKE_TESTS_CPP_FORMAT, serviceName), serviceName);
                                generateTestCmakeFile(CMAKE_LISTS_TXT, serviceName);
                                
                            }
                        } 
                        System.out.println("path:"+path.toString());
                    }
                    catch (Exception e) {
                        throw new RuntimeException(e);
                    }
                });
            }
            catch (Exception e) {
                throw new RuntimeException(e);
            }

       
    }

    private void setDirectoryPermissions(Path path) {
        try {
            // Set permissions to rwxr-xr-x (owner can read/write/execute, group can read/execute, others can read/execute)
            Set<PosixFilePermission> perms = PosixFilePermissions.fromString("rwxr-xr-x");
            Files.setPosixFilePermissions(path, perms);
            System.out.println("Set permissions for directory: " + path);
        } catch (Exception e) {
            System.err.println("Failed to set permissions: " + e.getMessage());
        }
    }

    private void makeFile(Template template, Map<String, Object> context, final String fileName) throws Exception {
        
        System.out.println(String.format("Output filename=%s",fileName));
        final File outputFile = new File(fileName);
        File parentDir = outputFile.getParentFile();

        if (parentDir != null && !parentDir.exists()) {
            parentDir.mkdirs(); // Create directories if they do not exist
        }
        System.out.println(String.format("Dir exists=%s",parentDir.exists()));
    
        // Create the output file if it does not exist
        if (!outputFile.exists()) {
            outputFile.createNewFile(); // Create the file
        }
        try (FileWriter fileWriter = new FileWriter(outputFile)){
            template.process(context, fileWriter);
        } catch (Exception e) {
            throw new RuntimeException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
    }

    public void GenerateSmokeTestsourceFile( List<TestcaseParams> tests, String fileName, String serviceName) throws Exception {
        // Prepare data for the template (context)
        Map<String, Object> context = new HashMap<>();
        context.put("tests", tests);
        Template template = TemplateConfig.getTemplate("smokeTestSource.ftl");
        makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, serviceName, fileName));
    }

    public void generateTestCmakeFile(String fileName, final String serviceName) throws Exception {
        Map<String, Object> context = new HashMap<>();
        context.put("projectName", serviceName);
        Template template = TemplateConfig.getTemplate("smokeTestCMake.ftl");
        makeFile(template, context, String.format(OUTPUT_LOCATION_FORMAT, serviceName,fileName));
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