/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.ShapeId;

public class ClientCodegenSettings {
    private final ShapeId service;

    public ClientCodegenSettings(ObjectNode settings) {
        this.service = ShapeId.from(settings.expectStringMember("service").getValue());
    }

    public ShapeId getService() {
        return service;
    }
}