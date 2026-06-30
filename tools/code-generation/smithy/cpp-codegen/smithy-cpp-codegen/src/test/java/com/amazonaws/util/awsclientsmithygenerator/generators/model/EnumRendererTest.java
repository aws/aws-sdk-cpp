/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.traits.EnumDefinition;
import software.amazon.smithy.model.traits.EnumTrait;

import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

class EnumRendererTest {

    @Test
    void renderHeader_producesEnumClass() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Status")
            .addMember("ACTIVE", "ACTIVE")
            .addMember("INACTIVE", "INACTIVE")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderHeader(writer, enumShape, "TestService", "AWS_TESTSERVICE_API");
        String output = writer.toString();
        assertTrue(output.contains("enum class Status { NOT_SET, ACTIVE, INACTIVE }"),
            "Missing enum class declaration: " + output);
        assertTrue(output.contains("AWS_TESTSERVICE_API Status GetStatusForName(const Aws::String& name)"),
            "Missing GetForName declaration: " + output);
        assertTrue(output.contains("AWS_TESTSERVICE_API Aws::String GetNameForStatus(Status value)"),
            "Missing GetNameFor declaration: " + output);
    }

    @Test
    void renderHeader_includesExportsHeader() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#MyEnum")
            .addMember("A", "A")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderHeader(writer, enumShape, "Kinesis", "AWS_KINESIS_API");
        String output = writer.toString();
        assertTrue(output.contains("#include <aws/kinesis/Kinesis_EXPORTS.h>"),
            "Missing exports header include: " + output);
    }

    @Test
    void renderHeader_includesMapperNamespace() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Color")
            .addMember("RED", "RED")
            .addMember("GREEN", "GREEN")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderHeader(writer, enumShape, "Svc", "AWS_SVC_API");
        String output = writer.toString();
        assertTrue(output.contains("namespace ColorMapper {"),
            "Missing mapper namespace: " + output);
        assertTrue(output.contains("}  // namespace ColorMapper"),
            "Missing mapper namespace close: " + output);
    }

    @Test
    void renderSource_producesHashConstants() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Status")
            .addMember("CREATING", "CREATING")
            .addMember("ACTIVE", "ACTIVE")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderSource(writer, enumShape, "Kinesis", "AWS_KINESIS_API", "kinesis");
        String output = writer.toString();
        assertTrue(output.contains("CREATING_HASH = HashingUtils::HashString(\"CREATING\")"),
            "Missing CREATING hash: " + output);
        assertTrue(output.contains("ACTIVE_HASH = HashingUtils::HashString(\"ACTIVE\")"),
            "Missing ACTIVE hash: " + output);
    }

    @Test
    void renderSource_producesGetForNameFunction() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Status")
            .addMember("CREATING", "CREATING")
            .addMember("ACTIVE", "ACTIVE")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderSource(writer, enumShape, "Kinesis", "AWS_KINESIS_API", "kinesis");
        String output = writer.toString();
        assertTrue(output.contains("Status GetStatusForName(const Aws::String& name)"),
            "Missing GetForName function: " + output);
        assertTrue(output.contains("if (hashCode == CREATING_HASH)"),
            "Missing first if: " + output);
        assertTrue(output.contains("else if (hashCode == ACTIVE_HASH)"),
            "Missing else if: " + output);
        assertTrue(output.contains("return Status::NOT_SET;"),
            "Missing NOT_SET return: " + output);
    }

    @Test
    void renderSource_producesGetNameForFunction() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Status")
            .addMember("CREATING", "CREATING")
            .addMember("ACTIVE", "ACTIVE")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderSource(writer, enumShape, "Kinesis", "AWS_KINESIS_API", "kinesis");
        String output = writer.toString();
        assertTrue(output.contains("Aws::String GetNameForStatus(Status value)"),
            "Missing GetNameFor function: " + output);
        assertTrue(output.contains("case Status::CREATING:"),
            "Missing CREATING case: " + output);
        assertTrue(output.contains("case Status::ACTIVE:"),
            "Missing ACTIVE case: " + output);
    }

    @Test
    void renderSource_includesOverflowContainer() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Status")
            .addMember("ACTIVE", "ACTIVE")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderSource(writer, enumShape, "Kinesis", "AWS_KINESIS_API", "kinesis");
        String output = writer.toString();
        assertTrue(output.contains("EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer()"),
            "Missing overflow container in GetForName: " + output);
        assertTrue(output.contains("overflowContainer->StoreOverflow(hashCode, name)"),
            "Missing StoreOverflow: " + output);
        assertTrue(output.contains("overflowContainer->RetrieveOverflow(static_cast<int>(value))"),
            "Missing RetrieveOverflow: " + output);
    }

    @Test
    void getEnumValues_returnsOrderedValues() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Color")
            .addMember("RED", "RED")
            .addMember("GREEN", "GREEN")
            .addMember("BLUE", "BLUE")
            .build();
        List<String> values = EnumRenderer.getEnumValues(enumShape);
        assertEquals(List.of("RED", "GREEN", "BLUE"), values);
    }

    @Test
    void getEnumValues_sanitizesHyphensViaLegacyTrait() {
        // Legacy @enum trait allows special characters in values
        StringShape stringShape = StringShape.builder()
            .id("com.example#Status")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("in-progress").build())
                .build())
            .build();
        List<String> values = EnumRenderer.getEnumValues(stringShape);
        assertEquals(List.of("in_progress"), values);
    }

    @Test
    void getEnumValues_sanitizesDotsColonsSpacesSlashesViaLegacyTrait() {
        StringShape stringShape = StringShape.builder()
            .id("com.example#Mixed")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("a.b").build())
                .addEnum(EnumDefinition.builder().value("c:d").build())
                .addEnum(EnumDefinition.builder().value("e f").build())
                .addEnum(EnumDefinition.builder().value("g/h").build())
                .build())
            .build();
        List<String> values = EnumRenderer.getEnumValues(stringShape);
        assertEquals(List.of("a_b", "c_d", "e_f", "g_h"), values);
    }

    @Test
    void getEnumValues_sanitizesAsteriskToALLViaLegacyTrait() {
        StringShape stringShape = StringShape.builder()
            .id("com.example#Wildcard")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("*").build())
                .build())
            .build();
        List<String> values = EnumRenderer.getEnumValues(stringShape);
        assertEquals(List.of("ALL"), values);
    }

    @Test
    void renderSource_wireValuesPreservedInStrings() {
        // EnumShape with valid member names but different wire values
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#Status")
            .addMember("IN_PROGRESS", "in-progress")
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderSource(writer, enumShape, "Svc", "AWS_SVC_API", "svc");
        String output = writer.toString();
        // The hash constant uses the wire value
        assertTrue(output.contains("HashString(\"in-progress\")"),
            "Wire value should be preserved in HashString: " + output);
        // The return statement also uses the wire value
        assertTrue(output.contains("return \"in-progress\""),
            "Wire value should be preserved in GetNameFor return: " + output);
        // The C++ enum member uses sanitized member name
        assertTrue(output.contains("IN_PROGRESS_HASH"),
            "Sanitized name used for hash variable: " + output);
        assertTrue(output.contains("return Status::IN_PROGRESS"),
            "Sanitized name used for enum member: " + output);
    }

    @Test
    void renderHeader_legacyEnumTrait() {
        StringShape stringShape = StringShape.builder()
            .id("com.example#LegacyStatus")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("ACTIVE").build())
                .addEnum(EnumDefinition.builder().value("INACTIVE").build())
                .build())
            .build();
        CppWriter writer = new CppWriter();
        EnumRenderer.renderHeader(writer, stringShape, "Svc", "AWS_SVC_API");
        String output = writer.toString();
        assertTrue(output.contains("enum class LegacyStatus { NOT_SET, ACTIVE, INACTIVE }"),
            "Legacy enum trait should produce enum class: " + output);
    }

    @Test
    void sanitizeEnumValue_handlesAllSpecialChars() {
        assertEquals("a_b", EnumRenderer.sanitizeEnumValue("a-b"));
        assertEquals("a_b", EnumRenderer.sanitizeEnumValue("a.b"));
        assertEquals("a_b", EnumRenderer.sanitizeEnumValue("a:b"));
        assertEquals("a_b", EnumRenderer.sanitizeEnumValue("a b"));
        assertEquals("a_b", EnumRenderer.sanitizeEnumValue("a/b"));
        assertEquals("ALL", EnumRenderer.sanitizeEnumValue("*"));
        assertEquals("ALLfoo", EnumRenderer.sanitizeEnumValue("*foo"));
    }
}
