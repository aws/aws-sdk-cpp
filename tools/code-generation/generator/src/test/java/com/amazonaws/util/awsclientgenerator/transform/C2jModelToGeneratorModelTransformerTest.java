/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.transform;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.*;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Metadata;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import org.junit.Test;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import com.google.common.collect.ImmutableList;

import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertEquals;

public class C2jModelToGeneratorModelTransformerTest {

    @Test
    public void testMetadataConversion() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        C2jMetadata c2jMetadata = new C2jMetadata();

        c2jMetadata.setServiceAbbreviation("Amazon AWS Servi_ce Ab-br");
        c2jMetadata.setApiVersion("API Version");
        c2jMetadata.setEndpointPrefix("service-abbr");
        c2jMetadata.setJsonVersion("1.1");
        c2jMetadata.setProtocol("json");
        c2jMetadata.setServiceFullName("Amazon AWS Service Abbr Full Name");
        c2jMetadata.setSignatureVersion("v4");
        c2jMetadata.setTargetPrefix("ServiceAbbr.");
        c2jMetadata.setServiceId("ServiceAbbr");
        c2jMetadata.setUid("service-9089-34-54");
        c2jMetadata.setTimestampFormat("iso8601");

        c2jServiceModel.setMetadata(c2jMetadata);
        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, false);
        Metadata metadata = c2jModelToGeneratorModelTransformer.convertMetadata();
        assertEquals(c2jMetadata.getApiVersion(), metadata.getApiVersion());
        assertEquals(c2jMetadata.getEndpointPrefix(), metadata.getEndpointPrefix());
        assertEquals(c2jMetadata.getJsonVersion(), metadata.getJsonVersion());
        assertEquals(c2jMetadata.getProtocol(), metadata.findFirstSupportedProtocol());
        assertEquals("ServiceAbbr", metadata.getNamespace());
        assertEquals(c2jMetadata.getServiceFullName(), metadata.getServiceFullName());
        assertEquals(c2jMetadata.getSignatureVersion(), metadata.getSignatureVersion());
        assertEquals(c2jMetadata.getTargetPrefix(), metadata.getTargetPrefix());
        assertEquals(c2jMetadata.getTimestampFormat(), metadata.getTimestampFormat());

        c2jMetadata.setServiceAbbreviation(null);

        metadata = c2jModelToGeneratorModelTransformer.convertMetadata();
        assertEquals(c2jMetadata.getApiVersion(), metadata.getApiVersion());
        assertEquals(c2jMetadata.getEndpointPrefix(), metadata.getEndpointPrefix());
        assertEquals(c2jMetadata.getJsonVersion(), metadata.getJsonVersion());
        assertEquals(c2jMetadata.getProtocol(), metadata.findFirstSupportedProtocol());
        assertEquals("ServiceAbbr", metadata.getNamespace());
        assertEquals(c2jMetadata.getServiceFullName(), metadata.getServiceFullName());
        assertEquals(c2jMetadata.getSignatureVersion(), metadata.getSignatureVersion());
        assertEquals(c2jMetadata.getTargetPrefix(), metadata.getTargetPrefix());
    }

    @Test
    public void testMetadataConversationWithStandalonePackages() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        C2jMetadata c2jMetadata = new C2jMetadata();
        c2jMetadata.setApiVersion("API Version");
        c2jMetadata.setServiceAbbreviation("Amazon AWS Servi_ce Ab-br");
        c2jMetadata.setApiVersion("API Version");
        c2jMetadata.setEndpointPrefix("service-abbr");
        c2jMetadata.setJsonVersion("1.1");
        c2jMetadata.setProtocol("api-gateway");
        c2jMetadata.setServiceFullName("Amazon AWS Service Abbr Full Name");
        c2jMetadata.setSignatureVersion("v4");
        c2jMetadata.setTargetPrefix("ServiceAbbr.");
        c2jMetadata.setUid("service-9089-34-54");
        c2jServiceModel.setMetadata(c2jMetadata);
        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, true);
        Metadata metadata = c2jModelToGeneratorModelTransformer.convertMetadata();
        assertTrue(metadata.isStandalone());
        assertTrue(metadata.isApigateway());
        assertEquals("service-abbr.execute-api", metadata.getEndpointPrefix());
        assertEquals("application-json", metadata.findFirstSupportedProtocol());
    }

    @Test
    public void testStructureShapeConversion() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        c2jServiceModel.setMetadata(new C2jMetadata());
        c2jServiceModel.getMetadata().setUid("service-7869-05-67");
        c2jServiceModel.getMetadata().setTimestampFormat("unixTimestamp");

        Map<String, C2jShape> c2jShapeMap = new HashMap<>();

        C2jShape stringShape = new C2jShape();
        stringShape.setDocumentation("String Shape Documentation");
        stringShape.setType("string");
        c2jShapeMap.put("StringShape", stringShape);

        C2jShape numberShape = new C2jShape();
        numberShape.setType("integer");
        c2jShapeMap.put("NumberShape", numberShape);

        C2jShape timestampShape = new C2jShape();
        timestampShape.setType("timestamp");
        c2jShapeMap.put("TimestampShape", timestampShape);

        C2jShape inputShape = new C2jShape();
        inputShape.setType("structure");
        C2jShapeMember inputStringShapeMember = new C2jShapeMember();
        inputStringShapeMember.setShape("StringShape");

        C2jShapeMember inputTimestampShapeMember = new C2jShapeMember();
        inputTimestampShapeMember.setShape("TimestampShape");

        inputShape.setMembers(new HashMap<>());
        inputShape.getMembers().put("StringShape", inputStringShapeMember);
        inputShape.getMembers().put("TimestampShape", inputTimestampShapeMember);
        inputShape.setMember(inputStringShapeMember);

        c2jShapeMap.put("InputShape", inputShape);

        C2jShape outputShape = new C2jShape();
        outputShape.setType("structure");
        C2jShapeMember outputNumberShapeMember = new C2jShapeMember();
        outputNumberShapeMember.setShape("NumberShape");
        outputShape.setMembers(new HashMap<>());
        outputShape.getMembers().put("NumberShape", outputNumberShapeMember);

        c2jShapeMap.put("OutputShape", outputShape);

        c2jServiceModel.setShapes(c2jShapeMap);

        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, false);
        c2jModelToGeneratorModelTransformer.convertShapes();

        Map<String, Shape> shapes = c2jModelToGeneratorModelTransformer.shapes;
        assertEquals(5, shapes.size());
        assertEquals("StringShape", shapes.get("StringShape").getName());
        assertEquals("TimestampShape", shapes.get("TimestampShape").getName());
        assertEquals("NumberShape", shapes.get("NumberShape").getName());
        assertEquals("InputShape", shapes.get("InputShape").getName());
        assertEquals("OutputShape", shapes.get("OutputShape").getName());
        assertEquals(2, shapes.get("InputShape").getMembers().size());
        assertEquals("StringShape", shapes.get("InputShape").getMembers().get("StringShape").getShape().getName());
        assertEquals("TimestampShape", shapes.get("InputShape").getMembers().get("TimestampShape").getShape().getName());
        assertEquals(1, shapes.get("OutputShape").getMembers().size());
        assertEquals("NumberShape", shapes.get("OutputShape").getMembers().get("NumberShape").getShape().getName());
        assertEquals("unixTimestamp", shapes.get("TimestampShape").getTimestampFormat());

    }

    @Test
    public void testMapShapeConversion() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        Map<String, C2jShape> c2jShapeMap = new HashMap<>();
        c2jServiceModel.setMetadata(new C2jMetadata());
        c2jServiceModel.getMetadata().setUid("service-7869-05-67");

        C2jShape stringShape = new C2jShape();
        stringShape.setDocumentation("String Shape Documentation");
        stringShape.setType("string");

        c2jShapeMap.put("StringShape", stringShape);

        C2jShape numberShape = new C2jShape();
        numberShape.setType("integer");

        c2jShapeMap.put("NumberShape", numberShape);

        C2jShape valueShape = new C2jShape();
        valueShape.setType("structure");
        C2jShapeMember numberShapeMember = new C2jShapeMember();
        numberShapeMember.setShape("NumberShape");
        valueShape.setMembers(new HashMap<>());
        valueShape.getMembers().put("NumberShape", numberShapeMember);

        c2jShapeMap.put("ValueShape", valueShape);

        C2jShape mapShape = new C2jShape();
        mapShape.setType("map");
        C2jShapeMember mapKeyMember = new C2jShapeMember();
        mapKeyMember.setShape("StringShape");
        mapShape.setKey(mapKeyMember);
        C2jShapeMember valueShapeMember = new C2jShapeMember();
        valueShapeMember.setShape("ValueShape");
        mapShape.setValue(valueShapeMember);

        c2jShapeMap.put("MapShape", mapShape);

        c2jServiceModel.setShapes(c2jShapeMap);

        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, false);
        c2jModelToGeneratorModelTransformer.convertShapes();

        Map<String, Shape> shapes = c2jModelToGeneratorModelTransformer.shapes;
        assertEquals(4, shapes.size());
        assertEquals("StringShape", shapes.get("StringShape").getName());
        assertEquals("NumberShape", shapes.get("NumberShape").getName());
        assertEquals("ValueShape", shapes.get("ValueShape").getName());
        assertEquals("MapShape", shapes.get("MapShape").getName());
        assertTrue(shapes.get("MapShape").isMap());
        assertEquals("StringShape", shapes.get("MapShape").getMapKey().getShape().getName());
        assertEquals("ValueShape", shapes.get("MapShape").getMapValue().getShape().getName());
        assertEquals(1, shapes.get("MapShape").getMapValue().getShape().getMembers().size());
        assertEquals("NumberShape", shapes.get("MapShape").getMapValue().getShape().getMembers().get("NumberShape").getShape().getName());
    }

    @Test
    public void testListShapeConversion() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        Map<String, C2jShape> c2jShapeMap = new HashMap<>();
        c2jServiceModel.setMetadata(new C2jMetadata());
        c2jServiceModel.getMetadata().setUid("service-7869-05-67");

        C2jShape numberShape = new C2jShape();
        numberShape.setType("integer");

        c2jShapeMap.put("NumberShape", numberShape);

        C2jShape valueShape = new C2jShape();
        valueShape.setType("structure");
        C2jShapeMember numberShapeMember = new C2jShapeMember();
        numberShapeMember.setShape("NumberShape");
        valueShape.setMembers(new HashMap<>());
        valueShape.getMembers().put("NumberShape", numberShapeMember);

        c2jShapeMap.put("ValueShape", valueShape);

        C2jShape listShape = new C2jShape();
        listShape.setType("list");
        C2jShapeMember valueShapeMember = new C2jShapeMember();
        valueShapeMember.setShape("ValueShape");
        listShape.setMember(valueShapeMember);

        c2jShapeMap.put("ListShape", listShape);

        c2jServiceModel.setShapes(c2jShapeMap);

        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, false);
        c2jModelToGeneratorModelTransformer.convertShapes();

        Map<String, Shape> shapes = c2jModelToGeneratorModelTransformer.shapes;
        assertEquals(3, shapes.size());
        assertEquals("NumberShape", shapes.get("NumberShape").getName());
        assertEquals("ValueShape", shapes.get("ValueShape").getName());
        assertEquals("ListShape", shapes.get("ListShape").getName());
        assertTrue(shapes.get("ListShape").isList());
        assertEquals("ValueShape", shapes.get("ListShape").getListMember().getShape().getName());
        assertEquals(1, shapes.get("ListShape").getListMember().getShape().getMembers().size());
        assertEquals("NumberShape", shapes.get("ListShape").getListMember().getShape().getMembers().get("NumberShape").getShape().getName());
    }

    @Test
    public void testOperationConversion() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        Map<String, C2jShape> c2jShapeMap = new HashMap<>();
        c2jServiceModel.setMetadata(new C2jMetadata());
        c2jServiceModel.getMetadata().setUid("service-7869-05-67");
        c2jServiceModel.getMetadata().setProtocol("json");

        C2jShape stringShape = new C2jShape();
        stringShape.setDocumentation("String Shape Documentation");
        stringShape.setType("string");

        c2jShapeMap.put("StringShape", stringShape);

        C2jShape numberShape = new C2jShape();
        numberShape.setType("integer");

        c2jShapeMap.put("NumberShape", numberShape);

        C2jShape inputShape = new C2jShape();
        inputShape.setType("structure");
        C2jShapeMember inputStringShapeMember = new C2jShapeMember();
        inputStringShapeMember.setShape("StringShape");
        inputShape.setMembers(new HashMap<>());
        inputShape.getMembers().put("StringShape", inputStringShapeMember);
        inputShape.setMember(inputStringShapeMember);

        c2jShapeMap.put("InputShape", inputShape);

        C2jShape outputShape = new C2jShape();
        outputShape.setType("structure");
        C2jShapeMember outputNumberShapeMember = new C2jShapeMember();
        outputNumberShapeMember.setShape("NumberShape");
        outputShape.setMembers(new HashMap<>());
        outputShape.getMembers().put("NumberShape", outputNumberShapeMember);

        c2jShapeMap.put("OutputShape", outputShape);

        c2jServiceModel.setShapes(c2jShapeMap);

        C2jOperation operation = new C2jOperation();
        C2jShapeMember inputShapeMember = new C2jShapeMember();
        inputShapeMember.setShape("InputShape");
        operation.setInput(inputShapeMember);
        C2jShapeMember outputShapeMember = new C2jShapeMember();
        outputShapeMember.setShape("OutputShape");
        operation.setOutput(outputShapeMember);

        C2jShape errorShape = new C2jShape();
        errorShape.setType("structure");
        errorShape.setException(true);
        errorShape.setMembers(new HashMap<>());
        errorShape.getMembers().put("StringShape", inputStringShapeMember);
        c2jShapeMap.put("ErrorShape", errorShape);

        C2jError error = new C2jError();
        error.setShape("ErrorShape");
        operation.setErrors(new LinkedList<>());
        operation.getErrors().add(error);
        operation.setName("Operation");
        C2jHttp http = new C2jHttp();
        http.setMethod("POST");
        http.setRequestUri("/");
        http.setResponseCode("200");
        operation.setHttp(http);

        c2jServiceModel.setOperations(new HashMap<>());
        c2jServiceModel.getOperations().put("Operation", operation);

        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, false);
        c2jModelToGeneratorModelTransformer.convertShapes();
        c2jModelToGeneratorModelTransformer.convertOperations();

        assertEquals(1, c2jModelToGeneratorModelTransformer.operations.size());
        assertEquals("Operation", c2jModelToGeneratorModelTransformer.operations.get("Operation").getName());
        assertEquals("OperationRequest", c2jModelToGeneratorModelTransformer.operations.get("Operation").getRequest().getShape().getName());
        assertEquals("OperationResult", c2jModelToGeneratorModelTransformer.operations.get("Operation").getResult().getShape().getName());
        assertEquals(1, c2jModelToGeneratorModelTransformer.operations.get("Operation").getErrors().size());
        assertEquals("ErrorShape", c2jModelToGeneratorModelTransformer.operations.get("Operation").getErrors().get(0).getName());
        assertTrue(c2jModelToGeneratorModelTransformer.operations.get("Operation").getErrors().get(0).isModeled());
        assertEquals("POST", c2jModelToGeneratorModelTransformer.operations.get("Operation").getHttp().getMethod());
        assertEquals("/", c2jModelToGeneratorModelTransformer.operations.get("Operation").getHttp().getRequestUri());
        assertEquals("200", c2jModelToGeneratorModelTransformer.operations.get("Operation").getHttp().getResponseCode());
    }

    // "shapes":{
    //     "EventStreamShape":{
    //         "type":"structure",
    //         "members":{
    //             "EventShape":{"shape":"EventShape"},
    //             "EventEnumShape":{"shape":"EventEnumShape"}
    //         },
    //         "eventstream":true
    //     },
    //     "EventShape":{
    //         "type":"structure",
    //         "members":{
    //             "BlobShape":{"shape":"BlobShape"}
    //         },
    //         "event":true
    //     },
    //     "EventEnumShape":{
    //         "type":"structure",
    //         "members":{
    //             "BlobShape":{"shape":"BlobShape"}
    //         },
    //         "event":true
    //     },
    //     "EnumShape":{
    //         "type":"string",
    //          "enum":[VALUE]
    //     }
    //     "BlobShape":{
    //         "type":"blob"
    //     }
    // }
    @Test
    public void testEventStreamShapeConversion() {
        C2jServiceModel c2jServiceModel = new C2jServiceModel();
        Map<String, C2jShape> c2jShapeMap = new HashMap<>();
        c2jServiceModel.setMetadata(new C2jMetadata());
        c2jServiceModel.getMetadata().setUid("service-7869-05-67");

        C2jShape eventStreamShape = new C2jShape();
        eventStreamShape.setType("structure");
        eventStreamShape.setEventstream(true);
        c2jShapeMap.put("EventStreamShape", eventStreamShape);

        C2jShape eventShape = new C2jShape();
        eventShape.setType("structure");
        eventShape.setEvent(true);
        c2jShapeMap.put("EventShape", eventShape);

        C2jShape blobShape = new C2jShape();
        blobShape.setType("blob");
        c2jShapeMap.put("BlobShape", blobShape);

        C2jShapeMember blobShapeMember = new C2jShapeMember();
        blobShapeMember.setShape("BlobShape");

        eventShape.setMembers(new HashMap<>());
        eventShape.getMembers().put("BlobShape", blobShapeMember);

        C2jShapeMember eventShapeMember = new C2jShapeMember();
        eventShapeMember.setShape("EventShape");

        eventStreamShape.setMembers(new HashMap<>());
        eventStreamShape.getMembers().put("EventShape", eventShapeMember);

        C2jShape eventEnumShape = new C2jShape();
        eventEnumShape.setType("structure");
        eventEnumShape.setEvent(true);
        c2jShapeMap.put("EventEnumShape", eventEnumShape);

        C2jShape enumShape = new C2jShape();
        enumShape.setType("string");
        enumShape.setEnums(ImmutableList.of("VALUE"));
        c2jShapeMap.put("EnumShape", enumShape);

        C2jShapeMember enumShapeMember = new C2jShapeMember();
        enumShapeMember.setShape("EnumShape");

        eventEnumShape.setMembers(new HashMap<>());
        eventEnumShape.getMembers().put("EnumShape", enumShapeMember);

        C2jShapeMember eventEnumShapeMember = new C2jShapeMember();
        eventEnumShapeMember.setShape("EventEnumShape");

        eventStreamShape.getMembers().put("EvenEnumShape", eventEnumShapeMember);

        c2jServiceModel.setShapes(c2jShapeMap);

        C2jModelToGeneratorModelTransformer c2jModelToGeneratorModelTransformer = new C2jModelToGeneratorModelTransformer(c2jServiceModel, false);
        c2jModelToGeneratorModelTransformer.convertShapes();
        c2jModelToGeneratorModelTransformer.postProcessShapes();

        Map<String, Shape> shapes = c2jModelToGeneratorModelTransformer.shapes;
        assertEquals(5, shapes.size());
        assertEquals("EventStreamShape", shapes.get("EventStreamShape").getName());
        assertTrue(shapes.get("EventStreamShape").isEventStream());
        assertEquals("EventShape", shapes.get("EventShape").getName());
        assertTrue(shapes.get("EventShape").isEvent());
        assertEquals("structure", shapes.get("EventShape").getEventPayloadType());
        assertEquals("BlobShape", shapes.get("BlobShape").getName());
        assertEquals("blob", shapes.get("BlobShape").getType());
        assertEquals(2, shapes.get("EventStreamShape").getMembers().size());
        assertEquals("EventShape", shapes.get("EventStreamShape").getMembers().get("EventShape").getShape().getName());
        assertEquals(1, shapes.get("EventShape").getMembers().size());
        assertEquals("BlobShape", shapes.get("EventShape").getMembers().get("BlobShape").getShape().getName());
        assertFalse(shapes.get("EventShape").getMembers().get("BlobShape").isEventPayload());

        assertFalse(shapes.get("EventEnumShape").getMembers().get("EnumShape").isEventPayload());
        assertEquals("structure", shapes.get("EventEnumShape").getEventPayloadType());
    }
}
