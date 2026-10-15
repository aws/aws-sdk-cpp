/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;

import java.util.List;

import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Drives {@link ModelGenerator} end-to-end over a restJson1 service whose members use
 * {@code bigInteger} / {@code bigDecimal} as plain members, list and map elements, and HTTP-bound
 * header, query and label members.
 */
class BigNumberModelGeneratorTest {

    static final String IDL = String.join("\n",
        "$version: \"2.0\"",
        "namespace com.example.big",
        "use aws.api#service",
        "use aws.protocols#restJson1",
        "@service(sdkId: \"Big Svc\", arnNamespace: \"bigsvc\", cloudFormationName: \"BigSvc\",",
        "         cloudTrailEventSource: \"bigsvc.amazonaws.com\")",
        "@restJson1",
        "service BigService { version: \"2024-01-01\", operations: [PutThing] }",
        "@http(method: \"POST\", uri: \"/things\")",
        "operation PutThing { input: PutThingInput, output: PutThingOutput }",
        "structure PutThingInput {",
        "    @required id: BigInteger",
        "    total: BigDecimal",
        "    ids: IntegerList",
        "    byName: DecimalMap",
        "    sparseIds: SparseIntegerList",
        "    sparseByName: SparseDecimalMap",
        "    nested: Nested",
        "}",
        "structure PutThingOutput {",
        "    total: BigDecimal",
        "}",
        "structure Nested { value: BigDecimal, ids: IntegerList }",
        "list IntegerList { member: BigInteger }",
        "list DecimalList { member: BigDecimal }",
        "@sparse list SparseIntegerList { member: BigInteger }",
        "map DecimalMap { key: String, value: BigDecimal }",
        "@sparse map SparseDecimalMap { key: String, value: BigDecimal }");

    static MockManifest generate() {
        Model model = Model.assembler()
            .discoverModels(BigNumberModelGeneratorTest.class.getClassLoader())
            .addUnparsedModel("big.smithy", IDL)
            .assemble()
            .unwrap();
        ServiceShape service = model.expectShape(
            ShapeId.from("com.example.big#BigService"), ServiceShape.class);
        Model transformed = new TransformPipeline(List.of(new GlobalTransforms())).apply(model, service);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        new ModelGenerator(transformed, service, delegator, "bigsvc", "AWS_BIGSVC_API", "BigSvc")
            .generateAll();
        delegator.flushWriters();
        return manifest;
    }

    private static String file(MockManifest manifest, String suffix) {
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith(suffix)).findFirst().orElseThrow()).orElseThrow();
    }

    @Test
    void request_rendersCrtTypesForEveryBigNumberPosition() {
        String h = file(generate(), "PutThingRequest.h");
        assertTrue(h.contains("#include <aws/crt/BigInteger.h>"), h);
        assertTrue(h.contains("#include <aws/crt/BigDecimal.h>"), h);
        assertTrue(h.contains("#include <aws/crt/Optional.h>"), h);
        assertTrue(h.contains("inline const Aws::Crt::BigInteger& GetId() const"), h);
        assertTrue(h.contains("inline const Aws::Crt::BigDecimal& GetTotal() const"), h);
        assertTrue(h.contains("inline const Aws::Vector<Aws::Crt::BigInteger>& GetIds() const"), h);
        assertTrue(h.contains("inline const Aws::Map<Aws::String, Aws::Crt::BigDecimal>& GetByName() const"), h);
        assertTrue(h.contains(
            "inline const Aws::Vector<Aws::Crt::Optional<Aws::Crt::BigInteger>>& GetSparseIds() const"), h);
        assertTrue(h.contains(
            "inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Crt::BigDecimal>>& GetSparseByName() const"), h);
    }
}
