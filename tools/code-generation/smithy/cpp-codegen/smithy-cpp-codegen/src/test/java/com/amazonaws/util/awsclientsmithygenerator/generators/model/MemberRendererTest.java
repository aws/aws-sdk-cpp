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
}
