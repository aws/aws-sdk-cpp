/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.CustomRenderedTrait;
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.requests().stream()
            .anyMatch(r -> r.shape().getId().getName().equals("GetItemRequest")));
    }

    @Test
    void classifiesResultShape() {
        Model model = buildSimpleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.results().stream()
            .anyMatch(r -> r.shape().getId().getName().equals("GetItemResponse")));
    }

    @Test
    void classifiesSubObject() {
        Model model = buildSimpleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));

        // Event stream handler should be recorded
        assertEquals(1, classified.eventStreamHandlers().size());
        assertEquals("Subscribe", classified.eventStreamHandlers().get(0).operationName());
        assertEquals(request.getId(), classified.eventStreamHandlers().get(0).requestShape().getId());

        // Result should NOT include the event-stream-bearing output
        assertTrue(classified.results().stream()
            .noneMatch(r -> r.shape().getId().getName().equals("SubscribeResponse")));

        // Request should still be classified
        assertTrue(classified.requests().stream()
            .anyMatch(r -> r.shape().getId().getName().equals("SubscribeRequest")));
    }

    private static Model modelWithStreaming(boolean inputStreams, boolean outputStreams) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        UnionShape eventStream = UnionShape.builder()
            .id("com.example#EventStream")
            .addTrait(new StreamingTrait())
            .addMember("event", str.getId())
            .build();

        StructureShape.Builder inputBuilder = StructureShape.builder().id("com.example#OpInput");
        if (inputStreams) {
            inputBuilder.addMember("body", eventStream.getId());
        } else {
            inputBuilder.addMember("name", str.getId());
        }
        StructureShape input = inputBuilder.build();

        StructureShape.Builder outputBuilder = StructureShape.builder().id("com.example#OpOutput");
        if (outputStreams) {
            outputBuilder.addMember("stream", eventStream.getId());
        } else {
            outputBuilder.addMember("result", str.getId());
        }
        StructureShape output = outputBuilder.build();

        OperationShape op = OperationShape.builder()
            .id("com.example#Op")
            .input(input.getId())
            .output(output.getId())
            .build();

        return Model.builder().addShapes(str, eventStream, input, output, op).build();
    }

    @Test
    void outgoingEventStreams_collectsInputBoundStreamingUnions() {
        // A @streaming union bound to a request INPUT is an outgoing event stream (encoder),
        // classified separately from output-bound streaming unions (which become handlers).
        Model model = modelWithStreaming(true, false);
        ServiceShape service = ServiceShape.builder().id("com.example#Svc").version("2024-01-01")
            .addOperation(ShapeId.from("com.example#Op")).build();
        // Re-assemble with a service so classify() has a root.
        Model withSvc = model.toBuilder().addShape(service).build();
        var classified = ShapeClassifier.classify(withSvc, service, ProtocolResolver.resolve(service, withSvc));
        assertTrue(classified.outgoingEventStreams().stream()
                .anyMatch(s -> s.getId().getName().equals("EventStream")),
            "Input-bound @streaming union must be collected as an outgoing event stream: "
                + classified.outgoingEventStreams());
        // And it must NOT also land in subObjects (which would double-render it as a data union).
        assertTrue(classified.subObjects().stream()
                .noneMatch(s -> s.getId().getName().equals("EventStream")),
            "Outgoing event stream must not also be a sub-object: " + classified.subObjects());
    }

    @Test
    void isEventStreamResponseOperation_trueWhenOutputStreams() {
        Model model = modelWithStreaming(false, true);
        OperationShape op = model.expectShape(ShapeId.from("com.example#Op"), OperationShape.class);
        assertTrue(ShapeClassifier.isEventStreamResponseOperation(op, model));
        assertFalse(ShapeClassifier.isEventStreamRequestOperation(op, model));
    }

    @Test
    void isEventStreamRequestOperation_trueWhenInputStreams() {
        Model model = modelWithStreaming(true, true);
        OperationShape op = model.expectShape(ShapeId.from("com.example#Op"), OperationShape.class);
        assertTrue(ShapeClassifier.isEventStreamRequestOperation(op, model));
        assertTrue(ShapeClassifier.isEventStreamResponseOperation(op, model));
    }

    @Test
    void isEventStreamResponseOperation_falseWhenNeitherStreams() {
        Model model = modelWithStreaming(false, false);
        OperationShape op = model.expectShape(ShapeId.from("com.example#Op"), OperationShape.class);
        assertFalse(ShapeClassifier.isEventStreamResponseOperation(op, model));
        assertFalse(ShapeClassifier.isEventStreamRequestOperation(op, model));
    }

    private static Model streamingBlobOutputModel(boolean streaming) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        BlobShape.Builder blobBuilder = BlobShape.builder().id("com.example#StreamBlob");
        if (streaming) {
            blobBuilder.addTrait(new StreamingTrait());
        }
        BlobShape blob = blobBuilder.build();
        StructureShape input = StructureShape.builder()
            .id("com.example#GetBlobInput").addMember("name", str.getId()).build();
        StructureShape.Builder outputBuilder = StructureShape.builder().id("com.example#GetBlobOutput");
        if (streaming) {
            outputBuilder.addMember(MemberShape.builder()
                .id("com.example#GetBlobOutput$body").target(blob.getId())
                .addTrait(new HttpPayloadTrait()).build());
        } else {
            outputBuilder.addMember("result", str.getId());
        }
        StructureShape output = outputBuilder.build();
        OperationShape op = OperationShape.builder()
            .id("com.example#GetBlob").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Svc").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, input, output, op, service).build();
    }

    @Test
    void streamingBlobPayloadOutput_isClassifiedStreaming() {
        Model model = streamingBlobOutputModel(true);
        ServiceShape svc = model.expectShape(ShapeId.from("com.example#Svc"), ServiceShape.class);
        var results = ShapeClassifier.classify(model, svc, ProtocolResolver.resolve(svc, model)).results();
        assertTrue(results.stream().anyMatch(r -> r.operation().getId().getName().equals("GetBlob") && r.streaming()));
    }

    @Test
    void plainOutput_isNotStreaming() {
        Model model = streamingBlobOutputModel(false);
        ServiceShape svc = model.expectShape(ShapeId.from("com.example#Svc"), ServiceShape.class);
        var results = ShapeClassifier.classify(model, svc, ProtocolResolver.resolve(svc, model)).results();
        assertTrue(results.stream().allMatch(r -> !r.streaming()));
    }

    /** An @httpPayload blob or string member (with or without @streaming) that is NOT an event stream. */
    private static Model httpPayloadOutputModel(software.amazon.smithy.model.shapes.Shape payloadTarget) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#GetBlobInput").addMember("name", str.getId()).build();
        StructureShape output = StructureShape.builder().id("com.example#GetBlobOutput")
            .addMember(MemberShape.builder()
                .id("com.example#GetBlobOutput$body").target(payloadTarget.getId())
                .addTrait(new HttpPayloadTrait()).build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#GetBlob").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Svc").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, payloadTarget, input, output, op, service).build();
    }

    @Test
    void httpPayloadBlobOutput_withoutStreamingTrait_isClassifiedStreaming() {
        // C2J treats an @httpPayload blob as a streaming ResponseStream even without @streaming
        // (CppViewHelper.isStreamingPayloadMember: isStreaming() OR blob OR string).
        BlobShape blob = BlobShape.builder().id("com.example#Body").build();
        Model model = httpPayloadOutputModel(blob);
        ServiceShape svc = model.expectShape(ShapeId.from("com.example#Svc"), ServiceShape.class);
        var results = ShapeClassifier.classify(model, svc, ProtocolResolver.resolve(svc, model)).results();
        assertTrue(results.stream().anyMatch(r -> r.operation().getId().getName().equals("GetBlob") && r.streaming()),
            "An @httpPayload blob without @streaming must classify streaming");
    }

    @Test
    void httpPayloadStringOutput_isClassifiedStreaming() {
        StringShape body = StringShape.builder().id("com.example#Body").build();
        Model model = httpPayloadOutputModel(body);
        ServiceShape svc = model.expectShape(ShapeId.from("com.example#Svc"), ServiceShape.class);
        var results = ShapeClassifier.classify(model, svc, ProtocolResolver.resolve(svc, model)).results();
        assertTrue(results.stream().anyMatch(r -> r.operation().getId().getName().equals("GetBlob") && r.streaming()),
            "An @httpPayload string must classify streaming");
    }

    @Test
    void noInputOperation_stillProducesRequest() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape output = StructureShape.builder()
            .id("com.example#PingOutput").addMember("r", str.getId()).build();
        // No .input(...) -> Smithy defaults the input target to smithy.api#Unit
        OperationShape op = OperationShape.builder()
            .id("com.example#Ping").output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Svc").version("2024-01-01").addOperation(op.getId()).build();
        // Assemble with the prelude so smithy.api#Unit (the default no-input target) resolves.
        Model model = Model.assembler()
            .addShapes(str, output, op, service)
            .assemble().unwrap();

        var requests = ShapeClassifier.classify(model, service,
            ProtocolResolver.resolve(service, model)).requests();
        assertTrue(requests.stream().anyMatch(r -> r.operation().getId().getName().equals("Ping")),
            "Expected a RequestInfo for the no-input operation Ping");
    }

    /**
     * A structure that is BOTH an operation output AND referenced as a member (via a list
     * element). Mirrors Lambda's FunctionConfiguration, which is the output of
     * GetFunctionConfiguration and also the element of FunctionList / a member of another
     * response. Such a dual-role shape must end up in BOTH results (per-op output) and
     * subObjects (standalone model file), matching C2J.
     */
    private Model buildDualRoleModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        // Thing is the output of GetThing AND the element of ThingList.
        StructureShape thing = StructureShape.builder()
            .id("com.example#Thing")
            .addMember("name", str.getId())
            .build();
        ListShape thingList = ListShape.builder()
            .id("com.example#ThingList")
            .member(thing.getId())
            .build();
        StructureShape getThingRequest = StructureShape.builder()
            .id("com.example#GetThingRequest")
            .addMember("id", str.getId())
            .build();
        StructureShape listThingsRequest = StructureShape.builder()
            .id("com.example#ListThingsRequest")
            .build();
        StructureShape listThingsResponse = StructureShape.builder()
            .id("com.example#ListThingsResponse")
            .addMember("things", thingList.getId())
            .build();
        OperationShape getThing = OperationShape.builder()
            .id("com.example#GetThing")
            .input(getThingRequest.getId())
            .output(thing.getId())
            .build();
        OperationShape listThings = OperationShape.builder()
            .id("com.example#ListThings")
            .input(listThingsRequest.getId())
            .output(listThingsResponse.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addOperation(getThing.getId())
            .addOperation(listThings.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        return Model.builder()
            .addShapes(str, thing, thingList, getThingRequest, listThingsRequest, listThingsResponse, getThing, listThings, service)
            .build();
    }

    @Test
    void dualRoleOutputAndMember_appearsInBothResultsAndSubObjects() {
        Model model = buildDualRoleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.results().stream()
                .anyMatch(r -> r.shape().getId().getName().equals("Thing")),
            "Dual-role Thing must be classified as a result (GetThing output): " + classified.results());
        assertTrue(classified.subObjects().stream()
                .anyMatch(s -> s.getId().getName().equals("Thing")),
            "Dual-role Thing must also be classified as a sub-object (referenced via ThingList): "
                + classified.subObjects());
    }

    @Test
    void outputOnly_appearsInResultsButNotSubObjects() {
        // GetItemResponse is ONLY an operation output; it is not referenced as a member anywhere.
        Model model = buildSimpleModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.results().stream()
                .anyMatch(r -> r.shape().getId().getName().equals("GetItemResponse")),
            "Output-only GetItemResponse must be in results");
        assertTrue(classified.subObjects().stream()
                .noneMatch(s -> s.getId().getName().equals("GetItemResponse")),
            "Output-only GetItemResponse must NOT be over-emitted as a sub-object: " + classified.subObjects());
    }

    /**
     * A @streaming union with two event members: one whose sole payload is an @eventPayload blob
     * (like Lambda's InvokeResponseStreamUpdate / the PayloadChunk member) and one with only a
     * plain string member (like a CompleteEvent). Bound to an operation output so both event
     * structs are reachable.
     */
    private Model eventStreamBlobPayloadModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        BlobShape blob = BlobShape.builder().id("com.example#Blob").build();
        // Blob-payload event: single @eventPayload blob member.
        StructureShape updateEvent = StructureShape.builder()
            .id("com.example#UpdateEvent")
            .addMember(MemberShape.builder()
                .id("com.example#UpdateEvent$Payload").target(blob.getId())
                .addTrait(new EventPayloadTrait()).build())
            .build();
        // Non-blob event: plain string member -> must stay a sub-object.
        StructureShape completeEvent = StructureShape.builder()
            .id("com.example#CompleteEvent")
            .addMember("Details", str.getId())
            .build();
        UnionShape eventStream = UnionShape.builder()
            .id("com.example#ResponseStreamEvent")
            .addTrait(new StreamingTrait())
            .addMember("PayloadChunk", updateEvent.getId())
            .addMember("Complete", completeEvent.getId())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#InvokeRequest").addMember("name", str.getId()).build();
        StructureShape response = StructureShape.builder()
            .id("com.example#InvokeResponse").addMember("events", eventStream.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Invoke").input(request.getId()).output(response.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2023-01-01").addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        return Model.builder()
            .addShapes(str, blob, updateEvent, completeEvent, eventStream, request, response, op, service)
            .build();
    }

    @Test
    void blobEventPayload_isClassifiedAsBlobPayloadEventNotSubObject() {
        Model model = eventStreamBlobPayloadModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.blobPayloadEvents().stream()
                .anyMatch(s -> s.getId().getName().equals("UpdateEvent")),
            "Blob @eventPayload event must be in blobPayloadEvents: " + classified.blobPayloadEvents());
        assertTrue(classified.subObjects().stream()
                .noneMatch(s -> s.getId().getName().equals("UpdateEvent")),
            "Blob @eventPayload event must NOT be a sub-object: " + classified.subObjects());
    }

    @Test
    void nonBlobEvent_staysSubObject() {
        Model model = eventStreamBlobPayloadModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.subObjects().stream()
                .anyMatch(s -> s.getId().getName().equals("CompleteEvent")),
            "Non-blob event struct must stay a sub-object: " + classified.subObjects());
        assertTrue(classified.blobPayloadEvents().stream()
                .noneMatch(s -> s.getId().getName().equals("CompleteEvent")),
            "Non-blob event struct must NOT be a blob-payload event: " + classified.blobPayloadEvents());
    }

    /**
     * A service whose operation input references two structs: one marked {@link CustomRenderedTrait}
     * (owned by a dedicated renderer) and one plain. The classifier's generic marker rule must drop
     * the marked one from subObjects while keeping the plain one — for any service, not just
     * dynamodb.
     */
    private Model modelWithCustomRenderedShape() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape marked = StructureShape.builder()
            .id("com.example#MarkedThing")
            .addMember("name", str.getId())
            .addTrait(new CustomRenderedTrait())
            .build();
        StructureShape plain = StructureShape.builder()
            .id("com.example#PlainThing")
            .addMember("name", str.getId())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#DoRequest")
            .addMember("marked", marked.getId())
            .addMember("plain", plain.getId())
            .build();
        StructureShape response = StructureShape.builder().id("com.example#DoResponse").build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Do").input(request.getId()).output(response.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2023-01-01").addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test")
                .cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        return Model.builder().addShapes(str, marked, plain, request, response, op, service).build();
    }

    @Test
    void customRenderedShape_isExcludedFromSubObjects() {
        Model model = modelWithCustomRenderedShape();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.subObjects().stream()
                .noneMatch(s -> s.getId().getName().equals("MarkedThing")),
            "@customRendered shape must be dropped from subObjects: " + classified.subObjects());
        assertTrue(classified.subObjects().stream()
                .anyMatch(s -> s.getId().getName().equals("PlainThing")),
            "unmarked shape must remain a sub-object: " + classified.subObjects());
    }

    /**
     * A @streaming union with two event members: one empty-member event (like S3's
     * ContinuationEvent / EndEvent, referenced by nothing after EventStreamRenderer's void()
     * callback fix) and one data event carrying a string member. Bound to an operation output so
     * both event structs are reachable.
     */
    private Model eventStreamEmptyAndDataModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape emptyEvt = StructureShape.builder()
            .id("com.example#EmptyEvt")
            .build();
        StructureShape dataEvt = StructureShape.builder()
            .id("com.example#DataEvt")
            .addMember("records", str.getId())
            .build();
        UnionShape eventStream = UnionShape.builder()
            .id("com.example#SelectEventStream")
            .addTrait(new StreamingTrait())
            .addMember("Empty", emptyEvt.getId())
            .addMember("Data", dataEvt.getId())
            .build();
        StructureShape request = StructureShape.builder()
            .id("com.example#SelectRequest").addMember("name", str.getId()).build();
        StructureShape response = StructureShape.builder()
            .id("com.example#SelectResponse").addMember("events", eventStream.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Select").input(request.getId()).output(response.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2023-01-01").addOperation(op.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test").cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        return Model.builder()
            .addShapes(str, emptyEvt, dataEvt, eventStream, request, response, op, service)
            .build();
    }

    @Test
    void classifyDropsEmptyMemberEventStructFromSubObjects() {
        Model model = eventStreamEmptyAndDataModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertFalse(classified.subObjects().stream()
                .anyMatch(s -> s.getId().getName().equals("EmptyEvt")),
            "empty event struct dropped from subObjects: " + classified.subObjects());
        assertTrue(classified.subObjects().stream()
                .anyMatch(s -> s.getId().getName().equals("DataEvt")),
            "data event struct still emitted as sub-object: " + classified.subObjects());
    }

    @Test
    void classifyDropsIncomingEventStreamUnionFromSubObjects() {
        // The @streaming union bound to an operation output (an incoming event stream) is realized
        // via the generated handler; nothing references the union as a data type, so it must not be
        // emitted as a standalone sub-object header.
        Model model = eventStreamEmptyAndDataModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertFalse(classified.subObjects().stream()
                .anyMatch(s -> s.getId().getName().equals("SelectEventStream")),
            "incoming event-stream union dropped from subObjects: " + classified.subObjects());
    }

    @Test
    void deprecatedOperation_inputAndOutputExcludedFromRequestsAndResults() {
        // Legacy C2J drops @deprecated operations entirely, so their orphaned request/result structs
        // are never emitted. The classifier must not put a @deprecated op's input in requests nor its
        // output in results, while a live op's input/output are present.
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape deprecatedRequest = StructureShape.builder()
            .id("com.example#DeprecatedRequest").addMember("id", str.getId()).build();
        StructureShape deprecatedResponse = StructureShape.builder()
            .id("com.example#DeprecatedResponse").addMember("r", str.getId()).build();
        StructureShape liveRequest = StructureShape.builder()
            .id("com.example#LiveRequest").addMember("id", str.getId()).build();
        StructureShape liveResponse = StructureShape.builder()
            .id("com.example#LiveResponse").addMember("r", str.getId()).build();
        OperationShape deprecatedOp = OperationShape.builder()
            .id("com.example#DeprecatedOp")
            .input(deprecatedRequest.getId()).output(deprecatedResponse.getId())
            .addTrait(DeprecatedTrait.builder().build())
            .build();
        OperationShape liveOp = OperationShape.builder()
            .id("com.example#LiveOp")
            .input(liveRequest.getId()).output(liveResponse.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2023-01-01")
            .addOperation(deprecatedOp.getId()).addOperation(liveOp.getId())
            .addTrait(ServiceTrait.builder().sdkId("test").arnNamespace("test")
                .cloudFormationName("Test").cloudTrailEventSource("test").build())
            .build();
        Model model = Model.builder()
            .addShapes(str, deprecatedRequest, deprecatedResponse, liveRequest, liveResponse,
                deprecatedOp, liveOp, service)
            .build();
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));

        assertTrue(classified.requests().stream()
                .noneMatch(r -> r.shape().getId().getName().equals("DeprecatedRequest")),
            "deprecated op input must not be a request: " + classified.requests());
        assertTrue(classified.results().stream()
                .noneMatch(r -> r.shape().getId().getName().equals("DeprecatedResponse")),
            "deprecated op output must not be a result: " + classified.results());
        assertTrue(classified.requests().stream()
                .anyMatch(r -> r.shape().getId().getName().equals("LiveRequest")),
            "live op input must be a request: " + classified.requests());
        assertTrue(classified.results().stream()
                .anyMatch(r -> r.shape().getId().getName().equals("LiveResponse")),
            "live op output must be a result: " + classified.results());
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
        var classified = ShapeClassifier.classify(model, service, ProtocolResolver.resolve(service, model));
        assertTrue(classified.enums().stream()
            .anyMatch(s -> s.getId().getName().equals("Status")));
    }
}
