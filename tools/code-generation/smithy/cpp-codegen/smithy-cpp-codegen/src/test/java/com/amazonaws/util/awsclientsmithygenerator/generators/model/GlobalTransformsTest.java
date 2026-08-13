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

    // --- dropDeprecatedMembers tests ---

    @Test
    void dropDeprecatedMembers_removesDeprecatedMember_keepsOthers() {
        // Mirrors C2J: a member with @deprecated is dropped from the generated shape; siblings stay.
        // The shape must be reachable from the service (used as an operation input here) so that the
        // reachability-scoped transform considers it.
        StructureShape config = StructureShape.builder()
            .id("com.example#LocationConfiguration")
            .addMember(MemberShape.builder()
                .id("com.example#LocationConfiguration$location").target("smithy.api#String").build())
            .addMember(MemberShape.builder()
                .id("com.example#LocationConfiguration$onDemandCapacity").target("smithy.api#Integer")
                .addTrait(software.amazon.smithy.model.traits.DeprecatedTrait.builder().build())
                .build())
            .build();
        StructureShape output = StructureShape.builder().id("com.example#MyOutput").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#MyOperation").input(config.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService").version("2024-01-01").addOperation(op.getId()).build();
        Model model = Model.assembler().addShapes(config, output, op, service).assemble().unwrap();

        Model out = GlobalTransforms.dropDeprecatedMembers(model, service);
        StructureShape transformed = out.expectShape(
            ShapeId.from("com.example#LocationConfiguration"), StructureShape.class);
        assertFalse(transformed.getMember("onDemandCapacity").isPresent(),
            "deprecated member must be dropped");
        assertTrue(transformed.getMember("location").isPresent(),
            "non-deprecated sibling must remain");
    }

    @Test
    void dropDeprecatedMembers_noDeprecated_returnsSameModel() {
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .addMember(MemberShape.builder().id("com.example#MyInput$a").target("smithy.api#String").build())
            .build();
        StructureShape output = StructureShape.builder().id("com.example#MyOutput").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#MyOperation").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService").version("2024-01-01").addOperation(op.getId()).build();
        Model model = Model.assembler().addShapes(input, output, op, service).assemble().unwrap();
        // The prelude declares its own @deprecated member (protocolDefinition$noInlineDocumentSupport),
        // but it is not reachable from the service, so the transform is a true no-op here.
        assertSame(model, GlobalTransforms.dropDeprecatedMembers(model, service),
            "models without service-reachable deprecated members should be returned unchanged");
    }

    @Test
    void dropDeprecatedMembers_orphanedTargetBecomesUnreachable() {
        // A struct referenced ONLY through a deprecated member drops out of the reachable set,
        // matching C2J's omission of the orphaned shape file.
        StructureShape orphan = StructureShape.builder()
            .id("com.example#OrphanDetail")
            .addMember(MemberShape.builder()
                .id("com.example#OrphanDetail$x").target("smithy.api#String").build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .addMember(MemberShape.builder()
                .id("com.example#MyInput$detail").target(orphan.getId())
                .addTrait(software.amazon.smithy.model.traits.DeprecatedTrait.builder().build())
                .build())
            .build();
        StructureShape output = StructureShape.builder().id("com.example#MyOutput").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#MyOperation").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService").version("2024-01-01").addOperation(op.getId()).build();
        Model model = Model.assembler()
            .addShapes(orphan, input, output, op, service).assemble().unwrap();

        Model out = GlobalTransforms.dropDeprecatedMembers(model, service);
        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(out, serviceOf(out, "MyService"));
        assertFalse(reachable.contains(ShapeId.from("com.example#OrphanDetail")),
            "shape referenced only via a deprecated member must become unreachable");
    }

    private static ServiceShape serviceOf(Model model, String name) {
        return model.expectShape(ShapeId.from("com.example#" + name), ServiceShape.class);
    }

    // --- injectResponseMetadata tests ---

    /** A single-operation service under the given protocol trait, output has one plain member. */
    private static Model oneOutputModel(software.amazon.smithy.model.traits.Trait protocolTrait) {
        StructureShape input = StructureShape.builder().id("com.example#DoThingInput").build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput")
            .addMember(MemberShape.builder()
                .id("com.example#DoThingOutput$name").target("smithy.api#String").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(protocolTrait).addOperation(op.getId()).build();
        return Model.assembler().addShapes(input, output, op, service).assemble().unwrap();
    }

    private static ServiceShape serviceOf(Model model) {
        return model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
    }

    @Test
    void injectResponseMetadata_awsQuery_addsResponseMetadataMemberToResult() {
        Model model = oneOutputModel(new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        StructureShape result = out.expectShape(
            ShapeId.from("com.example#DoThingOutput"), StructureShape.class);
        assertTrue(result.getMember("ResponseMetadata").isPresent(),
            "Query result should carry an injected ResponseMetadata member");
        MemberShape rm = result.getMember("ResponseMetadata").get();
        assertTrue(rm.hasTrait(software.amazon.smithy.model.traits.RequiredTrait.class),
            "ResponseMetadata member should be @required, matching C2J");
    }

    @Test
    void injectResponseMetadata_awsQuery_addsResponseMetadataStructureWithRequestId() {
        Model model = oneOutputModel(new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        ShapeId rmId = out.expectShape(ShapeId.from("com.example#DoThingOutput"), StructureShape.class)
            .getMember("ResponseMetadata").get().getTarget();
        StructureShape rm = out.expectShape(rmId, StructureShape.class);
        assertEquals("ResponseMetadata", rmId.getName());
        assertTrue(rm.getMember("RequestId").isPresent(),
            "ResponseMetadata should have a RequestId member");
    }

    @Test
    void injectResponseMetadata_ec2_addsResponseMetadataMemberToResult() {
        Model model = oneOutputModel(new software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        StructureShape result = out.expectShape(
            ShapeId.from("com.example#DoThingOutput"), StructureShape.class);
        assertTrue(result.getMember("ResponseMetadata").isPresent(),
            "EC2 result should carry an injected ResponseMetadata member");
    }

    @Test
    void injectResponseMetadata_restJson_leavesResultUnchanged() {
        Model model = oneOutputModel(
            software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        StructureShape result = out.expectShape(
            ShapeId.from("com.example#DoThingOutput"), StructureShape.class);
        assertFalse(result.getMember("ResponseMetadata").isPresent(),
            "Non-query protocols must not get ResponseMetadata injected");
    }
}
