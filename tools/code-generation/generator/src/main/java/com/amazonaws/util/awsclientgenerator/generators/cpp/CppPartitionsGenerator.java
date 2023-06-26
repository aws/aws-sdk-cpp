package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.PartitionsModel;
import com.amazonaws.util.awsclientgenerator.generators.PartitionsGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.ObjectMapper;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CppPartitionsGenerator implements PartitionsGenerator {

    private static String PARTITIONS_INCLUDE_TEMPLATE =
            "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/partitions/AWSPartitionsHeader.vm";
    private static String PARTITIONS_SOURCE_TEMPLATE =
            "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/partitions/AWSPartitionsSource.vm";
    private static String PARTITIONS_HEADER_DIR_PATH = "include/aws/core/endpoint/AWSPartitions.h";
    private static String PARTITIONS_SOURCE_DIR_PATH = "source/endpoint/AWSPartitions.cpp";

    protected final VelocityEngine velocityEngine;

    public CppPartitionsGenerator() throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling, even in new templates, for consistency with other templates
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());

        velocityEngine.init();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(PartitionsModel partitionsModel) throws Exception {
        ObjectMapper objectMapper = new ObjectMapper();
        JsonNode jsonNode = null;
        String shortenedPartitionsBlob = partitionsModel.getPartitionsBlob();
        try {
            jsonNode = objectMapper.readValue(shortenedPartitionsBlob, JsonNode.class);
            shortenedPartitionsBlob = jsonNode.toString();
        } catch (JsonProcessingException e) {
            System.err.println("Unable to parse partition file as a json: " + e.getMessage());
        }
        shortenedPartitionsBlob += "\0";
        partitionsModel.setPartitionsBlob(shortenedPartitionsBlob);

        List<SdkFileEntry> fileList = new ArrayList<>();
        fileList.addAll(generateModelHeaderFiles(partitionsModel));
        fileList.addAll(generateModelSourceFiles(partitionsModel));

        SdkFileEntry[] retArray = new SdkFileEntry[fileList.size()];
        return fileList.toArray(retArray);
    }

    protected List<SdkFileEntry> generateModelHeaderFiles(final PartitionsModel partitionsModel) throws Exception {
        VelocityContext context = createContext(partitionsModel);

        Template template = velocityEngine.getTemplate(PARTITIONS_INCLUDE_TEMPLATE, StandardCharsets.UTF_8.name());
        context.put("partitionsModel", partitionsModel);
        context.put("serviceModel", partitionsModel); // for compatibility with generic template (Attribution.vm)

        String outputFileName = PARTITIONS_HEADER_DIR_PATH;
        SdkFileEntry headerFile = makeFile(template, context, outputFileName);
        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();
        sdkFileEntries.add(headerFile);

        return sdkFileEntries;
    }

    protected List<SdkFileEntry> generateModelSourceFiles(final PartitionsModel partitionsModel) throws Exception {
        VelocityContext context = createContext(partitionsModel);

        Template template = velocityEngine.getTemplate(PARTITIONS_SOURCE_TEMPLATE, StandardCharsets.UTF_8.name());
        context.put("partitionsModel", partitionsModel);
        context.put("serviceModel", partitionsModel); // for compatibility with generic template (Attribution.vm)

        String outputFileName = PARTITIONS_SOURCE_DIR_PATH;
        SdkFileEntry headerFile = makeFile(template, context, outputFileName);
        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();
        sdkFileEntries.add(headerFile);

        return sdkFileEntries;
    }

    protected static final VelocityContext createContext(final PartitionsModel serviceModel) {
        VelocityContext context = new VelocityContext();
        context.put("nl", System.lineSeparator());
        context.put("nullChar", '\0');
        context.put("input.encoding", StandardCharsets.UTF_8.name());
        context.put("output.encoding", StandardCharsets.UTF_8.name());
        return context;
    }

    protected static final SdkFileEntry makeFile(Template template, VelocityContext context, String path) throws IOException {
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
        return file;
    }
}
