/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class RequestBindingsTest {
    @Test
    void detectsHeaderAndQueryMembers() {
        StringShape str = StringShape.builder().id("com.example#S").build();
        StructureShape req = StructureShape.builder()
            .id("com.example#Req")
            .addMember(MemberShape.builder().id("com.example#Req$h").target(str.getId())
                .addTrait(new HttpHeaderTrait("X-H")).build())
            .addMember(MemberShape.builder().id("com.example#Req$q").target(str.getId())
                .addTrait(new HttpQueryTrait("q")).build())
            .build();
        Model model = Model.builder().addShapes(str, req).build();
        assertTrue(RequestBindings.hasHeaderMembers(req, model));
        assertTrue(RequestBindings.hasQueryStringMembers(req, model));
    }

    @Test
    void plainStructHasNeither() {
        StringShape str = StringShape.builder().id("com.example#S2").build();
        StructureShape req = StructureShape.builder()
            .id("com.example#Plain")
            .addMember(MemberShape.builder().id("com.example#Plain$a").target(str.getId()).build())
            .build();
        Model model = Model.builder().addShapes(str, req).build();
        assertFalse(RequestBindings.hasHeaderMembers(req, model));
        assertFalse(RequestBindings.hasQueryStringMembers(req, model));
    }

    @Test
    void bodyMembers_excludesHeaderAndQueryBoundMembers() {
        StringShape str = StringShape.builder().id("com.example#S3").build();
        StructureShape req = StructureShape.builder()
            .id("com.example#Mixed")
            .addMember(MemberShape.builder().id("com.example#Mixed$body").target(str.getId()).build())
            .addMember(MemberShape.builder().id("com.example#Mixed$h").target(str.getId())
                .addTrait(new HttpHeaderTrait("X-H")).build())
            .addMember(MemberShape.builder().id("com.example#Mixed$q").target(str.getId())
                .addTrait(new HttpQueryTrait("q")).build())
            .build();
        var body = RequestBindings.bodyMembers(req);
        assertEquals(1, body.size(), body.toString());
        assertEquals("body", body.get(0).getMemberName());
    }

    @Test
    void allBodyMembersSchemaSerializableScalar_trueForScalarBody() {
        StringShape str = StringShape.builder().id("com.example#S4").build();
        StructureShape req = StructureShape.builder()
            .id("com.example#Scalars")
            .addMember(MemberShape.builder().id("com.example#Scalars$name").target(str.getId()).build())
            .build();
        Model model = Model.builder().addShapes(str, req).build();
        assertTrue(RequestBindings.allBodyMembersSchemaSerializableScalar(req, model));
    }

    @Test
    void allBodyMembersSchemaSerializableScalar_falseForEmptyBody() {
        StringShape str = StringShape.builder().id("com.example#S5").build();
        // Only a header-bound member -> no body members -> not schema-serializable.
        StructureShape req = StructureShape.builder()
            .id("com.example#HeaderOnly")
            .addMember(MemberShape.builder().id("com.example#HeaderOnly$h").target(str.getId())
                .addTrait(new HttpHeaderTrait("X-H")).build())
            .build();
        Model model = Model.builder().addShapes(str, req).build();
        assertFalse(RequestBindings.allBodyMembersSchemaSerializableScalar(req, model));
    }

    @Test
    void allBodyMembersSchemaSerializableScalar_falseForNonScalarBody() {
        StringShape str = StringShape.builder().id("com.example#S6").build();
        software.amazon.smithy.model.shapes.ListShape list = software.amazon.smithy.model.shapes.ListShape.builder()
            .id("com.example#L6").member(MemberShape.builder().id("com.example#L6$member").target(str.getId()).build())
            .build();
        StructureShape req = StructureShape.builder()
            .id("com.example#HasList")
            .addMember(MemberShape.builder().id("com.example#HasList$items").target(list.getId()).build())
            .build();
        Model model = Model.builder().addShapes(str, list, req).build();
        assertFalse(RequestBindings.allBodyMembersSchemaSerializableScalar(req, model));
    }
}
