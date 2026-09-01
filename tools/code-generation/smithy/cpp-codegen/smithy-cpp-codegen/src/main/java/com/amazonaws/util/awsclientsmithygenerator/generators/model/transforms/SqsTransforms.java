/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

import java.util.List;

/**
 * Adds the unmodeled {@code QueueAttributeName} enum values that the legacy C2J
 * {@code SQSQueryXmlCppClientGenerator}/{@code SQSJsonCppClientGenerator} injected. These values are
 * returned by the service but absent from the model.
 */
public final class SqsTransforms {

    private static final String ENUM_NAME = "QueueAttributeName";
    private static final List<String> ADDED_VALUES = List.of(
        "SentTimestamp", "ApproximateFirstReceiveTimestamp", "ApproximateReceiveCount", "SenderId");

    private SqsTransforms() {}

    public static ModelTransform asTransform() {
        return SqsTransforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"sqs".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
        return TransformSupport.appendEnumValuesByName(model, ENUM_NAME, ADDED_VALUES);
    }
}
