/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator;

import com.amazonaws.util.awsclientgenerator.config.exceptions.GeneratorNotImplementedException;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jShape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValue;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValueDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTestParamsDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTests;
import com.amazonaws.util.awsclientgenerator.generators.DirectFromC2jGenerator;
import com.amazonaws.util.awsclientgenerator.generators.MainGenerator;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

import com.amazonaws.util.awsclientgenerator.generators.SmokeTestParser;
import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.transform.C2jModelToGeneratorModelTransformer;

public class main {

    static final String INPUT_FILE_NAME = "inputfile";
    static final String ENDPOINT_RULE_SET = "endpoint-rule-set";
    static final String ENDPOINT_TESTS = "endpoint-tests";
    static final String OUTPUT_FILE_NAME = "outputfile";
    static final String ARBITRARY_OPTION = "arbitrary";
    static final String LANGUAGE_BINDING_OPTION = "language-binding";
    static final String SERVICE_OPTION = "service";
    static final String DEFAULTS_OPTION = "defaults";
    static final String PARTITIONS_OPTION = "partitions";
    static final String GENERATE_TESTS_OPTION = "generate-tests";
    static final String NAMESPACE = "namespace";
    static final String LICENSE_TEXT = "license-text";
    static final String STANDALONE_OPTION = "standalone";
    static final String ENABLE_VIRTUAL_OPERATIONS = "enable-virtual-operations";
    static final String GENERATE_SMOKE_TESTS_OPTION = "generate-smoke-tests";

    public static File findPomXml(File startDir) {
        // Search upwards first
        File pomFile = searchUpwards(startDir);
        if (pomFile != null) {
            return pomFile;
        }

        // If not found, search downwards in the initial directory
        return searchDownwards(startDir);
    }
    private static File searchUpwards(File dir) {
        while (dir != null) {
            File pomFile = new File(dir, "pom.xml");
            if (pomFile.exists()) {
                return pomFile;
            }
            dir = dir.getParentFile();
        }
        return null;
    }
    private static File searchDownwards(File startDir) {
        if (startDir == null || !startDir.isDirectory()) {
            return null;
        }

        // Check the current directory for pom.xml
        File pomFile = new File(startDir, "pom.xml");
        if (pomFile.exists()) {
            return pomFile;
        }

        // Recursively search in all subdirectories
        File[] subDirs = startDir.listFiles(File::isDirectory);
        if (subDirs != null) {
            for (File subDir : subDirs) {
                try {
                    File foundFile = searchDownwards(subDir);
                    if (foundFile != null) {
                        return foundFile;
                    }
                } catch (Exception e) {
                    System.err.println("Error accessing directory " + subDir.getAbsolutePath() + ": " + e.getMessage());
                }
            }
        }

        return null;
    }
    private static void generateSmokeTests(String serviceName, Map<String, Shape> shapeMap){
        try {

            //get project root and find model folder
            //File pomFilePath = findPomXml(new File("").getAbsoluteFile());
            //String directoryPath = pomFilePath.getParentFile().getAbsolutePath() + "/smithySmokeTests";
            
            String directoryPath = "/Users/sberas/workplace/aws-sdk-cpp/tools/code-generation/generator/smithySmokeTests/smoketest.json";
            
            Path path = Paths.get(directoryPath).toAbsolutePath();


            String rawJson = readFile( path.toString());

            // Call the parse method of SmithyParser
            SmokeTestParser parser = new SmokeTestParser(shapeMap);
            List<SmokeTestParser.TestcaseParams> tests = parser.parse(rawJson, serviceName);

            if (tests.size() == 0) {
                //throw new RuntimeException("Directory does not exist: " + directoryPath);
                String currentDirectory = System.getProperty("user.dir");
                System.err.println("no tests parsed directoryPath: " + directoryPath + " currentDirectory:" + currentDirectory );
                System.exit(1);
            }

            SdkFileEntry files[] = new SdkFileEntry[2];

            //String clientName = tests.stream().findFirst().get().getClientName();

            //validate if same service name is same as client
            //this is the relative location from the folder of extraction
            String fileName = String.format("%sSmokeTests.cpp", serviceName);
            files[0] =  parser.generateTestSourceFile( tests, fileName);
            
            fileName = "CMakeLists.txt";
            files[1] =  parser.generateTestCmakeFile(serviceName, fileName);

            //System.out.println(files[0].sdkFile);
            
            String componentOutputName = String.format("%s-smoke-tests",serviceName);
            Path zipfilePath = Paths.get("/tmp/smithySmokeTests", componentOutputName + ".zip");
            // Ensure the parent directory (tmp) exists
            Files.createDirectories(zipfilePath.getParent());

            ByteArrayOutputStream generated = MainGenerator.compressFilesToZip(files,componentOutputName);
            // Check if file exists before creating
            if (Files.exists(zipfilePath)) {
                System.out.println("File already exists: " + zipfilePath);
            } else {
                System.out.println("File does not exist, creating new file...");
                Files.createFile(zipfilePath);
            }
            
            FileOutputStream fileOutputStream = new FileOutputStream(zipfilePath.toFile());
            generated.writeTo(fileOutputStream);
            System.out.println("ZIP file for smoke tests created at: " + zipfilePath.toAbsolutePath());
            
        } 
        catch (Exception e) {
            // Print any exception that occurs during parsing
            e.printStackTrace();
        }
    }


    public static void main(String[] args) throws IOException {

        if (args.length == 0 || getOptionName(args[0]).equals("help")) {
            printHelp();
            return;
        }

        Map<String, String> argPairs = getArgOptionPairs(args);

        //At this point we want to read the c2j from std in.
        //e.g. cat /home/henso/someC2jFile.normal.json | AWSClientGenerator --service myService --language-binding cpp or
        //AWSClientGenerator --service myService --language-binding cpp < /home/henso/someC2jFile.normal.json
        if (argPairs.containsKey(ARBITRARY_OPTION) || argPairs.containsKey(INPUT_FILE_NAME)) {
            if (!argPairs.containsKey(LANGUAGE_BINDING_OPTION) || argPairs.get(LANGUAGE_BINDING_OPTION).isEmpty()) {
                System.err.println("Error: A language binding must be specified with the --arbitrary option.");
                System.exit(-1);
                return;
            }
            final Set<String> ALLOWED_OPTIONS = new HashSet<>(Arrays.asList(SERVICE_OPTION, DEFAULTS_OPTION, PARTITIONS_OPTION));
            Set<String> selectedOptions = ALLOWED_OPTIONS;
            selectedOptions.retainAll(argPairs.keySet());
            if (selectedOptions.size() != 1) {
                System.err.println(String.format("Error: one and only one option from {%s} must be specified to the generator, found: {%s}",
                        ALLOWED_OPTIONS, selectedOptions));
                System.exit(-1);
                return;
            }
            final String selectedOption = selectedOptions.iterator().next();

            String namespace = "Aws";
            if (argPairs.containsKey(NAMESPACE) && !argPairs.get(NAMESPACE).isEmpty()) {
                namespace = argPairs.get(NAMESPACE);
            }
            String licenseText = "";
            if (argPairs.containsKey(LICENSE_TEXT) && !argPairs.get(LICENSE_TEXT).isEmpty()) {
                licenseText = argPairs.get(LICENSE_TEXT);
            }
            boolean generateStandalonePackage = argPairs.containsKey(STANDALONE_OPTION);
            boolean generateTests = argPairs.containsKey(GENERATE_TESTS_OPTION);
            String languageBinding = argPairs.get(LANGUAGE_BINDING_OPTION);
            String serviceName = argPairs.get(SERVICE_OPTION);
            boolean enableVirtualOperations = argPairs.containsKey(ENABLE_VIRTUAL_OPERATIONS);
            boolean generateSmokeTests = argPairs.containsKey(GENERATE_SMOKE_TESTS_OPTION);

            String arbitraryJson = readFile(argPairs.getOrDefault(INPUT_FILE_NAME, ""));
            String endpointRules = null;
            if (argPairs.containsKey(ENDPOINT_RULE_SET)) {
                endpointRules = readFile(argPairs.get(ENDPOINT_RULE_SET));
            }
            String endpointRuleTests = null;
            if (argPairs.containsKey(ENDPOINT_TESTS)) {
                endpointRuleTests = readFile(argPairs.get(ENDPOINT_TESTS));
            }

            String outputFileName = null;
            if (argPairs.containsKey(OUTPUT_FILE_NAME) && !argPairs.get(OUTPUT_FILE_NAME).isEmpty()) {
                outputFileName = argPairs.get(OUTPUT_FILE_NAME);
            }

            if (arbitraryJson != null && arbitraryJson.length() > 0) {
                try {
                    ByteArrayOutputStream generated;

                    String componentOutputName;
                    if (serviceName != null && !serviceName.isEmpty()) {
                        if (!generateTests) {
                            generated = generateService(arbitraryJson, endpointRules, endpointRuleTests, languageBinding, serviceName, namespace,
                                    licenseText, generateStandalonePackage, enableVirtualOperations);

                            componentOutputName = String.format("aws-cpp-sdk-%s", serviceName);


                            GsonBuilder gsonBuilder = new GsonBuilder();
                            Gson gson = gsonBuilder.create();
                            C2jServiceModel c2jServiceModel = gson.fromJson(arbitraryJson, C2jServiceModel.class);
                            ServiceModel serviceModel = new C2jModelToGeneratorModelTransformer(c2jServiceModel, true).convert();



                            generateSmokeTests(serviceName, serviceModel.getShapes());
                        } else {
                            generated = generateServiceTest(arbitraryJson, endpointRules, endpointRuleTests, languageBinding, serviceName, namespace,
                                    licenseText);

                            componentOutputName = String.format("%s-gen-tests", serviceName);
                        }
                    } else {
                        if (generateTests) {
                            System.out.println("Test generation for defaults is not supported by the generator.");
                            System.exit(-1);
                        }

                        if (selectedOption.equalsIgnoreCase(DEFAULTS_OPTION)) {
                            generated = generateDefaults(arbitraryJson, languageBinding, serviceName, namespace,
                                    licenseText, generateStandalonePackage, enableVirtualOperations);
                        } else if (selectedOption.equalsIgnoreCase(PARTITIONS_OPTION)) {
                            generated = generatePartitions(arbitraryJson, languageBinding, serviceName, namespace,
                                    licenseText, generateStandalonePackage, enableVirtualOperations);
                        } else {
                            System.err.println(String.format("Unsupported core component %s requested for generation", selectedOption));
                            System.exit(-1);
                            return;
                        }
                        componentOutputName = String.format("aws-cpp-sdk-core");
                    }

                    if (outputFileName != null && outputFileName.equals("STDOUT")) {
                        generated.writeTo(System.out);
                    } else {
                        File finalOutputFile;
                        if (outputFileName != null) {
                            finalOutputFile = new File(outputFileName);
                        } else {
                            finalOutputFile = File.createTempFile(componentOutputName, ".zip");
                        }
                        FileOutputStream fileOutputStream = new FileOutputStream(finalOutputFile);
                        generated.writeTo(fileOutputStream);

                        System.out.println(finalOutputFile.getAbsolutePath());
                    }

                } catch (GeneratorNotImplementedException e) {
                    System.err.println(e.getMessage());
                    e.printStackTrace();
                    System.exit(-1);
                } catch (Exception e) {
                    System.err.println(e.getMessage());
                    e.printStackTrace();
                    System.exit(-1);
                }
            } else {
                System.err.println("You must supply standard input if you specify the --arbitrary option.");
                System.exit(-1);
            }
            return;
        }

        printHelp();
    }

    private static ByteArrayOutputStream generateService(String arbitraryJson,
                                                         String endpointRules,
                                                         String endpointRulesTests,
                                                         String languageBinding,
                                                         String serviceName,
                                                         String namespace,
                                                         String licenseText,
                                                         boolean generateStandalonePackage,
                                                         boolean enableVirtualOperations) throws Exception {
        MainGenerator generator = new MainGenerator();
        DirectFromC2jGenerator directFromC2jGenerator = new DirectFromC2jGenerator(generator);

        ByteArrayOutputStream outputStream = directFromC2jGenerator.generateServiceSourceFromJson(
                arbitraryJson,
                endpointRules,
                endpointRulesTests,
                languageBinding,
                serviceName,
                namespace,
                licenseText,
                generateStandalonePackage,
                enableVirtualOperations);
        return outputStream;
    }

    private static ByteArrayOutputStream generateServiceTest(String arbitraryJson,
                                                             String endpointRules,
                                                             String endpointRulesTests,
                                                             String languageBinding,
                                                             String serviceName,
                                                             String namespace,
                                                             String licenseText) throws Exception {
        MainGenerator generator = new MainGenerator();
        DirectFromC2jGenerator directFromC2jGenerator = new DirectFromC2jGenerator(generator);

        ByteArrayOutputStream outputStream = directFromC2jGenerator.generateServiceTestSourceFromModels(
                arbitraryJson,
                endpointRules,
                endpointRulesTests,
                languageBinding,
                serviceName,
                namespace,
                licenseText);
        return outputStream;
    }

    private static ByteArrayOutputStream generateDefaults(String arbitraryJson, String languageBinding, String serviceName,
                                         String namespace, String licenseText,
                                         boolean generateStandalonePackage, boolean enableVirtualOperations) throws Exception {
        MainGenerator generator = new MainGenerator();
        DirectFromC2jGenerator defaultsGenerator = new DirectFromC2jGenerator(generator);

        ByteArrayOutputStream outputStream = defaultsGenerator.generateDefaultsSourceFromJson(arbitraryJson,
                languageBinding,
                serviceName,
                namespace,
                licenseText,
                generateStandalonePackage,
                enableVirtualOperations);
        return outputStream;
    }

    private static ByteArrayOutputStream generatePartitions(String arbitraryJson, String languageBinding, String serviceName,
                                                           String namespace, String licenseText,
                                                           boolean generateStandalonePackage, boolean enableVirtualOperations) throws Exception {
        MainGenerator generator = new MainGenerator();
        DirectFromC2jGenerator defaultsGenerator = new DirectFromC2jGenerator(generator);

        ByteArrayOutputStream outputStream = defaultsGenerator.generatePartitionsSourceFromJson(arbitraryJson,
                languageBinding,
                serviceName,
                namespace,
                licenseText,
                generateStandalonePackage,
                enableVirtualOperations);
        return outputStream;
    }

    private static String readFile(String filename) throws IOException {
        InputStream stream;
        if(filename != null && !filename.isEmpty()) {
            stream = new FileInputStream(filename);
        } else {
            stream = System.in;
        }

        StringBuilder stringBuilder = new StringBuilder();
        byte[] buffer = new byte[1024];
        int bytes;
        while ((bytes = stream.read(buffer)) > 0) {
            stringBuilder.append(new String(buffer, 0, bytes, StandardCharsets.UTF_8));
        }
        return stringBuilder.toString();
    }

    private static InputStream getInputStreamReader(Map<String, String> argsMap) throws FileNotFoundException, UnsupportedEncodingException {
        if (argsMap.containsKey(INPUT_FILE_NAME)) {
            return new FileInputStream(argsMap.get(INPUT_FILE_NAME));
        }
        return System.in;
    }

    private static void printHelp() {
        System.out.println("Syntax: AWSClientGenerator <options>");
        System.out.println("Example: cat /home/henso/someC2jFile.normal.json | AWSClientGenerator --service myService --language-binding cpp --arbitrary");
        System.out.println("\tOptions:");
        System.out.println("\t\t--help  Print this message");
        System.out.println("\t\t--arbitrary Reads the Coral To Json Doc from the std input. You must specify --language-binding and --service with this argument.");
        System.out.println("\t\t--language-binding  language binding to generate sdk for. If this is specified you must specify service and version arguments or you must specify --arbitrary");
        System.out.println("\t\t--service service to generate service for. If this is specified, you must specify version and language-binding");
        System.out.println("\t\t--version version of service to generate sdk for. If this is specified, you must specify language-binding and service.");
        System.out.println("\t\t  If you generate a specific SDK, the output will be the file where the sdk is stored in zip format");

        System.out.println("\t\t--inputfile Reads the c2j model from the file.");
        System.out.println("\t\t--outputfile Writes the generated zip archive to the file.");

    }

    private static String getOptionName(String optionStr) {
        if (optionStr.contains("--")) {
            return optionStr.substring(2).toLowerCase();
        }

        return "";
    }

    private static boolean isOption(String str) {
        return !getOptionName(str).isEmpty();
    }

    /**
     * If we have option pairs (e.g. --key value) then this will put them into the map as key to value. If the option
     * does not take an argument, then the option is a key but the value will be empty.
     *
     * @param args cli args to parse.
     * @return map of passed options and their arguments if they exist.
     */
    private static Map<String, String> getArgOptionPairs(String[] args) {
        Map<String, String> argsPairs = new HashMap<>();
        for (int i = 0; i < args.length; ) {
            String key = "", value = "";
            if (isOption(args[i])) {
                key = getOptionName(args[i]);
                ++i;

                if (i < args.length && !isOption(args[i])) {
                    value = args[i];
                    ++i;
                }
                argsPairs.put(key, value);
            } else {
                ++i;
            }
        }

        return argsPairs;
    }
}
