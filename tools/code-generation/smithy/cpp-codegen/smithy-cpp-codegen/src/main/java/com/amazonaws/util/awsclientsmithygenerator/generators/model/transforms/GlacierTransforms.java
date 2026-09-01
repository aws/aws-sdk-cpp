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
 * Glacier parity with the legacy C2J {@code GlacierRestJsonCppClientGenerator} for the
 * {@code Model::} namespace. C2J sets {@code metadata.additionalHeaders} to
 * {@code {x-amz-glacier-version: <apiVersion>}}, which the {@code <Prefix>Request} base class emits
 * for ordinary requests. That base stays C2J-generated, so the only gap in the Smithy-generated
 * model is the streaming requests ({@code UploadArchive}, {@code UploadMultipartPart}): they derive
 * from {@code AmazonStreamingWebServiceRequest} and bypass the base {@code GetHeaders}, so C2J's
 * {@code StreamRequestSource.vm} emits the constant header inside their own
 * {@code GetRequestSpecificHeaders}. This stamps {@link AdditionalRequestHeadersTrait} on those
 * streaming request inputs; request rendering turns it into the matching {@code headers.insert(...)}.
 * Self-guards on the raw smithy service name and no-ops when the model has no streaming request.
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

    // Upstream Coral2Smithy's GlacierTransformer retypes every header/query `limit` (page-size) member
    // from string to smithy.api#Integer, arguing the wire form (a query param) is unchanged. But the
    // C++ SDK historically shipped these as Aws::String, so consuming the integer would break the
    // public API (Aws::String GetLimit() -> int GetLimit()). This inverts the upstream retype for the
    // header/query `limit` members, retargeting them back to the service string shape — matching C2J
    // and the sibling string members (e.g. marker). Only these page-size members are query/header
    // bound; body `limit` members (whose type change would alter serialization) are never retyped by
    // Coral2Smithy and so are already string. Pagination is unaffected: the paginators continue via
    // the `Marker` continuation token and never read or write `limit`.
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
