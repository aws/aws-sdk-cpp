/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.JsonNameTrait;
import software.amazon.smithy.model.traits.XmlNameTrait;

import java.util.Set;

import static org.junit.jupiter.api.Assertions.*;

class GlobalTransformsTest {

    /** One-operation service under sdkId with an input struct carrying the given members. */
    private static Model inputModel(String sdkId, String... inputMembers) {
        StructureShape.Builder in = StructureShape.builder().id("com.example#DoThingRequest");
        for (String m : inputMembers) {
            in.addMember(m, ShapeId.from("smithy.api#String"));
        }
        StructureShape input = in.build();
        StructureShape output = StructureShape.builder().id("com.example#DoThingResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.ServiceTrait.builder()
                .sdkId(sdkId).arnNamespace("x").cloudFormationName("X").cloudTrailEventSource("x").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(input, output, op, service).assemble().unwrap();
    }

    private static StructureShape input(Model m) {
        return m.expectShape(ShapeId.from("com.example#DoThingRequest"), StructureShape.class);
    }

    @Test
    void reservedRename_body_becomesRequestBody_forNonSkippedService() {
        Model m = inputModel("Security IR", "body");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        assertFalse(input(out).getMember("body").isPresent());
        assertTrue(input(out).getMember("requestBody").isPresent());
    }

    @Test
    void reservedRename_body_skippedForBedrockRuntime() {
        Model m = inputModel("Bedrock Runtime", "body");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        assertTrue(input(out).getMember("body").isPresent(), "skip-listed service keeps body");
    }

    @Test
    void reservedRename_body_skippedForApiGateway_rawName() {
        // C2J name is "apigateway" but the raw smithy name is "api-gateway"; the skip-list must use
        // the raw name or API Gateway's dedicated transform gets pre-empted.
        Model m = inputModel("API Gateway", "body");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        assertTrue(input(out).getMember("body").isPresent(), "api-gateway must be skipped");
    }

    @Test
    void reservedRename_headers_becomesHeaderValues_forNonSkippedService() {
        Model m = inputModel("Kinesis", "headers");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        assertTrue(input(out).getMember("headerValues").isPresent());
        assertFalse(input(out).getMember("headers").isPresent());
    }

    @Test
    void reservedRename_capitalHeaders_alwaysRenamed() {
        Model m = inputModel("API Gateway", "Headers");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        assertTrue(input(out).getMember("headerValues").isPresent());
    }

    @Test
    void reservedRename_onlyTouchesOperationInputs_notArbitraryShapes() {
        // A non-input structure that happens to have a 'body' member must NOT be renamed.
        StructureShape domain = StructureShape.builder().id("com.example#HttpThing")
            .addMember("body", ShapeId.from("smithy.api#String")).build();
        StructureShape input = StructureShape.builder().id("com.example#DoThingRequest")
            .addMember("thing", domain.getId()).build();
        StructureShape output = StructureShape.builder().id("com.example#DoThingResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.ServiceTrait.builder()
                .sdkId("Kinesis").arnNamespace("x").cloudFormationName("X").cloudTrailEventSource("x").build())
            .addOperation(op.getId()).build();
        Model m = Model.assembler().addShapes(domain, input, output, op, service).assemble().unwrap();
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        assertTrue(out.expectShape(ShapeId.from("com.example#HttpThing"), StructureShape.class)
            .getMember("body").isPresent(), "domain shape body must not be renamed");
    }

    @Test
    void reservedRename_collision_throws() {
        Model m = inputModel("Kinesis", "body", "requestBody");
        assertThrows(IllegalStateException.class,
            () -> GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example")));
    }

    @Test
    void reservedRename_jsonService_preservesWireNameWithJsonName() {
        Model m = inputModel("Kinesis", "body");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        MemberShape renamed = input(out).getMember("requestBody").orElseThrow();
        assertEquals("body", renamed.expectTrait(JsonNameTrait.class).getValue(),
            "JSON service must keep the 'body' wire key via @jsonName");
        assertFalse(renamed.hasTrait(XmlNameTrait.class));
    }

    @Test
    void reservedRename_queryXmlService_preservesWireNameWithXmlName() {
        Model m = inputModelWithProtocol("Kinesis",
            new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait(), "body");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        MemberShape renamed = input(out).getMember("requestBody").orElseThrow();
        assertEquals("body", renamed.expectTrait(XmlNameTrait.class).getValue(),
            "awsQuery service must keep the 'body' wire key via @xmlName");
        assertFalse(renamed.hasTrait(JsonNameTrait.class));
        assertFalse(renamed.hasTrait(
            software.amazon.smithy.aws.traits.protocols.Ec2QueryNameTrait.class),
            "awsQuery must not use the ec2Query request-key trait");
    }

    @Test
    void reservedRename_ec2Service_pinsRequestKeyAndResponseName() {
        // ec2Query request key (@ec2QueryName, capitalized, verbatim on the wire) and response XML
        // name (@xmlName) differ, so both are pinned rather than relying on capitalize(@xmlName).
        Model m = inputModelWithProtocol("Kinesis",
            new software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait(), "body");
        Model out = GlobalTransforms.asTransform().apply(m, serviceOf(m, "Example"));
        MemberShape renamed = input(out).getMember("requestBody").orElseThrow();
        assertEquals("Body", renamed.expectTrait(
            software.amazon.smithy.aws.traits.protocols.Ec2QueryNameTrait.class).getValue(),
            "ec2Query request key must be preserved verbatim as the capitalized original member name");
        assertEquals("body", renamed.expectTrait(XmlNameTrait.class).getValue(),
            "ec2Query response XML name must be preserved as the original member name");
        assertFalse(renamed.hasTrait(JsonNameTrait.class));
    }

    /** As {@link #inputModel} but with the given protocol trait(s) on the service. */
    private static Model inputModelWithProtocol(String sdkId,
                                                software.amazon.smithy.model.traits.Trait protocolTrait,
                                                String... inputMembers) {
        StructureShape.Builder in = StructureShape.builder().id("com.example#DoThingRequest");
        for (String member : inputMembers) {
            in.addMember(member, ShapeId.from("smithy.api#String"));
        }
        StructureShape input = in.build();
        StructureShape output = StructureShape.builder().id("com.example#DoThingResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.ServiceTrait.builder()
                .sdkId(sdkId).arnNamespace("x").cloudFormationName("X").cloudTrailEventSource("x").build())
            .addTrait(protocolTrait)
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(input, output, op, service).assemble().unwrap();
    }

    // --- computeReachableShapes tests ---

    @Test
    void computeReachableShapes_simpleOperation_includesInputAndOutput() {
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

    @Test
    void computeReachableShapes_excludesStructReachableOnlyViaDeprecatedOperation() {
        // A @deprecated operation is dropped entirely (C2J parity). A struct reachable only via it
        // falls out of the reachable set; one shared with a live op stays reachable.
        StructureShape deprecatedOnly = StructureShape.builder()
            .id("com.example#DeprecatedOnly")
            .addMember(MemberShape.builder()
                .id("com.example#DeprecatedOnly$x").target("smithy.api#String").build())
            .build();
        StructureShape shared = StructureShape.builder()
            .id("com.example#SharedDetail")
            .addMember(MemberShape.builder()
                .id("com.example#SharedDetail$y").target("smithy.api#String").build())
            .build();
        StructureShape deprecatedInput = StructureShape.builder()
            .id("com.example#DeprecatedInput")
            .addMember(MemberShape.builder()
                .id("com.example#DeprecatedInput$only").target(deprecatedOnly.getId()).build())
            .addMember(MemberShape.builder()
                .id("com.example#DeprecatedInput$shared").target(shared.getId()).build())
            .build();
        StructureShape deprecatedOutput = StructureShape.builder()
            .id("com.example#DeprecatedOutput").build();
        StructureShape liveInput = StructureShape.builder()
            .id("com.example#LiveInput")
            .addMember(MemberShape.builder()
                .id("com.example#LiveInput$shared").target(shared.getId()).build())
            .build();
        StructureShape liveOutput = StructureShape.builder()
            .id("com.example#LiveOutput").build();
        OperationShape deprecatedOp = OperationShape.builder()
            .id("com.example#DeprecatedOp")
            .input(deprecatedInput.getId()).output(deprecatedOutput.getId())
            .addTrait(software.amazon.smithy.model.traits.DeprecatedTrait.builder().build())
            .build();
        OperationShape liveOp = OperationShape.builder()
            .id("com.example#LiveOp")
            .input(liveInput.getId()).output(liveOutput.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService").version("2024-01-01")
            .addOperation(deprecatedOp.getId()).addOperation(liveOp.getId())
            .build();
        Model model = Model.assembler()
            .addShapes(deprecatedOnly, shared, deprecatedInput, deprecatedOutput,
                liveInput, liveOutput, deprecatedOp, liveOp, service)
            .assemble().unwrap();

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(model, service);

        assertFalse(reachable.contains(ShapeId.from("com.example#DeprecatedOnly")),
            "struct reachable only via a @deprecated operation must be excluded");
        assertFalse(reachable.contains(ShapeId.from("com.example#DeprecatedInput")),
            "the input of a @deprecated operation must be excluded");
        assertTrue(reachable.contains(ShapeId.from("com.example#SharedDetail")),
            "struct shared with a live operation must remain reachable");
        assertTrue(reachable.contains(ShapeId.from("com.example#LiveInput")),
            "the input of a live operation must remain reachable");
    }

    // --- dropDeprecatedMembers tests ---

    @Test
    void dropDeprecatedMembers_removesDeprecatedMember_keepsOthers() {
        // Mirrors C2J: a @deprecated member is dropped; siblings stay. The shape is an operation
        // input so the reachability-scoped transform considers it.
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

    @Test
    void dropDeprecatedMembers_sharedTargetSurvivesViaNonDeprecatedReference() {
        // A shape reached through both a @deprecated and a live member must stay reachable: dropping
        // the deprecated reference must not orphan a shape the surviving model still uses.
        StructureShape shared = StructureShape.builder()
            .id("com.example#SharedDetail")
            .addMember(MemberShape.builder()
                .id("com.example#SharedDetail$x").target("smithy.api#String").build())
            .build();
        // Input references SharedDetail through a @deprecated member (dropped by the transform).
        StructureShape input = StructureShape.builder()
            .id("com.example#MyInput")
            .addMember(MemberShape.builder()
                .id("com.example#MyInput$legacyDetail").target(shared.getId())
                .addTrait(software.amazon.smithy.model.traits.DeprecatedTrait.builder().build())
                .build())
            .build();
        // Output references the same SharedDetail through a live (non-deprecated) member.
        StructureShape output = StructureShape.builder()
            .id("com.example#MyOutput")
            .addMember(MemberShape.builder()
                .id("com.example#MyOutput$detail").target(shared.getId()).build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#MyOperation").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#MyService").version("2024-01-01").addOperation(op.getId()).build();
        Model model = Model.assembler()
            .addShapes(shared, input, output, op, service).assemble().unwrap();

        Model out = GlobalTransforms.dropDeprecatedMembers(model, service);
        StructureShape transformedInput = out.expectShape(
            ShapeId.from("com.example#MyInput"), StructureShape.class);
        assertFalse(transformedInput.getMember("legacyDetail").isPresent(),
            "deprecated reference must be dropped from its container");

        Set<ShapeId> reachable = GlobalTransforms.computeReachableShapes(out, serviceOf(out, "MyService"));
        assertTrue(reachable.contains(ShapeId.from("com.example#SharedDetail")),
            "shape still referenced by a surviving member must remain reachable (and emitted)");
    }

    private static ServiceShape serviceOf(Model model, String name) {
        return model.expectShape(ShapeId.from("com.example#" + name), ServiceShape.class);
    }

    @Test
    void injectResponseMetadata_failsFastOnModeledResponseMetadataMember() {
        // ResponseMetadata is framework-reserved; a modeled member of that name would make
        // name-based recognition ambiguous, so injection fails fast rather than clobber it.
        StructureShape input = StructureShape.builder().id("com.example#DoThingInput").build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput")
            .addMember(MemberShape.builder()
                .id("com.example#DoThingOutput$ResponseMetadata").target("smithy.api#String").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(new software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait())
            .addOperation(op.getId()).build();
        Model model = Model.assembler().addShapes(input, output, op, service).assemble().unwrap();

        assertThrows(IllegalStateException.class,
            () -> GlobalTransforms.injectResponseMetadata(model, serviceOf(model, "Example")));
    }

    @Test
    void injectResponseMetadata_failsFastOnModeledResponseMetadataShape() {
        // A modeled shape literally named ResponseMetadata collides with the framework envelope
        // shape we create; injecting would clobber it, so fail fast.
        StructureShape input = StructureShape.builder().id("com.example#DoThingInput").build();
        StructureShape output = StructureShape.builder().id("com.example#DoThingOutput").build();
        StructureShape modeled = StructureShape.builder()
            .id("com.example#ResponseMetadata")
            .addMember(MemberShape.builder()
                .id("com.example#ResponseMetadata$foo").target("smithy.api#String").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(new software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait())
            .addOperation(op.getId()).build();
        Model model = Model.assembler().addShapes(input, output, modeled, op, service).assemble().unwrap();

        assertThrows(IllegalStateException.class,
            () -> GlobalTransforms.injectResponseMetadata(model, serviceOf(model, "Example")));
    }

    // --- injectResponseMetadata tests ---

    /** A single-operation service under the given protocol trait(s), output has one plain member. */
    private static Model oneOutputModel(software.amazon.smithy.model.traits.Trait... serviceTraits) {
        StructureShape input = StructureShape.builder().id("com.example#DoThingInput").build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput")
            .addMember(MemberShape.builder()
                .id("com.example#DoThingOutput$name").target("smithy.api#String").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape.Builder serviceBuilder = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addOperation(op.getId());
        for (software.amazon.smithy.model.traits.Trait trait : serviceTraits) {
            serviceBuilder.addTrait(trait);
        }
        ServiceShape service = serviceBuilder.build();
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

    @Test
    void injectResponseMetadata_awsJsonWithQueryCompatible_addsResponseMetadataMemberToResult() {
        // awsJson1_0 + @awsQueryCompatible (e.g. SQS) resolves to a JSON protocol, but C2J still
        // injects ResponseMetadata { RequestId } into every result for awsQueryCompatible services.
        Model model = oneOutputModel(
            software.amazon.smithy.aws.traits.protocols.AwsJson1_0Trait.builder().build(),
            new software.amazon.smithy.aws.traits.protocols.AwsQueryCompatibleTrait());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        StructureShape result = out.expectShape(
            ShapeId.from("com.example#DoThingOutput"), StructureShape.class);
        assertTrue(result.getMember("ResponseMetadata").isPresent(),
            "awsQueryCompatible JSON result should carry an injected ResponseMetadata member");
        MemberShape rm = result.getMember("ResponseMetadata").get();
        assertTrue(rm.hasTrait(software.amazon.smithy.model.traits.RequiredTrait.class),
            "ResponseMetadata member should be @required, matching C2J");
    }

    @Test
    void injectResponseMetadata_awsJsonWithQueryCompatible_addsResponseMetadataStructureWithRequestId() {
        Model model = oneOutputModel(
            software.amazon.smithy.aws.traits.protocols.AwsJson1_0Trait.builder().build(),
            new software.amazon.smithy.aws.traits.protocols.AwsQueryCompatibleTrait());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        ShapeId rmId = out.expectShape(ShapeId.from("com.example#DoThingOutput"), StructureShape.class)
            .getMember("ResponseMetadata").get().getTarget();
        StructureShape rm = out.expectShape(rmId, StructureShape.class);
        assertEquals("ResponseMetadata", rmId.getName());
        assertTrue(rm.getMember("RequestId").isPresent(),
            "ResponseMetadata should have a RequestId member");
    }

    @Test
    void injectResponseMetadata_skipsDeprecatedOperationOutputSharedByLiveOp() {
        // A @deprecated op's output reused as a nested member stays emitted, but C2J drops the
        // deprecated op and never injects ResponseMetadata there; only genuine live-op outputs get it.
        StructureShape sharedOutput = StructureShape.builder()
            .id("com.example#SharedOutput")
            .addMember(MemberShape.builder()
                .id("com.example#SharedOutput$value").target("smithy.api#String").build())
            .build();
        StructureShape liveOutput = StructureShape.builder()
            .id("com.example#LiveOutput")
            .addMember(MemberShape.builder()
                .id("com.example#LiveOutput$nested").target(sharedOutput.getId()).build())
            .build();
        StructureShape deprecatedInput = StructureShape.builder()
            .id("com.example#DeprecatedInput").build();
        StructureShape liveInput = StructureShape.builder()
            .id("com.example#LiveInput").build();
        OperationShape deprecatedOp = OperationShape.builder()
            .id("com.example#DeprecatedOp")
            .input(deprecatedInput.getId()).output(sharedOutput.getId())
            .addTrait(software.amazon.smithy.model.traits.DeprecatedTrait.builder().build())
            .build();
        OperationShape liveOp = OperationShape.builder()
            .id("com.example#LiveOp")
            .input(liveInput.getId()).output(liveOutput.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait())
            .addOperation(deprecatedOp.getId()).addOperation(liveOp.getId())
            .build();
        Model model = Model.assembler().addShapes(sharedOutput, liveOutput, deprecatedInput,
            liveInput, deprecatedOp, liveOp, service).assemble().unwrap();

        Model out = GlobalTransforms.injectResponseMetadata(model, serviceOf(model, "Example"));

        StructureShape sharedAfter = out.expectShape(
            ShapeId.from("com.example#SharedOutput"), StructureShape.class);
        assertFalse(sharedAfter.getMember("ResponseMetadata").isPresent(),
            "a @deprecated op's output (only reused as a nested member) must not gain ResponseMetadata");
        StructureShape liveAfter = out.expectShape(
            ShapeId.from("com.example#LiveOutput"), StructureShape.class);
        assertTrue(liveAfter.getMember("ResponseMetadata").isPresent(),
            "a genuine live-op output must still gain ResponseMetadata");
    }

    @Test
    void injectResponseMetadata_awsJsonWithoutQueryCompatible_leavesResultUnchanged() {
        // Plain awsJson1_0 (no @awsQueryCompatible) must NOT get ResponseMetadata injected.
        Model model = oneOutputModel(
            software.amazon.smithy.aws.traits.protocols.AwsJson1_0Trait.builder().build());
        Model out = GlobalTransforms.asTransform().apply(model, serviceOf(model));

        StructureShape result = out.expectShape(
            ShapeId.from("com.example#DoThingOutput"), StructureShape.class);
        assertFalse(result.getMember("ResponseMetadata").isPresent(),
            "Plain JSON protocols must not get ResponseMetadata injected");
    }
}
