/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class Route53TransformsTest {

    private static final String NS = "com.amazonaws.route53";

    // A List*Request carrying an integer MaxItems member, matching the type the Coral/Smithy model
    // produces upstream (C2J ships it as Aws::String).
    private static Model route53Model(String sdkId) {
        StructureShape in = StructureShape.builder().id(NS + "#ListHostedZonesRequest")
            .addMember("MaxItems", ShapeId.from("smithy.api#Integer"))
            .build();
        OperationShape op = OperationShape.builder().id(NS + "#ListHostedZones")
            .input(in.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id(NS + "#Route53").version("2013-04-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("route53")
                .cloudFormationName("Route53").cloudTrailEventSource("route53.amazonaws.com").build())
            .addOperation(op.getId())
            .build();
        return Model.assembler().addShapes(in, op, service).assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from(NS + "#Route53"), ServiceShape.class);
    }

    @Test
    void retypesMaxItemsBackToString() {
        Model m = route53Model("Route 53");
        Model out = new Route53Transforms().transform(m, service(m));

        MemberShape maxItems = out.expectShape(ShapeId.from(NS + "#ListHostedZonesRequest"),
            StructureShape.class).getMember("MaxItems").orElseThrow();
        assertTrue(out.expectShape(maxItems.getTarget()).isStringShape(),
            "MaxItems must be retyped to a string shape");
    }

    @Test
    void shouldRunForRoute53() {
        Model m = route53Model("Route 53");
        assertTrue(new Route53Transforms().shouldRun(service(m)),
            "sdkId 'Route 53' maps to smithy name 'route-53'");
    }

    @Test
    void doesNotRunForOtherService() {
        ServiceShape svc = ServiceShape.builder().id("com.amazonaws.other#Other").version("1")
            .addTrait(ServiceTrait.builder().sdkId("Other").arnNamespace("other")
                .cloudFormationName("Other").cloudTrailEventSource("other").build()).build();
        assertFalse(new Route53Transforms().shouldRun(svc), "non-route-53 service must not run");
    }
}
