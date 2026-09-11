/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

/**
 * Immutable bundle of the per-service inputs every {@link ShapeRenderer} needs, so adding a
 * shared input is a single-field change rather than an edit to every renderer.
 *
 * @param model             the transformed Smithy model
 * @param service           the service shape being generated
 * @param protocolTraits    the resolved protocol rendering strategy
 * @param namespace         the C++ model namespace, may start lowercase (e.g. "iam", "drs")
 * @param exportMacro       the export macro (e.g. "AWS_IAM_API")
 * @param smithyServiceName the on-disk service directory name (e.g. "iam")
 */
public record RenderContext(
    Model model,
    ServiceShape service,
    ProtocolTraits protocolTraits,
    String namespace,
    String exportMacro,
    String smithyServiceName) {

    /**
     * Capitalized namespace for class-name-derived artifacts (base {@code <Prefix>Request} and the
     * {@code <Prefix>Request.h}/{@code <Prefix>_EXPORTS.h}/{@code <Prefix>ErrorMarshaller.h} includes),
     * mirroring C2J {@code metadata.classNamePrefix}. The {@code namespace} block stays {@link #namespace()}.
     */
    public String classNamePrefix() {
        return ServiceNameUtil.capitalize(namespace);
    }
}
