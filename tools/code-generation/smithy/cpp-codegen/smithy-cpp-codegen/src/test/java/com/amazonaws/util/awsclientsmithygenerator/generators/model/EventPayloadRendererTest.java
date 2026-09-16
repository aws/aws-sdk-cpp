/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EventPayloadRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.EventPayloadTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies {@link EventPayloadRenderer} produces a header-only blob-carrier event (C2J
 * {@code EventHeader.vm} form): {@code Aws::Vector<unsigned char>} payload, no JSON serde, no {@code .cpp}.
 */
class EventPayloadRendererTest {

    private static Model model() {
        BlobShape blob = BlobShape.builder().id("com.example#Blob").build();
        StructureShape event = StructureShape.builder()
            .id("com.example#InvokeResponseStreamUpdate")
            .addTrait(new DocumentationTrait("<p>A chunk of the streamed response payload.</p>"))
            .addMember(MemberShape.builder()
                .id("com.example#InvokeResponseStreamUpdate$Payload").target(blob.getId())
                .addTrait(new EventPayloadTrait())
                .addTrait(new DocumentationTrait("<p>Data returned by your Lambda function.</p>"))
                .build())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2015-03-31").build();
        return Model.builder().addShapes(blob, event, service).build();
    }

    private static String renderHeader() {
        Model model = model();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        ProtocolTraits traits = ProtocolResolver.traitsFor(Protocol.JSON);
        new EventPayloadRenderer(
            java.util.List.of(model.expectShape(ShapeId.from("com.example#InvokeResponseStreamUpdate"))),
            new RenderContext(model, service, traits, "Lambda", "AWS_LAMBDA_API", "lambda"))
            .render(delegator);
        delegator.flushWriters();
        java.util.Map<String, String> out = new java.util.TreeMap<>();
        for (java.nio.file.Path path : manifest.getFiles()) {
            out.put(path.getFileName().toString(), manifest.getFileString(path).orElseThrow());
        }
        assertFalse(out.containsKey("InvokeResponseStreamUpdate.cpp"),
            "Blob-payload event must be header-only (no .cpp): " + out.keySet());
        return out.get("InvokeResponseStreamUpdate.h");
    }

    @Test
    void rendersBlobCarrierHeader() {
        String h = renderHeader();
        assertTrue(h.contains("Aws::Vector<unsigned char>"), h);
        assertTrue(h.contains("InvokeResponseStreamUpdate(Aws::Vector<unsigned char>&& value)"), h);
        assertTrue(h.contains("GetPayloadWithOwnership"), h);
        assertTrue(h.contains("bool m_payloadHasBeenSet = false;"), h);
        // Payload member documentation flows through.
        assertTrue(h.contains("Data returned by your Lambda function."), h);
    }

    @Test
    void hasNoJsonSerde() {
        String h = renderHeader();
        assertFalse(h.contains("Jsonize"), h);
        assertFalse(h.contains("JsonView"), h);
    }
}
