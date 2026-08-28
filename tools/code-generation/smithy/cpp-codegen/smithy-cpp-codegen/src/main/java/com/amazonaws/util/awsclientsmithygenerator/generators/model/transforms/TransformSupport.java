/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.aws.traits.protocols.Ec2QueryNameTrait;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.EnumDefinition;
import software.amazon.smithy.model.traits.EnumTrait;
import software.amazon.smithy.model.traits.JsonNameTrait;
import software.amazon.smithy.model.traits.Trait;
import software.amazon.smithy.model.traits.XmlNameTrait;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.stream.Collectors;

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
     * Appends {@code name -> value} enum entries, allowing wire values that are <em>not</em>
     * identifier-safe (e.g. region strings containing {@code '-'} such as {@code us-east-1}). This is
     * the name/value counterpart of {@link #appendValues(Shape, List)}, which requires the wire value
     * to double as the member name.
     *
     * <p>Each map key is the Smithy member name and MUST be identifier-safe (matching
     * {@code [A-Za-z_][A-Za-z0-9_]*}); each map value is the wire value and may be arbitrary. For a
     * Smithy 2.0 {@code EnumShape} the name becomes the member name and the value the
     * {@code @enumValue} via {@code builder.addMember(name, value)}; for a legacy {@code @enum}
     * {@code StringShape} only the wire value is recorded (matching C2J, which keys the enum off the
     * wire value and derives the constant name by sanitizing it).
     *
     * <p>Idempotent: entries whose wire value already exists are skipped; if every value is already
     * present the shape is returned unchanged as {@link Optional#empty()}.
     *
     * @param enumShape   the enum shape to append to
     * @param nameToValue ordered member-name to wire-value entries to append
     * @return the updated shape, or {@link Optional#empty()} if all values are already present
     * @throws IllegalArgumentException if any member name is not identifier-safe
     */
    static Optional<Shape> appendEnumValues(Shape enumShape, Map<String, String> nameToValue) {
        for (String name : nameToValue.keySet()) {
            if (name == null || !name.matches(IDENTIFIER_PATTERN)) {
                throw new IllegalArgumentException(
                    "Enum member name \"" + name + "\" for shape " + enumShape.getId()
                        + " is not an identifier-safe enum member name (must match "
                        + IDENTIFIER_PATTERN + ")");
            }
        }
        List<String> existing = existingWireValues(enumShape);
        LinkedHashMap<String, String> toAdd = new LinkedHashMap<>();
        nameToValue.forEach((name, value) -> {
            if (!existing.contains(value)) {
                toAdd.put(name, value);
            }
        });
        if (toAdd.isEmpty()) {
            return Optional.empty();
        }
        if (enumShape.isEnumShape()) {
            EnumShape.Builder builder = enumShape.asEnumShape().get().toBuilder();
            toAdd.forEach(builder::addMember);
            return Optional.of(builder.build());
        }
        EnumTrait existingTrait = enumShape.expectTrait(EnumTrait.class);
        EnumTrait.Builder traitBuilder = EnumTrait.builder();
        existingTrait.getValues().forEach(traitBuilder::addEnum);
        toAdd.values().forEach(value ->
            traitBuilder.addEnum(EnumDefinition.builder().value(value).build()));
        return Optional.of(enumShape.asStringShape().get().toBuilder()
            .addTrait(traitBuilder.build())
            .build());
    }

    /** The current wire values of an enum shape (Smithy 2.0 {@code EnumShape} or legacy {@code @enum}). */
    private static List<String> existingWireValues(Shape enumShape) {
        if (enumShape.isEnumShape()) {
            return new ArrayList<>(enumShape.asEnumShape().get().getEnumValues().values());
        }
        return enumShape.expectTrait(EnumTrait.class).getValues().stream()
            .map(EnumDefinition::getValue)
            .collect(Collectors.toList());
    }

    /**
     * Returns a copy of {@code struct} with member {@code oldName} renamed to {@code newName},
     * preserving member declaration order and copying all traits onto the renamed member. Returns
     * {@link Optional#empty()} if {@code oldName} is absent (nothing to rename).
     *
     * <p>The renamed member keeps its original wire name. A member with no explicit wire-name trait
     * serializes under its member name, so renaming it would silently change the wire key; to
     * prevent that this method pins the original name via the protocol-appropriate trait(s)
     * ({@link #wireNamePreservingTraits}). This mirrors the legacy C2J rename primitive, which
     * couples {@code setLocationName(originalMemberKey)} into the same step that changes the member
     * key so a rename can never drop the wire name.
     *
     * @throws IllegalStateException if {@code newName} is already a distinct member — a genuine
     *     collision that would silently drop a member; or if the protocol has no wire-name trait
     *     to preserve the original key (see {@link #wireNamePreservingTrait}). Callers must not
     *     mask either.
     */
    static Optional<StructureShape> renameMember(StructureShape struct, String oldName, String newName,
                                                 Protocol protocol) {
        Optional<MemberShape> target = struct.getMember(oldName);
        if (target.isEmpty()) {
            return Optional.empty();
        }
        if (struct.getMember(newName).isPresent()) {
            throw new IllegalStateException("Cannot rename member '" + oldName + "' to '" + newName
                + "' on " + struct.getId() + ": a distinct '" + newName + "' member already exists");
        }
        List<Trait> wireNameTraits = wireNamePreservingTraits(target.get(), oldName, protocol);
        StructureShape.Builder builder = StructureShape.builder().id(struct.getId());
        struct.getAllTraits().values().forEach(builder::addTrait);
        for (MemberShape member : struct.getAllMembers().values()) {
            boolean isTarget = member.getMemberName().equals(oldName);
            String name = isTarget ? newName : member.getMemberName();
            builder.addMember(name, member.getTarget(), b -> {
                member.getAllTraits().values().forEach(b::addTrait);
                if (isTarget) {
                    wireNameTraits.forEach(b::addTrait);
                }
            });
        }
        return Optional.of(builder.build());
    }

    /**
     * The trait(s) to add to the renamed member so its wire name(s) stay equal to what {@code oldName}
     * produced. Existing wire-name traits are always copied verbatim by the rename, so this only
     * synthesizes what the member lacks; if a protocol's trait is already present, nothing is added
     * for it.
     *
     * <ul>
     *   <li>JSON-family ({@code awsJson}, {@code restJson1}): {@code @jsonName}.</li>
     *   <li>{@code restXml} / {@code awsQuery}: {@code @xmlName}.</li>
     *   <li>{@code ec2Query}: request and response use <em>different</em> names, so both are pinned.
     *       The request query key is authoritative from {@code @ec2QueryName} (used verbatim); the
     *       response XML element is {@code @xmlName}. EC2 models routinely carry an {@code @xmlName}
     *       that is not merely the camelCase of the request key (e.g. member {@code Ipv6Addresses}
     *       has {@code ec2QueryName=Ipv6Addresses} but {@code xmlName=ipv6AddressesSet}), so
     *       reconstructing the request key from {@code capitalize(@xmlName)} — what legacy C2J does —
     *       is unreliable. We instead pin {@code @ec2QueryName} to the member's current request key
     *       ({@code capitalize(@xmlName ?? memberName)} when it has none of its own) so it survives
     *       the member-name change without depending on any serde-time fallback.</li>
     *   <li>Any other protocol (e.g. {@code rpcv2Cbor}, which has no wire-name trait and always
     *       serializes under the member name): fail fast rather than emit an inert trait and
     *       mis-generate later.</li>
     * </ul>
     */
    private static List<Trait> wireNamePreservingTraits(MemberShape member, String oldName,
                                                        Protocol protocol) {
        if (protocol == Protocol.EC2) {
            List<Trait> traits = new ArrayList<>();
            if (!member.hasTrait(Ec2QueryNameTrait.class)) {
                String responseName = member.getTrait(XmlNameTrait.class)
                    .map(XmlNameTrait::getValue).orElse(oldName);
                traits.add(new Ec2QueryNameTrait(capitalizeFirst(responseName)));
            }
            if (!member.hasTrait(XmlNameTrait.class)) {
                traits.add(new XmlNameTrait(oldName));
            }
            return traits;
        }
        if (protocol.isXmlLike()) {
            return member.hasTrait(XmlNameTrait.class)
                ? List.of() : List.of(new XmlNameTrait(oldName));
        }
        if (protocol.isJsonLike()) {
            return member.hasTrait(JsonNameTrait.class)
                ? List.of() : List.of(new JsonNameTrait(oldName));
        }
        throw new IllegalStateException("Cannot preserve the wire name of renamed member '" + oldName
            + "' under protocol " + protocol + ": it has no wire-name trait (rpcv2Cbor always "
            + "serializes under the member name), so the rename would silently change the wire key. "
            + "Add explicit wire-name handling for this protocol before renaming its members.");
    }

    /** Uppercases the first character; the EC2 query-key casing rule. */
    private static String capitalizeFirst(String value) {
        if (value.isEmpty()) {
            return value;
        }
        return Character.toUpperCase(value.charAt(0)) + value.substring(1);
    }
}
