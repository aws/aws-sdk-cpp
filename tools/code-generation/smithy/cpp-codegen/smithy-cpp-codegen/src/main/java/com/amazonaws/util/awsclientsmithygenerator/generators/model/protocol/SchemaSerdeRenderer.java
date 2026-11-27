/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.CustomRenderedTrait;
import software.amazon.smithy.aws.traits.protocols.Ec2QueryNameTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeType;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HostLabelTrait;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpLabelTrait;
import software.amazon.smithy.model.traits.HttpPayloadTrait;
import software.amazon.smithy.model.traits.HttpPrefixHeadersTrait;
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.traits.HttpResponseCodeTrait;
import software.amazon.smithy.model.traits.JsonNameTrait;
import software.amazon.smithy.model.traits.MediaTypeTrait;
import software.amazon.smithy.model.traits.SparseTrait;
import software.amazon.smithy.model.traits.TimestampFormatTrait;
import software.amazon.smithy.model.traits.XmlAttributeTrait;
import software.amazon.smithy.model.traits.XmlFlattenedTrait;
import software.amazon.smithy.model.traits.XmlNameTrait;
import software.amazon.smithy.model.traits.XmlNamespaceTrait;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Function;

/**
 * Emits the schema-serde adapters of request and result classes. Everything is confined to the
 * {@code .cpp}: a file-local (anonymous-namespace) {@link smithy.client.schema.SerializableStruct}
 * adapter wraps the request ({@code GetSchemaSerdeInput}) or result ({@code GetSchemaSerdeOutput}),
 * holds its {@code Schema} and streams members to / from the client-owned {@link
 * smithy.client.schema.ClientProtocol}, which produces the wire format for any protocol (JSON / XML /
 * aws-query / ec2 form-encoding). The generated shapes name no concrete protocol.
 *
 * <p><b>Lifetime:</b> each adapter's {@code Schema} is built once, on first use, by a file-local
 * {@code <Class>SchemaCache<Adapter>} and shared by every later request; each adapter instance holds a
 * {@code shared_ptr} to it. The cache registers with {@code Aws::Utils::ComponentRegistry}, which
 * {@code Aws::ShutdownAPI} terminates first, so the schemas are freed inside the {@code InitAPI} /
 * {@code ShutdownAPI} window (through the SDK allocator that made them) and rebuilt after the next
 * {@code InitAPI}. A plain function-local static would instead be destroyed at process exit, after
 * {@code ShutdownAPI}, and crash; building per request was correct but spent most of the serde time
 * rebuilding identical schemas. Requests must not be serialized concurrently with {@code ShutdownAPI}
 * (already required of every client call).
 *
 * <p><b>Wire names:</b> the schema member name is always the raw Smithy member name (it is the
 * lookup key). Protocol wire-name overrides are attached as traits on the member — never baked into
 * the name — because each serializer resolves the wire name from a trait with a member-name
 * fallback: JSON honors {@code JsonNameTrait}, XML/aws-query honor {@code XmlNameTrait}, ec2 honors
 * {@code Ec2QueryNameTrait} (else capitalizes), and CBOR always uses the member name verbatim.
 *
 * <p>Protocol-agnostic: only the per-member trait emitter ({@link MemberTraits}) is protocol-specific.
 * Only valid for members that are schema-serde serializable — see {@link RequestBindings#schemaSerializable}.
 */
final class SchemaSerdeRenderer {

    private SchemaSerdeRenderer() {}

    /** Allocation tag for the transient, request-scoped trait objects. */
    private static final String ALLOC_TAG = "\"SchemaSerdeTrait\"";
    // --- per-protocol member trait emitters ---------------------------------------------------
    // Each returns the protocol-specific trait entries ("{Key(), MakeShared<...>(...)}") for a member;
    // memberTraitArg() adds the protocol-independent ones (@timestampFormat) and formats the trailing
    // PutMember trait-list argument.

    /** Protocol-specific schema trait entries for a member. */
    @FunctionalInterface
    interface MemberTraits {
        List<String> of(MemberShape member, Model model);
    }

    /** JSON: attach a {@code JsonNameTrait} only when {@code @jsonName} differs from the member name. */
    static List<String> jsonMemberTraits(MemberShape m, Model model) {
        String jsonName = m.getTrait(JsonNameTrait.class).map(JsonNameTrait::getValue).orElse(null);
        if (jsonName == null || jsonName.equals(m.getMemberName())) {
            return List.of();
        }
        return List.of(traitEntry("JsonNameTrait", quoted(jsonName)));
    }

    /** awsJson: never attach a trait — the member name is emitted verbatim. */
    static List<String> noMemberTraits(MemberShape m, Model model) {
        return List.of();
    }

    /**
     * XML / aws-query: {@code @xmlName}, {@code @xmlAttribute}, {@code @xmlFlattened},
     * {@code @xmlNamespace}, plus the element names of a list / map target (the serializer reads them
     * from the member that references the container).
     */
    static List<String> xmlMemberTraits(MemberShape m, Model model) {
        List<String> out = new ArrayList<>();
        m.getTrait(XmlNameTrait.class).ifPresent(t -> out.add(traitEntry("XmlNameTrait", quoted(t.getValue()))));
        out.addAll(xmlStructuralTraits(m, model));
        out.addAll(xmlPayloadRootTraits(m, model));
        return out;
    }

    /**
     * A structure / union {@code @httpPayload} member is the document root, serialized under the member's
     * schema: name it by the target's {@code @xmlName} (else the target name) and carry the target's
     * {@code @xmlNamespace}, unless the member sets its own.
     */
    private static List<String> xmlPayloadRootTraits(MemberShape m, Model model) {
        Shape target = model.expectShape(m.getTarget());
        if (!m.hasTrait(HttpPayloadTrait.class) || !(target.isStructureShape() || target.isUnionShape())) {
            return List.of();
        }
        List<String> out = new ArrayList<>();
        if (!m.hasTrait(XmlNameTrait.class)) {
            out.add(traitEntry("XmlNameTrait", quoted(target.getTrait(XmlNameTrait.class).map(XmlNameTrait::getValue)
                .orElse(target.getId().getName()))));
        }
        if (!m.hasTrait(XmlNamespaceTrait.class)) {
            target.getTrait(XmlNamespaceTrait.class).ifPresent(ns -> out.add(xmlNamespaceEntry(ns)));
        }
        return out;
    }

    /**
     * ec2: prefer {@code Ec2QueryNameTrait} (used verbatim); else fall back to {@code XmlNameTrait}
     * (the serializer capitalizes the first letter, matching the member-name default).
     */
    static List<String> ec2MemberTraits(MemberShape m, Model model) {
        String ec2Name = m.getTrait(Ec2QueryNameTrait.class).map(Ec2QueryNameTrait::getValue).orElse(null);
        if (ec2Name == null) {
            return xmlMemberTraits(m, model);
        }
        List<String> out = new ArrayList<>();
        out.add(traitEntry("Ec2QueryNameTrait", quoted(ec2Name)));
        out.addAll(xmlStructuralTraits(m, model));
        return out;
    }

    private static List<String> xmlStructuralTraits(MemberShape m, Model model) {
        List<String> out = new ArrayList<>();
        if (m.hasTrait(XmlAttributeTrait.class)) {
            out.add(traitEntry("XmlAttributeTrait", ""));
        }
        if (m.hasTrait(XmlFlattenedTrait.class)) {
            out.add(traitEntry("XmlFlattenedTrait", ""));
        }
        m.getTrait(XmlNamespaceTrait.class).ifPresent(ns -> out.add(xmlNamespaceEntry(ns)));
        Shape target = model.expectShape(m.getTarget());
        if (target.isListShape()) {
            target.asListShape().get().getMember().getTrait(XmlNameTrait.class).ifPresent(
                t -> out.add(traitEntry("XmlListItemNameTrait", quoted(t.getValue()))));
        } else if (target.isMapShape()) {
            MapShape map = target.asMapShape().get();
            map.getKey().getTrait(XmlNameTrait.class).ifPresent(
                t -> out.add(traitEntry("XmlMapKeyNameTrait", quoted(t.getValue()))));
            map.getValue().getTrait(XmlNameTrait.class).ifPresent(
                t -> out.add(traitEntry("XmlMapValueNameTrait", quoted(t.getValue()))));
        }
        return out;
    }

    /** The trailing PutMember trait-list argument (", {...}") for a member, or "" when it has none. */
    private static String memberTraitArg(MemberTraits memberTraits, MemberShape m, Model model) {
        List<String> entries = new ArrayList<>(memberTraits.of(m, model));
        m.getMemberTrait(model, TimestampFormatTrait.class).ifPresent(t -> entries.add(
            traitEntry("TimestampFormatTrait", "smithy::schema::TimestampFormatTrait::Format::" + timestampFormat(t))));
        entries.addAll(httpBindingTraits(m, model));
        // A @sparse list / map keeps its nulls: the deserializer delivers them only when the schema says so.
        if (model.expectShape(m.getTarget()).hasTrait(SparseTrait.class)) {
            entries.add(traitEntry("SparseTrait", ""));
        }
        return entries.isEmpty() ? "" : ", {" + String.join(", ", entries) + "}";
    }

    /**
     * Smithy HTTP binding traits for a member, read by the runtime {@code HttpBindingProtocol}. Only
     * REST models carry them, so other protocols emit none.
     */
    private static List<String> httpBindingTraits(MemberShape m, Model model) {
        List<String> out = new ArrayList<>();
        m.getTrait(HttpHeaderTrait.class).ifPresent(t -> out.add(traitEntry("HttpHeaderTrait", quoted(t.getValue()))));
        m.getTrait(HttpQueryTrait.class).ifPresent(t -> out.add(traitEntry("HttpQueryTrait", quoted(t.getValue()))));
        m.getTrait(HttpPrefixHeadersTrait.class).ifPresent(t -> out.add(traitEntry("HttpPrefixHeadersTrait", quoted(t.getValue()))));
        if (m.hasTrait(HttpQueryParamsTrait.class)) {
            out.add(traitEntry("HttpQueryParamsTrait", ""));
        }
        if (m.hasTrait(HttpLabelTrait.class)) {
            out.add(traitEntry("HttpLabelTrait", ""));
        }
        if (m.hasTrait(HttpPayloadTrait.class)) {
            out.add(traitEntry("HttpPayloadTrait", ""));
        }
        if (m.hasTrait(HttpResponseCodeTrait.class)) {
            out.add(traitEntry("HttpResponseCodeTrait", ""));
        }
        if (m.hasTrait(HostLabelTrait.class)) {
            out.add(traitEntry("HostLabelTrait", ""));
        }
        m.getMemberTrait(model, MediaTypeTrait.class).ifPresent(t -> out.add(traitEntry("MediaTypeTrait", quoted(t.getValue()))));
        return out;
    }

    private static String timestampFormat(TimestampFormatTrait trait) {
        switch (trait.getValue()) {
            case TimestampFormatTrait.HTTP_DATE: return "HTTP_DATE";
            case TimestampFormatTrait.EPOCH_SECONDS: return "EPOCH_SECONDS";
            default: return "DATE_TIME";
        }
    }

    private static String xmlNamespaceEntry(XmlNamespaceTrait ns) {
        return traitEntry("XmlNamespaceTrait", quoted(ns.getUri()) + ns.getPrefix().map(p -> ", " + quoted(p)).orElse(""));
    }

    private static String traitEntry(String traitType, String ctorArgs) {
        String args = ctorArgs.isEmpty() ? ALLOC_TAG : ALLOC_TAG + ", " + ctorArgs;
        return "{smithy::schema::" + traitType + "::KEY(), Aws::MakeShared<smithy::schema::" + traitType + ">(" + args + ")}";
    }

    private static String quoted(String value) {
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"") + "\"";
    }

    /**
     * Emits, in the request {@code .cpp}: (1) anonymous-namespace {@link
     * smithy.client.schema.SerializableStruct} adapters over {@code members} and every structure / union
     * they reach (schema + members, <em>no protocol</em>); (2) {@code GetSchemaSerdeInput()} handing
     * the client-owned protocol that adapter; and (3) a stub {@code SerializePayload()} kept only for the
     * legacy {@code AmazonSerializableWebServiceRequest} contract. An HTTP-binding protocol's adapter
     * carries every member (with its binding traits); an RPC protocol's only the body members.
     *
     * @param memberTraits the protocol's schema trait entries for a member
     */
    static void writeSerializePayload(CppWriter writer, String className, List<MemberShape> members, Model model,
                                      MemberTraits memberTraits, String namespace) {
        // Adapters are declared first and defined after, so mutually recursive shapes can name each other.
        Map<String, Adapter> adapters = new LinkedHashMap<>();
        for (MemberShape m : members) {
            collectNestedAdapters(className, model.expectShape(m.getTarget()), model, adapters, SER_SUFFIX);
        }
        adapters.put(className + "Serializable", new Adapter(className + "Serializable", className, false, members, null));
        modelNamespace(writer, namespace, () -> {
            writer.write("namespace {");
            writeSchemaCache(writer, className);
            for (Adapter adapter : adapters.values()) {
                declareStructSerAdapter(writer, className, adapter);
            }
            for (Adapter adapter : adapters.values()) {
                defineStructSerAdapter(writer, className, adapter, model, memberTraits);
            }
            writer.write("}  // namespace");
        });
        writer.write("");

        writer.write("Aws::UniquePtr<smithy::schema::SerializableStruct> $L::GetSchemaSerdeInput() const {", className);
        writer.write("  return Aws::MakeUnique<$LSerializable>(\"$LSerializable\", *this);", className, className);
        writer.write("}");
        writer.write("");
        writer.write("Aws::String $L::SerializePayload() const { return {}; }", className);
    }

    /** The file-local schema cache template of one request / result {@code .cpp}. */
    static String schemaCacheName(String unitPrefix) {
        return unitPrefix + "SchemaCache";
    }

    /** {@code <Class>SchemaCache<adapter>::Get()}: the shared schema of {@code adapterClass}. */
    private static String cachedSchemaExpr(String unitPrefix, String adapterClass) {
        return schemaCacheName(unitPrefix) + "<" + adapterClass + ">::Get()";
    }

    /**
     * Emits the file-local cache that builds each adapter's schema once and frees it in
     * {@code Aws::ShutdownAPI} (see the class doc). The fast path is one atomic load; the first call
     * takes a per-adapter mutex, builds the schema (nested adapters' caches fill on the way) and
     * registers the release with the component registry. The release only clears the pointer and frees
     * the holder, never taking the mutex, because the registry calls it with its own lock held.
     */
    private static void writeSchemaCache(CppWriter writer, String unitPrefix) {
        String cache = schemaCacheName(unitPrefix);
        String holder = "std::shared_ptr<const smithy::schema::Schema>";
        writer.write("template <typename Adapter>");
        writer.write("class $L {", cache);
        writer.write(" public:");
        writer.write("  static $L Get() {", holder);
        writer.write("    if ($L* cached = s_schema.load(std::memory_order_acquire)) {", holder);
        writer.write("      return *cached;");
        writer.write("    }");
        writer.write("    std::lock_guard<std::mutex> lock(s_mutex);");
        writer.write("    if ($L* cached = s_schema.load(std::memory_order_relaxed)) {", holder);
        writer.write("      return *cached;");
        writer.write("    }");
        writer.write("    $L* built = Aws::New<$L>(\"$L\", Adapter::BuildSchema());", holder, holder, cache);
        writer.write("    Aws::Utils::ComponentRegistry::RegisterComponent(\"$L\", built, &Release);", cache);
        writer.write("    s_schema.store(built, std::memory_order_release);");
        writer.write("    return *built;");
        writer.write("  }");
        writer.write("");
        writer.write(" private:");
        writer.write("  static void Release(void* schema, int64_t) {");
        writer.write("    s_schema.store(nullptr, std::memory_order_release);");
        writer.write("    Aws::Delete(static_cast<$L*>(schema));", holder);
        writer.write("  }");
        writer.write("");
        writer.write("  static std::atomic<$L*> s_schema;", holder);
        writer.write("  static std::mutex s_mutex;");
        writer.write("};");
        writer.write("template <typename Adapter>");
        writer.write("std::atomic<$L*> $L<Adapter>::s_schema{nullptr};", holder, cache);
        writer.write("template <typename Adapter>");
        writer.write("std::mutex $L<Adapter>::s_mutex;", cache);
        writer.write("");
    }

    /** A (de)serialize adapter over one C++ structure / union class. */
    private static final class Adapter {
        final String adapterClass;
        final String cppType;
        final boolean isUnion;
        final List<MemberShape> members;
        /** DynamoDB's bespoke AttributeValue (see {@link #isDynamoDbAttributeValue}). */
        final boolean dynamoDbAttributeValue;

        Adapter(String adapterClass, String cppType, boolean isUnion, List<MemberShape> members, Shape shape) {
            this.adapterClass = adapterClass;
            this.cppType = cppType;
            this.isUnion = isUnion;
            this.members = members;
            this.dynamoDbAttributeValue = shape != null && isDynamoDbAttributeValue(shape);
        }
    }

    /**
     * DynamoDB's AttributeValue is not a generated union class: DynamoDbRenderer emits C2J's hand-written class
     * (marked {@link CustomRenderedTrait}), whose single value is read through {@code HasValue()} / {@code GetType()}
     * and type-specific getters ({@code GetS()}, {@code GetBool()}, {@code GetM()} of shared pointers, ...). Its
     * schema is still the Smithy union's, but its adapter bodies are written against that API.
     */
    private static boolean isDynamoDbAttributeValue(Shape shape) {
        return shape.hasTrait(CustomRenderedTrait.class) && "AttributeValue".equals(shape.getId().getName());
    }

    /** Class-name suffix of the serialize adapters. */
    private static final String SER_SUFFIX = "SchemaSerdeSer";
    /** Class-name suffix of the deserialize adapters. */
    private static final String DESER_SUFFIX = "SchemaSerdeDeser";

    /**
     * The adapter class for a nested structure / union, prefixed with the owning request / result so
     * it never collides with the same shape's adapter in another shape's {@code .cpp} under a unity
     * build.
     */
    private static String nestedAdapterName(String unitPrefix, Shape target, String suffix) {
        return unitPrefix + "_" + CppTypeMapper.cppShapeName(target) + suffix;
    }

    private static String nestedSerAdapterName(String unitPrefix, Shape target) {
        return nestedAdapterName(unitPrefix, target, SER_SUFFIX);
    }

    /** Registers an adapter once for every structure / union reachable from {@code target}. */
    private static void collectNestedAdapters(String unitPrefix, Shape target, Model model, Map<String, Adapter> adapters,
                                              String suffix) {
        if (target.isListShape()) {
            collectNestedAdapters(unitPrefix, model.expectShape(target.asListShape().get().getMember().getTarget()), model,
                adapters, suffix);
            return;
        }
        if (target.isMapShape()) {
            collectNestedAdapters(unitPrefix, model.expectShape(target.asMapShape().get().getValue().getTarget()), model,
                adapters, suffix);
            return;
        }
        if (!target.isStructureShape() && !target.isUnionShape()) {
            return;
        }
        String adapterClass = nestedAdapterName(unitPrefix, target, suffix);
        if (adapters.containsKey(adapterClass)) {
            return;
        }
        List<MemberShape> members = new ArrayList<>(target.getAllMembers().values());
        adapters.put(adapterClass, new Adapter(adapterClass, CppTypeMapper.cppShapeName(target), target.isUnionShape(), members,
            target));
        for (MemberShape mm : members) {
            collectNestedAdapters(unitPrefix, model.expectShape(mm.getTarget()), model, adapters, suffix);
        }
    }

    private static void declareStructSerAdapter(CppWriter writer, String unitPrefix, Adapter adapter) {
        boolean empty = adapter.members.isEmpty();
        String schema = cachedSchemaExpr(unitPrefix, adapter.adapterClass);
        writer.write("class $L final : public smithy::schema::SerializableStruct {", adapter.adapterClass);
        writer.write(" public:");
        if (empty) {
            // Empty body (e.g. GetCallerIdentity): the shape carries no members; only the protocol
            // envelope is emitted. No m_obj field / named serializer param to avoid -Werror.
            writer.write("  explicit $L(const $L&) : m_schema($L) {}", adapter.adapterClass, adapter.cppType, schema);
        } else {
            writer.write("  explicit $L(const $L& obj) : m_obj(obj), m_schema($L) {}", adapter.adapterClass, adapter.cppType, schema);
        }
        writer.write("  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }");
        writer.write("  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;");
        writer.write("  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}");
        writer.write("  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();");
        writer.write(" private:");
        if (!empty) {
            writer.write("  const $L& m_obj;", adapter.cppType);
        }
        writer.write("  const std::shared_ptr<const smithy::schema::Schema> m_schema;");
        writer.write("};");
        writer.write("");
    }

    private static void defineStructSerAdapter(CppWriter writer, String unitPrefix, Adapter adapter, Model model,
                                               MemberTraits memberTraits) {
        boolean empty = adapter.members.isEmpty();
        writer.write("void $L::SerializeMembers(smithy::schema::ShapeSerializer&$L) const {", adapter.adapterClass,
            empty ? "" : " serializer");
        if (adapter.dynamoDbAttributeValue) {
            writeAttributeValueSerializeMembers(writer, adapter.adapterClass);
        }
        for (MemberShape m : adapter.dynamoDbAttributeValue ? List.<MemberShape>of() : adapter.members) {
            writer.write("  if (m_obj.$LHasBeenSet()) {", methodName(m));
            writer.write("    const smithy::schema::Schema& memberSchema = *m_schema->GetMember(\"$L\").value();", m.getMemberName());
            writeValue(writer, "    ", unitPrefix, "serializer", "memberSchema", "m_obj.Get" + methodName(m) + "()",
                model.expectShape(m.getTarget()), model, 0);
            writer.write("  }");
        }
        writer.write("}");
        writer.write("");
        writer.write("std::shared_ptr<const smithy::schema::Schema> $L::BuildSchema() {", adapter.adapterClass);
        writer.write("  return smithy::schema::Schema::$L(\"$L\")", adapter.isUnion ? "UnionBuilder" : "StructureBuilder", adapter.cppType);
        for (MemberShape m : adapter.members) {
            writer.write("      .PutMember(\"$L\", $L$L)", m.getMemberName(),
                schemaExpr(unitPrefix, model.expectShape(m.getTarget()), m.getMemberName(), model, memberTraits, SER_SUFFIX),
                memberTraitArg(memberTraits, m, model));
        }
        writer.write("      .Build();");
        writer.write("}");
        writer.write("");
    }

    /**
     * The {@code Schema} expression for a value of {@code target} (a member / list item / map value).
     * A structure / union carries its own members through its adapter's schema, so the parent only
     * needs its member traits; a recursive target therefore gets a member-less schema, which keeps
     * {@code BuildSchema()} finite.
     */
    private static String schemaExpr(String unitPrefix, Shape target, String id, Model model, MemberTraits memberTraits,
                                     String adapterSuffix) {
        if (target.isStructureShape() || target.isUnionShape()) {
            if (isRecursive(target, model)) {
                return "smithy::schema::Schema::" + (target.isUnionShape() ? "UnionBuilder" : "StructureBuilder")
                    + "(\"" + CppTypeMapper.cppShapeName(target) + "\").Build()";
            }
            return cachedSchemaExpr(unitPrefix, nestedAdapterName(unitPrefix, target, adapterSuffix));
        }
        if (target.isListShape()) {
            MemberShape item = target.asListShape().get().getMember();
            return "smithy::schema::Schema::ListBuilder(\"" + target.getId().getName() + "\")"
                + ".PutMember(\"member\", "
                + schemaExpr(unitPrefix, model.expectShape(item.getTarget()), "member", model, memberTraits, adapterSuffix)
                + memberTraitArg(memberTraits, item, model) + ").Build()";
        }
        if (target.isMapShape()) {
            MapShape map = target.asMapShape().get();
            return "smithy::schema::Schema::MapBuilder(\"" + target.getId().getName() + "\")"
                + ".PutMember(\"key\", smithy::schema::Schema::CreateString(\"key\")" + memberTraitArg(memberTraits, map.getKey(), model) + ")"
                + ".PutMember(\"value\", "
                + schemaExpr(unitPrefix, model.expectShape(map.getValue().getTarget()), "value", model, memberTraits, adapterSuffix)
                + memberTraitArg(memberTraits, map.getValue(), model) + ").Build()";
        }
        return "smithy::schema::Schema::" + createFactory(target) + "(\"" + id + "\")";
    }

    /** True when {@code shape} can reach itself through its members (directly or via lists / maps / other shapes). */
    private static boolean isRecursive(Shape shape, Model model) {
        Set<ShapeId> seen = new HashSet<>();
        Deque<Shape> pending = new ArrayDeque<>(childShapes(shape, model));
        while (!pending.isEmpty()) {
            Shape next = pending.pop();
            if (next.getId().equals(shape.getId())) {
                return true;
            }
            if (seen.add(next.getId())) {
                pending.addAll(childShapes(next, model));
            }
        }
        return false;
    }

    private static List<Shape> childShapes(Shape shape, Model model) {
        List<Shape> out = new ArrayList<>();
        for (MemberShape m : shape.members()) {
            out.add(model.expectShape(m.getTarget()));
        }
        return out;
    }

    /**
     * Emits the statements writing {@code value} (a C++ expression of {@code target}'s type) to
     * {@code ser} under {@code schema} (a {@code const Schema&} expression). Lists and maps recurse into
     * consumer lambdas; {@code depth} keeps their locals distinct.
     */
    private static void writeValue(CppWriter writer, String indent, String unitPrefix, String ser, String schema,
                                   String value, Shape target, Model model, int depth) {
        if (target.isStructureShape() || target.isUnionShape()) {
            writer.write("$L$L nested$L($L);", indent, nestedSerAdapterName(unitPrefix, target), depth, value);
            writer.write("$L$L.WriteStruct($L, nested$L);", indent, ser, schema, depth);
            return;
        }
        if (target.isListShape()) {
            Shape item = model.expectShape(target.asListShape().get().getMember().getTarget());
            String listSer = "listSerializer" + depth;
            String itemSchema = "itemSchema" + depth;
            String itemVar = "item" + depth;
            writer.write("$L$L.WriteList($L, $L.size(), [&](smithy::schema::ShapeSerializer& $L) {", indent, ser, schema, value, listSer);
            writer.write("$L  const smithy::schema::Schema& $L = *$L.GetMemberTarget().value()->GetMember(\"member\").value();",
                indent, itemSchema, schema);
            writer.write("$L  for (const auto& $L : $L) {", indent, itemVar, value);
            writeOptionalValue(writer, indent + "    ", unitPrefix, listSer, itemSchema, itemVar, item, model, depth,
                target.hasTrait(SparseTrait.class));
            writer.write("$L  }", indent);
            writer.write("$L});", indent);
            return;
        }
        if (target.isMapShape()) {
            MapShape map = target.asMapShape().get();
            Shape key = model.expectShape(map.getKey().getTarget());
            Shape mapValue = model.expectShape(map.getValue().getTarget());
            String mapSer = "mapSerializer" + depth;
            String valueSchema = "valueSchema" + depth;
            String valueSer = "valueSerializer" + depth;
            String entryVar = "entry" + depth;
            String keyExpr = CppTypeMapper.isEnum(key) ? enumName(key, entryVar + ".first") : entryVar + ".first";
            writer.write("$L$L.WriteMap($L, $L.size(), [&](smithy::schema::MapSerializer& $L) {", indent, ser, schema, value, mapSer);
            writer.write("$L  const smithy::schema::Schema& $L = *$L.GetMemberTarget().value()->GetMember(\"value\").value();",
                indent, valueSchema, schema);
            writer.write("$L  for (const auto& $L : $L) {", indent, entryVar, value);
            writer.write("$L    $L.WriteEntry($L, [&](smithy::schema::ShapeSerializer& $L) {", indent, mapSer, keyExpr, valueSer);
            writeOptionalValue(writer, indent + "      ", unitPrefix, valueSer, valueSchema, entryVar + ".second", mapValue,
                model, depth, target.hasTrait(SparseTrait.class));
            writer.write("$L    });", indent);
            writer.write("$L  }", indent);
            writer.write("$L});", indent);
            return;
        }
        if (target.isDocumentShape()) {
            writer.write("$L$L.WriteDocument($L, *smithy::schema::ToSchemaDocument($L));", indent, ser, schema, value);
            return;
        }
        String arg = CppTypeMapper.isEnum(target) ? enumName(target, value) : value;
        writer.write("$L$L.$L($L, $L);", indent, ser, writeMethod(target), schema, arg);
    }

    /** A list item / map value: a {@code @sparse} collection holds {@code Aws::Crt::Optional}s, written as null when empty. */
    private static void writeOptionalValue(CppWriter writer, String indent, String unitPrefix, String ser, String schema,
                                           String value, Shape target, Model model, int depth, boolean sparse) {
        if (!sparse) {
            writeValue(writer, indent, unitPrefix, ser, schema, value, target, model, depth + 1);
            return;
        }
        writer.write("$Lif ($L.has_value()) {", indent, value);
        writeValue(writer, indent + "  ", unitPrefix, ser, schema, "(*" + value + ")", target, model, depth + 1);
        writer.write("$L} else {", indent);
        writer.write("$L  $L.WriteNull($L);", indent, ser, schema);
        writer.write("$L}", indent);
    }

    private static String enumName(Shape enumShape, String value) {
        String enumType = CppTypeMapper.cppShapeName(enumShape);
        return enumType + "Mapper::GetNameFor" + enumType + "(" + value + ")";
    }

    /**
     * Emits {@code GetSchemaSerdeContext()} (operation Action + service Version). Emitted for EVERY
     * request, independent of whether the body is schema-serde-serializable: the response path needs
     * the Action to peel the query {@code <OperationResult>} envelope even when the request body is
     * empty or not-yet-serde-able.
     */
    static void writeOperationContext(CppWriter writer, String className, String action, String version) {
        writer.write("smithy::schema::OperationRequestContext $L::GetSchemaSerdeContext() const {", className);
        writer.write("  return {\"$L\", \"$L\"};", action, version);
        writer.write("}");
    }

    /**
     * {@link #writeOperationContext} for an HTTP-binding protocol: also the {@code @http} URI pattern and the
     * {@code @endpoint} host prefix. A non-empty URI pattern tells the client the protocol owns the URI.
     */
    static void writeOperationContext(CppWriter writer, String className, String action, String version,
                                      String uriPattern, String hostPrefix) {
        writer.write("smithy::schema::OperationRequestContext $L::GetSchemaSerdeContext() const {", className);
        writer.write("  return {\"$L\", \"$L\", $L, $L};", action, version, quoted(uriPattern), quoted(hostPrefix));
        writer.write("}");
    }

    /** Declares the {@code GetSchemaSerdeInput} hook (schema-serde-serializable requests only). */
    static void writeSchemaSerdeMethodDecls(CppWriter writer, String exportMacro) {
        writer.write("$L Aws::UniquePtr<smithy::schema::SerializableStruct> GetSchemaSerdeInput() const override;", exportMacro);
    }

    /** Declares the {@code GetSchemaSerdeContext} hook (emitted for every request). */
    static void writeOperationContextDecl(CppWriter writer, String exportMacro) {
        writer.write("$L smithy::schema::OperationRequestContext GetSchemaSerdeContext() const override;", exportMacro);
    }

    /**
     * Emits, in the result {@code .cpp}: (1) anonymous-namespace {@link
     * smithy.client.schema.SerializableStruct} adapters that <em>deserialize into</em> {@code members}
     * and every structure / union they reach (schema + a {@code From} routing each wire member to its
     * setter); and (2) {@code GetSchemaSerdeOutput()} handing the client-owned protocol a mutable adapter
     * over the result. The client drives {@code ClientProtocol::DeserializeResponse} over it; the shape
     * names no protocol. Dual of {@link #writeSerializePayload}.
     *
     * @param memberTraits the protocol's schema trait entries for a member
     */
    static void writeResultDeser(CppWriter writer, String className, List<MemberShape> members, Model model,
                                 MemberTraits memberTraits, String namespace) {
        // Adapters are declared first and defined after, so mutually recursive shapes can name each other.
        Map<String, Adapter> adapters = new LinkedHashMap<>();
        for (MemberShape m : members) {
            collectNestedAdapters(className, model.expectShape(m.getTarget()), model, adapters, DESER_SUFFIX);
        }
        String rootAdapter = className + "Deserializable";
        adapters.put(rootAdapter, new Adapter(rootAdapter, className, false, members, null));
        modelNamespace(writer, namespace, () -> {
            writer.write("namespace {");
            writeSchemaCache(writer, className);
            for (Adapter adapter : adapters.values()) {
                declareStructDeserAdapter(writer, className, adapter);
            }
            for (Adapter adapter : adapters.values()) {
                defineStructDeserAdapter(writer, className, adapter, model, memberTraits);
            }
            writer.write("}  // namespace");
        });
        writer.write("");
        writeGetSchemaSerdeOutput(writer, className);
    }

    /**
     * Emits {@code body} inside {@code Aws::<namespace>::Model}. The adapters live there (in an anonymous
     * namespace) rather than at file scope: the model {@code .cpp} has {@code using namespace Aws;} and
     * {@code using namespace Aws::<namespace>::Model;}, so at file scope an unqualified shape name such as
     * {@code Endpoint}, {@code Event}, {@code Region} or {@code Model} is ambiguous with a namespace / type of
     * the same name; inside the model namespace the service's own shape is found first.
     */
    private static void modelNamespace(CppWriter writer, String namespace, Runnable body) {
        writer.withNamespace("Aws", () -> writer.withNamespace(namespace, () -> writer.withNamespace("Model", body)));
    }

    private static void writeGetSchemaSerdeOutput(CppWriter writer, String className) {
        writer.write("Aws::UniquePtr<smithy::schema::SerializableStruct> $L::GetSchemaSerdeOutput() {", className);
        writer.write("  return Aws::MakeUnique<$LDeserializable>(\"$LDeserializable\", *this);", className, className);
        writer.write("}");
    }

    private static void declareStructDeserAdapter(CppWriter writer, String unitPrefix, Adapter adapter) {
        boolean empty = adapter.members.isEmpty();
        String schema = cachedSchemaExpr(unitPrefix, adapter.adapterClass);
        writer.write("class $L final : public smithy::schema::SerializableStruct {", adapter.adapterClass);
        writer.write(" public:");
        if (empty) {
            // A member-less shape has nothing to route; no m_obj field to avoid -Wunused-private-field.
            writer.write("  explicit $L($L&) : m_schema($L) {}", adapter.adapterClass, adapter.cppType, schema);
        } else {
            writer.write("  explicit $L($L& obj) : m_obj(obj), m_schema($L) {}", adapter.adapterClass, adapter.cppType, schema);
        }
        writer.write("  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }");
        writer.write("  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}");
        writer.write("  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;");
        writer.write("  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();");
        writer.write(" private:");
        if (!empty) {
            writer.write("  $L& m_obj;", adapter.cppType);
        }
        writer.write("  const std::shared_ptr<const smithy::schema::Schema> m_schema;");
        writer.write("};");
        writer.write("");
    }

    /** Writes the set value of a DynamoDB AttributeValue: exactly one of its union members, chosen by GetType(). */
    private static void writeAttributeValueSerializeMembers(CppWriter writer, String self) {
        writer.write("  if (!m_obj.HasValue()) {");
        writer.write("    return;");
        writer.write("  }");
        writer.write("  switch (m_obj.GetType()) {");
        String[][] scalars = {
            {"STRING", "S", "WriteString", "GetS"}, {"NUMBER", "N", "WriteString", "GetN"},
            {"BYTEBUFFER", "B", "WriteBlob", "GetB"}, {"BOOL", "BOOL", "WriteBoolean", "GetBool"},
            {"NULLVALUE", "NULL", "WriteBoolean", "GetNull"}};
        for (String[] c : scalars) {
            writer.write("    case ValueType::$L:", c[0]);
            writer.write("      serializer.$L(*m_schema->GetMember(\"$L\").value(), m_obj.$L());", c[2], c[1], c[3]);
            writer.write("      break;");
        }
        String[][] sets = {{"STRING_SET", "SS", "WriteString", "GetSS"}, {"NUMBER_SET", "NS", "WriteString", "GetNS"},
            {"BYTEBUFFER_SET", "BS", "WriteBlob", "GetBS"}};
        for (String[] c : sets) {
            writer.write("    case ValueType::$L: {", c[0]);
            writer.write("      const smithy::schema::Schema& setSchema = *m_schema->GetMember(\"$L\").value();", c[1]);
            writer.write("      const auto items = m_obj.$L();", c[3]);
            writer.write("      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {");
            writer.write("        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember(\"member\").value();");
            writer.write("        for (const auto& item : items) {");
            writer.write("          listSerializer.$L(itemSchema, item);", c[2]);
            writer.write("        }");
            writer.write("      });");
            writer.write("      break;");
            writer.write("    }");
        }
        writer.write("    case ValueType::ATTRIBUTE_MAP: {");
        writer.write("      const smithy::schema::Schema& mapSchema = *m_schema->GetMember(\"M\").value();");
        writer.write("      const auto entries = m_obj.GetM();");
        writer.write("      serializer.WriteMap(mapSchema, entries.size(), [&](smithy::schema::MapSerializer& mapSerializer) {");
        writer.write("        const smithy::schema::Schema& valueSchema = *mapSchema.GetMemberTarget().value()->GetMember(\"value\").value();");
        writer.write("        for (const auto& entry : entries) {");
        writer.write("          mapSerializer.WriteEntry(entry.first, [&](smithy::schema::ShapeSerializer& valueSerializer) {");
        writer.write("            if (entry.second) {");
        writer.write("              $L nested(*entry.second);", self);
        writer.write("              valueSerializer.WriteStruct(valueSchema, nested);");
        writer.write("            } else {");
        writer.write("              valueSerializer.WriteNull(valueSchema);");
        writer.write("            }");
        writer.write("          });");
        writer.write("        }");
        writer.write("      });");
        writer.write("      break;");
        writer.write("    }");
        writer.write("    case ValueType::ATTRIBUTE_LIST: {");
        writer.write("      const smithy::schema::Schema& listSchema = *m_schema->GetMember(\"L\").value();");
        writer.write("      const auto items = m_obj.GetL();");
        writer.write("      serializer.WriteList(listSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {");
        writer.write("        const smithy::schema::Schema& itemSchema = *listSchema.GetMemberTarget().value()->GetMember(\"member\").value();");
        writer.write("        for (const auto& item : items) {");
        writer.write("          if (item) {");
        writer.write("            $L nested(*item);", self);
        writer.write("            listSerializer.WriteStruct(itemSchema, nested);");
        writer.write("          } else {");
        writer.write("            listSerializer.WriteNull(itemSchema);");
        writer.write("          }");
        writer.write("        }");
        writer.write("      });");
        writer.write("      break;");
        writer.write("    }");
        writer.write("  }");
    }

    /**
     * Reads one DynamoDB AttributeValue union member into the value. Sets, maps and lists are first set empty, so
     * an empty one still specializes the value to its type (C2J parity).
     */
    private static void writeAttributeValueFrom(CppWriter writer, String self) {
        String[][] scalars = {
            {"S", "ReadString", "SetS"}, {"N", "ReadString", "SetN"}, {"B", "ReadBlob", "SetB"},
            {"BOOL", "ReadBoolean", "SetBool"}, {"NULL", "ReadBoolean", "SetNull"}};
        for (String[] c : scalars) {
            writer.write("  if (memberName == \"$L\") {", c[0]);
            writer.write("    auto value = deserializer.$L(memberSchema);", c[1]);
            writer.write("    if (value.has_value()) {");
            writer.write("      m_obj.$L(*value);", c[2]);
            writer.write("    }");
            writer.write("    return;");
            writer.write("  }");
        }
        String[][] sets = {{"SS", "ReadString", "SetSS", "AddSItem"}, {"NS", "ReadString", "SetNS", "AddNItem"},
            {"BS", "ReadBlob", "SetBS", "AddBItem"}};
        for (String[] c : sets) {
            writer.write("  if (memberName == \"$L\") {", c[0]);
            writer.write("    m_obj.$L({});", c[2]);
            writer.write("    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {");
            writer.write("      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember(\"member\").value();");
            writer.write("      auto item = itemDeserializer.$L(itemSchema);", c[1]);
            writer.write("      if (item.has_value()) {");
            writer.write("        m_obj.$L(*item);", c[3]);
            writer.write("      }");
            writer.write("    });");
            writer.write("    return;");
            writer.write("  }");
        }
        writer.write("  if (memberName == \"M\") {");
        writer.write("    m_obj.SetM({});");
        writer.write("    deserializer.ReadMap(memberSchema, [&](const Aws::String& key, smithy::schema::ShapeDeserializer& valueDeserializer) {");
        writer.write("      auto nested = Aws::MakeShared<AttributeValue>(\"AttributeValue\");");
        writer.write("      $L{*nested}.Deserialize(valueDeserializer);", self);
        writer.write("      m_obj.AddMEntry(key, nested);");
        writer.write("    });");
        writer.write("    return;");
        writer.write("  }");
        writer.write("  if (memberName == \"L\") {");
        writer.write("    m_obj.SetL({});");
        writer.write("    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {");
        writer.write("      auto nested = Aws::MakeShared<AttributeValue>(\"AttributeValue\");");
        writer.write("      $L{*nested}.Deserialize(itemDeserializer);", self);
        writer.write("      m_obj.AddLItem(nested);");
        writer.write("    });");
        writer.write("    return;");
        writer.write("  }");
    }

    private static void defineStructDeserAdapter(CppWriter writer, String unitPrefix, Adapter adapter, Model model,
                                                 MemberTraits memberTraits) {
        if (adapter.members.isEmpty()) {
            writer.write("void $L::From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) {}", adapter.adapterClass);
        } else {
            writer.write("void $L::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {",
                adapter.adapterClass);
            writer.write("  const Aws::String memberName = memberSchema.GetMemberName();");
            if (adapter.dynamoDbAttributeValue) {
                writeAttributeValueFrom(writer, adapter.adapterClass);
            }
            for (MemberShape m : adapter.dynamoDbAttributeValue ? List.<MemberShape>of() : adapter.members) {
                String setter = "m_obj.Set" + methodName(m);
                writer.write("  if (memberName == \"$L\") {", m.getMemberName());
                readValue(writer, "    ", unitPrefix, "deserializer", "memberSchema", model.expectShape(m.getTarget()), model, 0,
                    v -> setter + "(" + v + ");");
                writer.write("    return;");
                writer.write("  }");
            }
            writer.write("}");
        }
        writer.write("");
        writer.write("std::shared_ptr<const smithy::schema::Schema> $L::BuildSchema() {", adapter.adapterClass);
        writer.write("  return smithy::schema::Schema::$L(\"$L\")", adapter.isUnion ? "UnionBuilder" : "StructureBuilder", adapter.cppType);
        for (MemberShape m : adapter.members) {
            writer.write("      .PutMember(\"$L\", $L$L)", m.getMemberName(),
                schemaExpr(unitPrefix, model.expectShape(m.getTarget()), m.getMemberName(), model, memberTraits, DESER_SUFFIX),
                memberTraitArg(memberTraits, m, model));
        }
        writer.write("      .Build();");
        writer.write("}");
        writer.write("");
    }

    /**
     * Emits the statements reading a value of {@code target} from {@code de} under {@code schema} (a
     * {@code const Schema&} expression) and handing it to {@code sink}, which maps the C++ value
     * expression to a statement storing it. Structures / unions read through their own adapter (whose
     * schema carries their members, so a recursive member-less target schema still deserializes); lists
     * and maps recurse into consumer lambdas; {@code depth} keeps their locals distinct.
     */
    private static void readValue(CppWriter writer, String indent, String unitPrefix, String de, String schema,
                                  Shape target, Model model, int depth, Function<String, String> sink) {
        if (target.isStructureShape() || target.isUnionShape()) {
            String var = "nested" + depth;
            writer.write("$L$L $L;", indent, CppTypeMapper.cppShapeName(target), var);
            writer.write("$L$L{$L}.Deserialize($L);", indent, nestedAdapterName(unitPrefix, target, DESER_SUFFIX), var, de);
            writer.write("$L$L", indent, sink.apply("std::move(" + var + ")"));
            return;
        }
        if (target.isListShape()) {
            Shape item = model.expectShape(target.asListShape().get().getMember().getTarget());
            String var = "list" + depth;
            String itemDe = "itemDeserializer" + depth;
            String itemSchema = "itemSchema" + depth;
            writer.write("$L$L $L;", indent, CppTypeMapper.getCppType(target, model), var);
            boolean sparse = target.hasTrait(SparseTrait.class);
            writer.write("$L$L.ReadList($L, [&](smithy::schema::ShapeDeserializer& $L) {", indent, de, schema, itemDe);
            if (readsElementSchema(item, sparse)) {
                writer.write("$L  const smithy::schema::Schema& $L = *$L.GetMemberTarget().value()->GetMember(\"member\").value();",
                    indent, itemSchema, schema);
            }
            readOptionalValue(writer, indent + "  ", unitPrefix, itemDe, itemSchema, item, model, depth,
                sparse, v -> var + ".push_back(" + v + ");", var + ".push_back({});");
            writer.write("$L});", indent);
            writer.write("$L$L", indent, sink.apply("std::move(" + var + ")"));
            return;
        }
        if (target.isMapShape()) {
            MapShape map = target.asMapShape().get();
            Shape key = model.expectShape(map.getKey().getTarget());
            Shape mapValue = model.expectShape(map.getValue().getTarget());
            String var = "map" + depth;
            String keyVar = "key" + depth;
            String valueDe = "valueDeserializer" + depth;
            String valueSchema = "valueSchema" + depth;
            String keyExpr = CppTypeMapper.isEnum(key) ? enumFromName(key, keyVar) : keyVar;
            writer.write("$L$L $L;", indent, CppTypeMapper.getCppType(target, model), var);
            boolean sparse = target.hasTrait(SparseTrait.class);
            writer.write("$L$L.ReadMap($L, [&](const Aws::String& $L, smithy::schema::ShapeDeserializer& $L) {",
                indent, de, schema, keyVar, valueDe);
            if (readsElementSchema(mapValue, sparse)) {
                writer.write("$L  const smithy::schema::Schema& $L = *$L.GetMemberTarget().value()->GetMember(\"value\").value();",
                    indent, valueSchema, schema);
            }
            readOptionalValue(writer, indent + "  ", unitPrefix, valueDe, valueSchema, mapValue, model, depth,
                sparse, v -> var + "[" + keyExpr + "] = " + v + ";", var + "[" + keyExpr + "];");
            writer.write("$L});", indent);
            writer.write("$L$L", indent, sink.apply("std::move(" + var + ")"));
            return;
        }
        String value = "value" + depth;
        if (target.isDocumentShape()) {
            writer.write("$Lauto $L = $L.ReadDocument($L);", indent, value, de, schema);
            writer.write("$Lif ($L) {", indent, value);
            writer.write("$L  $L", indent, sink.apply("smithy::schema::ToUtilsDocument(*" + value + ")"));
            writer.write("$L}", indent);
            return;
        }
        writer.write("$Lauto $L = $L.$L($L);", indent, value, de, readMethod(target), schema);
        writer.write("$Lif ($L.has_value()) {", indent, value);
        writer.write("$L  $L", indent, sink.apply(CppTypeMapper.isEnum(target) ? enumFromName(target, "*" + value) : "*" + value));
        writer.write("$L}", indent);
    }

    /**
     * True when reading a list item / map value names its element schema: a structure / union reads
     * through its own adapter's schema, so only a sparse one (whose null is consumed via the schema) does.
     */
    private static boolean readsElementSchema(Shape element, boolean sparse) {
        return sparse || !(element.isStructureShape() || element.isUnionShape());
    }

    /**
     * A list item / map value: in a {@code @sparse} collection a wire null becomes an empty
     * {@code Aws::Crt::Optional} ({@code nullStatement}); reading it as a string consumes the null.
     */
    private static void readOptionalValue(CppWriter writer, String indent, String unitPrefix, String de, String schema,
                                          Shape target, Model model, int depth, boolean sparse,
                                          Function<String, String> sink, String nullStatement) {
        if (!sparse) {
            readValue(writer, indent, unitPrefix, de, schema, target, model, depth + 1, sink);
            return;
        }
        writer.write("$Lif ($L.IsNull()) {", indent, de);
        writer.write("$L  $L.ReadString($L);", indent, de, schema);
        writer.write("$L  $L", indent, nullStatement);
        writer.write("$L} else {", indent);
        readValue(writer, indent + "  ", unitPrefix, de, schema, target, model, depth + 1, sink);
        writer.write("$L}", indent);
    }

    private static String enumFromName(Shape enumShape, String name) {
        String enumType = CppTypeMapper.cppShapeName(enumShape);
        return enumType + "Mapper::Get" + enumType + "ForName(" + name + ")";
    }

    // --- request / result wiring shared by the rest-json, rest-xml and awsJson traits ----------------

    /** True when the request class declares {@code GetSchemaSerdeInput}: HTTP-bound, or a non-empty serializable body. */
    static boolean emitsSchemaSerdeInput(ProtocolTraits traits, StructureShape shape, OperationShape operation, Model model) {
        return traits.bindsRequestViaSchemaSerde(shape, operation, model)
            || RequestBindings.nonEmptySchemaSerializable(RequestBindings.bodyMembers(shape), model);
    }

    /**
     * Emits the request's {@code SerializePayload} / {@code GetSchemaSerdeInput} / {@code GetSchemaSerdeContext}.
     * An HTTP-bound request hands every member to the protocol (with the URI pattern and host prefix); otherwise a
     * non-empty serializable body is handed over, else {@code SerializePayload} returns {@code stubPayload}.
     *
     * @return true when the request is HTTP-bound (the protocol places the headers and query string too)
     */
    static boolean writeRequestSchemaSerde(CppWriter writer, ProtocolTraits traits, String className,
                                           StructureShape shape, OperationShape operation, ServiceShape service,
                                           Model model, MemberTraits memberTraits, String stubPayload,
                                           String namespace) {
        String action = operation.getId().getName();
        if (traits.bindsRequestViaSchemaSerde(shape, operation, model)) {
            writeSerializePayload(writer, className, RequestBindings.members(shape), model, memberTraits, namespace);
            writeOperationContext(writer, className, action, service.getVersion(),
                ProtocolTraits.uriPattern(operation), ProtocolTraits.hostPrefix(operation));
            return true;
        }
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            List<MemberShape> body = RequestBindings.bodyMembers(shape);
            if (RequestBindings.nonEmptySchemaSerializable(body, model)) {
                writeSerializePayload(writer, className, body, model, memberTraits, namespace);
            } else {
                writer.write("Aws::String $L::SerializePayload() const { return $L; }", className, stubPayload);
            }
            writeOperationContext(writer, className, action, service.getVersion());
        }
        return false;
    }

    /** True when the result class declares {@code GetSchemaSerdeOutput}: HTTP-bound, or a non-empty deserializable body. */
    static boolean emitsSchemaSerdeOutput(ProtocolTraits traits, StructureShape shape, Model model) {
        return traits.bindsResultViaSchemaSerde(shape, model)
            || RequestBindings.nonEmptySchemaSerializable(RequestBindings.resultBodyMembers(shape), model);
    }

    /** Emits the result's {@code GetSchemaSerdeOutput} adapters, gated as {@link #emitsSchemaSerdeOutput}. */
    static void writeResultSchemaSerde(CppWriter writer, ProtocolTraits traits, String className, StructureShape shape,
                                       Model model, MemberTraits memberTraits, String namespace) {
        List<MemberShape> members = traits.bindsResultViaSchemaSerde(shape, model)
            ? RequestBindings.resultMembers(shape) : RequestBindings.resultBodyMembers(shape);
        if (RequestBindings.nonEmptySchemaSerializable(members, model)) {
            writer.write("");
            writeResultDeser(writer, className, members, model, memberTraits, namespace);
        }
    }

    /** Declares the client-driven result-deserialization hook in the result header. */
    static void writeResultDeserMethodDecls(CppWriter writer, String exportMacro) {
        writer.write("$L Aws::UniquePtr<smithy::schema::SerializableStruct> GetSchemaSerdeOutput();", exportMacro);
    }

    /** {@code ShapeDeserializer::Read*} method for a scalar target. byte/short/intEnum read as Integer; enums as strings. */
    private static String readMethod(Shape target) {
        switch (target.getType()) {
            case BOOLEAN: return "ReadBoolean";
            case BYTE:
            case SHORT:
            case INTEGER:
            case INT_ENUM: return "ReadInteger";
            case LONG: return "ReadLong";
            // C2J maps both float and double to C++ double.
            case FLOAT:
            case DOUBLE: return "ReadDouble";
            case ENUM:
            case STRING: return "ReadString";
            case BLOB: return "ReadBlob";
            case TIMESTAMP: return "ReadTimestamp";
            default:
                throw new IllegalArgumentException("Unsupported scalar ShapeType for schema serde: " + target.getType());
        }
    }

    private static String methodName(MemberShape m) {
        return CppNames.capitalize(m.getMemberName());
    }

    /** {@code Schema::Create*} factory for a scalar target. byte/short map to Integer (C2J parity). */
    private static String createFactory(Shape target) {
        switch (target.getType()) {
            case BOOLEAN: return "CreateBoolean";
            case BYTE:
            case SHORT:
            case INTEGER: return "CreateInteger";
            case INT_ENUM: return "CreateIntEnum";
            case LONG: return "CreateLong";
            // C2J maps both float and double to C++ double, so the accessor returns double;
            // emit a Double schema/write to avoid a narrowing conversion.
            case FLOAT:
            case DOUBLE: return "CreateDouble";
            case ENUM: return "CreateEnum";
            case STRING: return CppTypeMapper.isEnum(target) ? "CreateEnum" : "CreateString";
            case BLOB: return "CreateBlob";
            case TIMESTAMP: return "CreateTimestamp";
            case DOCUMENT: return "CreateDocument";
            default:
                throw new IllegalArgumentException("Unsupported scalar ShapeType for schema serde: " + target.getType());
        }
    }

    /** {@code ShapeSerializer::Write*} method for a scalar target. byte/short/intEnum widen to Integer; enums are strings. */
    private static String writeMethod(Shape target) {
        switch (target.getType()) {
            case BOOLEAN: return "WriteBoolean";
            case BYTE:
            case SHORT:
            case INTEGER:
            case INT_ENUM: return "WriteInteger";
            case LONG: return "WriteLong";
            case FLOAT:
            case DOUBLE: return "WriteDouble";
            case ENUM:
            case STRING: return "WriteString";
            case BLOB: return "WriteBlob";
            case TIMESTAMP: return "WriteTimestamp";
            default:
                throw new IllegalArgumentException("Unsupported scalar ShapeType for schema serde: " + target.getType());
        }
    }
}
