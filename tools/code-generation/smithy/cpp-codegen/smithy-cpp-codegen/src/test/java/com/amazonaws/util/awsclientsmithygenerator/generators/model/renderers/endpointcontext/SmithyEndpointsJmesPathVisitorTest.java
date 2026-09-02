/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.endpointcontext;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

class SmithyEndpointsJmesPathVisitorTest {

    private static final String STR = "com.example#String";

    private static StringShape str() {
        return StringShape.builder().id(STR).build();
    }

    private static String render(Model model, StructureShape input, String jmesPath) {
        return JmespathExpression.parse(jmesPath)
            .accept(new SmithyEndpointsJmesPathVisitor(model, input, "(*this)"))
            .statements();
    }

    /** Collapse all runs of whitespace to a single space and trim, so comparisons ignore
     *  indentation/newlines (clang-format normalizes generated whitespace downstream). */
    private static String normalizeWs(String s) {
        return s.replaceAll("\\s+", " ").trim();
    }

    @Test
    void keysPattern() {
        // Map<String, String> under a request struct member "RequestItems".
        MapShape reqMap = MapShape.builder()
            .id("com.example#RequestItemsMap")
            .key(MemberShape.builder().id("com.example#RequestItemsMap$key").target(STR).build())
            .value(MemberShape.builder().id("com.example#RequestItemsMap$value").target(STR).build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#Req")
            .addMember("RequestItems", reqMap.getId()).build();
        Model model = Model.builder().addShapes(str(), reqMap, input).build();

        String expected =
            "auto& RequestItemsElems = (*this).GetRequestItems();\n"
          + "for (auto& keysElem : RequestItemsElems)\n"
          + "{\n"
          + "\tresult.emplace_back(keysElem.first);\n"
          + "}\n";
        assertEquals(normalizeWs(expected), normalizeWs(render(model, input, "keys(RequestItems)")));
    }

    @Test
    void dotAccessPattern() {
        // Struct with member TableCreationParameters (Struct with member TableName: String).
        StructureShape tcp = StructureShape.builder()
            .id("com.example#TableCreationParameters")
            .addMember("TableName", ShapeId.from(STR)).build();
        StructureShape input = StructureShape.builder()
            .id("com.example#Req")
            .addMember("TableCreationParameters", tcp.getId()).build();
        Model model = Model.builder().addShapes(str(), tcp, input).build();

        String expected =
            "auto& TableCreationParametersElems = (*this).GetTableCreationParameters().GetTableName();\n"
          + "result.emplace_back(TableCreationParametersElems);\n";
        assertEquals(normalizeWs(expected), normalizeWs(render(model, input, "TableCreationParameters.TableName")));
    }

    @Test
    void projectionPattern() {
        // List<Struct<Get:Struct<TableName:String>>> under member TransactItems.
        StructureShape getStruct = StructureShape.builder()
            .id("com.example#Get").addMember("TableName", ShapeId.from(STR)).build();
        StructureShape item = StructureShape.builder()
            .id("com.example#Item").addMember("Get", getStruct.getId()).build();
        ListShape list = ListShape.builder()
            .id("com.example#Items")
            .member(MemberShape.builder().id("com.example#Items$member").target(item.getId()).build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#Req").addMember("TransactItems", list.getId()).build();
        Model model = Model.builder().addShapes(str(), getStruct, item, list, input).build();

        String expected =
            "auto& TransactItemsElems = (*this).GetTransactItems();\n"
          + "for (auto& TransactItemsElem : TransactItemsElems)\n"
          + "{\n"
          + "\tauto& GetElems = TransactItemsElem.GetGet().GetTableName();\n"
          + "\tresult.emplace_back(GetElems);\n"
          + "}\n";
        assertEquals(normalizeWs(expected), normalizeWs(render(model, input, "TransactItems[*].Get.TableName")));
    }

    @Test
    void multiSelectListFlattenPattern() {
        // Same list-of-Item as projectionPattern but Item has four sibling struct members.
        StructureShape cc = StructureShape.builder().id("com.example#CC").addMember("TableName", ShapeId.from(STR)).build();
        StructureShape put = StructureShape.builder().id("com.example#Put").addMember("TableName", ShapeId.from(STR)).build();
        StructureShape del = StructureShape.builder().id("com.example#Delete").addMember("TableName", ShapeId.from(STR)).build();
        StructureShape upd = StructureShape.builder().id("com.example#Update").addMember("TableName", ShapeId.from(STR)).build();
        StructureShape item = StructureShape.builder()
            .id("com.example#Item")
            .addMember("ConditionCheck", cc.getId())
            .addMember("Put", put.getId())
            .addMember("Delete", del.getId())
            .addMember("Update", upd.getId()).build();
        ListShape list = ListShape.builder()
            .id("com.example#Items")
            .member(MemberShape.builder().id("com.example#Items$member").target(item.getId()).build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#Req").addMember("TransactItems", list.getId()).build();
        Model model = Model.builder().addShapes(str(), cc, put, del, upd, item, list, input).build();

        String expected =
            "auto& TransactItemsElems = (*this).GetTransactItems();\n"
          + "for (auto& TransactItemsElem : TransactItemsElems)\n"
          + "{\n"
          + "\tauto& ConditionCheckElems = TransactItemsElem.GetConditionCheck().GetTableName();\n"
          + "\tresult.emplace_back(ConditionCheckElems);\n"
          + "\tauto& PutElems = TransactItemsElem.GetPut().GetTableName();\n"
          + "\tresult.emplace_back(PutElems);\n"
          + "\tauto& DeleteElems = TransactItemsElem.GetDelete().GetTableName();\n"
          + "\tresult.emplace_back(DeleteElems);\n"
          + "\tauto& UpdateElems = TransactItemsElem.GetUpdate().GetTableName();\n"
          + "\tresult.emplace_back(UpdateElems);\n"
          + "}\n";
        String actual = render(model, input,
            "TransactItems[*].[ConditionCheck.TableName, Put.TableName, Delete.TableName, Update.TableName][]");
        assertEquals(normalizeWs(expected), normalizeWs(actual));
    }

    @Test
    void unsupportedNode_throws() {
        // An unsupported node (filter projection) must throw UnsupportedOperationException (from
        // UnsupportedExpressionVisitor): fail fast on unrecognized constructs.
        StructureShape input = StructureShape.builder()
            .id("com.example#Req").addMember("x", ShapeId.from(STR)).build();
        Model model = Model.builder().addShapes(str(), input).build();

        UnsupportedOperationException ex = assertThrows(UnsupportedOperationException.class,
            () -> render(model, input, "x[?y == 'z']"));
        // Only assert the prefix — the node-type suffix is intentionally not pinned.
        assertTrue(ex.getMessage().startsWith("Unsupported expression:"));
    }
}
