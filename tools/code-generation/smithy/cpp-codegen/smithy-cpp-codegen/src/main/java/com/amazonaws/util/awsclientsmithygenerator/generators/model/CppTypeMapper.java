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
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.EnumTrait;
import software.amazon.smithy.model.traits.IdempotencyTokenTrait;
import software.amazon.smithy.model.traits.SensitiveTrait;
import software.amazon.smithy.model.traits.SparseTrait;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashSet;
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
     * Returns the C++ type/file name for a shape, capitalizing the first character so that
     * lowerCamel Smithy shape names (e.g. IAM's {@code statusType}) become UpperCamel C++
     * identifiers ({@code StatusType}). This matches the legacy C2J normalization, which
     * upper-camel-cases every shape name at model load
     * ({@code C2jModelToGeneratorModelTransformer}).
     *
     * @param shape the shape whose C++ type/file name is needed
     * @return the shape's name with its first character upper-cased
     */
    public static String cppShapeName(Shape shape) {
        String name = shape.getId().getName();
        if (name.isEmpty()) {
            return name;
        }
        return Character.toUpperCase(name.charAt(0)) + name.substring(1);
    }

    /**
     * Returns the C++ type string for the given Smithy shape.
     *
     * @param shape the shape to map
     * @param model the model (needed to resolve list/map member targets)
     * @return the C++ type name (e.g., {@code "Aws::String"}, {@code "Aws::Vector<int>"})
     */
    public static String getCppType(Shape shape, Model model) {
        return getCppType(shape, model, false);
    }

    /**
     * Returns the C++ type string for the given Smithy shape.
     *
     * @param shape        the shape to map
     * @param model        the model (needed to resolve list/map member targets)
     * @param wideIntegers when {@code true}, {@code integer} maps to {@code int64_t} instead of
     *        {@code int}. C2J applies this only under the CBOR protocol
     *        ({@code CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING}: {@code integer -> int64_t}), and only
     *        in the file kinds whose templates set {@code $protocol == "smithy-rpc-v2-cbor"} —
     *        the CBOR sub-object and result headers. Request headers use the shared
     *        {@code RequestHeader.vm}, which does not, so they keep {@code int}. {@code long} is
     *        {@code long long} in every mapping and is unaffected.
     */
    public static String getCppType(Shape shape, Model model, boolean wideIntegers) {
        // Check enum BEFORE string — a Smithy 2.0 EnumShape extends StringShape, and a Smithy 1.0
        // enum is a plain string carrying the @enum trait; both map to the enum C++ type.
        if (isEnum(shape)) {
            return cppShapeName(shape);
        }
        if (shape.isStringShape()) {
            return "Aws::String";
        }
        if (shape.isIntegerShape()) {
            return wideIntegers ? "int64_t" : "int";
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
            // C2J maps a @sensitive blob to CryptoBuffer (the "sensitive_blob" type-mapping key
            // in CppViewHelper); a plain blob stays ByteBuffer. Both live in <aws/core/utils/Array.h>.
            return shape.hasTrait(SensitiveTrait.class)
                ? "Aws::Utils::CryptoBuffer" : "Aws::Utils::ByteBuffer";
        }
        if (shape.isTimestampShape()) {
            return "Aws::Utils::DateTime";
        }
        if (shape.isStructureShape() || shape.isUnionShape()) {
            return cppShapeName(shape);
        }
        if (shape.isListShape()) {
            ListShape list = shape.asListShape().get();
            Shape member = model.expectShape(list.getMember().getTarget());
            // A @sparse list wraps its element type in Aws::Crt::Optional (matches C2J's
            // CppViewHelper), giving Aws::Vector<Aws::Crt::Optional<T>>.
            return "Aws::Vector<" + wrapSparse(shape, getCppType(member, model, wideIntegers)) + ">";
        }
        if (shape.isMapShape()) {
            MapShape map = shape.asMapShape().get();
            Shape key = model.expectShape(map.getKey().getTarget());
            Shape value = model.expectShape(map.getValue().getTarget());
            // A @sparse map wraps its value type (not its key) in Aws::Crt::Optional.
            return "Aws::Map<" + getCppType(key, model, wideIntegers) + ", "
                + wrapSparse(shape, getCppType(value, model, wideIntegers)) + ">";
        }
        if (shape.isDocumentShape()) {
            return "Aws::Utils::Document";
        }
        throw new UnsupportedOperationException(
            "Unsupported shape type " + shape.getType() + " for shape " + shape.getId());
    }

    /**
     * Wraps {@code innerType} in {@code Aws::Crt::Optional<...>} when {@code collectionShape}
     * (a list or map) carries the {@code @sparse} trait; otherwise returns {@code innerType}
     * unchanged. For lists the inner type is the element; for maps it is the value.
     *
     * @param collectionShape the list or map shape that may be sparse
     * @param innerType       the element / value C++ type
     * @return the (possibly Optional-wrapped) type
     */
    public static String wrapSparse(Shape collectionShape, String innerType) {
        return collectionShape.hasTrait(SparseTrait.class)
            ? "Aws::Crt::Optional<" + innerType + ">" : innerType;
    }

    /**
     * Returns the C++ default initializer for a shape that needs one, or empty
     * if the type is default-constructed (strings, vectors, maps, etc.).
     *
     * @param shape the shape to get a default value for
     * @return the initializer string (e.g., {@code "0"}, {@code "false"}) or empty
     */
    public static Optional<String> getDefaultValue(Shape shape) {
        if (isEnum(shape)) {
            return Optional.of(cppShapeName(shape) + "::NOT_SET");
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
     * Returns true if the shape maps to a C++ primitive type (int, long long, bool, double).
     *
     * @param shape the shape to check
     * @return true if the shape is a primitive type
     */
    public static boolean isPrimitive(Shape shape) {
        return shape.isIntegerShape() || shape.isLongShape()
            || shape.isBooleanShape() || shape.isDoubleShape() || shape.isFloatShape();
    }

    /**
     * Returns true if the shape is an enum — either a Smithy 2.0 {@code EnumShape} or a Smithy 1.0
     * {@code string} shape carrying the {@code @enum} trait. Both generate a dedicated C++ enum
     * type. Mirrors the detection in {@code ShapeClassifier} and {@code EnumResolver}.
     *
     * @param shape the shape to check
     * @return true if the shape maps to a generated C++ enum type
     */
    public static boolean isEnum(Shape shape) {
        return shape.isEnumShape() || (shape.isStringShape() && shape.hasTrait(EnumTrait.class));
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
        // Check enum BEFORE string — see getCppType: covers both 2.0 EnumShape and 1.0 @enum string.
        if (isEnum(shape)) {
            return Optional.of("<aws/" + projectName + "/model/" + cppShapeName(shape) + ".h>");
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
            return Optional.of("<aws/" + projectName + "/model/" + cppShapeName(shape) + ".h>");
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
    public static List<String> getIncludesForShape(Shape structureShape, Model model, String projectName) {
        Set<String> includes = new TreeSet<>();
        ShapeId selfId = structureShape.getId();
        for (MemberShape member : structureShape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            if (isRecursiveStructMember(structureShape, target, model)) {
                // A recursive member is stored as std::shared_ptr<T>. A mutually-referenced T is
                // forward-declared (see getForwardDeclarations), so the header needs the allocator
                // header for the inline MakeShared setter rather than T's own header. A directly
                // self-referential member (T == enclosing) needs neither: the class declares itself
                // and MakeShared resolves transitively. Both match C2J.
                if (!target.getId().equals(selfId)) {
                    includes.add("<aws/core/utils/memory/stl/AWSAllocator.h>");
                }
            } else {
                addMemberInclude(includes, target, selfId, model, projectName);
                // For list/map, also include the element/key/value types
                if (target.isListShape()) {
                    ListShape list = target.asListShape().get();
                    addMemberInclude(includes, model.expectShape(list.getMember().getTarget()),
                        selfId, model, projectName);
                }
                if (target.isMapShape()) {
                    MapShape map = target.asMapShape().get();
                    addMemberInclude(includes, model.expectShape(map.getKey().getTarget()),
                        selfId, model, projectName);
                    addMemberInclude(includes, model.expectShape(map.getValue().getTarget()),
                        selfId, model, projectName);
                }
                // A @sparse list/map wraps its element/value in Aws::Crt::Optional, declared in
                // <aws/crt/Optional.h>. Matches C2J's generated SparseNullsOperationRequest.h.
                if ((target.isListShape() || target.isMapShape()) && target.hasTrait(SparseTrait.class)) {
                    includes.add("<aws/crt/Optional.h>");
                }
            }
            // @idempotencyToken members are brace-initialized with
            // Aws::Utils::UUID::PseudoRandomUUID(), which requires UUID.h. Matches C2J
            // (CppViewHelper.computeMemberIncludeName).
            if (member.hasTrait(IdempotencyTokenTrait.class)) {
                includes.add("<aws/core/utils/UUID.h>");
            }
        }
        return new ArrayList<>(includes);
    }

    /**
     * Adds the member-type include for {@code shape}, unless it is the enclosing shape itself.
     * C2J never emits a self-include (the class is being defined in that header); a recursive
     * self-referential member reaches its own type through the shared_ptr member instead.
     */
    private static void addMemberInclude(Set<String> includes, Shape shape, ShapeId selfId,
                                         Model model, String projectName) {
        if (!shape.getId().equals(selfId)) {
            getIncludeForMemberType(shape, model, projectName).ifPresent(includes::add);
        }
    }

    /**
     * Returns the sorted C++ class names of every direct member whose target forms a reference
     * cycle with {@code structureShape} (see {@link #isRecursiveStructMember}). These are stored
     * as {@code std::shared_ptr<T>} and must be forward-declared (not included) in the header to
     * break the otherwise-infinite by-value member. Matches C2J's {@code computeForwardDeclarations}.
     *
     * @param structureShape the enclosing structure/union
     * @param model          the model
     * @return sorted, deduplicated list of forward-declared C++ class names
     */
    public static List<String> getForwardDeclarations(Shape structureShape, Model model) {
        Set<String> names = new TreeSet<>();
        for (MemberShape member : structureShape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            // A directly self-referential member needs no forward declaration (the class declares
            // itself); only distinct mutually-referenced types do.
            if (isRecursiveStructMember(structureShape, target, model)
                    && !target.getId().equals(structureShape.getId())) {
                names.add(cppShapeName(target));
            }
        }
        return new ArrayList<>(names);
    }

    /**
     * Returns the (bracket-less) model {@code #include} paths for every recursive member's target.
     * The header forward-declares these types, so the {@code .cpp} must include them for the
     * out-of-line MakeShared / serde bodies. Matches C2J's source-side include of the referenced type.
     *
     * @param structureShape the enclosing structure/union
     * @param model          the model
     * @param projectName    the service project name for model-relative includes
     * @return sorted, deduplicated list of include paths without angle brackets
     */
    public static List<String> getRecursiveMemberSourceIncludes(Shape structureShape, Model model,
                                                                String projectName) {
        Set<String> inc = new TreeSet<>();
        for (MemberShape member : structureShape.getAllMembers().values()) {
            Shape target = model.expectShape(member.getTarget());
            // The self header is already included by the source's base includes; only distinct
            // mutually-referenced types need to be added here.
            if (isRecursiveStructMember(structureShape, target, model)
                    && !target.getId().equals(structureShape.getId())) {
                inc.add("aws/" + projectName + "/model/" + cppShapeName(target) + ".h");
            }
        }
        return new ArrayList<>(inc);
    }

    /**
     * Returns true if a direct member of {@code enclosing} whose target is {@code memberTarget}
     * forms a reference cycle that must be broken with {@code std::shared_ptr}. This holds when
     * {@code memberTarget} is an aggregate (structure/union) mutually referenced with
     * {@code enclosing}. Members that reach back only through a list/map container do not qualify
     * (the container already breaks the by-value cycle).
     *
     * @param enclosing    the shape declaring the member
     * @param memberTarget the member's direct target shape
     * @param model        the model
     * @return true if the member must be rendered as a shared_ptr to avoid an infinite-size type
     */
    public static boolean isRecursiveStructMember(Shape enclosing, Shape memberTarget, Model model) {
        if (!isAggregate(memberTarget)) {
            return false;
        }
        // C2J renders a member as shared_ptr when its target is either the enclosing shape itself
        // (direct self-reference) or a distinct shape mutually referenced with it. Both otherwise
        // form an infinite-size by-value member, illegal under C++11.
        return memberTarget.getId().equals(enclosing.getId())
            || isMutuallyReferenced(enclosing, memberTarget, model);
    }

    private static boolean isAggregate(Shape shape) {
        return shape.isStructureShape() || shape.isUnionShape();
    }

    /**
     * Mirrors C2J's {@code Shape.isMutuallyReferencedWith}: true when {@code a} and {@code b} are
     * distinct aggregate shapes and each is reachable from the other through the member graph,
     * descending one level transparently through list containers (not maps).
     */
    private static boolean isMutuallyReferenced(Shape a, Shape b, Model model) {
        if (a.getId().equals(b.getId()) || !isAggregate(a) || !isAggregate(b)) {
            return false;
        }
        return reachableAggregates(a, model).contains(b.getId())
            && reachableAggregates(b, model).contains(a.getId());
    }

    private static Set<ShapeId> reachableAggregates(Shape root, Model model) {
        Set<ShapeId> reachable = new HashSet<>();
        Set<ShapeId> visited = new HashSet<>();
        Deque<Shape> stack = new ArrayDeque<>();
        stack.push(root);
        visited.add(root.getId());
        while (!stack.isEmpty()) {
            Shape current = stack.pop();
            for (MemberShape member : current.getAllMembers().values()) {
                // C2J descends one level through a list container (list -> element), treating the
                // list edge as transparent; it does not descend through maps.
                Shape target = model.expectShape(member.getTarget());
                if (target.isListShape()) {
                    target = model.expectShape(target.asListShape().get().getMember().getTarget());
                }
                if (isAggregate(target)) {
                    reachable.add(target.getId());
                    if (visited.add(target.getId())) {
                        stack.push(target);
                    }
                }
            }
        }
        return reachable;
    }

}
