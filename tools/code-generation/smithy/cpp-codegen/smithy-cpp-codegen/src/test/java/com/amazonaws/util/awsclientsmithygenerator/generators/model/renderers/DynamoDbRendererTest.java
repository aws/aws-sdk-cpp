/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies that {@link DynamoDbRenderer} emits DynamoDB's bespoke {@code AttributeValue} /
 * {@code AttributeValueValue} classes verbatim from classpath resources for the {@code dynamodb}
 * service only, and is a no-op for every other service.
 */
class DynamoDbRendererTest {

    /** Builds a minimal {@link RenderContext} whose {@code smithyServiceName} is the given name. */
    private static RenderContext ctx(String smithyServiceName) {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .build();
        Model model = Model.builder().addShape(service).build();
        ProtocolTraits traits = ProtocolResolver.traitsFor(Protocol.JSON);
        return new RenderContext(model, service, traits,
            "DynamoDB", "AWS_DYNAMODB_API", smithyServiceName);
    }

    @Test
    void emitsFourAttributeValueFilesForDynamoDb() {
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        new DynamoDbRenderer(ctx("dynamodb")).render(delegator);
        delegator.flushWriters();
        assertTrue(manifest.hasFile("include/aws/dynamodb/model/AttributeValue.h"));
        assertTrue(manifest.hasFile("source/model/AttributeValue.cpp"));
        assertTrue(manifest.hasFile("include/aws/dynamodb/model/AttributeValueValue.h"));
        assertTrue(manifest.hasFile("source/model/AttributeValueValue.cpp"));
        // Body was emitted verbatim: the class + a distinctive static-content marker are present.
        String header = manifest.getFileString("include/aws/dynamodb/model/AttributeValue.h").orElseThrow();
        assertTrue(header.contains("class AWS_DYNAMODB_API AttributeValue"));
        assertTrue(header.contains("std::shared_ptr<AttributeValueValue> m_value;"));
    }

    @Test
    void noOpForOtherService() {
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        new DynamoDbRenderer(ctx("kinesis")).render(delegator);
        delegator.flushWriters();
        assertTrue(manifest.getFiles().isEmpty(), "non-dynamodb service must emit nothing");
    }
}
