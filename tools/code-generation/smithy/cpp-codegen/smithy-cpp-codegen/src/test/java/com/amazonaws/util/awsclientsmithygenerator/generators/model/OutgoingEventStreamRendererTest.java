/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.OutgoingEventStreamRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.EventPayloadTrait;
import software.amazon.smithy.model.traits.StreamingTrait;

import java.util.List;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class OutgoingEventStreamRendererTest {

    /** Input binds a @streaming union with one event member whose payload is a nested structure (implicit-structure case). */
    private static Model structurePayloadModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        BlobShape blob = BlobShape.builder().id("com.example#PartBody").build();
        // Event shape: single implicit blob member -> parent is the payload (structure encoding).
        StructureShape event = StructureShape.builder()
            .id("com.example#ChunkEvent")
            .addMember("bytes", blob.getId())
            .build();
        UnionShape stream = UnionShape.builder()
            .id("com.example#BidirectionalInput")
            .addTrait(new StreamingTrait())
            .addMember("chunk", event.getId())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoStreamInput")
            .addMember(MemberShape.builder()
                .id("com.example#DoStreamInput$body").target(stream.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoStreamOutput").addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoStream").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, event, stream, input, output, op, service).build();
    }

    /** Same shape but the single blob member is explicitly @eventPayload -> raw blob encoding. */
    private static Model blobPayloadModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        BlobShape blob = BlobShape.builder().id("com.example#PartBody").build();
        StructureShape event = StructureShape.builder()
            .id("com.example#ChunkEvent")
            .addMember(MemberShape.builder()
                .id("com.example#ChunkEvent$bytes").target(blob.getId())
                .addTrait(new EventPayloadTrait()).build())
            .build();
        UnionShape stream = UnionShape.builder()
            .id("com.example#BidirectionalInput")
            .addTrait(new StreamingTrait())
            .addMember("chunk", event.getId())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoStreamInput")
            .addMember(MemberShape.builder()
                .id("com.example#DoStreamInput$body").target(stream.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoStreamOutput").addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoStream").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, event, stream, input, output, op, service).build();
    }

    private static String render(Model model, Protocol protocol) {
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        List<software.amazon.smithy.model.shapes.Shape> outgoing =
            List.of(model.expectShape(ShapeId.from("com.example#BidirectionalInput")));
        new OutgoingEventStreamRenderer(outgoing,
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith("BidirectionalInput.h")).findFirst().orElseThrow()).orElseThrow();
    }

    @Test
    void rendersEventEncoderStreamSubclassWithWriteMethod() {
        String h = render(structurePayloadModel(), Protocol.JSON);
        assertTrue(h.contains("class AWS_EXAMPLE_API BidirectionalInput : public Aws::Utils::Event::EventEncoderStream {"), h);
        assertTrue(h.contains("BidirectionalInput() = default;"), h);
        assertTrue(h.contains("explicit BidirectionalInput(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)"), h);
        assertTrue(h.contains("BidirectionalInput& WriteChunkEvent(const ChunkEvent& value) {"), h);
        assertTrue(h.contains("msg.InsertEventHeader(\":event-type\", Aws::String(\"chunk\"));"), h);
        assertTrue(h.contains("WriteEvent(msg);"), h);
        assertTrue(h.contains("#include <aws/example/model/ChunkEvent.h>"), h);
        assertTrue(h.contains("#include <aws/core/utils/event/EventStream.h>"), h);
    }

    @Test
    void jsonStructurePayload_usesJsonizeAndApplicationJson() {
        String h = render(structurePayloadModel(), Protocol.JSON);
        assertTrue(h.contains("msg.InsertEventHeader(\":content-type\", Aws::String(\"application/json\"));"), h);
        assertTrue(h.contains("msg.WriteEventPayload(value.Jsonize().View().WriteCompact());"), h);
    }

    @Test
    void cborStructurePayload_usesCborEncodeAndApplicationCbor() {
        String h = render(structurePayloadModel(), Protocol.CBOR);
        assertTrue(h.contains("msg.InsertEventHeader(\":content-type\", Aws::String(\"application/cbor\"));"), h);
        assertTrue(h.contains("value.CborEncode(encoder);"), h);
        assertTrue(h.contains("msg.WriteEventPayload(encoder.GetEncodedData().ptr, encoder.GetEncodedData().len);"), h);
        assertFalse(h.contains("Jsonize"), "CBOR must not use Jsonize: " + h);
    }

    @Test
    void explicitEventPayloadBlob_usesOctetStreamAndEmptyGuard() {
        String h = render(blobPayloadModel(), Protocol.JSON);
        assertTrue(h.contains("msg.InsertEventHeader(\":content-type\", Aws::String(\"application/octet-stream\"));"), h);
        assertTrue(h.contains("if (!value.GetBytes().empty()) {"), h);
        assertTrue(h.contains("msg.WriteEventPayload(value.GetBytes());"), h);
        assertFalse(h.contains("Jsonize"), "Blob payload must not use Jsonize: " + h);
    }
}
