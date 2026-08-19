/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.SensitiveTrait;

import static org.junit.jupiter.api.Assertions.*;

class Ec2TransformsTest {

    private static Model ec2Model(String sdkId) {
        StructureShape in = StructureShape.builder().id("com.example#DescribeThingsRequest").build();
        StructureShape out = StructureShape.builder().id("com.example#DescribeThingsResult").build();
        OperationShape op = OperationShape.builder().id("com.example#DescribeThings")
            .input(in.getId()).output(out.getId()).build();
        EnumShape spot = EnumShape.builder().id("com.example#SpotInstanceState")
            .addMember("open", "open").addMember("active", "active").build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("ec2")
                .cloudFormationName("EC2").cloudTrailEventSource("ec2").build())
            .addOperation(op.getId())
            .build();
        return Model.assembler().addShapes(in, out, op, spot, service).assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    private static ServiceShape ec2Service(String sdkId) {
        return ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("ec2")
                .cloudFormationName("EC2").cloudTrailEventSource("ec2").build())
            .build();
    }

    @Test
    void addsDisabledToSpotInstanceState() {
        Model m = ec2Model("EC2");
        Model out = Ec2Transforms.asTransform().apply(m, service(m));
        assertTrue(EnumRenderer.getEnumValues(
            out.expectShape(ShapeId.from("com.example#SpotInstanceState"))).contains("disabled"));
    }

    @Test
    void noOpForOtherService() {
        Model m = ec2Model("SomeOther");
        Model out = Ec2Transforms.asTransform().apply(m, service(m));
        assertSame(m, out);
    }

    @Test
    void renamesNestedResultStructToResponse() {
        StructureShape nested = StructureShape.builder()
            .id("com.example#MetricDataResult").build();
        ServiceShape service = ec2Service("EC2");
        Model m = Model.assembler().addShapes(nested, service).assemble().unwrap();

        Model out = Ec2Transforms.asTransform().apply(m, service);

        assertFalse(out.getShape(ShapeId.from("com.example#MetricDataResult")).isPresent());
        assertTrue(out.getShape(ShapeId.from("com.example#MetricDataResponse")).isPresent());
    }

    @Test
    void collisionGuardLeavesResultUnchangedWhenResponseExists() {
        StructureShape resultShape = StructureShape.builder()
            .id("com.example#FooResult").build();
        StructureShape responseShape = StructureShape.builder()
            .id("com.example#FooResponse").build();
        ServiceShape service = ec2Service("EC2");
        Model m = Model.assembler().addShapes(resultShape, responseShape, service).assemble().unwrap();

        Model out = Ec2Transforms.asTransform().apply(m, service);

        assertTrue(out.getShape(ShapeId.from("com.example#FooResult")).isPresent());
        assertTrue(out.getShape(ShapeId.from("com.example#FooResponse")).isPresent());
    }

    /**
     * Model mirroring the upstream Smithy EC2 shape: {@code ModifyInstanceAttributeRequest.UserData}
     * targets the non-sensitive {@code BlobAttributeValue { Value: Blob }}.
     */
    private static Model userDataModel() {
        BlobShape blob = BlobShape.builder().id("com.example#Blob").build();
        StructureShape blobAttr = StructureShape.builder()
            .id("com.example#BlobAttributeValue")
            .addMember(MemberShape.builder()
                .id("com.example#BlobAttributeValue$Value").target(blob.getId()).build())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#ModifyInstanceAttributeRequest")
            .addMember(MemberShape.builder()
                .id("com.example#ModifyInstanceAttributeRequest$UserData").target(blobAttr.getId()).build())
            .build();
        StructureShape out = StructureShape.builder().id("com.example#ModifyInstanceAttributeResult").build();
        OperationShape op = OperationShape.builder().id("com.example#ModifyInstanceAttribute")
            .input(request.getId()).output(out.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId("EC2").arnNamespace("ec2")
                .cloudFormationName("EC2").cloudTrailEventSource("ec2").build())
            .addOperation(op.getId())
            .build();
        return Model.assembler().addShapes(blob, blobAttr, request, out, op, service).assemble().unwrap();
    }

    @Test
    void modelsUserDataAsSensitiveSecureBlobAttributeValue() {
        Model m = userDataModel();
        Model out = Ec2Transforms.asTransform().apply(m, service(m));

        // SecureBlobAttributeValue exists with a Value member targeting a @sensitive blob
        // (a @sensitive blob maps to Aws::Utils::CryptoBuffer, matching the C2J baseline).
        StructureShape secure = out.expectShape(
            ShapeId.from("com.example#SecureBlobAttributeValue"), StructureShape.class);
        MemberShape value = secure.getAllMembers().get("Value");
        assertNotNull(value, "SecureBlobAttributeValue must have a Value member");
        Shape valueTarget = out.expectShape(value.getTarget());
        assertTrue(valueTarget.isBlobShape(), "Value must target a blob");
        assertTrue(valueTarget.hasTrait(SensitiveTrait.class),
            "the blob must be @sensitive so it renders as CryptoBuffer");

        // UserData is repointed to SecureBlobAttributeValue.
        MemberShape userData = out.expectShape(
            ShapeId.from("com.example#ModifyInstanceAttributeRequest"), StructureShape.class)
            .getAllMembers().get("UserData");
        assertEquals(ShapeId.from("com.example#SecureBlobAttributeValue"), userData.getTarget());

        // BlobAttributeValue is now unreferenced, so it drops out of the emitted set (matching C2J).
        boolean stillReferenced = out.shapes(StructureShape.class)
            .flatMap(s -> s.getAllMembers().values().stream())
            .anyMatch(mem -> mem.getTarget().equals(ShapeId.from("com.example#BlobAttributeValue")));
        assertFalse(stillReferenced, "BlobAttributeValue must be unreferenced after repointing UserData");
    }

    @Test
    void secureBlobUserDataTransformIsIdempotent() {
        // Re-applying must not throw or duplicate shapes: once SecureBlobAttributeValue exists the
        // transform self-retires, so it is safe if the upstream Smithy model later adds the shape.
        Model once = Ec2Transforms.asTransform().apply(userDataModel(), service(userDataModel()));
        Model twice = Ec2Transforms.asTransform().apply(once, service(once));

        MemberShape userData = twice.expectShape(
            ShapeId.from("com.example#ModifyInstanceAttributeRequest"), StructureShape.class)
            .getAllMembers().get("UserData");
        assertEquals(ShapeId.from("com.example#SecureBlobAttributeValue"), userData.getTarget());
    }
}
