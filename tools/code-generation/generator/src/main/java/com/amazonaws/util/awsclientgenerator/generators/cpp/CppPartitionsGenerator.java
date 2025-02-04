package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.PartitionsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.PartitionsGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.google.common.collect.ImmutableList;
import org.apache.commons.lang3.tuple.Pair;
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
import java.util.Collection;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;

public class CppPartitionsGenerator implements PartitionsGenerator {

    private final static String PARTITIONS_INCLUDE_TEMPLATE =
            "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/partitions/AWSPartitionsHeader.vm";
    private final static String PARTITIONS_SOURCE_TEMPLATE =
            "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/partitions/AWSPartitionsSource.vm";
    private final static String REGION_INCLUDE_TEMPLATE =
            "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/region/AWSRegionHeader.vm";
    private final static String PARTITIONS_HEADER_DIR_PATH = "include/aws/core/endpoint/AWSPartitions.h";
    private final static String PARTITIONS_SOURCE_DIR_PATH = "source/endpoint/AWSPartitions.cpp";
    private final static String REGION_HEADER_DIR_PATH = "include/aws/core/Region.h";

    protected final VelocityEngine velocityEngine;

    public CppPartitionsGenerator() throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        velocityEngine.setProperty("context.scope_control.macro", true);
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
            // Remove unused description node from partition blob while we add support for utf-8
            removeJsonNodeFromTree(jsonNode, "description");
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

        return ImmutableList.of(Pair.of(PARTITIONS_INCLUDE_TEMPLATE, PARTITIONS_HEADER_DIR_PATH),
            Pair.of(REGION_INCLUDE_TEMPLATE, REGION_HEADER_DIR_PATH))
                .stream()
                .map(templatePair -> {
                    Template template = velocityEngine.getTemplate(templatePair.getKey(), StandardCharsets.UTF_8.name());
                    context.put("partitionsModel", partitionsModel);
                    context.put("serviceModel", partitionsModel); // for compatibility with generic template (Attribution.vm)
                    context.put("regions", partitionsModel.getPartitions().stream()
                            .map(partition -> partition.getRegions().entrySet())
                            .flatMap(Collection::stream)
                            .sorted(Map.Entry.comparingByKey())
                            .collect(Collectors.toList()));
                    context.put("CppViewHelper", CppViewHelper.class);

                    return makeFile(template, context, templatePair.getValue());
                })
                .collect(Collectors.toList());
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

    protected static final SdkFileEntry makeFile(Template template, VelocityContext context, String path) {
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

    private static void removeJsonNodeFromTree(final JsonNode node, final String nodeName) {
        final Queue<JsonNode> nodes = new LinkedList<>();
        final Set<JsonNode> seen = new HashSet<>();
        nodes.add(node);
        while (!nodes.isEmpty()) {
            JsonNode currentNode = nodes.poll();
            Iterator<Map.Entry<String, JsonNode>> fieldIterator = currentNode.fields();
            while (fieldIterator.hasNext()) {
                Map.Entry<String, JsonNode> entry = fieldIterator.next();
                if (nodeName.equals(entry.getKey())) {
                    fieldIterator.remove();
                } else {
                    Iterable<JsonNode> nodeIterable = () -> entry.getValue().elements();
                    List<JsonNode> childNodes = StreamSupport.stream(nodeIterable.spliterator(), false)
                            .filter(childNode -> !seen.contains(childNode))
                            .collect(Collectors.toList());
                    nodes.addAll(childNodes);
                    seen.addAll(childNodes);
                }
            }
        }
    }
}
