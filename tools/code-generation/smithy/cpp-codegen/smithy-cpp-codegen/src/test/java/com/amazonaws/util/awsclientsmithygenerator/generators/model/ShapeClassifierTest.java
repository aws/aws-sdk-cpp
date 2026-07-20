/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.Classification;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.*;
import software.amazon.smithy.aws.traits.ServiceTrait;

import static org.junit.jupiter.api.Assertions.*;

class ShapeClassifierTest {

    private Model buildSimpleModel() {
        // Service with one operation: GetItem(GetItemRequest) -> GetItemResponse
        // Plus a sub-object: ItemData
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape itemData = StructureShape.builder()
            .id("com.example#ItemData")
            .addMember("name", str.getId())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#GetItemRequest")
            .addMember("id", str.getId())
            .build();
        StructureShape response = StructureShape.builder()
            .id("com.example#GetItemResponse")
            .addMember("item", itemData.getId())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#GetItem")
            .input(request.getId())
            .output(response.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        return Model.builder()
            .addShapes(str, itemData, request, response, op, service)
            .build();
    }

    @Test
    void classifiesRequestShape() {
        Model model = buildSimpleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.requests().stream()
            .anyMatch(s -> s.getId().getName().equals("GetItemRequest")));
    }

    @Test
    void classifiesResultShape() {
        Model model = buildSimpleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.results().stream()
            .anyMatch(s -> s.getId().getName().equals("GetItemResponse")));
    }

    @Test
    void classifiesSubObject() {
        Model model = buildSimpleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.subObjects().stream()
            .anyMatch(s -> s.getId().getName().equals("ItemData")));
    }

    @Test
    void skipsDocumentShape() {
        DocumentShape doc = DocumentShape.builder().id("com.example#Doc").build();
        StructureShape request = StructureShape.builder()
            .id("com.example#PutItemRequest")
            .addMember("data", doc.getId())
            .build();
        StructureShape response = StructureShape.builder()
            .id("com.example#PutItemResponse")
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#PutItem")
            .input(request.getId())
            .output(response.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        StringShape str = StringShape.builder().id("com.example#String").build();
        Model model = Model.builder().addShapes(doc, request, response, op, service, str).build();
        var classified = ShapeClassifier.classify(model, service);
        // Document should not appear in any list
        assertTrue(classified.subObjects().stream()
            .noneMatch(s -> s.getId().getName().equals("Doc")));
    }

    @Test
    void skipsUnmodeledExceptionJson() {
        // Exception with only "Message" member -> skipped for JSON protocol
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape exception = StructureShape.builder()
            .id("com.example#NotFoundException")
            .addMember("Message", str.getId())
            .addTrait(new ErrorTrait("client"))
            .build();
        StructureShape request = StructureShape.builder().id("com.example#DoRequest").build();
        StructureShape response = StructureShape.builder().id("com.example#DoResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Do")
            .input(request.getId())
            .output(response.getId())
            .addError(exception.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .build();
        Model model = Model.builder().addShapes(str, exception, request, response, op, service).build();
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.subObjects().stream()
            .noneMatch(s -> s.getId().getName().equals("NotFoundException")));
    }

    @Test
    void classifiesModeledExceptionJson() {
        // Exception with "Message" plus extra members -> classified as sub-object for JSON
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape exception = StructureShape.builder()
            .id("com.example#DetailedException")
            .addMember("Message", str.getId())
            .addMember("RetryAfterSeconds", str.getId())
            .addTrait(new ErrorTrait("server"))
            .build();
        StructureShape request = StructureShape.builder().id("com.example#DoRequest").build();
        StructureShape response = StructureShape.builder().id("com.example#DoResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Do")
            .input(request.getId())
            .output(response.getId())
            .addError(exception.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .build();
        Model model = Model.builder().addShapes(str, exception, request, response, op, service).build();
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.subObjects().stream()
            .anyMatch(s -> s.getId().getName().equals("DetailedException")));
    }

    @Test
    void skipsUnmodeledExceptionXml() {
        // Exception with only "Message" and "Code" members -> skipped for XML protocol
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape exception = StructureShape.builder()
            .id("com.example#NotFoundException")
            .addMember("Message", str.getId())
            .addMember("Code", str.getId())
            .addTrait(new ErrorTrait("client"))
            .build();
        StructureShape request = StructureShape.builder().id("com.example#DoRequest").build();
        StructureShape response = StructureShape.builder().id("com.example#DoResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Do")
            .input(request.getId())
            .output(response.getId())
            .addError(exception.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build())
            .build();
        Model model = Model.builder().addShapes(str, exception, request, response, op, service).build();
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.subObjects().stream()
            .noneMatch(s -> s.getId().getName().equals("NotFoundException")));
    }

    @Test
    void classifiesEventStreamHandler() {
        // Operation whose output has a streaming union member -> event stream handler
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape eventA = StructureShape.builder()
            .id("com.example#EventA")
            .addMember("data", str.getId())
            .build();
        UnionShape eventStream = UnionShape.builder()
            .id("com.example#MyEventStream")
            .addMember("eventA", eventA.getId())
            .addTrait(new StreamingTrait())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#SubscribeRequest")
            .addMember("channel", str.getId())
            .build();
        StructureShape response = StructureShape.builder()
            .id("com.example#SubscribeResponse")
            .addMember("events", eventStream.getId())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Subscribe")
            .input(request.getId())
            .output(response.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        Model model = Model.builder()
            .addShapes(str, eventA, eventStream, request, response, op, service)
            .build();
        var classified = ShapeClassifier.classify(model, service);

        // Event stream handler should be recorded
        assertEquals(1, classified.eventStreamHandlers().size());
        assertEquals("Subscribe", classified.eventStreamHandlers().get(0).operationName());
        assertEquals(request.getId(), classified.eventStreamHandlers().get(0).requestShape().getId());

        // Result should NOT include the event-stream-bearing output
        assertTrue(classified.results().stream()
            .noneMatch(s -> s.getId().getName().equals("SubscribeResponse")));

        // Request should still be classified
        assertTrue(classified.requests().stream()
            .anyMatch(s -> s.getId().getName().equals("SubscribeRequest")));
    }

    @Test
    void classifiesEnumShape() {
        // StringShape with @enum trait -> classified as enum
        StringShape enumStr = StringShape.builder()
            .id("com.example#Status")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("ACTIVE").build())
                .addEnum(EnumDefinition.builder().value("INACTIVE").build())
                .build())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#GetRequest")
            .addMember("status", enumStr.getId())
            .build();
        StructureShape response = StructureShape.builder()
            .id("com.example#GetResponse")
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Get")
            .input(request.getId())
            .output(response.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        Model model = Model.builder()
            .addShapes(enumStr, request, response, op, service)
            .build();
        var classified = ShapeClassifier.classify(model, service);
        assertTrue(classified.enums().stream()
            .anyMatch(s -> s.getId().getName().equals("Status")));
    }
}
