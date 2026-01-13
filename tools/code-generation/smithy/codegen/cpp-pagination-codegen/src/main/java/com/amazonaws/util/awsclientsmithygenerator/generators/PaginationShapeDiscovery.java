/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.util.*;
import java.util.stream.Collectors;

public class PaginationShapeDiscovery {
    private final Model model;
    
    public PaginationShapeDiscovery(Model model) {
        this.model = model;
    }
    
    public List<PaginationData> findPaginatedOperations(ServiceShape service) {
        return service.getOperations().stream()
            .map(id -> model.expectShape(id, OperationShape.class))
            .filter(op -> op.hasTrait(PaginatedTrait.class))
            .map(op -> new PaginationData(op, op.expectTrait(PaginatedTrait.class), service))
            .collect(Collectors.toList());
    }
    
    public Set<StructureShape> getReferencedStructures(List<PaginationData> paginatedOps) {
        Set<StructureShape> structures = new HashSet<>();
        for (PaginationData data : paginatedOps) {
            OperationShape op = data.getOperation();
            structures.add(model.expectShape(op.getInputShape(), StructureShape.class));
            structures.add(model.expectShape(op.getOutputShape(), StructureShape.class));
        }
        return structures;
    }
}