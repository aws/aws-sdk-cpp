/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.Trait;

public class OperationData<T extends Trait> {
    private final OperationShape operation;
    private final T trait;
    private final ServiceShape service;

    public OperationData(OperationShape operation, T trait, ServiceShape service) {
        this.operation = operation;
        this.trait = trait;
        this.service = service;
    }

    public OperationShape getOperation() {
        return operation;
    }

    public T getTrait() {
        return trait;
    }

    public ServiceShape getService() {
        return service;
    }
}
