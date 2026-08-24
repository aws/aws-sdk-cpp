/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.EnumDefinition;
import software.amazon.smithy.model.traits.EnumTrait;

import java.util.List;
import java.util.Optional;

/**
 * Shared helpers for per-service model transforms.
 */
final class TransformSupport {

    /**
     * Pattern for an identifier-safe Smithy enum member name: a leading letter or underscore
     * followed by letters, digits, or underscores.
     */
    private static final String IDENTIFIER_PATTERN = "[A-Za-z_][A-Za-z0-9_]*";

    private TransformSupport() {}

    /**
     * Appends the given wire {@code values} to an enum shape.
     *
     * <p><strong>Precondition:</strong> each value MUST be an identifier-safe wire value, i.e. a
     * valid Smithy enum member name matching {@code [A-Za-z_][A-Za-z0-9_]*}. Values containing
     * characters such as {@code '-'}, {@code '.'}, or spaces are rejected. This precondition matters
     * for two reasons: the idempotency dedup compares the incoming values against the shape's
     * existing values (obtained via {@link EnumRenderer#getEnumValues(Shape)}), and the
     * {@code EnumShape} branch uses each value directly as the Smithy member name via
     * {@code builder.addMember(value, value)}. A non-identifier value would silently break dedup
     * and fail deep inside Smithy, so it is rejected up front.
     *
     * @param enumShape the enum shape (Smithy 2.0 {@code EnumShape} or legacy {@code StringShape}
     *                  with an {@code @enum} trait) to append to
     * @param values    identifier-safe wire values to append
     * @return the updated shape, or {@link Optional#empty()} if all values are already present
     * @throws IllegalArgumentException if any value is not an identifier-safe enum member name
     */
    static Optional<Shape> appendValues(Shape enumShape, List<String> values) {
        for (String value : values) {
            if (value == null || !value.matches(IDENTIFIER_PATTERN)) {
                throw new IllegalArgumentException(
                    "Enum value \"" + value + "\" for shape " + enumShape.getId()
                        + " is not an identifier-safe enum member name (must match "
                        + IDENTIFIER_PATTERN + ")");
            }
        }
        List<String> existing = EnumRenderer.getEnumValues(enumShape);
        List<String> toAdd = values.stream().filter(v -> !existing.contains(v)).toList();
        if (toAdd.isEmpty()) {
            return Optional.empty();
        }
        if (enumShape.isEnumShape()) {
            EnumShape.Builder builder = enumShape.asEnumShape().get().toBuilder();
            for (String value : toAdd) {
                builder.addMember(value, value);
            }
            return Optional.of(builder.build());
        }
        EnumTrait existingTrait = enumShape.expectTrait(EnumTrait.class);
        EnumTrait.Builder traitBuilder = EnumTrait.builder();
        existingTrait.getValues().forEach(traitBuilder::addEnum);
        for (String value : toAdd) {
            traitBuilder.addEnum(EnumDefinition.builder().value(value).build());
        }
        return Optional.of(enumShape.asStringShape().get().toBuilder()
            .addTrait(traitBuilder.build())
            .build());
    }

    /**
     * Returns a copy of {@code struct} with member {@code oldName} renamed to {@code newName},
     * preserving member declaration order and copying all traits onto the renamed member. Returns
     * {@link Optional#empty()} if {@code oldName} is absent (nothing to rename).
     *
     * @throws IllegalStateException if {@code newName} is already a distinct member — a genuine
     *     collision that would silently drop a member. Callers must not mask this.
     */
    static Optional<StructureShape> renameMember(StructureShape struct, String oldName, String newName) {
        return renameMember(struct, oldName, newName, new software.amazon.smithy.model.traits.Trait[0]);
    }

    /**
     * As {@link #renameMember(StructureShape, String, String)}, additionally attaching
     * {@code extraTraits} to the renamed member (e.g. a {@code @jsonName} to preserve the original
     * wire name when the C++ member name changes). Existing member traits are copied first, then the
     * extras are added.
     */
    static Optional<StructureShape> renameMember(StructureShape struct, String oldName, String newName,
                                                 software.amazon.smithy.model.traits.Trait... extraTraits) {
        if (struct.getMember(oldName).isEmpty()) {
            return Optional.empty();
        }
        if (struct.getMember(newName).isPresent()) {
            throw new IllegalStateException("Cannot rename member '" + oldName + "' to '" + newName
                + "' on " + struct.getId() + ": a distinct '" + newName + "' member already exists");
        }
        StructureShape.Builder builder = StructureShape.builder().id(struct.getId());
        struct.getAllTraits().values().forEach(builder::addTrait);
        for (MemberShape member : struct.getAllMembers().values()) {
            boolean isTarget = member.getMemberName().equals(oldName);
            String name = isTarget ? newName : member.getMemberName();
            builder.addMember(name, member.getTarget(), b -> {
                member.getAllTraits().values().forEach(b::addTrait);
                if (isTarget) {
                    for (software.amazon.smithy.model.traits.Trait t : extraTraits) {
                        b.addTrait(t);
                    }
                }
            });
        }
        return Optional.of(builder.build());
    }
}
