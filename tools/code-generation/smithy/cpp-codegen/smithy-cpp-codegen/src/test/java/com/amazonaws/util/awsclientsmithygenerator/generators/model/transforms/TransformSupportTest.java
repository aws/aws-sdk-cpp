/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.JsonNameTrait;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

import static org.junit.jupiter.api.Assertions.*;

class TransformSupportTest {

    private static StructureShape struct(String... memberNames) {
        StructureShape.Builder b = StructureShape.builder().id("com.example#Req");
        for (String m : memberNames) {
            b.addMember(m, ShapeId.from("smithy.api#String"));
        }
        return b.build();
    }

    @Test
    void renameMember_sourceAbsent_returnsEmpty() {
        assertTrue(TransformSupport.renameMember(struct("name"), "body", "requestBody").isEmpty());
    }

    @Test
    void renameMember_targetExists_throws() {
        StructureShape s = struct("body", "requestBody");
        assertThrows(IllegalStateException.class,
            () -> TransformSupport.renameMember(s, "body", "requestBody"));
    }

    @Test
    void renameMember_success_renamesAndPreservesOrder() {
        StructureShape s = struct("a", "body", "z");
        StructureShape out = TransformSupport.renameMember(s, "body", "requestBody").orElseThrow();
        assertFalse(out.getMember("body").isPresent());
        assertTrue(out.getMember("requestBody").isPresent());
        List<String> order = new ArrayList<>(out.getAllMembers().keySet());
        assertEquals(List.of("a", "requestBody", "z"), order);
    }

    @Test
    void renameMember_withJsonName_attachesTraitToRenamedMember() {
        StructureShape s = struct("generatedPolicyResult");
        StructureShape out = TransformSupport.renameMember(
            s, "generatedPolicyResult", "generatedPolicyResults",
            new JsonNameTrait("generatedPolicyResult")).orElseThrow();
        MemberShape renamed = out.getMember("generatedPolicyResults").orElseThrow();
        assertEquals("generatedPolicyResult", renamed.expectTrait(JsonNameTrait.class).getValue());
    }
}
