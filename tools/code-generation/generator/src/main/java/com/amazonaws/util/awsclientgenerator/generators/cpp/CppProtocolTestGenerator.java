/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppCborViewHelper;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.ProtocolTestModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.protocol_test.ProtocolTestSuite;
import com.amazonaws.util.awsclientgenerator.generators.ClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
import com.google.common.collect.ImmutableSet;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.util.stream.Collectors;

import static com.amazonaws.util.awsclientgenerator.generators.cpp.ec2.Ec2CppClientGenerator.legacyPatchEc2Model;

public class CppProtocolTestGenerator implements ClientGenerator {

    private static String CMAKE_LISTS_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/protocoltests/ProtocolTestsCMakeLists.vm";
    private static String RUN_TESTS_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/protocoltests/ProtocolTestsRunTestsSrc.vm";
    private static String TEST_SUITE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/protocoltests/ProtocolTestsTestSuiteSrc.vm";

    protected final VelocityEngine velocityEngine;
    private final ServiceModel serviceModel;
    private final ProtocolTestModel testModel;  // TODO: use an intermediate codegen model instead of raw C2J
    private final String projectName;

    public CppProtocolTestGenerator(ServiceModel serviceModel, ProtocolTestModel testSuiteModel) throws Exception {
        this.serviceModel = serviceModel;
        this.testModel = testSuiteModel;
        String prefix = testSuiteModel.getType().toString().toLowerCase();
        this.projectName = "protocol-" + testSuiteModel.getName() + "-" + prefix + "-tests";

        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        velocityEngine.setProperty("context.scope_control.macro", true);
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());

        velocityEngine.init();

        legacyPatchEc2Model(this.serviceModel);
    }

    protected SdkFileEntry generateTestSuiteSourceFile(ProtocolTestSuite testSuite) throws IOException {
        VelocityContext context = createContext();
        context.put("testSuite", testSuite);
        context.put("sourceIncludes", computeTestSourceIncludes(testSuite));
        Template template = velocityEngine.getTemplate(TEST_SUITE_TEMPLATE, StandardCharsets.UTF_8.name());
        String fileName = String.format("tests/%sTest.cpp", testSuite.getName());

        return makeFile(template, context, fileName, true);
    }

    protected List<SdkFileEntry> generateTestSuiteSourceFiles() throws IOException {
        return testModel.getTestSuites().stream()
                .map(entry -> {
                    try {
                        return generateTestSuiteSourceFile(entry);
                    } catch (IOException e) {
                        throw new RuntimeException(e);
                    }
                })
                .collect(Collectors.toList());
    }

    public SdkFileEntry[] generateSourceFiles(ServiceModel dummy) throws Exception {
        List<SdkFileEntry> fileList = new ArrayList<>();
        fileList.add(generateCmakeFile());
        fileList.add(generateTestDriver());
        fileList.addAll(generateTestSuiteSourceFiles());

        SdkFileEntry[] retArray = new SdkFileEntry[fileList.size()];
        return fileList.toArray(retArray);
    }

    private SdkFileEntry generateCmakeFile() throws Exception {
        VelocityContext context = createContext();
        Template template = velocityEngine.getTemplate(CMAKE_LISTS_TEMPLATE, StandardCharsets.UTF_8.name());
        return makeFile(template, context, "CMakeLists.txt", false);
    }

    protected SdkFileEntry generateTestDriver() throws Exception {
        VelocityContext context = createContext();
        Template template = velocityEngine.getTemplate(RUN_TESTS_TEMPLATE, StandardCharsets.UTF_8.name());
        return makeFile(template, context, "RunTests.cpp", true);
    }

    protected final VelocityContext createContext() {
        VelocityContext context = new VelocityContext();
        context.put("nl", System.lineSeparator());
        context.put("projectName", projectName);
        context.put("serviceModel", serviceModel);
        context.put("testModel", testModel);
        context.put("input.encoding", StandardCharsets.UTF_8.name());
        context.put("output.encoding", StandardCharsets.UTF_8.name());
        if(serviceModel.getMetadata().getProtocol().equals("smithy-rpc-v2-cbor")){
            context.put("CppViewHelper", CppCborViewHelper.class);
        } else {
            context.put("CppViewHelper", CppViewHelper.class);
        }
        return context;
    }

    protected final SdkFileEntry makeFile(Template template, VelocityContext context, String path, boolean needsBOM) throws IOException {
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

    private final Set<String> HEADERS_TO_NOT_INCLUDE = ImmutableSet.of(
            "<aws/core/utils/memory/stl/AWSStringStream.h>",
            "<aws/core/utils/HashingUtils.h>"
    );

    private List<String> computeTestSourceIncludes(ProtocolTestSuite testSuite) {
        Set<String> set = testSuite.getShapes().entrySet().stream()
                .map(entry -> {
                    Shape shape = serviceModel.getShapes().getOrDefault(entry.getKey(),
                            serviceModel.getShapes().get(entry.getKey() + "Request"));
                    // operation with no input shape defined but cpp sdk generates an empty request class
                    Set<String> includes = shape != null ?
                            CppViewHelper.computeSourceIncludes(serviceModel.getMetadata().getProjectName(), shape) :
                            new HashSet<String>();
                    if (shape != null) {
                        for(Map.Entry<String, ShapeMember> member : shape.getMembers().entrySet()) {
                            // deal with recursive sub-members
                            includes.addAll(CppViewHelper.computeSourceIncludes(
                                    serviceModel.getMetadata().getProjectName(), member.getValue().getShape()));
                        }

                    }
                    return includes;
                })
                .flatMap(entrySet -> entrySet.stream())
                .collect(Collectors.toSet());
        // include the request shapes
        Set<String> requestShapes = testSuite.getCases().stream()
                .map(entry ->
                        String.format("<aws/%s/model/%s.h>",
                                serviceModel.getMetadata().getProjectName(),
                                entry.getGiven().getName() + "Request"))
                .collect(Collectors.toSet());

        set.addAll(requestShapes);
        set.removeAll(HEADERS_TO_NOT_INCLUDE);
        return set.stream().sorted().collect(Collectors.toList());
    }
}
