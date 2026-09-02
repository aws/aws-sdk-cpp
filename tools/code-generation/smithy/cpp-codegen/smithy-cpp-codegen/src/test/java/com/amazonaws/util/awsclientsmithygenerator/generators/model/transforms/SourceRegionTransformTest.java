/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;

import static org.junit.jupiter.api.Assertions.*;

class SourceRegionTransformTest {

    // sdkId drives ServiceNameUtil.getSmithyServiceName.
    private static Model modelWithOp(String sdkId, String opName, String reqName) {
        StructureShape req = StructureShape.builder()
            .id("com.example#" + reqName)
            .addMember(MemberShape.builder()
                .id("com.example#" + reqName + "$ExistingMember")
                .target("smithy.api#String")
                .build())
            .build();
        StructureShape out = StructureShape.builder().id("com.example#" + opName + "Result").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#" + opName)
            .input(req.getId())
            .output(out.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace(sdkId.toLowerCase())
                .cloudFormationName(sdkId).cloudTrailEventSource(sdkId.toLowerCase()).build())
            .addOperation(op.getId())
            .build();
        return Model.assembler().addShapes(req, out, op, service).assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    @Test
    void injectsSourceRegionIntoRdsRequest() {
        Model m = modelWithOp("RDS", "CopyDBClusterSnapshot", "CopyDBClusterSnapshotRequest");
        Model out = new SourceRegionTransform().transform(m, service(m));

        StructureShape req = out.expectShape(
            ShapeId.from("com.example#CopyDBClusterSnapshotRequest"), StructureShape.class);
        assertTrue(req.getMember("SourceRegion").isPresent());
        assertEquals("smithy.api#String",
            req.getMember("SourceRegion").get().getTarget().toString());
    }

    @Test
    void noOpForUntargetedOperation() {
        Model m = modelWithOp("RDS", "DescribeDBClusters", "DescribeDBClustersRequest");
        Model out = new SourceRegionTransform().transform(m, service(m));
        assertTrue(out.expectShape(ShapeId.from("com.example#DescribeDBClustersRequest"),
            StructureShape.class).getMember("SourceRegion").isEmpty());
    }

    @Test
    void noOpForUntargetedService() {
        Model m = modelWithOp("SomeOther", "CopyDBClusterSnapshot", "CopyDBClusterSnapshotRequest");
        assertFalse(new SourceRegionTransform().shouldRun(service(m)));
    }

    @Test
    void idempotent_doesNotDuplicateExistingMember() {
        Model m = modelWithOp("RDS", "CopyDBClusterSnapshot", "CopyDBClusterSnapshotRequest");
        Model once = new SourceRegionTransform().transform(m, service(m));
        Model twice = new SourceRegionTransform().transform(once, service(once));
        long count = twice.expectShape(ShapeId.from("com.example#CopyDBClusterSnapshotRequest"),
            StructureShape.class).members().stream()
            .filter(mem -> mem.getMemberName().equals("SourceRegion")).count();
        assertEquals(1, count);
    }

    @Test
    void injectsSourceRegionIntoDocDbRequest() {
        Model m = modelWithOp("DocDB", "CreateDBCluster", "CreateDBClusterMessage");
        Model out = new SourceRegionTransform().transform(m, service(m));
        assertTrue(out.expectShape(ShapeId.from("com.example#CreateDBClusterMessage"),
            StructureShape.class).getMember("SourceRegion").isPresent());
    }

    @Test
    void injectsSourceRegionIntoNeptuneRequest() {
        Model m = modelWithOp("Neptune", "CopyDBClusterSnapshot", "CopyDBClusterSnapshotMessage");
        Model out = new SourceRegionTransform().transform(m, service(m));
        assertTrue(out.expectShape(ShapeId.from("com.example#CopyDBClusterSnapshotMessage"),
            StructureShape.class).getMember("SourceRegion").isPresent());
    }
}
