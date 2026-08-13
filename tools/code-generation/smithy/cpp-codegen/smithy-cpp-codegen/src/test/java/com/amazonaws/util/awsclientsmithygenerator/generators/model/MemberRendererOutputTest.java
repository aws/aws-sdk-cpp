/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;

import static org.junit.jupiter.api.Assertions.*;

/**
 * Integration test that validates the full output pattern matches the existing
 * SDK style (based on ChildShard.h from the kinesis client).
 */
class MemberRendererOutputTest {

    @Test
    void fullOutput_matchesExpectedPattern() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        ListShape list = ListShape.builder()
            .id("com.example#StringList")
            .member(MemberShape.builder().id("com.example#StringList$member").target("com.example#String").build())
            .build();
        StructureShape nested = StructureShape.builder().id("com.example#HashKeyRange").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#ChildShard")
            .addMember("ShardId", str.getId())
            .addMember("ParentShards", list.getId())
            .addMember("HashKeyRange", nested.getId())
            .build();
        Model model = Model.builder().addShapes(str, list, nested, shape).build();

        CppWriter pubWriter = new CppWriter();
        MemberRenderer.forStructure(model, shape, "ChildShard").renderPublicAccessors(pubWriter);
        String pubOutput = pubWriter.toString();
        System.out.println("=== PUBLIC ===");
        System.out.println(pubOutput);

        // Verify ShardId accessor pattern
        assertTrue(pubOutput.contains("inline const Aws::String& GetShardId() const { return m_shardId; }"));
        assertTrue(pubOutput.contains("inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }"));
        assertTrue(pubOutput.contains("template <typename ShardIdT = Aws::String>"));
        assertTrue(pubOutput.contains("void SetShardId(ShardIdT&& value)"));
        assertTrue(pubOutput.contains("m_shardIdHasBeenSet = true;"));
        assertTrue(pubOutput.contains("m_shardId = std::forward<ShardIdT>(value);"));
        assertTrue(pubOutput.contains("ChildShard& WithShardId(ShardIdT&& value)"));
        assertTrue(pubOutput.contains("SetShardId(std::forward<ShardIdT>(value));"));

        // Verify ParentShards list pattern - includes Add method
        assertTrue(pubOutput.contains("inline const Aws::Vector<Aws::String>& GetParentShards() const { return m_parentShards; }"));
        assertTrue(pubOutput.contains("ChildShard& AddParentShards(ParentShardsT&& value)"));
        assertTrue(pubOutput.contains("m_parentShards.emplace_back(std::forward<ParentShardsT>(value));"));

        // Verify no Add method for non-list members
        assertFalse(pubOutput.contains("AddShardId"));
        assertFalse(pubOutput.contains("AddHashKeyRange"));

        // Private section
        CppWriter privWriter = new CppWriter();
        MemberRenderer.forStructure(model, shape, null).renderPrivateSection(privWriter);
        String privOutput = privWriter.toString();
        System.out.println("=== PRIVATE ===");
        System.out.println(privOutput);

        assertTrue(privOutput.contains("Aws::String m_shardId;"));
        assertTrue(privOutput.contains("Aws::Vector<Aws::String> m_parentShards;"));
        assertTrue(privOutput.contains("HashKeyRange m_hashKeyRange;"));
        assertTrue(privOutput.contains("bool m_shardIdHasBeenSet = false;"));
        assertTrue(privOutput.contains("bool m_parentShardsHasBeenSet = false;"));
        assertTrue(privOutput.contains("bool m_hashKeyRangeHasBeenSet = false;"));
    }

    @Test
    void sparseListAndMap_emitOptionalTypesAndAddOverloads() {
        // Mirrors C2J's generated SparseNullsOperationRequest.h: a @sparse list/map wraps its
        // element/value in Aws::Crt::Optional, and gets an extra Add overload accepting the
        // Optional element/value directly.
        StringShape str = StringShape.builder().id("com.example#String").build();
        ListShape sparseList = ListShape.builder()
            .id("com.example#SparseStringList")
            .member(MemberShape.builder().id("com.example#SparseStringList$member").target("com.example#String").build())
            .addTrait(new software.amazon.smithy.model.traits.SparseTrait())
            .build();
        MapShape sparseMap = MapShape.builder()
            .id("com.example#SparseStringMap")
            .key(MemberShape.builder().id("com.example#SparseStringMap$key").target("com.example#String").build())
            .value(MemberShape.builder().id("com.example#SparseStringMap$value").target("com.example#String").build())
            .addTrait(new software.amazon.smithy.model.traits.SparseTrait())
            .build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#SparseNullsOperationRequest")
            .addMember("SparseStringList", sparseList.getId())
            .addMember("SparseStringMap", sparseMap.getId())
            .build();
        Model model = Model.builder().addShapes(str, sparseList, sparseMap, shape).build();

        CppWriter writer = new CppWriter();
        MemberRenderer.forStructure(model, shape, "SparseNullsOperationRequest").renderPublicAccessors(writer);
        String out = writer.toString();
        System.out.println(out);

        // --- sparse list ---
        assertTrue(out.contains(
            "inline const Aws::Vector<Aws::Crt::Optional<Aws::String>>& GetSparseStringList() const { return m_sparseStringList; }"),
            out);
        // main forwarding Add keeps the UNWRAPPED element type as its template default (matches C2J)
        assertTrue(out.contains("template <typename SparseStringListT = Aws::String>"), out);
        assertTrue(out.contains("m_sparseStringList.emplace_back(std::forward<SparseStringListT>(value));"), out);
        // extra overload takes the Optional element by value and push_backs it
        assertTrue(out.contains(
            "inline SparseNullsOperationRequest& AddSparseStringList(Aws::Crt::Optional<Aws::String> value) {"),
            out);
        assertTrue(out.contains("m_sparseStringList.push_back(value);"), out);

        // --- sparse map ---
        assertTrue(out.contains(
            "inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>& GetSparseStringMap() const { return m_sparseStringMap; }"),
            out);
        // templated Add value default IS the wrapped Optional type for maps (matches C2J)
        assertTrue(out.contains(
            "template <typename SparseStringMapKeyT = Aws::String, typename SparseStringMapValueT = Aws::Crt::Optional<Aws::String>>"),
            out);
        // extra overload takes the raw key and the Optional value
        assertTrue(out.contains(
            "inline SparseNullsOperationRequest& AddSparseStringMap(Aws::String key, Aws::Crt::Optional<Aws::String> value) {"),
            out);
        assertTrue(out.contains("m_sparseStringMap.emplace(key, value);"), out);
    }
}
