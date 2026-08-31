/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.SourceLocation;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.StringTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link S3Transforms} on each S3 request
 * member that C2J's {@code S3RestXmlCppClientGenerator} flags via {@code member.setChecksumMember(true)}
 * + {@code member.setChecksumEnumMember(...)} — the {@code ChecksumCRC32}/{@code ChecksumSHA256}/etc.
 * members of any request that also carries a {@code ChecksumAlgorithm} member. The stored value is the
 * matching {@code ChecksumAlgorithm} enum constant (e.g. {@code CRC32}). Member rendering turns the
 * marker into the C2J {@code ModelClassMembersAndInlines.vm} behavior: each setter also calls
 * {@code SetChecksumAlgorithm(ChecksumAlgorithm::<value>)}, plus a {@code const char*} overload that does
 * the same. Kept as a marker + generic renderer rule so the member renderer stays service-agnostic.
 */
public final class ChecksumMemberTrait extends StringTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#checksumMember");

    public ChecksumMemberTrait(String algorithmEnum) {
        super(ID, algorithmEnum, SourceLocation.NONE);
    }
}
