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
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.StreamingTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies that {@link SubObjectRenderer} renders C2J-style union shapes. In C2J a union is a
 * {@code structure} with {@code "union": true} and is emitted by the same ModelClass templates
 * as a plain structure (serde decls + per-member Get/Set/With/HasBeenSet accessors + private
 * data members and flags). Non-streaming unions must produce header + source files; {@code
 * @streaming} unions belong to the event-stream renderers and must be skipped here.
 */
class SubObjectRendererTest {

    /**
     * A model with a plain structure sub-object, a non-streaming union, and a {@code @streaming}
     * union — mirroring bedrock-runtime (ContentBlock / ToolChoice are data unions;
     * InvokeModelWithBidirectionalStreamInput is a streaming union).
     */
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
        // Memberless structure (e.g. bedrock-runtime AnyToolChoice / AutoToolChoice): C2J emits
        // no private: section when the shape has no members.
        StructureShape empty = StructureShape.builder()
            .id("com.example#AnyToolChoice")
            .build();
        // Union with a blob member (e.g. bedrock-runtime AudioSource): its source needs
        // HashingUtils.h for Base64 blob serde.
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
        // Per-member accessors for each variant.
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
        // A sub-object with a blob member needs HashingUtils.h in its source (Base64 blob serde),
        // matching C2J's computeSourceIncludes. The header must NOT carry it (source-only include).
        java.util.Map<String, String> files = renderAll();
        String c = files.get("AudioSource.cpp");
        assertTrue(c.contains("#include <aws/core/utils/HashingUtils.h>"),
            "Blob-bearing sub-object source must include HashingUtils.h: " + c);
        String h = files.get("AudioSource.h");
        assertFalse(h.contains("HashingUtils.h"),
            "HashingUtils.h is a source-only include, not a header include: " + h);
    }

    @Test
    void nonBlobSource_omitsHashingUtils() {
        String c = renderAll().get("ContentBlock.cpp");
        assertFalse(c.contains("HashingUtils.h"),
            "A sub-object without a blob member must not include HashingUtils.h: " + c);
    }

    @Test
    void memberlessShape_omitsPrivateSection() {
        // C2J emits the private: section only when the shape has members
        // (ModelClassMembersAndInlines.vm: `#if($shape.members.size() > 0 ...`). A memberless
        // sub-object ends right after its serde decls — no trailing blank line and no private:.
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
}
