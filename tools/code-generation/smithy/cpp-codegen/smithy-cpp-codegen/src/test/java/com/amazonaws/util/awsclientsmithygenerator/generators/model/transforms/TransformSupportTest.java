/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.protocols.Ec2QueryNameTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.EnumDefinition;
import software.amazon.smithy.model.traits.EnumTrait;
import software.amazon.smithy.model.traits.JsonNameTrait;
import software.amazon.smithy.model.traits.XmlNameTrait;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.stream.Collectors;

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
        assertTrue(TransformSupport.renameMember(struct("name"), "body", "requestBody", Protocol.JSON)
            .isEmpty());
    }

    @Test
    void renameMember_targetExists_throws() {
        StructureShape s = struct("body", "requestBody");
        assertThrows(IllegalStateException.class,
            () -> TransformSupport.renameMember(s, "body", "requestBody", Protocol.JSON));
    }

    @Test
    void renameMember_success_renamesAndPreservesOrder() {
        StructureShape s = struct("a", "body", "z");
        StructureShape out = TransformSupport.renameMember(s, "body", "requestBody", Protocol.JSON)
            .orElseThrow();
        assertFalse(out.getMember("body").isPresent());
        assertTrue(out.getMember("requestBody").isPresent());
        List<String> order = new ArrayList<>(out.getAllMembers().keySet());
        assertEquals(List.of("a", "requestBody", "z"), order);
    }

    @Test
    void renameMember_jsonProtocol_pinsWireNameWithJsonName() {
        StructureShape out = TransformSupport.renameMember(struct("body"), "body", "requestBody",
            Protocol.REST_JSON).orElseThrow();
        MemberShape renamed = out.getMember("requestBody").orElseThrow();
        assertEquals("body", renamed.expectTrait(JsonNameTrait.class).getValue());
        assertFalse(renamed.hasTrait(XmlNameTrait.class), "JSON protocol must not add @xmlName");
    }

    @Test
    void renameMember_xmlProtocol_pinsWireNameWithXmlName() {
        StructureShape out = TransformSupport.renameMember(struct("body"), "body", "requestBody",
            Protocol.QUERY_XML).orElseThrow();
        MemberShape renamed = out.getMember("requestBody").orElseThrow();
        assertEquals("body", renamed.expectTrait(XmlNameTrait.class).getValue());
        assertFalse(renamed.hasTrait(JsonNameTrait.class), "XML protocol must not add @jsonName");
    }

    @Test
    void renameMember_ec2Protocol_bareMember_pinsRequestKeyAndResponseName() {
        StructureShape out = TransformSupport.renameMember(struct("body"), "body", "requestBody",
            Protocol.EC2).orElseThrow();
        MemberShape renamed = out.getMember("requestBody").orElseThrow();
        assertEquals("Body", renamed.expectTrait(Ec2QueryNameTrait.class).getValue(),
            "request key = capitalized original member name, verbatim");
        assertEquals("body", renamed.expectTrait(XmlNameTrait.class).getValue(),
            "response name = original member name");
    }

    @Test
    void renameMember_ec2Protocol_derivesRequestKeyFromExistingXmlName() {
        // CapacityReservationFleetIds: @xmlName present, no @ec2QueryName. The request key is
        // capitalize(@xmlName), pinned verbatim so it no longer depends on the member name.
        StructureShape s = StructureShape.builder().id("com.example#Req")
            .addMember(MemberShape.builder().id("com.example#Req$capacityReservationFleetIds")
                .target("smithy.api#String")
                .addTrait(new XmlNameTrait("CapacityReservationFleetId")).build())
            .build();
        MemberShape renamed = TransformSupport.renameMember(s, "capacityReservationFleetIds",
            "renamed", Protocol.EC2).orElseThrow().getMember("renamed").orElseThrow();
        assertEquals("CapacityReservationFleetId",
            renamed.expectTrait(Ec2QueryNameTrait.class).getValue(), "request key from capitalize(@xmlName)");
        assertEquals("CapacityReservationFleetId",
            renamed.expectTrait(XmlNameTrait.class).getValue(), "existing @xmlName preserved verbatim");
    }

    @Test
    void renameMember_ec2Protocol_existingEc2QueryName_isNotOverridden() {
        // Ipv6Addresses: @ec2QueryName is NOT camelCase(@xmlName), so capitalize(@xmlName) would be
        // wrong for the request. Both existing traits must ride along verbatim.
        StructureShape s = StructureShape.builder().id("com.example#Req")
            .addMember(MemberShape.builder().id("com.example#Req$ipv6Addresses")
                .target("smithy.api#String")
                .addTrait(new Ec2QueryNameTrait("Ipv6Addresses"))
                .addTrait(new XmlNameTrait("ipv6AddressesSet")).build())
            .build();
        MemberShape renamed = TransformSupport.renameMember(s, "ipv6Addresses", "renamed",
            Protocol.EC2).orElseThrow().getMember("renamed").orElseThrow();
        assertEquals("Ipv6Addresses", renamed.expectTrait(Ec2QueryNameTrait.class).getValue());
        assertEquals("ipv6AddressesSet", renamed.expectTrait(XmlNameTrait.class).getValue());
    }

    @Test
    void renameMember_cborProtocol_throws_noWireNameTrait() {
        // rpcv2Cbor has no wire-name trait and ignores @jsonName, so a rename cannot preserve the
        // wire key — fail fast rather than silently mis-generate.
        StructureShape s = struct("body");
        assertThrows(IllegalStateException.class,
            () -> TransformSupport.renameMember(s, "body", "requestBody", Protocol.CBOR));
    }

    private static LinkedHashMap<String, String> map(String name, String value) {
        LinkedHashMap<String, String> m = new LinkedHashMap<>();
        m.put(name, value);
        return m;
    }

    @Test
    void appendEnumValues_enumShape_appendsHyphenatedWireValue() {
        EnumShape shape = EnumShape.builder().id("com.example#Region")
            .addMember("us_west_2", "us-west-2").build();
        Shape out = TransformSupport.appendEnumValues(shape, map("us_east_1", "us-east-1"))
            .orElseThrow();
        EnumShape e = out.asEnumShape().orElseThrow();
        assertTrue(e.getEnumValues().values().contains("us-east-1"), "hyphenated value appended");
        assertTrue(e.getEnumValues().values().contains("us-west-2"), "existing value preserved");
        assertTrue(e.getAllMembers().containsKey("us_east_1"), "identifier-safe member name");
    }

    @Test
    void appendEnumValues_idempotentSkipsExistingValue() {
        EnumShape shape = EnumShape.builder().id("com.example#Region")
            .addMember("us_east_1", "us-east-1").build();
        assertTrue(TransformSupport.appendEnumValues(shape, map("us_east_1", "us-east-1")).isEmpty(),
            "already-present wire value must be skipped");
    }

    @Test
    void appendEnumValues_legacyEnumTrait_appendsValue() {
        StringShape shape = StringShape.builder().id("com.example#Region")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("us-west-2").build()).build())
            .build();
        Shape out = TransformSupport.appendEnumValues(shape, map("us_east_1", "us-east-1"))
            .orElseThrow();
        List<String> values = out.expectTrait(EnumTrait.class).getValues().stream()
            .map(EnumDefinition::getValue).collect(Collectors.toList());
        assertTrue(values.contains("us-west-2"), "existing value preserved");
        assertTrue(values.contains("us-east-1"), "hyphenated value appended");
    }

    @Test
    void appendEnumValues_nonIdentifierMemberName_throws() {
        EnumShape shape = EnumShape.builder().id("com.example#Region")
            .addMember("us_west_2", "us-west-2").build();
        assertThrows(IllegalArgumentException.class,
            () -> TransformSupport.appendEnumValues(shape, map("us-east-1", "us-east-1")));
    }

    @Test
    void appendEnumValuesByName_appendsToNamedEnum() {
        EnumShape state = EnumShape.builder().id("com.example#SpotInstanceState")
            .addMember("open", "open").build();
        Model out = TransformSupport.appendEnumValuesByName(
            Model.builder().addShape(state).build(), "SpotInstanceState", List.of("disabled"));
        EnumShape e = out.expectShape(state.getId()).asEnumShape().orElseThrow();
        assertTrue(e.getEnumValues().values().contains("disabled"), "value appended");
        assertTrue(e.getEnumValues().values().contains("open"), "existing value preserved");
    }

    @Test
    void appendEnumValuesByName_shapeAbsent_returnsSameModel() {
        EnumShape other = EnumShape.builder().id("com.example#Other").addMember("a", "a").build();
        Model in = Model.builder().addShape(other).build();
        assertSame(in, TransformSupport.appendEnumValuesByName(in, "Missing", List.of("x")),
            "absent enum: the model is returned unchanged");
    }

    @Test
    void appendEnumValuesByName_allValuesPresent_returnsSameModel() {
        EnumShape state = EnumShape.builder().id("com.example#S").addMember("a", "a").build();
        Model in = Model.builder().addShape(state).build();
        assertSame(in, TransformSupport.appendEnumValuesByName(in, "S", List.of("a")),
            "idempotent: no new values means the model is returned unchanged");
    }

    @Test
    void appendEnumEntriesByName_appendsHyphenatedRegionValue() {
        EnumShape region = EnumShape.builder().id("com.example#BucketLocationConstraint")
            .addMember("us_west_2", "us-west-2").build();
        Model out = TransformSupport.appendEnumEntriesByName(
            Model.builder().addShape(region).build(), "BucketLocationConstraint",
            map("us_east_1", "us-east-1"));
        EnumShape e = out.expectShape(region.getId()).asEnumShape().orElseThrow();
        assertTrue(e.getEnumValues().values().contains("us-east-1"), "hyphenated value appended");
        assertTrue(e.getAllMembers().containsKey("us_east_1"), "identifier-safe member name");
    }

    @Test
    void renameMember_existingJsonName_isNotOverridden() {
        StructureShape s = StructureShape.builder().id("com.example#Req")
            .addMember(MemberShape.builder().id("com.example#Req$body")
                .target("smithy.api#String").addTrait(new JsonNameTrait("wireBody")).build())
            .build();
        StructureShape out = TransformSupport.renameMember(s, "body", "requestBody", Protocol.JSON)
            .orElseThrow();
        MemberShape renamed = out.getMember("requestBody").orElseThrow();
        assertEquals("wireBody", renamed.expectTrait(JsonNameTrait.class).getValue(),
            "existing wire name must be preserved verbatim, not reset to the old member name");
    }
}
