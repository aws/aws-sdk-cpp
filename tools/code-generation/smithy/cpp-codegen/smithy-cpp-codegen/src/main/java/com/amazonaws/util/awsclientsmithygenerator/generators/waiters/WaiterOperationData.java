/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters;

import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.waiters.Waiter;

public class WaiterOperationData {
    private final OperationShape operation;
    private final String waiterName;
    private final Waiter waiter;
    private final ServiceShape service;

    public WaiterOperationData(OperationShape operation, String waiterName, Waiter waiter, ServiceShape service) {
        this.operation = operation;
        this.waiterName = waiterName;
        this.waiter = waiter;
        this.service = service;
    }

    public OperationShape getOperation() {
        return operation;
    }

    public String getWaiterName() {
        return waiterName;
    }

    public Waiter getWaiter() {
        return waiter;
    }

    public ServiceShape getService() {
        return service;
    }
}
