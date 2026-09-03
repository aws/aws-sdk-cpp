/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.SourceLocation;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.StringTrait;

/**
 * Internal marker (never declared in any model file) carrying the clean logical operation name for
 * an operation whose shape id has been version-suffixed for C++ class/method naming (see
 * {@link CloudFrontTransforms}). {@code GetServiceRequestName()} is the logical operation name used
 * for metrics/telemetry and must stay unsuffixed — matching C2J, which suffixes the class/method
 * identifiers but returns the clean name from {@code GetServiceRequestName()}. {@code RequestRenderer}
 * emits this trait's value for a marked operation instead of the (suffixed) shape name.
 */
public final class ServiceRequestNameTrait extends StringTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#serviceRequestName");

    public ServiceRequestNameTrait(String cleanOperationName) {
        super(ID, cleanOperationName, SourceLocation.NONE);
    }
}
