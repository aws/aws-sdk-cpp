/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.EnumModel;
import com.amazonaws.util.awsclientgenerator.generators.ClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
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

public class CppServiceClientTestGenerator implements ClientGenerator {

    private static String CMAKE_LISTS_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/generatedtests/GeneratedTestsCMakeLists.vm";
    private static String TEST_DRIVER_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/generatedtests/RunTestsSource.vm";
    private static String ENDPOINTS_TESTS_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/generatedtests/ServiceEndpointRulesTests.vm";

    protected final VelocityEngine velocityEngine;

    public CppServiceClientTestGenerator() throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());

        velocityEngine.init();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        List<SdkFileEntry> fileList = new ArrayList<>();
        fileList.add(generateCmakeFile(serviceModel));
        fileList.add(generateTestDriver(serviceModel));
        fileList.addAll(generateEndpointsRulesTests(serviceModel));

        SdkFileEntry[] retArray = new SdkFileEntry[fileList.size()];
        return fileList.toArray(retArray);
    }

    private SdkFileEntry generateCmakeFile(final ServiceModel serviceModel) throws Exception {
        VelocityContext context = createContext(serviceModel);
        Template template = velocityEngine.getTemplate(CMAKE_LISTS_TEMPLATE, StandardCharsets.UTF_8.name());
        return makeFile(template, context, "CMakeLists.txt", false);
    }

    protected SdkFileEntry generateTestDriver(final ServiceModel serviceModel) throws Exception {
        VelocityContext context = createContext(serviceModel);
        Template template = velocityEngine.getTemplate(TEST_DRIVER_TEMPLATE, StandardCharsets.UTF_8.name());
        return makeFile(template, context, "RunTests.cpp", true);
    }

    protected List<SdkFileEntry> generateEndpointsRulesTests(ServiceModel serviceModel) throws Exception {
        VelocityContext context = createContext(serviceModel);
        Template template = velocityEngine.getTemplate(ENDPOINTS_TESTS_TEMPLATE, StandardCharsets.UTF_8.name());

        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();

        String endpointProviderTestsFileName = String.format("%sEndpointProviderTests.cpp", serviceModel.getMetadata().getClassNamePrefix());;
        SdkFileEntry endpointProviderTests = makeFile(template, context, endpointProviderTestsFileName, true);
        sdkFileEntries.add(endpointProviderTests);

        return sdkFileEntries;
    }

    protected final VelocityContext createContext(final ServiceModel serviceModel) {
        VelocityContext context = new VelocityContext();
        context.put("nl", System.lineSeparator());
        context.put("serviceModel", serviceModel);
        context.put("input.encoding", StandardCharsets.UTF_8.name());
        context.put("output.encoding", StandardCharsets.UTF_8.name());
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
}
