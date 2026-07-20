/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.ServiceShape;

import java.util.HashMap;
import java.util.Map;
import java.util.stream.Collectors;

public class ModelCodegenPlugin implements SmithyBuildPlugin {

    @Override
    public String getName() {
        return "smithy-cpp-codegen-models";
    }

    @Override
    public void execute(PluginContext context) {
        Model model = context.getModel();

        // Skip legacy mock projections (no model files to generate)
        if (context.getProjectionName().endsWith(".mock")) {
            return;
        }

        // Parse settings
        ObjectNode settings = context.getSettings();
        Map<String, String> serviceMap = parseMapSetting(settings, "c2jMap");
        Map<String, String> namespaceMap = parseNamespaceMap(settings);

        CppWriterDelegator writerDelegator = new CppWriterDelegator(context.getFileManifest());

        for (ServiceShape service : model.getServiceShapes()) {
            ServiceShape processedService = ServiceNameUtil.processS3CrtProjection(
                service, context.getProjectionName());

            String serviceName = ServiceNameUtil.getServiceName(processedService);
            String smithyServiceName = ServiceNameUtil.getSmithyServiceName(processedService, serviceMap);
            String exportMacro = ServiceNameUtil.getExportMacro(processedService, serviceMap);

            // Resolve namespace override
            String namespace = namespaceMap.getOrDefault(smithyServiceName, serviceName);

            ModelGenerator generator = new ModelGenerator(
                model, processedService, writerDelegator,
                serviceName, smithyServiceName, exportMacro, namespace);
            generator.generateAll();
        }

        writerDelegator.flushWriters();
    }

    private Map<String, String> parseMapSetting(ObjectNode settings, String key) {
        Map<String, String> result = new HashMap<>();
        if (settings.containsMember(key)) {
            var node = settings.expectMember(key);
            if (node.isStringNode()) {
                String jsonStr = node.expectStringNode().getValue();
                ObjectNode mapNode = Node.parseJsonWithComments(jsonStr).expectObjectNode();
                mapNode.getMembers().forEach((k, v) ->
                    result.put(k.getValue(), v.expectStringNode().getValue()));
            }
        }
        return result;
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
