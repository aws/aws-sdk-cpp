/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.AccessAnalyzerTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.ApiGatewayTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.ApiGatewayV2Transforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.ChunkedEncodingTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.DynamoDbTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.Ec2Transforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlacierTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.LambdaTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.LongPollingTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.S3ControlTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.S3Transforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SourceRegionTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SqsTransforms;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SupportsPresigningTransform;
import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.ServiceShape;

import java.util.HashMap;
import java.util.List;
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

        if (context.getProjectionName().endsWith(".mock")) {
            return;
        }

        ObjectNode settings = context.getSettings();
        Map<String, String> serviceMap = parseMapSetting(settings, "c2jMap");
        Map<String, String> namespaceMap = parseNamespaceMap(settings);

        TransformPipeline pipeline = new TransformPipeline(List.of(
            new GlobalTransforms(),
            new SourceRegionTransform(),
            new LambdaTransforms(),
            new SqsTransforms(),
            new ApiGatewayTransforms(),
            new ApiGatewayV2Transforms(),
            new Ec2Transforms(),
            new AccessAnalyzerTransforms(),
            new DynamoDbTransforms(),
            new S3Transforms(),
            new S3ControlTransforms(),
            new GlacierTransforms(),
            new SupportsPresigningTransform(),
            new ChunkedEncodingTransform(),
            new LongPollingTransform()
        ));

        CppWriterDelegator writerDelegator = new CppWriterDelegator(context.getFileManifest());

        for (ServiceShape service : model.getServiceShapes()) {
            ServiceShape processedService = ServiceNameUtil.processS3CrtProjection(
                service, context.getProjectionName());

            Model transformedModel = pipeline.apply(model, processedService);

            String serviceName = ServiceNameUtil.getServiceName(processedService);
            String smithyServiceName = ServiceNameUtil.getSmithyServiceName(processedService, serviceMap);
            String exportMacro = ServiceNameUtil.getExportMacro(processedService, serviceMap);

            String namespace = namespaceMap.getOrDefault(smithyServiceName, serviceName);

            ModelGenerator generator = new ModelGenerator(
                transformedModel, processedService, writerDelegator,
                smithyServiceName, exportMacro, namespace);
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
                    entry -> ServiceNameUtil.sanitizeServiceAbbreviation(
                        entry.getValue().expectStringNode().getValue()))))
            .orElse(Map.of());
    }
}
