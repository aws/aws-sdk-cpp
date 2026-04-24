/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.JmespathExpression;

/**
 * Holds the collection getter and comparator extracted from a contains() projection pattern.
 */
public class ContainsProjectionInfo {
    final String collectionGetter;
    final JmespathExpression comparator;

    ContainsProjectionInfo(String collectionGetter, JmespathExpression comparator) {
        this.collectionGetter = collectionGetter;
        this.comparator = comparator;
    }
}
