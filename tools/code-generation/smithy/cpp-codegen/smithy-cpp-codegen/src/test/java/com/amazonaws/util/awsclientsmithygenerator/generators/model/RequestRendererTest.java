/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.StreamingTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class RequestRendererTest {

    private static Model streamingModel(boolean inputStreams, boolean outputStreams) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape eventA = StructureShape.builder()
            .id("com.example#AlphaEvent")
            .addMember("data", str.getId())
            .build();
        UnionShape stream = UnionShape.builder()
            .id("com.example#MyStreamEventStream")
            .addTrait(new StreamingTrait())
            .addMember("alpha", eventA.getId())
            .build();

        StructureShape.Builder inputBuilder = StructureShape.builder().id("com.example#DoStreamInput");
        inputBuilder.addMember("name", str.getId());
        if (inputStreams) {
            inputBuilder.addMember("body", stream.getId());
        }
        StructureShape input = inputBuilder.build();

        StructureShape.Builder outputBuilder = StructureShape.builder().id("com.example#DoStreamOutput");
        if (outputStreams) {
            outputBuilder.addMember("stream", stream.getId());
        } else {
            outputBuilder.addMember("result", str.getId());
        }
        StructureShape output = outputBuilder.build();

        OperationShape op = OperationShape.builder()
            .id("com.example#DoStream")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .addOperation(op.getId())
            .build();
        return Model.builder().addShapes(str, eventA, stream, input, output, op, service).build();
    }

    private static String renderRequestHeaderForStreamingOp(boolean inputStreams, boolean outputStreams) {
        Model model = streamingModel(inputStreams, outputStreams);
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        RequestRenderer renderer = new RequestRenderer(
            ShapeClassifier.classify(model, service, protocol).requests(),
            model, service, ProtocolResolver.traitsFor(protocol),
            "Example", "AWS_EXAMPLE_API", "example");
        renderer.render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(
            manifest.getFiles().stream()
                .filter(p -> p.toString().endsWith("DoStreamRequest.h"))
                .findFirst().orElseThrow())
            .orElseThrow();
    }

    @Test
    void streamingResponseRequest_hasEventStreamAugmentation() {
        // Model: operation with streaming OUTPUT only (like SubscribeToShard / ConverseStream)
        String h = renderRequestHeaderForStreamingOp(false, true);
        assertTrue(h.contains("bool HasEventStreamResponse() const override { return true; }"),
            "Missing HasEventStreamResponse: " + h);
        assertTrue(h.contains("GetEventStreamDecoder()"), "Missing decoder accessor: " + h);
        assertTrue(h.contains("GetEventStreamHandler()"), "Missing handler accessor: " + h);
        assertTrue(h.contains("SetEventStreamHandler") && h.contains("WithEventStreamHandler"),
            "Missing handler setters: " + h);
        assertTrue(h.contains("m_decoder.ResetEventStreamHandler(&m_handler)"),
            "Missing decoder reset in setter: " + h);
        assertTrue(h.contains("EventStreamDecoder m_decoder"), "Missing decoder member: " + h);
        assertTrue(h.contains("#include <aws/core/utils/event/EventStreamDecoder.h>"),
            "Missing decoder include: " + h);
        assertFalse(h.contains("IsEventStreamRequest"),
            "Response-only op must not declare IsEventStreamRequest: " + h);
        // Mainline ordering: handler/decoder sit AFTER the data members and BEFORE the
        // HasBeenSet flags (not at the top of the private block). Target the member
        // DECLARATION ("DoStreamHandler m_handler;"), not the public getter body.
        int dataMember = h.indexOf("Aws::String m_name;");
        int handlerDecl = h.indexOf("DoStreamHandler m_handler;");
        int firstFlag = h.indexOf("HasBeenSet = false;");
        assertTrue(dataMember >= 0 && handlerDecl > dataMember,
            "m_handler declaration must come after data members: " + h);
        assertTrue(firstFlag >= 0 && handlerDecl < firstFlag,
            "m_handler declaration must come before HasBeenSet flags: " + h);
    }

    @Test
    void bidirectionalRequest_alsoHasIsEventStreamRequest() {
        String h = renderRequestHeaderForStreamingOp(true, true);
        assertTrue(h.contains("bool IsEventStreamRequest() const override { return true; }"),
            "Missing IsEventStreamRequest for bidirectional op: " + h);
        assertTrue(h.contains("bool HasEventStreamResponse() const override { return true; }"),
            "Bidirectional op must also declare HasEventStreamResponse: " + h);
    }

    @Test
    void nonStreamingRequest_hasNoEventStreamAugmentation() {
        String h = renderRequestHeaderForStreamingOp(false, false);
        assertFalse(h.contains("HasEventStreamResponse"), "Non-streaming request must be clean: " + h);
        assertFalse(h.contains("GetEventStreamDecoder"), "Non-streaming request must be clean: " + h);
        assertFalse(h.contains("IsEventStreamRequest"), "Non-streaming request must be clean: " + h);
    }
}
