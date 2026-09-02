/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.DynamoDbTransforms;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * End-to-end guard that DynamoDB's {@code AttributeValue} union is suppressed from the default
 * sub-object set: {@link DynamoDbTransforms} marks it {@code @customRendered} and
 * {@link ShapeClassifier} skips it. Load-bearing, not cosmetic: {@code CppWriterDelegator} keys
 * writers by filename, so a leftover {@code AttributeValue} would make
 * {@link com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.SubObjectRenderer}
 * and {@link com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.DynamoDbRenderer}
 * share one writer and APPEND, silently concatenating the generic union onto the bespoke type. This
 * runs {@code ModelGenerator} end-to-end and asserts the header is the bespoke class only.
 */
class ModelGeneratorTest {

    private static final String ATTRIBUTE_VALUE_HEADER = "include/aws/dynamodb/model/AttributeValue.h";
    // Synthetic union member whose generic accessor exists only in generic-union output, not the
    // bespoke AttributeValue — so it distinguishes the two.
    private static final String GENERIC_UNION_MARKER = "WithSyntheticProbe";
    // A member unique to the bespoke hand-written AttributeValue (holds the AttributeValueValue).
    private static final String BESPOKE_MARKER = "std::shared_ptr<AttributeValueValue> m_value;";

    /**
     * Minimal model with a service, one operation, and an {@code AttributeValue} union (carrying a
     * synthetic member) referenced by the operation input. The service's {@code ServiceTrait} sdkId
     * is {@code smithyServiceName} so {@link DynamoDbTransforms}' self-guard fires consistently.
     */
    private static Model model(String smithyServiceName) {
        StringShape str = StringShape.builder().id("com.amazonaws.dynamodb#Str").build();
        UnionShape attributeValue = UnionShape.builder()
            .id("com.amazonaws.dynamodb#AttributeValue")
            .addMember("syntheticProbe", str.getId())
            .addMember("otherProbe", str.getId())
            .build();
        // Input carries an AttributeValue member, so the union is reachable and classified as a
        // sub-object (which the transform+classifier must then drop for dynamodb).
        StructureShape input = StructureShape.builder()
            .id("com.amazonaws.dynamodb#DoThingInput")
            .addMember("item", attributeValue.getId())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.amazonaws.dynamodb#DoThingOutput")
            .addMember("result", str.getId())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.amazonaws.dynamodb#DoThing")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.amazonaws.dynamodb#DynamoDB_20120810")
            .version("2012-08-10")
            .addTrait(ServiceTrait.builder().sdkId(smithyServiceName).arnNamespace("dynamodb")
                .cloudFormationName("DynamoDB").cloudTrailEventSource("dynamodb").build())
            .addOperation(op.getId())
            .build();
        return Model.builder().addShapes(str, attributeValue, input, output, op, service).build();
    }

    private static MockManifest generate(String smithyServiceName, String namespace, String exportMacro) {
        Model model = model(smithyServiceName);
        ServiceShape service = model.expectShape(
            ShapeId.from("com.amazonaws.dynamodb#DynamoDB_20120810"), ServiceShape.class);
        // Apply the DynamoDB service-level transform first (mirrors ModelCodegenPlugin): marks
        // AttributeValue @customRendered for dynamodb, no-op otherwise. Suppression flows through ShapeClassifier.
        Model transformed = DynamoDbTransforms.asTransform().apply(model, service);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        new ModelGenerator(transformed, service, delegator, smithyServiceName, exportMacro, namespace)
            .generateAll();
        delegator.flushWriters();
        return manifest;
    }

    private static long countFilesNamed(MockManifest manifest, String fileName) {
        return manifest.getFiles().stream()
            .filter(p -> fileName.equals(p.getFileName().toString()))
            .count();
    }

    @Test
    void dynamoDb_emitsBespokeAttributeValueOnly_notGenericUnion() {
        MockManifest manifest = generate("dynamodb", "DynamoDB", "AWS_DYNAMODB_API");

        // Exactly one AttributeValue.h is emitted (no second writer, no append/corruption).
        assertEquals(1, countFilesNamed(manifest, "AttributeValue.h"),
            "exactly one AttributeValue.h must be emitted: " + manifest.getFiles());
        assertTrue(manifest.hasFile(ATTRIBUTE_VALUE_HEADER),
            "bespoke header must be at the dynamodb model path: " + manifest.getFiles());

        String header = manifest.getFileString(ATTRIBUTE_VALUE_HEADER).orElseThrow();
        // It is the bespoke document type ...
        assertTrue(header.contains(BESPOKE_MARKER),
            "AttributeValue.h must be the bespoke document type: " + header);
        // ... and NOT the generic tagged-union (its presence would mean the generic body was appended here).
        assertFalse(header.contains(GENERIC_UNION_MARKER),
            "AttributeValue.h must not contain generic-union accessors (double-emit/corruption): "
                + header);

        // The bespoke companion type is emitted too.
        assertTrue(manifest.hasFile("include/aws/dynamodb/model/AttributeValueValue.h"),
            "AttributeValueValue.h must be emitted: " + manifest.getFiles());

        // The member carrier's request header still references AttributeValue (the shape stays in
        // the model so member references resolve).
        String request = manifest.getFileString("include/aws/dynamodb/model/DoThingRequest.h")
            .orElseThrow();
        assertTrue(request.contains("AttributeValue"),
            "request header must still reference AttributeValue: " + request);
    }

    @Test
    void otherService_rendersAttributeValueUnionGenerically() {
        // Control: suppression is dynamodb-specific. For any other service the AttributeValue union
        // flows through SubObjectRenderer as a generic union.
        MockManifest manifest = generate("kinesis", "Kinesis", "AWS_KINESIS_API");

        String header = manifest.getFileString("include/aws/kinesis/model/AttributeValue.h")
            .orElseThrow();
        assertTrue(header.contains(GENERIC_UNION_MARKER),
            "non-dynamodb service must render AttributeValue as a generic union: " + header);
        assertFalse(header.contains(BESPOKE_MARKER),
            "non-dynamodb service must not emit the bespoke document type: " + header);
    }
}
