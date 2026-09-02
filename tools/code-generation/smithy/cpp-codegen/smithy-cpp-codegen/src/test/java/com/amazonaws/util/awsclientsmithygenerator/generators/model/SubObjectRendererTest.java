/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.SubObjectRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.StreamingTrait;
import software.amazon.smithy.model.traits.Trait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies {@link SubObjectRenderer} renders C2J-style union shapes like plain structures (serde
 * decls + per-member accessors + private members). Non-streaming unions produce header + source;
 * {@code @streaming} unions belong to the event-stream renderers and are skipped here.
 */
class SubObjectRendererTest {

    /** Plain structure sub-object, a non-streaming data union, and a {@code @streaming} union (mirrors bedrock-runtime). */
    private static Model model() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape leaf = StructureShape.builder()
            .id("com.example#Leaf")
            .addMember("value", str.getId())
            .build();
        // Non-streaming data union: one string variant, one struct variant, one with member doc.
        UnionShape dataUnion = UnionShape.builder()
            .id("com.example#ContentBlock")
            .addTrait(new DocumentationTrait("<p>A block of content.</p>"))
            .addMember("text", str.getId(),
                b -> b.addTrait(new DocumentationTrait("<p>Text variant.</p>")))
            .addMember("leaf", leaf.getId())
            .build();
        // Streaming union — handled by the event-stream renderers, not here.
        UnionShape streamingUnion = UnionShape.builder()
            .id("com.example#BidirectionalInput")
            .addTrait(new StreamingTrait())
            .addMember("chunk", leaf.getId())
            .build();
        // Memberless structure (e.g. bedrock-runtime AnyToolChoice): C2J emits no private: section.
        StructureShape empty = StructureShape.builder()
            .id("com.example#AnyToolChoice")
            .build();
        // Union with a blob member (e.g. bedrock-runtime AudioSource): source needs HashingUtils.h for Base64 serde.
        software.amazon.smithy.model.shapes.BlobShape blob =
            software.amazon.smithy.model.shapes.BlobShape.builder().id("com.example#PartBody").build();
        UnionShape blobUnion = UnionShape.builder()
            .id("com.example#AudioSource")
            .addMember("bytes", blob.getId())
            .addMember("leaf", leaf.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .build();
        return Model.builder()
            .addShapes(str, leaf, dataUnion, streamingUnion, empty, blob, blobUnion, service).build();
    }

    private static java.util.Map<String, String> renderAll() {
        Model model = model();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        ProtocolTraits traits = ProtocolResolver.traitsFor(Protocol.JSON);
        java.util.List<software.amazon.smithy.model.shapes.Shape> subObjects = java.util.List.of(
            model.expectShape(ShapeId.from("com.example#Leaf")),
            model.expectShape(ShapeId.from("com.example#ContentBlock")),
            model.expectShape(ShapeId.from("com.example#BidirectionalInput")),
            model.expectShape(ShapeId.from("com.example#AnyToolChoice")),
            model.expectShape(ShapeId.from("com.example#AudioSource")));
        new SubObjectRenderer(subObjects,
            new RenderContext(model, service, traits,
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        java.util.Map<String, String> out = new java.util.TreeMap<>();
        for (java.nio.file.Path path : manifest.getFiles()) {
            out.put(path.getFileName().toString(), manifest.getFileString(path).orElseThrow());
        }
        return out;
    }

    @Test
    void nonStreamingUnion_generatesHeaderAndSource() {
        java.util.Map<String, String> files = renderAll();
        assertTrue(files.containsKey("ContentBlock.h"),
            "Non-streaming union must generate a header: " + files.keySet());
        assertTrue(files.containsKey("ContentBlock.cpp"),
            "Non-streaming union must generate a source: " + files.keySet());
    }

    @Test
    void nonStreamingUnion_headerHasSerdeDeclsAndPerMemberAccessors() {
        String h = renderAll().get("ContentBlock.h");
        // Same serde surface as a structure sub-object.
        assertTrue(h.contains("AWS_EXAMPLE_API ContentBlock() = default;"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API ContentBlock(Aws::Utils::Json::JsonView jsonValue);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API Aws::Utils::Json::JsonValue Jsonize() const;"), h);
        assertTrue(h.contains("GetText") && h.contains("SetText") && h.contains("WithText"), h);
        assertTrue(h.contains("GetLeaf") && h.contains("SetLeaf") && h.contains("WithLeaf"), h);
        assertTrue(h.contains("bool m_textHasBeenSet = false;"), h);
        assertTrue(h.contains("bool m_leafHasBeenSet = false;"), h);
        // Class-level and member-level documentation flow through.
        assertTrue(h.contains("A block of content."), h);
        assertTrue(h.contains("Text variant."), h);
    }

    @Test
    void nonStreamingUnion_sourceHasSerdeImpls() {
        String c = renderAll().get("ContentBlock.cpp");
        assertTrue(c.contains("ContentBlock::ContentBlock(JsonView jsonValue)"), c);
        assertTrue(c.contains("ContentBlock& ContentBlock::operator=(JsonView jsonValue)"), c);
        assertTrue(c.contains("JsonValue ContentBlock::Jsonize() const"), c);
    }

    @Test
    void blobMemberSource_includesHashingUtils() {
        // Blob member needs HashingUtils.h in source (Base64 serde, C2J computeSourceIncludes); header must not carry it.
        java.util.Map<String, String> files = renderAll();
        String c = files.get("AudioSource.cpp");
        assertTrue(c.contains("#include <aws/core/utils/HashingUtils.h>"),
            "Blob-bearing sub-object source must include HashingUtils.h: " + c);
        String h = files.get("AudioSource.h");
        assertFalse(h.contains("HashingUtils.h"),
            "HashingUtils.h is a source-only include, not a header include: " + h);
    }

    @Test
    void memberlessShape_omitsPrivateSection() {
        // C2J emits private: only when the shape has members; a memberless sub-object ends right
        // after its serde decls with no private: section.
        String h = renderAll().get("AnyToolChoice.h");
        assertTrue(h.contains("AWS_EXAMPLE_API Aws::Utils::Json::JsonValue Jsonize() const;"), h);
        assertFalse(h.contains("private:"),
            "Memberless shape must not emit a private: section: " + h);
    }

    @Test
    void streamingUnion_isNotRenderedBySubObjectRenderer() {
        java.util.Map<String, String> files = renderAll();
        assertFalse(files.containsKey("BidirectionalInput.h"),
            "Streaming union must NOT be rendered by SubObjectRenderer: " + files.keySet());
        assertFalse(files.containsKey("BidirectionalInput.cpp"),
            "Streaming union must NOT be rendered by SubObjectRenderer: " + files.keySet());
    }

    // --- dual-role (operation output that is also a member) requestId stamp ---

    /** {@code Thing} is both the output of {@code DoThing} and a member of {@code Plain} (dual-role); {@code Plain} is member-only. */
    private static Model dualRoleModel(Trait protocolTrait) {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape thing = StructureShape.builder()
            .id("com.example#Thing").addMember("name", str.getId()).build();
        // Both Plain and Thing are reachable sub-objects; only Thing is an operation output.
        StructureShape plain = StructureShape.builder()
            .id("com.example#Plain")
            .addMember("label", str.getId())
            .addMember("thing", thing.getId())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingInput").addMember("plain", plain.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(thing.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(protocolTrait).addOperation(op.getId()).build();
        return Model.builder().addShapes(str, thing, plain, input, op, service).build();
    }

    /** Classifies {@code dualRoleModel} and renders its sub-objects, returning filename -> content. */
    private static java.util.Map<String, String> renderDualRole(Trait protocolTrait) {
        Model model = dualRoleModel(protocolTrait);
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        ShapeClassifier.ClassifiedShapes classified = ShapeClassifier.classify(model, service, protocol);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        new SubObjectRenderer(classified.subObjects(), classified.resultOutputIds(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        java.util.Map<String, String> out = new java.util.TreeMap<>();
        for (java.nio.file.Path path : manifest.getFiles()) {
            out.put(path.getFileName().toString(), manifest.getFileString(path).orElseThrow());
        }
        return out;
    }

    @Test
    void dualRoleOutput_jsonProtocol_stampsRequestId() {
        String h = renderDualRole(
            software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build()).get("Thing.h");
        assertTrue(h.contains("inline const Aws::String& GetRequestId() const { return m_requestId; }"), h);
        assertTrue(h.contains("inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }"), h);
        assertTrue(h.contains("Aws::String m_requestId;"), h);
        assertTrue(h.contains("bool m_requestIdHasBeenSet = false;"), h);
        // The stamped Aws::String field pulls in AWSString.h.
        assertTrue(h.contains("#include <aws/core/utils/memory/stl/AWSString.h>"), h);
    }

    @Test
    void memberOnlySubObject_jsonProtocol_hasNoRequestId() {
        String h = renderDualRole(
            software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build()).get("Plain.h");
        assertFalse(h.contains("GetRequestId"),
            "A member-only (non-output) sub-object must not receive the requestId stamp: " + h);
        assertFalse(h.contains("m_requestId"), h);
    }

    @Test
    void dualRoleOutput_queryProtocol_hasNoRequestId() {
        // Query/EC2 dual-role outputs get ResponseMetadata instead, so no requestId block is stamped.
        String h = renderDualRole(
            new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait()).get("Thing.h");
        assertFalse(h.contains("GetRequestId"),
            "Query dual-role output must not receive the requestId stamp: " + h);
    }
}
