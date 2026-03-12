/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.utils.StringUtils;

import java.util.*;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class FeatureParser<T> {
    private final PluginContext context;
    private final ServiceShape service;
    private final List<T> operations;
    private final CppWriterDelegator writerDelegator;
    private final Map<String, String> serviceMap;
    private final Map<String, String> namespaceMap;
    private final String featureName;

    public FeatureParser(PluginContext context, ServiceShape service, List<T> operations, String featureName) {
        this.context = context;
        this.service = service;
        this.operations = operations;
        this.featureName = featureName;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
        
        // Initialize service map
        this.serviceMap = new HashMap<>();
        ObjectNode settings = context.getSettings();
        if (settings.containsMember("c2jMap")) {
            Node c2jMapNode = settings.expectMember("c2jMap");
            if (c2jMapNode.isStringNode()) {
                String jsonStr = c2jMapNode.expectStringNode().getValue();
                ObjectNode mapNode = Node.parseJsonWithComments(jsonStr).expectObjectNode();
                mapNode.getMembers().forEach((key, value) -> {
                    this.serviceMap.put(key.getValue(), value.expectStringNode().getValue());
                });
            }
        }

        this.namespaceMap = settings.getMember("namespaceMappings")
            .map(node -> node.expectStringNode().getValue())
            .map(jsonStr -> Node.parseJsonWithComments(jsonStr).expectObjectNode())
            .map(node -> node.getMembers().entrySet().stream()
                    .collect(Collectors.toMap(
                            entry -> entry.getKey().getValue(),
                            entry -> sanitizeServiceAbbreviation(entry.getValue().expectStringNode().getValue()))))
            .orElse(Map.of());
    }

    public void run(Consumer<FeatureParser<T>> generationLogic) {
        generationLogic.accept(this);
        writerDelegator.flushWriters();
    }
    
    public void generateClientHeader(String fileName, Consumer<CppWriter> generator) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
        
        writerDelegator.useFileWriter(
            "include/aws/" + smithyServiceName + "/" + fileName,
            generator
        );
    }
    
    public PluginContext getContext() { return context; }
    public ServiceShape getService() { return service; }
    public List<T> getOperations() { return operations; }
    public String getFeatureName() { return featureName; }
    public Map<String, String> getServiceMap() { return serviceMap; }
    public String getServiceName() { return ServiceNameUtil.getServiceName(service); }
    public String getSmithyServiceName() { return ServiceNameUtil.getSmithyServiceName(service, serviceMap); }
    public Map<String, String> getNamespaceMap() { return namespaceMap; }

    // In reference to ServiceNameUtil.sanitizeServiceAbbreviation such that we get the same namepsace name as C2J
    private static String sanitizeServiceAbbreviation(final String serviceAbbreviation) {
        return serviceAbbreviation.replace(" ", "").replace("-", "").replace("_", "").replace("Amazon", "").replace("AWS", "").replace("/", "");
    }
}