/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpPayloadTrait;

import java.util.List;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * C2J gates {@code SerializePayload()} on {@code !hasStreamMembers()} in the single shared
 * {@code RequestHeader.vm}, so the rule is protocol-agnostic: no protocol emits SerializePayload
 * for a request with a raw streaming {@code @httpPayload} member. These tests pin that every
 * {@link ProtocolTraits} implementation honours it (and still emits SerializePayload for a plain
 * request).
 */
class ProtocolTraitsStreamingPayloadTest {

    private static List<ProtocolTraits> allTraits() {
        return List.of(
            new JsonProtocolTraits(Protocol.JSON),
            new JsonProtocolTraits(Protocol.REST_JSON),
            new RestXmlProtocolTraits(),
            new QueryXmlProtocolTraits(Protocol.QUERY_XML),
            new QueryXmlProtocolTraits(Protocol.EC2),
            new CborProtocolTraits());
    }

    /** An operation whose input binds an @httpPayload blob (raw streaming payload). */
    private static Model streamingPayloadModel() {
        BlobShape body = BlobShape.builder().id("com.example#Body").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingRequest")
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingRequest$body").target(body.getId())
                .addTrait(new HttpPayloadTrait()).build())
            .build();
        return modelWith(body, input);
    }

    /** An operation whose input is a plain structure (no streaming payload). */
    private static Model plainModel() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingRequest").addMember("name", str.getId()).build();
        return modelWith(str, input);
    }

    private static Model modelWith(software.amazon.smithy.model.shapes.Shape extra, StructureShape input) {
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(extra, input, op, service).build();
    }

    private static OperationShape op(Model model) {
        return model.expectShape(software.amazon.smithy.model.shapes.ShapeId.from("com.example#DoThing"),
            OperationShape.class);
    }

    private static StructureShape req(Model model) {
        return model.expectShape(software.amazon.smithy.model.shapes.ShapeId.from("com.example#DoThingRequest"),
            StructureShape.class);
    }

    private static String renderDecls(ProtocolTraits traits, Model model) {
        CppWriter writer = new CppWriter();
        writer.indent();  // Query/EC2 decls open with a dedent for the protected: sandwich
        traits.writeRequestMethodDecls(writer, "AWS_EX_API", req(model), op(model), model);
        return writer.toString();
    }

    @Test
    void allProtocols_omitSerializePayload_forRawStreamingPayloadRequest() {
        Model model = streamingPayloadModel();
        for (ProtocolTraits traits : allTraits()) {
            assertFalse(traits.emitsSerializePayload(op(model), model),
                traits.getClass().getSimpleName() + "/" + traits.protocol()
                    + " must report emitsSerializePayload=false for a streaming-payload request");
            assertFalse(renderDecls(traits, model).contains("SerializePayload"),
                traits.getClass().getSimpleName() + "/" + traits.protocol()
                    + " must not emit a SerializePayload decl for a streaming-payload request");
        }
    }

    @Test
    void allProtocols_emitSerializePayload_forPlainRequest() {
        Model model = plainModel();
        for (ProtocolTraits traits : allTraits()) {
            assertTrue(traits.emitsSerializePayload(op(model), model),
                traits.getClass().getSimpleName() + "/" + traits.protocol()
                    + " must report emitsSerializePayload=true for a plain request");
            assertTrue(renderDecls(traits, model).contains("SerializePayload"),
                traits.getClass().getSimpleName() + "/" + traits.protocol()
                    + " must emit a SerializePayload decl for a plain request");
        }
    }
}
