/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.endpointrules;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.node.StringNode;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;

import java.util.Map;
import java.util.stream.Collectors;

/**
 * Generates the {@code <Prefix>EndpointRules.{h,cpp}} pair carrying the compiled BDD bytecode blob.
 *
 * <p>This is the smithy-side counterpart to the C2J {@code --skip-endpoint-rules-blob} flag: when that
 * flag is set the legacy generator deliberately emits nothing for these two files, leaving this plugin
 * to write them whole. The emitted ABI is identical to the JSON path (see {@link EndpointRulesRenderer});
 * only the blob contents change from ruleset JSON to binary BDD bytecode.
 *
 * <p>The BDD is read from the {@code smithy.rules#endpointBdd} trait on the service shape and compiled by
 * shelling out to the in-tree {@code bdd-bytecoder.py}. The interpreter and compiler paths are supplied via
 * the {@code pythonExecutable} and {@code bddBytecoderPath} plugin settings (threaded in from
 * {@code smithy_cpp_gen.py}) because gradle's working directory cannot reach the compiler under {@code crt/}.
 */
public class EndpointRulesCodegenPlugin implements SmithyBuildPlugin {

    private static final ShapeId ENDPOINT_BDD_TRAIT = ShapeId.from("smithy.rules#endpointBdd");
    private static final String DEFAULT_PYTHON = "python3";

    @Override
    public String getName() {
        return "smithy-cpp-codegen-endpoint-rules";
    }

    @Override
    public void execute(PluginContext context) {
        Model model = context.getModel();

        // Mock projections stand in for legacy services with no Smithy model, hence no BDD to compile.
        if (context.getProjectionName().endsWith(".mock")) {
            return;
        }

        ObjectNode settings = context.getSettings();
        Map<String, String> serviceMap = parseMapSetting(settings, "c2jMap");
        Map<String, String> namespaceMap = parseNamespaceMap(settings);
        String pythonExecutable = settings.getStringMemberOrDefault("pythonExecutable", DEFAULT_PYTHON);
        String bddBytecoderPath = settings.getStringMember("bddBytecoderPath")
            .map(n -> n.getValue())
            .orElseThrow(() -> new IllegalStateException(
                "endpoint-rules plugin requires the 'bddBytecoderPath' setting (path to bdd-bytecoder.py)"));

        CppWriterDelegator writerDelegator = new CppWriterDelegator(context.getFileManifest());

        // Services without an endpointBdd trait keep resolving via the JSON path, so skip them here.
        model.getServiceShapes().stream()
            .map(service -> ServiceNameUtil.processS3CrtProjection(service, context.getProjectionName()))
            .filter(service -> service.hasTrait(ENDPOINT_BDD_TRAIT))
            .forEach(service -> generateEndpointRules(
                service, serviceMap, namespaceMap, pythonExecutable, bddBytecoderPath, writerDelegator));

        writerDelegator.flushWriters();
    }

    private void generateEndpointRules(ServiceShape service, Map<String, String> serviceMap,
                                       Map<String, String> namespaceMap, String pythonExecutable,
                                       String bddBytecoderPath, CppWriterDelegator writerDelegator) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
        String exportMacro = ServiceNameUtil.getExportMacro(service, serviceMap);
        String namespace = namespaceMap.getOrDefault(smithyServiceName, serviceName);

        String traitJson = Node.printJson(service.findTrait(ENDPOINT_BDD_TRAIT).orElseThrow().toNode());
        byte[] bytecode = BddBytecoder.compile(pythonExecutable, bddBytecoderPath, traitJson, smithyServiceName);

        writerDelegator.useFileWriter(
            "include/aws/" + smithyServiceName + "/internal/" + namespace + "EndpointRules.h",
            writer -> EndpointRulesRenderer.renderHeader(writer, namespace, smithyServiceName, exportMacro));
        writerDelegator.useFileWriter(
            "source/" + namespace + "EndpointRules.cpp",
            writer -> EndpointRulesRenderer.renderSource(writer, namespace, smithyServiceName, bytecode));
    }

    private Map<String, String> parseMapSetting(ObjectNode settings, String key) {
        return settings.getMember(key)
                .filter(Node::isStringNode)
                .map(Node::expectStringNode)
                .map(StringNode::getValue)
                .map(Node::parseJsonWithComments)
                .map(Node::expectObjectNode)
                .map(mapNode -> mapNode.getMembers().entrySet().stream()
                        .collect(Collectors.toMap(
                                entry -> entry.getKey().getValue(),
                                entry -> entry.getValue().expectStringNode().getValue())))
                .orElse(Map.of());
    }

    private Map<String, String> parseNamespaceMap(ObjectNode settings) {
        return settings.getMember("namespaceMappings")
            .map(node -> node.expectStringNode().getValue())
            .map(jsonStr -> Node.parseJsonWithComments(jsonStr).expectObjectNode())
            .map(node -> node.getMembers().entrySet().stream()
                .collect(Collectors.toMap(
                    entry -> entry.getKey().getValue(),
                    entry -> sanitize(entry.getValue().expectStringNode().getValue()))))
            .orElse(Map.of());
    }

    private static String sanitize(String s) {
        return s.replace(" ", "").replace("-", "").replace("_", "")
            .replace("Amazon", "").replace("AWS", "").replace("/", "");
    }
}
