/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class CloudFrontTransformsTest {

    private static final String NS = "com.amazonaws.cloudfront";

    private static Model cloudFrontModel(String sdkId, String version) {
        StructureShape in = StructureShape.builder().id(NS + "#AssociateAliasRequest").build();
        StructureShape out = StructureShape.builder().id(NS + "#AssociateAliasResult").build();
        OperationShape op = OperationShape.builder().id(NS + "#AssociateAlias")
            .input(in.getId()).output(out.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id(NS + "#Cloudfront2020_05_31").version(version)
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("cloudfront")
                .cloudFormationName("CloudFront").cloudTrailEventSource("cloudfront.amazonaws.com").build())
            .addOperation(op.getId())
            .build();
        return Model.assembler().addShapes(in, out, op, service).assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from(NS + "#Cloudfront2020_05_31"), ServiceShape.class);
    }

    @Test
    void suffixesOperationNameWithApiVersion() {
        Model m = cloudFrontModel("CloudFront", "2020-05-31");
        Model out = new CloudFrontTransforms().transform(m, service(m));

        ShapeId suffixed = ShapeId.from(NS + "#AssociateAlias2020_05_31");
        assertTrue(out.getShape(suffixed).isPresent(), "operation must be renamed with version suffix");
        assertFalse(out.getShape(ShapeId.from(NS + "#AssociateAlias")).isPresent(),
            "clean operation name must no longer exist");
        assertTrue(service(out).getOperations().contains(suffixed),
            "service must reference the suffixed operation");
    }

    @Test
    void stampsCleanServiceRequestNameOnSuffixedOperation() {
        Model m = cloudFrontModel("CloudFront", "2020-05-31");
        Model out = new CloudFrontTransforms().transform(m, service(m));

        OperationShape suffixed = out.expectShape(
            ShapeId.from(NS + "#AssociateAlias2020_05_31"), OperationShape.class);
        assertEquals("AssociateAlias",
            suffixed.expectTrait(ServiceRequestNameTrait.class).getValue(),
            "renamed operation must carry the clean logical name for GetServiceRequestName");
    }

    @Test
    void doesNotRenameInputOrOutputStructures() {
        Model m = cloudFrontModel("CloudFront", "2020-05-31");
        Model out = new CloudFrontTransforms().transform(m, service(m));

        assertTrue(out.getShape(ShapeId.from(NS + "#AssociateAliasRequest")).isPresent(),
            "input structure must keep its clean name (it folds into the request class)");
        assertTrue(out.getShape(ShapeId.from(NS + "#AssociateAliasResult")).isPresent(),
            "output structure must keep its clean name");
    }

    @Test
    void noOpForOtherService() {
        StructureShape in = StructureShape.builder().id("com.example#DoThingRequest").build();
        OperationShape op = OperationShape.builder().id("com.example#DoThing").input(in.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#KvsService").version("2022-07-26")
            .addTrait(ServiceTrait.builder().sdkId("CloudFront KeyValueStore").arnNamespace("cloudfront-keyvaluestore")
                .cloudFormationName("CloudFrontKeyValueStore").cloudTrailEventSource("cloudfront-keyvaluestore.amazonaws.com").build())
            .addOperation(op.getId())
            .build();
        Model m = Model.assembler().addShapes(in, op, service).assemble().unwrap();
        ServiceShape svc = m.expectShape(ShapeId.from("com.example#KvsService"), ServiceShape.class);

        assertFalse(new CloudFrontTransforms().shouldRun(svc),
            "cloudfront-keyvaluestore is a separate service and must not run");
    }

    @Test
    void idempotentDoesNotDoubleSuffix() {
        Model m = cloudFrontModel("CloudFront", "2020-05-31");
        Model once = new CloudFrontTransforms().transform(m, service(m));
        Model twice = new CloudFrontTransforms().transform(once, service(once));

        assertTrue(twice.getShape(ShapeId.from(NS + "#AssociateAlias2020_05_31")).isPresent());
        assertFalse(twice.getShape(ShapeId.from(NS + "#AssociateAlias2020_05_312020_05_31")).isPresent(),
            "running twice must not append the suffix again");
    }
}
