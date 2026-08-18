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
}
