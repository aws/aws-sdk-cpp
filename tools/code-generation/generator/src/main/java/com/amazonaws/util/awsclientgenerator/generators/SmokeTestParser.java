
package com.amazonaws.util.awsclientgenerator.generators;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.loader.ModelAssembler;
//import software.amazon.smithy.model.node.Node;
//import software.amazon.smithy.model.node.StringNode;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
//import java.nio.file.DirectoryStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;


import java.util.stream.Collectors;
import java.util.Map;
import java.util.ArrayList;
//import java.util.HashSet;
import java.util.Optional;
//import java.util.Set;
import java.util.Iterator;

//import java.util.Set;
import java.util.List;
import lombok.Data;


import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.amazonaws.util.awsclientgenerator.domainmodels.smoketests.SmokeTestDocument;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;


public class SmokeTestParser {
    protected final VelocityEngine velocityEngine;
    public SmokeTestParser()throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());
        velocityEngine.init();
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
        Map<String, Node> paramsMap;
        boolean expectSuccess;
        Optional<String> errorShapeId;
        //capture auth scheme as that decides the client constructor 
        String auth;
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

    protected final SdkFileEntry makeFile(Template template, VelocityContext context, String path, boolean needsBOM) {
        StringWriter sw = new StringWriter();
        template.merge(context, sw);

        try {
            sw.close();
        } catch (IOException e) {
            throw new SourceGenerationFailedException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
        sw.flush();
        StringBuffer sb = new StringBuffer();
        sb.append(sw.toString());

        SdkFileEntry file = new SdkFileEntry();
        file.setPathRelativeToRoot(path);
        file.setSdkFile(sb);
        file.setNeedsByteOrderMark(needsBOM);
        return file;
    }

    public SdkFileEntry generateTestSourceFile( List<TestcaseParams> tests, String fileName){

        if(tests.size() == 0)
        {
            throw new RuntimeException("No tests found");
        }

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createSmokeTestContext(tests);
        //ErrorFormatter errorFormatter = new ErrorFormatter();
        //context.put("errorConstNames", errorFormatter.formatErrorConstNames(serviceModel.getNonCoreServiceErrors()));
        //context.put("CppViewHelper", CppViewHelper.class);

        return makeFile(template, context, fileName, true);
    }

    public SdkFileEntry generateTestCmakeFile( String projectName, String fileName){
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/smoketests/smokeTestCmake.vm", StandardCharsets.UTF_8.name());
        VelocityContext context = new VelocityContext();
        context.put("projectName", projectName);
        //ErrorFormatter errorFormatter = new ErrorFormatter();
        //context.put("errorConstNames", errorFormatter.formatErrorConstNames(serviceModel.getNonCoreServiceErrors()));
        //context.put("CppViewHelper", CppViewHelper.class);

        return makeFile(template, context, fileName, true);
    }



    private List<TestcaseParams> extractTests(SmokeTestDocument smoketests)
    {   
        List<TestcaseParams> testcaseList = new ArrayList<TestcaseParams>();


        List<Object> objList = new ArrayList<Object>();

        smoketests.getTestCases().stream().forEach(test -> {

            test.getInput().entrySet().stream().forEach(entry -> {

                objList.add(entry.getValue());

                
            });
        });

        

        objList.stream().forEach(obj -> {
            ObjectNode.Builder objectNodeBuilder = ObjectNode.builder();
            TestcaseParams test = new TestcaseParams();
            if (obj instanceof Map) {
                Map<?, ?> map = (Map<?, ?>) obj; // Cast to Map
    
                // Iterate over entries
                System.out.println("Map contents:");
                for (Map.Entry<?, ?> entry : map.entrySet()) {
                    String key = entry.getKey().toString();
                    Object value = entry.getValue();
                    
                    System.out.println("Key: " + key);
                    System.out.println("Value: " + value);
                    
                    // Additional type handling
                    if (value instanceof String) {
                        test.paramsMap.put(key, Node.from((String) value));
                    } else if (value instanceof Double) {
                        test.paramsMap.put(key, Node.from((Double) value));
                    } else if (value instanceof Integer) {
                        test.paramsMap.put(key, Node.from((Integer) value));
                    } else if (value instanceof Boolean) {
                        test.paramsMap.put(key, Node.from((Boolean) value));
                    } else {
                        System.out.println("Other Value Type: " + value.getClass().getName());
                    }
                }
            } else {
                System.out.println("The object is not a Map.");
            }

        });
        

        
        // Convert the Java object to a JSON string
        //

        return testcaseList;
    }

    public List<TestcaseParams> parse(String rawJson, String serviceName) {
        
        GsonBuilder gsonBuilder = new GsonBuilder();
        Gson gson = gsonBuilder.create();
        SmokeTestDocument smoketests = gson.fromJson(rawJson, SmokeTestDocument.class);

        return extractTests(smoketests);
    }
}