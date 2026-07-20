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
        MemberRenderer.renderPublicSection(pubWriter, shape, model, "AWS_KINESIS_API", "ChildShard");
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
        MemberRenderer.renderPrivateSection(privWriter, shape, model);
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
}
