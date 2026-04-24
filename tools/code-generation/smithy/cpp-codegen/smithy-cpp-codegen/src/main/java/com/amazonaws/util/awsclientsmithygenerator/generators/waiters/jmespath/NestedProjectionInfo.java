/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

/**
 * Info extracted from a nested projection's left side.
 * For Reservations[].Instances[]: outerCollectionGetter=".GetReservations()",
 * innerCollectionGetter=".GetInstances()".
 */
public class NestedProjectionInfo {
    final String outerCollectionGetter;
    final String innerCollectionGetter;

    NestedProjectionInfo(String outer, String inner) {
        this.outerCollectionGetter = outer;
        this.innerCollectionGetter = inner;
    }
}
