/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.SourceLocation;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.StringTrait;

/**
 * Internal marker on S3 request checksum members (C2J setChecksumMember/setChecksumEnumMember). Stores
 * the matching ChecksumAlgorithm enum constant; member rendering makes each setter also call
 * SetChecksumAlgorithm(ChecksumAlgorithm::<value>) (plus a const char* overload).
 */
public final class ChecksumMemberTrait extends StringTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#checksumMember");

    public ChecksumMemberTrait(String algorithmEnum) {
        super(ID, algorithmEnum, SourceLocation.NONE);
    }
}
