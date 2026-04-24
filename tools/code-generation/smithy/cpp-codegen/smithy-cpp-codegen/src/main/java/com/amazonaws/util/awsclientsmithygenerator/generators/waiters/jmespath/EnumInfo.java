/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

/**
 * Holds information about an enum-typed leaf in a JmesPath expression.
 */
public class EnumInfo {
    final String shapeName;

    EnumInfo(String shapeName) { this.shapeName = shapeName; }

    String wrapAccess(String access) {
        return "Model::" + shapeName + "Mapper::GetNameFor" + shapeName + "(" + access + ")";
    }
}
