/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BooleanShape;
import software.amazon.smithy.model.shapes.IntegerShape;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.*;

class MemberRendererTest {

    @Test
    void renderPublicSection_stringMember_producesGetSetWith() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Name", str.getId())
            .build();
        Model model = Model.builder().addShapes(str, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("inline const Aws::String& GetName() const"), "Missing getter: " + output);
        assertTrue(output.contains("inline bool NameHasBeenSet() const"), "Missing HasBeenSet: " + output);
        assertTrue(output.contains("void SetName(NameT&& value)"), "Missing setter: " + output);
        assertTrue(output.contains("MyShape& WithName(NameT&& value)"), "Missing With: " + output);
    }

    @Test
    void renderPublicSection_lowercaseMember_capitalizesMethodNames() {
        // Smithy member names frequently start lowercase (e.g. "extendedKeyUsage").
        // The legacy C2J convention capitalizes the accessor method names and template
        // params while keeping the decapitalized field name (m_extendedKeyUsage).
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("extendedKeyUsage", str.getId())
            .build();
        Model model = Model.builder().addShapes(str, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("GetExtendedKeyUsage() const"), "Getter should be capitalized: " + output);
        assertTrue(output.contains("ExtendedKeyUsageHasBeenSet() const"), "HasBeenSet should be capitalized: " + output);
        assertTrue(output.contains("SetExtendedKeyUsage(ExtendedKeyUsageT&& value)"), "Setter should be capitalized: " + output);
        assertTrue(output.contains("WithExtendedKeyUsage(ExtendedKeyUsageT&& value)"), "With should be capitalized: " + output);
        assertTrue(output.contains("m_extendedKeyUsage = std::forward"), "Field should stay decapitalized: " + output);
        // Must not emit the raw lowercase-first method names.
        assertFalse(output.contains("GetextendedKeyUsage"), "Must not emit lowercase getter: " + output);
        assertFalse(output.contains("WithextendedKeyUsage"), "Must not emit lowercase With: " + output);
    }

    @Test
    void renderPublicSection_listMember_producesAddMethod() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        ListShape list = ListShape.builder()
            .id("com.example#StringList")
            .member(MemberShape.builder().id("com.example#StringList$member").target("com.example#String").build())
            .build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Items", list.getId())
            .build();
        Model model = Model.builder().addShapes(str, list, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("MyShape& AddItems(ItemsT&& value)"), "Missing Add: " + output);
        assertTrue(output.contains("m_items.emplace_back(std::forward<ItemsT>(value))"), "Missing emplace_back: " + output);
    }

    @Test
    void renderPublicSection_listMember_addTemplateDefaultIsElementType() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        ListShape list = ListShape.builder()
            .id("com.example#StringList")
            .member(MemberShape.builder().id("com.example#StringList$member").target("com.example#String").build())
            .build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Items", list.getId())
            .build();
        Model model = Model.builder().addShapes(str, list, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        // The Add method's template default should be the element type, not the list type
        assertTrue(output.contains("template <typename ItemsT = Aws::String>\nMyShape& AddItems"),
            "Add template default should be element type: " + output);
    }

    @Test
    void renderPublicSection_listOfPrimitive_addIsByValue() {
        // C2J emits by-value Add for lists of primitive OR enum elements; only non-primitive,
        // non-enum elements get the templated forwarding Add.
        IntegerShape intShape = IntegerShape.builder().id("com.example#Integer").build();
        ListShape list = ListShape.builder()
            .id("com.example#IntList")
            .member(MemberShape.builder().id("com.example#IntList$member").target("com.example#Integer").build())
            .build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Counts", list.getId())
            .build();
        Model model = Model.builder().addShapes(intShape, list, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("inline MyShape& AddCounts(int value)"),
            "List of primitive should get by-value Add: " + output);
        assertTrue(output.contains("m_counts.push_back(value)"),
            "By-value list Add should push_back directly: " + output);
        assertFalse(output.contains("AddCounts(CountsT&&"),
            "Must not emit templated Add for primitive element: " + output);
    }

    @Test
    void renderPublicSection_mapWithPrimitiveValue_addIsByValue() {
        // C2J emits a by-value Add for maps unless BOTH key and value are non-primitive
        // AND non-enum. Here value is int (primitive), so Add must be a plain by-value overload.
        StringShape str = StringShape.builder().id("com.example#String").build();
        IntegerShape intShape = IntegerShape.builder().id("com.example#Integer").build();
        MapShape map = MapShape.builder()
            .id("com.example#SummaryMap")
            .key(MemberShape.builder().id("com.example#SummaryMap$key").target("com.example#String").build())
            .value(MemberShape.builder().id("com.example#SummaryMap$value").target("com.example#Integer").build())
            .build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("SummaryMap", map.getId())
            .build();
        Model model = Model.builder().addShapes(str, intShape, map, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("MyShape& AddSummaryMap(Aws::String key, int value)"),
            "Map with primitive value should get by-value Add: " + output);
        assertTrue(output.contains("m_summaryMap.emplace(key, value)"),
            "By-value Add should emplace directly: " + output);
        assertFalse(output.contains("AddSummaryMap(SummaryMapKeyT&&"),
            "Must not emit templated forwarding Add when value is primitive: " + output);
    }

    @Test
    void renderPublicSection_mapWithNonPrimitiveKeyAndValue_addIsTemplated() {
        // Both key (String) and value (struct) are non-primitive/non-enum -> templated Add.
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape valueStruct = StructureShape.builder().id("com.example#ValueStruct").build();
        MapShape map = MapShape.builder()
            .id("com.example#ThingMap")
            .key(MemberShape.builder().id("com.example#ThingMap$key").target("com.example#String").build())
            .value(MemberShape.builder().id("com.example#ThingMap$value").target("com.example#ValueStruct").build())
            .build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("ThingMap", map.getId())
            .build();
        Model model = Model.builder().addShapes(str, valueStruct, map, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("MyShape& AddThingMap(ThingMapKeyT&& key, ThingMapValueT&& value)"),
            "Map with non-primitive key/value should get templated Add: " + output);
        assertTrue(output.contains("m_thingMap.emplace(std::forward<ThingMapKeyT>(key), std::forward<ThingMapValueT>(value))"),
            "Templated Add should perfect-forward: " + output);
    }

    @Test
    void renderPublicSection_documentMember_getterReturnsDocumentViewByValue() {
        // C2J special-cases the document getter to return Aws::Utils::DocumentView by value
        // (ModelClassMembersAndInlines.vm: $returnType = "Aws::Utils::DocumentView"), while the
        // field and setter stay Aws::Utils::Document.
        software.amazon.smithy.model.shapes.DocumentShape doc =
            software.amazon.smithy.model.shapes.DocumentShape.builder().id("com.example#Doc").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("json", doc.getId())
            .build();
        Model model = Model.builder().addShapes(doc, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("inline Aws::Utils::DocumentView GetJson() const { return m_json; }"),
            "Document getter must return DocumentView by value: " + output);
        assertFalse(output.contains("const Aws::Utils::Document& GetJson"),
            "Document getter must not return const Document&: " + output);
        // Setter still forwards an Aws::Utils::Document.
        assertTrue(output.contains("template <typename JsonT = Aws::Utils::Document>"),
            "Document setter template default must be Aws::Utils::Document: " + output);
    }

    @Test
    void renderPublicSection_documentMember_privateFieldIsDocument() {
        software.amazon.smithy.model.shapes.DocumentShape doc =
            software.amazon.smithy.model.shapes.DocumentShape.builder().id("com.example#Doc").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("json", doc.getId())
            .build();
        Model model = Model.builder().addShapes(doc, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPrivateSection(writer, shape, model);
        String output = writer.toString();
        assertTrue(output.contains("Aws::Utils::Document m_json;"),
            "Document field must be Aws::Utils::Document: " + output);
    }

    @Test
    void renderPublicSection_sensitiveBlobMember_usesCryptoBuffer() {
        // A @sensitive blob member renders CryptoBuffer in the getter, setter template default,
        // and (via renderPrivateSection) the field — matching C2J.
        software.amazon.smithy.model.shapes.BlobShape sensitive =
            software.amazon.smithy.model.shapes.BlobShape.builder().id("com.example#PartBody")
                .addTrait(new software.amazon.smithy.model.traits.SensitiveTrait()).build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("bytes", sensitive.getId())
            .build();
        Model model = Model.builder().addShapes(sensitive, shape).build();
        CppWriter pub = new CppWriter();
        MemberRenderer.renderPublicSection(pub, shape, model, "AWS_TEST_API", "MyShape");
        String pubOut = pub.toString();
        assertTrue(pubOut.contains("inline const Aws::Utils::CryptoBuffer& GetBytes() const"),
            "Sensitive blob getter must be CryptoBuffer: " + pubOut);
        assertTrue(pubOut.contains("template <typename BytesT = Aws::Utils::CryptoBuffer>"),
            "Sensitive blob setter template default must be CryptoBuffer: " + pubOut);
        CppWriter priv = new CppWriter();
        MemberRenderer.renderPrivateSection(priv, shape, model);
        assertTrue(priv.toString().contains("Aws::Utils::CryptoBuffer m_bytes{};"),
            "Sensitive blob field must be CryptoBuffer: " + priv);
    }

    @Test
    void renderPublicSection_primitiveGetter_returnsByValue() {
        IntegerShape intShape = IntegerShape.builder().id("com.example#Integer").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Count", intShape.getId())
            .build();
        Model model = Model.builder().addShapes(intShape, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        // Primitive getter should return by value, not const ref
        assertTrue(output.contains("inline int GetCount() const"), "Primitive should return by value: " + output);
        assertFalse(output.contains("inline const int&"), "Should NOT return const ref for primitives: " + output);
    }

    @Test
    void renderPublicSection_doxygenGroupMarkers() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Name", str.getId())
            .build();
        Model model = Model.builder().addShapes(str, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPublicSection(writer, shape, model, "AWS_TEST_API", "MyShape");
        String output = writer.toString();
        assertTrue(output.contains("///@{"), "Missing doxygen open: " + output);
        assertTrue(output.contains("///@}"), "Missing doxygen close: " + output);
    }

    @Test
    void renderPrivateSection_primitiveMembers_haveDefaultValues() {
        IntegerShape intShape = IntegerShape.builder().id("com.example#Integer").build();
        BooleanShape boolShape = BooleanShape.builder().id("com.example#Boolean").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Count", intShape.getId())
            .addMember("Enabled", boolShape.getId())
            .build();
        Model model = Model.builder().addShapes(intShape, boolShape, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPrivateSection(writer, shape, model);
        String output = writer.toString();
        assertTrue(output.contains("int m_count{0}"), "Missing int default: " + output);
        assertTrue(output.contains("bool m_enabled{false}"), "Missing bool default: " + output);
        assertTrue(output.contains("bool m_countHasBeenSet = false"), "Missing count HasBeenSet flag: " + output);
        assertTrue(output.contains("bool m_enabledHasBeenSet = false"), "Missing enabled HasBeenSet flag: " + output);
    }

    @Test
    void renderPrivateSection_nonPrimitiveMembers_noDefaultValue() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Name", str.getId())
            .build();
        Model model = Model.builder().addShapes(str, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPrivateSection(writer, shape, model);
        String output = writer.toString();
        assertTrue(output.contains("Aws::String m_name;"), "Missing string field: " + output);
        assertFalse(output.contains("m_name{"), "String should NOT have brace init: " + output);
        assertTrue(output.contains("bool m_nameHasBeenSet = false"), "Missing HasBeenSet flag: " + output);
    }

    @Test
    void renderPrivateSection_idempotencyTokenMember_initializesWithPseudoRandomUuidAndHasBeenSetTrue() {
        // C2J auto-populates @idempotencyToken members with a random UUID at construction
        // (ServiceClientModelHeaderMemberDeclaration.vm) and flags them as already-set
        // (ModelClassMembersAndInlines.vm), so a caller who omits the token still gets
        // idempotent behavior. The initializer and the =true flag must both be emitted.
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember(MemberShape.builder()
                .id("com.example#MyShape$clientToken").target("com.example#String")
                .addTrait(new software.amazon.smithy.model.traits.IdempotencyTokenTrait())
                .build())
            .build();
        Model model = Model.builder().addShapes(str, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPrivateSection(writer, shape, model);
        String output = writer.toString();
        assertTrue(output.contains("Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};"),
            "Idempotency token should be initialized with PseudoRandomUUID: " + output);
        assertTrue(output.contains("bool m_clientTokenHasBeenSet = true;"),
            "Idempotency token HasBeenSet flag should default to true: " + output);
    }

    @Test
    void renderPrivateDataMembersExcluding_idempotencyTokenMember_initializesWithPseudoRandomUuid() {
        // The streaming-result / event-stream path routes through the *Excluding overloads;
        // they must apply the same idempotency-token initializer as the primary path.
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember(MemberShape.builder()
                .id("com.example#MyShape$clientToken").target("com.example#String")
                .addTrait(new software.amazon.smithy.model.traits.IdempotencyTokenTrait())
                .build())
            .addMember("other", str.getId())
            .build();
        Model model = Model.builder().addShapes(str, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPrivateDataMembersExcluding(writer, shape, model, "other");
        String dataOut = writer.toString();
        assertTrue(dataOut.contains("Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};"),
            "Excluding overload should also emit the idempotency-token initializer: " + dataOut);
        CppWriter flagWriter = new CppWriter();
        MemberRenderer.renderPrivateHasBeenSetFlagsExcluding(flagWriter, shape, model, "other");
        String flagOut = flagWriter.toString();
        assertTrue(flagOut.contains("bool m_clientTokenHasBeenSet = true;"),
            "Excluding overload should also emit HasBeenSet = true: " + flagOut);
    }

    @Test
    void renderPrivateSection_hasBeenSetFlagsGroupedAtEnd() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        IntegerShape intShape = IntegerShape.builder().id("com.example#Integer").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Name", str.getId())
            .addMember("Count", intShape.getId())
            .build();
        Model model = Model.builder().addShapes(str, intShape, shape).build();
        CppWriter writer = new CppWriter();
        MemberRenderer.renderPrivateSection(writer, shape, model);
        String output = writer.toString();
        // HasBeenSet flags should come after data members
        int nameFieldPos = output.indexOf("Aws::String m_name;");
        int countFieldPos = output.indexOf("int m_count{0};");
        int nameHasBeenSetPos = output.indexOf("bool m_nameHasBeenSet = false;");
        int countHasBeenSetPos = output.indexOf("bool m_countHasBeenSet = false;");
        assertTrue(nameFieldPos < nameHasBeenSetPos, "Data members should precede HasBeenSet flags");
        assertTrue(countFieldPos < countHasBeenSetPos, "Data members should precede HasBeenSet flags");
    }

    @Test
    void renderRequestIdAccessors_emitsTemplatedGetSetWith() {
        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter writer =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        MemberRenderer.renderRequestIdAccessors(writer, "GetFooResult");
        String out = writer.toString();
        assertTrue(out.contains("inline const Aws::String& GetRequestId() const { return m_requestId; }"));
        assertTrue(out.contains("template <typename RequestIdT = Aws::String>"));
        assertTrue(out.contains("void SetRequestId(RequestIdT&& value)"));
        assertTrue(out.contains("m_requestIdHasBeenSet = true;"));
        assertTrue(out.contains("m_requestId = std::forward<RequestIdT>(value);"));
        assertTrue(out.contains("GetFooResult& WithRequestId(RequestIdT&& value)"));
        assertTrue(out.contains("SetRequestId(std::forward<RequestIdT>(value));"));
        assertTrue(out.contains("///@{"));
        assertTrue(out.contains("///@}"));
    }

    @Test
    void render_withOptions_matchesRenderPublicSection() {
        // Build the same shape twice and assert the options-object path equals the legacy path.
        software.amazon.smithy.model.shapes.StringShape str =
            software.amazon.smithy.model.shapes.StringShape.builder().id("com.example#String").build();
        software.amazon.smithy.model.shapes.StructureShape shape =
            software.amazon.smithy.model.shapes.StructureShape.builder()
                .id("com.example#Foo")
                .addMember("ShardId", str.getId())
                .build();
        software.amazon.smithy.model.Model model =
            software.amazon.smithy.model.Model.builder().addShapes(str, shape).build();

        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter legacy =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        MemberRenderer.renderPublicSection(legacy, shape, model, "AWS_EXAMPLE_API", "Foo");

        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter viaOpts =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        MemberRenderer.render(viaOpts, shape, model,
            new MemberOptions().exportMacro("AWS_EXAMPLE_API").className("Foo").emitHasBeenSet(true));

        assertEquals(legacy.toString(), viaOpts.toString());
    }
}
