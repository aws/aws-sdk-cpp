/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.transform.ModelTransformer;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * Glacier C2J parity. C2J sets metadata.additionalHeaders to {x-amz-glacier-version: <apiVersion>},
 * emitted by the C2J-generated base request for ordinary requests. The gap is the streaming requests
 * (UploadArchive, UploadMultipartPart), which bypass the base GetHeaders: this stamps
 * {@link AdditionalRequestHeadersTrait} on their inputs so request rendering emits the matching
 * headers.insert(...). Self-guards on service name; no-op when the model has no streaming request.
 */
public final class GlacierTransforms {

    private static final String GLACIER_VERSION_HEADER = "x-amz-glacier-version";

    private GlacierTransforms() {}

    public static ModelTransform asTransform() {
        return GlacierTransforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"glacier".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
        return retypeLimitQueryMembersToString(addAdditionalHeaders(model, service), service);
    }

    private static Model addAdditionalHeaders(Model model, ServiceShape service) {
        Map<String, String> additionalHeaders = new LinkedHashMap<>();
        additionalHeaders.put(GLACIER_VERSION_HEADER, service.getVersion());

        List<Shape> marked = new ArrayList<>();
        for (OperationShape operation : TopDownIndex.of(model).getContainedOperations(service)) {
            if (ShapeClassifier.isRawStreamingPayloadRequest(operation, model)) {
                StructureShape input = model.expectShape(operation.getInputShape(), StructureShape.class);
                if (!input.hasTrait(AdditionalRequestHeadersTrait.class)) {
                    marked.add(input.toBuilder()
                        .addTrait(new AdditionalRequestHeadersTrait(additionalHeaders)).build());
                }
            }
        }
        if (marked.isEmpty()) {
            return model; // no streaming request present (idempotent / trimmed model).
        }
        return model.toBuilder().addShapes(marked.toArray(new Shape[0])).build();
    }

    // Upstream Coral2Smithy retypes header/query `limit` members from string to Integer, but the C++
    // SDK historically shipped these as Aws::String, so consuming the integer would break the public
    // API. This inverts that retype, retargeting them back to the service string shape to match C2J.
    // Body `limit` members are never retyped upstream and stay string; pagination is unaffected (it
    // uses the `Marker` continuation token, never `limit`).
    private static Model retypeLimitQueryMembersToString(Model model, ServiceShape service) {
        ShapeId stringTarget = ShapeId.fromParts(service.getId().getNamespace(), "string");
        if (!model.getShape(stringTarget).isPresent()) {
            throw new IllegalStateException(
                "Expected service string shape " + stringTarget + " to retype Glacier limit members");
        }
        Set<Shape> replacements = model.shapes(MemberShape.class)
            .filter(member -> member.getMemberName().equals("limit"))
            .filter(member -> member.hasTrait(HttpQueryTrait.ID) || member.hasTrait(HttpHeaderTrait.ID))
            .filter(member -> !model.expectShape(member.getTarget()).isStringShape())
            .map(member -> member.toBuilder().target(stringTarget).build())
            .collect(Collectors.toSet());
        if (replacements.isEmpty()) {
            return model; // already string (idempotent / upstream stopped retyping).
        }
        return ModelTransformer.create().replaceShapes(model, new ArrayList<>(replacements));
    }
}
