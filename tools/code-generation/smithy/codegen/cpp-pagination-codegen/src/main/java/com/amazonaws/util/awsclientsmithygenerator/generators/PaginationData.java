/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.PaginatedTrait;

public class PaginationData {
    private final OperationShape operation;
    private final PaginatedTrait trait;
    private final ServiceShape service;

    public PaginationData(OperationShape operation, PaginatedTrait trait, ServiceShape service) {
        this.operation = operation;
        this.trait = trait;
        this.service = service;
    }

    public OperationShape getOperation() {
        return operation;
    }

    public PaginatedTrait getTrait() {
        return trait;
    }

    public ServiceShape getService() {
        return service;
    }
}
