/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;

/**
 * Emits DynamoDB's bespoke document-type {@code AttributeValue} / {@code AttributeValueValue}
 * classes, matching the legacy C2J {@code DynamoDBJsonCppClientGenerator}. The four files are
 * static hand-written C++ (no model-driven content); their bodies live as classpath resources and
 * are written verbatim. No-op for every non-DynamoDB service. The default union rendering of the
 * {@code AttributeValue} shape is suppressed in {@code ModelGenerator}.
 */
public final class DynamoDbRenderer implements ShapeRenderer {

    private static final String RESOURCE_DIR =
        "/com/amazonaws/util/awsclientsmithygenerator/generators/model/dynamodb/";

    private final RenderContext ctx;

    public DynamoDbRenderer(RenderContext ctx) {
        this.ctx = ctx;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        if (!"dynamodb".equals(ctx.smithyServiceName())) {
            return;
        }
        emit(writerDelegator, "AttributeValue.h", "include/aws/dynamodb/model/AttributeValue.h");
        emit(writerDelegator, "AttributeValue.cpp", "source/model/AttributeValue.cpp");
        emit(writerDelegator, "AttributeValueValue.h", "include/aws/dynamodb/model/AttributeValueValue.h");
        emit(writerDelegator, "AttributeValueValue.cpp", "source/model/AttributeValueValue.cpp");
    }

    private void emit(CppWriterDelegator writerDelegator, String resourceName, String outputPath) {
        String body = readResource(RESOURCE_DIR + resourceName);
        writerDelegator.useFileWriter(outputPath, writer -> writer.writeWithNoFormatting(body));
    }

    private static String readResource(String path) {
        try (InputStream in = DynamoDbRenderer.class.getResourceAsStream(path)) {
            if (in == null) {
                throw new IllegalStateException("Missing DynamoDB resource on classpath: " + path);
            }
            return new String(in.readAllBytes(), StandardCharsets.UTF_8);
        } catch (IOException e) {
            throw new RuntimeException("Failed to read DynamoDB resource: " + path, e);
        }
    }
}
