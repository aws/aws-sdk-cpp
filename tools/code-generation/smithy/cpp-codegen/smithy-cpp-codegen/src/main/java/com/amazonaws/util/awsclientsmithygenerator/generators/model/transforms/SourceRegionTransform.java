/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Set;

/**
 * Injects a synthetic {@code SourceRegion} string member into the cross-region copy request shapes of
 * RDS-family services (RDS/DocDB/Neptune), mirroring the C2J injection that backs presigned-URL
 * generation. Model-shape scope only; the presigned-URL client logic remains in the C2J path.
 */
public final class SourceRegionTransform implements ModelTransform {

    private static final String SOURCE_REGION = "SourceRegion";

    // smithy service name (lowercase-hyphenated sdkId) -> operation names whose input gets SourceRegion.
    private static final Map<String, Set<String>> TARGETS = Map.of(
        "rds", Set.of(
            "CopyDBClusterSnapshot",
            "CreateDBCluster",
            "CopyDBSnapshot",
            "CreateDBInstanceReadReplica",
            "StartDBInstanceAutomatedBackupsReplication"),
        "docdb", Set.of(
            "CopyDBClusterSnapshot",
            "CreateDBCluster"),
        "neptune", Set.of(
            "CopyDBClusterSnapshot",
            "CreateDBCluster")
    );

    @Override
    public boolean shouldRun(ServiceShape service) {
        return TARGETS.containsKey(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        String serviceName = ServiceNameUtil.getSmithyServiceName(service, null);
        Set<String> operations = TARGETS.get(serviceName);

        List<StructureShape> updated = new ArrayList<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            if (operations.contains(op.getId().getName())) {
                model.getShape(op.getInputShape()).flatMap(s -> s.asStructureShape()).ifPresent(req -> {
                    if (req.getMember(SOURCE_REGION).isEmpty()) {
                        updated.add(req.toBuilder()
                            .addMember(MemberShape.builder()
                                .id(req.getId().withMember(SOURCE_REGION))
                                .target(ShapeId.from("smithy.api#String"))
                                .build())
                            .build());
                    }
                });
            }
        }

        if (updated.isEmpty()) {
            return model;
        }
        return model.toBuilder().addShapes(updated).build();
    }
}
