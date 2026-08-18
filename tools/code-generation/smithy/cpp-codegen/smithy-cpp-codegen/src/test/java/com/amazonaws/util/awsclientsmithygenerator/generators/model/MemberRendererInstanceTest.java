/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.IntegerShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.*;

class MemberRendererInstanceTest {

    private static Model model(StructureShape shape, software.amazon.smithy.model.shapes.Shape... rest) {
        Model.Builder b = Model.builder().addShape(shape);
        for (software.amazon.smithy.model.shapes.Shape s : rest) {
            b.addShape(s);
        }
        return b.build();
    }

    @Test
    void forStructure_publicAccessors_emitsHasBeenSet() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape").addMember("Name", str.getId()).build();
        CppWriter w = new CppWriter();
        MemberRenderer.forStructure(model(shape, str), shape, "MyShape").renderPublicAccessors(w);
        String out = w.toString();
        assertTrue(out.contains("inline const Aws::String& GetName() const"), out);
        assertTrue(out.contains("inline bool NameHasBeenSet() const"), out);
        assertTrue(out.contains("MyShape& WithName(NameT&& value)"), out);
    }

    @Test
    void forResult_publicAccessors_omitsHasBeenSet() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyResult").addMember("Name", str.getId()).build();
        CppWriter w = new CppWriter();
        MemberRenderer.forResult(model(shape, str), shape, "MyResult").renderPublicAccessors(w);
        String out = w.toString();
        assertTrue(out.contains("inline const Aws::String& GetName() const"), out);
        assertFalse(out.contains("NameHasBeenSet() const"), "results must not emit HasBeenSet: " + out);
    }

    @Test
    void excluding_dropsMemberFromAllFragments() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape")
            .addMember("Keep", str.getId())
            .addMember("Drop", str.getId())
            .build();
        MemberRenderer r = MemberRenderer.forResult(model(shape, str), shape, "MyShape").excluding("Drop");
        CppWriter pub = new CppWriter();  r.renderPublicAccessors(pub);
        CppWriter data = new CppWriter(); r.renderDataMembers(data);
        CppWriter flags = new CppWriter(); r.renderHasBeenSetFlags(flags);
        assertFalse(pub.toString().contains("GetDrop"), pub.toString());
        assertFalse(data.toString().contains("m_drop"), data.toString());
        assertFalse(flags.toString().contains("m_dropHasBeenSet"), flags.toString());
        assertTrue(pub.toString().contains("GetKeep"), pub.toString());
    }

    @Test
    void wideIntegers_widensIntegerDataMemberToInt64() {
        IntegerShape intShape = IntegerShape.builder().id("com.example#Integer").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape").addMember("Count", intShape.getId()).build();
        CppWriter narrow = new CppWriter();
        MemberRenderer.forStructure(model(shape, intShape), shape, "MyShape").renderDataMembers(narrow);
        CppWriter wide = new CppWriter();
        MemberRenderer.forStructure(model(shape, intShape), shape, "MyShape")
            .wideIntegers(true).renderDataMembers(wide);
        assertTrue(narrow.toString().contains("int m_count{0};"), narrow.toString());
        assertTrue(wide.toString().contains("long long m_count{0};") || wide.toString().contains("int64_t m_count{0};"),
            "wideIntegers must widen the integer field: " + wide.toString());
    }

    @Test
    void renderPrivateSection_dataMembersPrecedeHasBeenSetFlags() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape shape = StructureShape.builder()
            .id("com.example#MyShape").addMember("Name", str.getId()).build();
        CppWriter w = new CppWriter();
        MemberRenderer.forStructure(model(shape, str), shape, "MyShape").renderPrivateSection(w);
        String out = w.toString();
        assertTrue(out.indexOf("Aws::String m_name;") < out.indexOf("bool m_nameHasBeenSet = false;"), out);
    }
}
