/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

/**
 * S3 (and S3-CRT, which shares the S3 model) parity with the legacy C2J
 * {@code S3RestXmlCppClientGenerator} for the {@code Model::} namespace. Composes the S3 model
 * mutations that C2J applies in {@code generateSourceFiles}. Self-guards on the raw smithy service
 * name; every sub-transform no-ops when its target shapes are absent and fast-fails on genuine
 * collisions. Client/endpoint/ARN/S3Express/CRT customizations are out of scope (separate
 * generators), as is serde-body emission (still stubbed plugin-wide).
 */
public final class S3Transforms {

    private S3Transforms() {}

    public static ModelTransform asTransform() {
        return S3Transforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        String name = ServiceNameUtil.getSmithyServiceName(service, null);
        if (!"s3".equals(name) && !"s3-crt".equals(name)) {
            return model;
        }
        // Sub-transforms are chained here by later tasks, e.g.:
        // return normalizeReplicationStatus(expandBucketLocationConstraint(... (model) ...));
        return model;
    }
}
