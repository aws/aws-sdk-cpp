/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;

import java.util.Optional;
import java.util.Set;

import static org.junit.jupiter.api.Assertions.*;

class GlobalTransformsTest {

    @Test
    void reservedMemberRename_body_becomesRequestBody() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "kinesis");
        assertEquals(Optional.of("requestBody"), result);
    }

    @Test
    void reservedMemberRename_body_skippedForApiGateway() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "apigateway");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_body_skippedForBedrockRuntime() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "bedrock-runtime");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_body_skippedForAmplifyUiBuilder() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "amplifyuibuilder");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_body_skippedForApiGateway2() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "apigateway2");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_body_skippedForGlacier() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "glacier");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_body_skippedForRepostSpace() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("body", "repostspace");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_headers_becomesHeaderValues() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("headers", "kinesis");
        assertEquals(Optional.of("headerValues"), result);
    }

    @Test
    void reservedMemberRename_headers_skippedForApiGateway() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("headers", "apigateway");
        assertTrue(result.isEmpty());
    }

    @Test
    void reservedMemberRename_headers_notSkippedForBedrockRuntime() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("headers", "bedrock-runtime");
        assertEquals(Optional.of("headerValues"), result);
    }

    @Test
    void reservedMemberRename_Headers_alwaysRenamed() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("Headers", "apigateway");
        assertEquals(Optional.of("headerValues"), result);
    }

    @Test
    void reservedMemberRename_Headers_alwaysRenamed_anyService() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("Headers", "kinesis");
        assertEquals(Optional.of("headerValues"), result);
    }

    @Test
    void reservedMemberRename_normalMember_returnsEmpty() {
        Optional<String> result = GlobalTransforms.getReservedMemberRename("name", "kinesis");
        assertTrue(result.isEmpty());
    }

    // --- computeReachableShapes tests ---

    @Test
    void computeReachableShapes_simpleOperation_includesInputAndOutput() {
        // Build a minimal model with one operation that has input and output
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .addMember(MemberShape.builder()
                .id("com.example#MyInput$name")
                .target("smithy.api#String")
                .build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .addMember(MemberShape.builder()
                .id("com.example#MyOutput$result")
                .target("smithy.api#String")
                .build())
            .build();
        OperationShape operation = OperationShape.builder()
            .id("com.example#MyOperation")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService")
            .version("2024-01-01")
            .addOperation(operation.getId())
            .build();
        Model model = Model.assembler()
            .addShape(input)
            .addShape(output)
            .addShape(operation)
            .addShape(service)
            .assemble()
            .unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertTrue(reachable.contains(ShapeId.from("com.example#MyInput")));
        assertTrue(reachable.contains(ShapeId.from("com.example#MyOutput")));
    }

    @Test
    void computeReachableShapes_nestedStructure_isReachable() {
        // Nested structure should be reachable through member reference
        StructureShape nested = StructureShape.builder()
            .id("com.example#NestedStruct")
            .addMember(MemberShape.builder()
                .id("com.example#NestedStruct$value")
                .target("smithy.api#String")
                .build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .addMember(MemberShape.builder()
                .id("com.example#MyInput$nested")
                .target(nested.getId())
                .build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .build();
        OperationShape operation = OperationShape.builder()
            .id("com.example#MyOperation")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService")
            .version("2024-01-01")
            .addOperation(operation.getId())
            .build();
        Model model = Model.assembler()
            .addShape(nested)
            .addShape(input)
            .addShape(output)
            .addShape(operation)
            .addShape(service)
            .assemble()
            .unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertTrue(reachable.contains(ShapeId.from("com.example#NestedStruct")));
        assertTrue(reachable.contains(ShapeId.from("com.example#MyInput")));
    }

    @Test
    void computeReachableShapes_unreferencedShape_notIncluded() {
        // A shape that is not referenced by any operation should not be reachable
        StructureShape unreferenced = StructureShape.builder()
            .id("com.example#Unreferenced")
            .addMember(MemberShape.builder()
                .id("com.example#Unreferenced$data")
                .target("smithy.api#String")
                .build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .build();
        OperationShape operation = OperationShape.builder()
            .id("com.example#MyOperation")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService")
            .version("2024-01-01")
            .addOperation(operation.getId())
            .build();
        Model model = Model.assembler()
            .addShape(unreferenced)
            .addShape(input)
            .addShape(output)
            .addShape(operation)
            .addShape(service)
            .assemble()
            .unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertFalse(reachable.contains(ShapeId.from("com.example#Unreferenced")));
    }

    @Test
    void computeReachableShapes_listMember_targetIsReachable() {
        // List member targets should be traversed
        StructureShape element = StructureShape.builder()
            .id("com.example#Element")
            .addMember(MemberShape.builder()
                .id("com.example#Element$id")
                .target("smithy.api#String")
                .build())
            .build();
        ListShape list = ListShape.builder()
            .id("com.example#MyList")
            .member(MemberShape.builder()
                .id("com.example#MyList$member")
                .target(element.getId())
                .build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .addMember(MemberShape.builder()
                .id("com.example#MyInput$items")
                .target(list.getId())
                .build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .build();
        OperationShape operation = OperationShape.builder()
            .id("com.example#MyOperation")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService")
            .version("2024-01-01")
            .addOperation(operation.getId())
            .build();
        Model model = Model.assembler()
            .addShape(element)
            .addShape(list)
            .addShape(input)
            .addShape(output)
            .addShape(operation)
            .addShape(service)
            .assemble()
            .unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertTrue(reachable.contains(ShapeId.from("com.example#MyList")));
        assertTrue(reachable.contains(ShapeId.from("com.example#Element")));
    }

    @Test
    void computeReachableShapes_mapKeyAndValue_areReachable() {
        // Map key and value targets should be traversed
        StructureShape valueShape = StructureShape.builder()
            .id("com.example#MapValue")
            .addMember(MemberShape.builder()
                .id("com.example#MapValue$data")
                .target("smithy.api#String")
                .build())
            .build();
        MapShape map = MapShape.builder()
            .id("com.example#MyMap")
            .key(MemberShape.builder()
                .id("com.example#MyMap$key")
                .target("smithy.api#String")
                .build())
            .value(MemberShape.builder()
                .id("com.example#MyMap$value")
                .target(valueShape.getId())
                .build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .addMember(MemberShape.builder()
                .id("com.example#MyOutput$mapping")
                .target(map.getId())
                .build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .build();
        OperationShape operation = OperationShape.builder()
            .id("com.example#MyOperation")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService")
            .version("2024-01-01")
            .addOperation(operation.getId())
            .build();
        Model model = Model.assembler()
            .addShape(valueShape)
            .addShape(map)
            .addShape(input)
            .addShape(output)
            .addShape(operation)
            .addShape(service)
            .assemble()
            .unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertTrue(reachable.contains(ShapeId.from("com.example#MyMap")));
        assertTrue(reachable.contains(ShapeId.from("com.example#MapValue")));
    }

    @Test
    void computeReachableShapes_errorShapes_areReachable() {
        // Error shapes should be traversed
        StructureShape error = StructureShape.builder()
            .id("com.example#MyError")
            .addMember(MemberShape.builder()
                .id("com.example#MyError$message")
                .target("smithy.api#String")
                .build())
            .addTrait(new software.amazon.smithy.model.traits.ErrorTrait("client"))
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .build();
        OperationShape operation = OperationShape.builder()
            .id("com.example#MyOperation")
            .input(input.getId())
            .output(output.getId())
            .addError(error.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService")
            .version("2024-01-01")
            .addOperation(operation.getId())
            .build();
        Model model = Model.assembler()
            .addShape(error)
            .addShape(input)
            .addShape(output)
            .addShape(operation)
            .addShape(service)
            .assemble()
            .unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertTrue(reachable.contains(ShapeId.from("com.example#MyError")));
    }
}
