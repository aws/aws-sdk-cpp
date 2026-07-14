/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.Set;
import java.util.TreeSet;

/**
 * Maps Smithy shape types to their corresponding C++ SDK types.
 *
 * <p>All generated output uses the SDK's custom allocator types ({@code Aws::String},
 * {@code Aws::Vector}, etc.) rather than standard library types.
 */
public final class CppTypeMapper {

    private CppTypeMapper() {
    }

    /**
     * Returns the C++ type string for the given Smithy shape.
     *
     * @param shape the shape to map
     * @param model the model (needed to resolve list/map member targets)
     * @return the C++ type name (e.g., {@code "Aws::String"}, {@code "Aws::Vector<int>"})
     */
    public static String getCppType(Shape shape, Model model) {
        // Check enum BEFORE string — EnumShape extends StringShape in Smithy
        if (shape.isEnumShape()) {
            return shape.getId().getName();
        }
        if (shape.isStringShape()) {
            return "Aws::String";
        }
        if (shape.isIntegerShape()) {
            return "int";
        }
        if (shape.isLongShape()) {
            return "long long";
        }
        if (shape.isBooleanShape()) {
            return "bool";
        }
        if (shape.isDoubleShape() || shape.isFloatShape()) {
            return "double";
        }
        if (shape.isBlobShape()) {
            return "Aws::Utils::ByteBuffer";
        }
        if (shape.isTimestampShape()) {
            return "Aws::Utils::DateTime";
        }
        if (shape.isStructureShape() || shape.isUnionShape()) {
            return shape.getId().getName();
        }
        if (shape.isListShape()) {
            ListShape list = shape.asListShape().get();
            Shape member = model.expectShape(list.getMember().getTarget());
            return "Aws::Vector<" + getCppType(member, model) + ">";
        }
        if (shape.isMapShape()) {
            MapShape map = shape.asMapShape().get();
            Shape key = model.expectShape(map.getKey().getTarget());
            Shape value = model.expectShape(map.getValue().getTarget());
            return "Aws::Map<" + getCppType(key, model) + ", " + getCppType(value, model) + ">";
        }
        if (shape.isDocumentShape()) {
            return "Aws::Utils::Document";
        }
        throw new UnsupportedOperationException(
            "Unsupported shape type " + shape.getType() + " for shape " + shape.getId());
    }

    /**
     * Returns the C++ default initializer for a shape that needs one, or empty
     * if the type is default-constructed (strings, vectors, maps, etc.).
     *
     * @param shape the shape to get a default value for
     * @return the initializer string (e.g., {@code "0"}, {@code "false"}) or empty
     */
    public static Optional<String> getDefaultValue(Shape shape) {
        if (shape.isEnumShape()) {
            return Optional.of(shape.getId().getName() + "::NOT_SET");
        }
        if (shape.isIntegerShape() || shape.isLongShape()) {
            return Optional.of("0");
        }
        if (shape.isBooleanShape()) {
            return Optional.of("false");
        }
        if (shape.isDoubleShape() || shape.isFloatShape()) {
            return Optional.of("0.0");
        }
        if (shape.isTimestampShape() || shape.isBlobShape()) {
            return Optional.of("");  // produces Type m_field{};  (value-initialization)
        }
        return Optional.empty();
    }

    /**
     * Returns true if the shape type requires a "has been set" tracking flag.
     *
     * <p>Primitive types (int, long, bool, double, float) have meaningful default
     * values, so the SDK needs a separate boolean to distinguish "not set" from
     * "set to the default value."
     *
     * @param shape the shape to check
     * @return true if a hasBeenSet flag is needed
     */
    public static boolean needsHasBeenSetFlag(Shape shape) {
        return shape.isIntegerShape() || shape.isLongShape()
            || shape.isBooleanShape() || shape.isDoubleShape() || shape.isFloatShape();
    }

    /**
     * Returns the {@code #include} path for a shape used as a member type.
     *
     * <p>Structure and enum shapes from the same service produce relative model includes.
     * Core types (string, blob, timestamp, etc.) produce aws/core/ includes.
     * Primitives (int, bool, double) need no include and return empty.
     *
     * @param shape       the member's target shape
     * @param model       the model
     * @param projectName the service project name (e.g., "dynamodb") for model-relative includes
     * @return the include path string, or empty for primitives that need no include
     */
    public static Optional<String> getIncludeForMemberType(Shape shape, Model model, String projectName) {
        // Check enum BEFORE string — EnumShape extends StringShape in Smithy
        if (shape.isEnumShape()) {
            return Optional.of("<aws/" + projectName + "/model/" + shape.getId().getName() + ".h>");
        }
        if (shape.isStringShape()) {
            return Optional.of("<aws/core/utils/memory/stl/AWSString.h>");
        }
        if (shape.isBlobShape()) {
            return Optional.of("<aws/core/utils/Array.h>");
        }
        if (shape.isTimestampShape()) {
            return Optional.of("<aws/core/utils/DateTime.h>");
        }
        if (shape.isListShape()) {
            return Optional.of("<aws/core/utils/memory/stl/AWSVector.h>");
        }
        if (shape.isMapShape()) {
            return Optional.of("<aws/core/utils/memory/stl/AWSMap.h>");
        }
        if (shape.isStructureShape() || shape.isUnionShape()) {
            return Optional.of("<aws/" + projectName + "/model/" + shape.getId().getName() + ".h>");
        }
        if (shape.isDocumentShape()) {
            return Optional.of("<aws/core/utils/Document.h>");
        }
        // Primitives (int, bool, double, etc.) need no include
        return Optional.empty();
    }

    /**
     * Returns the sorted, deduplicated list of {@code #include} lines needed for
     * all members of the given structure shape.
     *
     * @param structureShape the structure whose members to scan
     * @param model          the model
     * @param projectName    the service project name for model-relative includes
     * @return sorted list of include lines (e.g., {@code ["<aws/core/utils/DateTime.h>", ...]})
     */
    public static List<String> getIncludesForShape(StructureShape structureShape, Model model, String projectName) {
        Set<String> includes = new TreeSet<>();
        for (MemberShape member : structureShape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            getIncludeForMemberType(target, model, projectName).ifPresent(includes::add);
            // For list/map, also include the element/key/value types
            if (target.isListShape()) {
                ListShape list = target.asListShape().get();
                Shape elem = model.expectShape(list.getMember().getTarget());
                getIncludeForMemberType(elem, model, projectName).ifPresent(includes::add);
            }
            if (target.isMapShape()) {
                MapShape map = target.asMapShape().get();
                Shape key = model.expectShape(map.getKey().getTarget());
                Shape value = model.expectShape(map.getValue().getTarget());
                getIncludeForMemberType(key, model, projectName).ifPresent(includes::add);
                getIncludeForMemberType(value, model, projectName).ifPresent(includes::add);
            }
        }
        return new ArrayList<>(includes);
    }
}
