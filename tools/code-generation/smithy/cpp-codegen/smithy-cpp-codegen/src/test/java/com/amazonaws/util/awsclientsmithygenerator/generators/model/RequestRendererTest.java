/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.StreamingTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class RequestRendererTest {

    private static Model streamingModel(boolean inputStreams, boolean outputStreams) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape eventA = StructureShape.builder()
            .id("com.example#AlphaEvent")
            .addMember("data", str.getId())
            .build();
        UnionShape stream = UnionShape.builder()
            .id("com.example#MyStreamEventStream")
            .addTrait(new StreamingTrait())
            .addMember("alpha", eventA.getId())
            .build();

        StructureShape.Builder inputBuilder = StructureShape.builder().id("com.example#DoStreamInput");
        inputBuilder.addMember("name", str.getId());
        if (inputStreams) {
            inputBuilder.addMember("body", stream.getId());
        }
        StructureShape input = inputBuilder.build();

        StructureShape.Builder outputBuilder = StructureShape.builder().id("com.example#DoStreamOutput");
        if (outputStreams) {
            outputBuilder.addMember("stream", stream.getId());
        } else {
            outputBuilder.addMember("result", str.getId());
        }
        StructureShape output = outputBuilder.build();

        OperationShape op = OperationShape.builder()
            .id("com.example#DoStream")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .addOperation(op.getId())
            .build();
        return Model.builder().addShapes(str, eventA, stream, input, output, op, service).build();
    }

    private static String renderRequestHeaderForStreamingOp(boolean inputStreams, boolean outputStreams) {
        return renderStreamingOp(inputStreams, outputStreams, "DoStreamRequest.h");
    }

    private static String renderStreamingOp(boolean inputStreams, boolean outputStreams, String fileSuffix) {
        Model model = streamingModel(inputStreams, outputStreams);
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        RequestRenderer renderer = new RequestRenderer(
            ShapeClassifier.classify(model, service, protocol).requests(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example"));
        renderer.render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(
            manifest.getFiles().stream()
                .filter(p -> p.toString().endsWith(fileSuffix))
                .findFirst().orElseThrow())
            .orElseThrow();
    }

    @Test
    void streamingResponseRequest_hasEventStreamAugmentation() {
        // Model: operation with streaming OUTPUT only (like SubscribeToShard / ConverseStream)
        String h = renderRequestHeaderForStreamingOp(false, true);
        assertTrue(h.contains("bool HasEventStreamResponse() const override { return true; }"),
            "Missing HasEventStreamResponse: " + h);
        assertTrue(h.contains("GetEventStreamDecoder()"), "Missing decoder accessor: " + h);
        assertTrue(h.contains("GetEventStreamHandler()"), "Missing handler accessor: " + h);
        assertTrue(h.contains("SetEventStreamHandler") && h.contains("WithEventStreamHandler"),
            "Missing handler setters: " + h);
        assertTrue(h.contains("m_decoder.ResetEventStreamHandler(&m_handler)"),
            "Missing decoder reset in setter: " + h);
        assertTrue(h.contains("EventStreamDecoder m_decoder"), "Missing decoder member: " + h);
        assertTrue(h.contains("#include <aws/core/utils/event/EventStreamDecoder.h>"),
            "Missing decoder include: " + h);
        assertFalse(h.contains("IsEventStreamRequest"),
            "Response-only op must not declare IsEventStreamRequest: " + h);
        // Mainline ordering: handler/decoder sit AFTER the data members and BEFORE the
        // HasBeenSet flags (not at the top of the private block). Target the member
        // DECLARATION ("DoStreamHandler m_handler;"), not the public getter body.
        int dataMember = h.indexOf("Aws::String m_name;");
        int handlerDecl = h.indexOf("DoStreamHandler m_handler;");
        int firstFlag = h.indexOf("HasBeenSet = false;");
        assertTrue(dataMember >= 0 && handlerDecl > dataMember,
            "m_handler declaration must come after data members: " + h);
        assertTrue(firstFlag >= 0 && handlerDecl < firstFlag,
            "m_handler declaration must come before HasBeenSet flags: " + h);
    }

    @Test
    void bidirectionalRequest_alsoHasIsEventStreamRequest() {
        String h = renderRequestHeaderForStreamingOp(true, true);
        assertTrue(h.contains("bool IsEventStreamRequest() const override { return true; }"),
            "Missing IsEventStreamRequest for bidirectional op: " + h);
        assertTrue(h.contains("bool HasEventStreamResponse() const override { return true; }"),
            "Bidirectional op must also declare HasEventStreamResponse: " + h);
    }

    @Test
    void bidirectionalRequest_rendersEventStreamInputMemberAsSharedPtr() {
        // C2J renders a request with an event-stream (input) member specially: an inline empty
        // SerializePayload, a GetBody() override returning the encoded IOStream, and the member
        // itself as a std::shared_ptr<Input> with a collision-renamed getter (GetMemberBody,
        // because GetBody is reserved). The member has no templated setter and stores a shared_ptr.
        String h = renderRequestHeaderForStreamingOp(true, true);
        assertTrue(h.contains("#include <memory>"), "Missing <memory> include: " + h);
        assertTrue(h.contains("Aws::String SerializePayload() const override { return {}; }"),
            "Event-stream-input request must emit an inline empty SerializePayload: " + h);
        assertTrue(h.contains("std::shared_ptr<Aws::IOStream> GetBody() const override;"),
            "Missing GetBody() override: " + h);
        assertTrue(h.contains("std::shared_ptr<MyStreamEventStream> GetMemberBody() const { return m_body; }"),
            "Event-stream member getter must be GetMemberBody returning shared_ptr: " + h);
        assertTrue(h.contains("void SetBody(const std::shared_ptr<MyStreamEventStream>& value) {"),
            "Event-stream member setter must take a shared_ptr: " + h);
        assertTrue(h.contains("WithBody(const std::shared_ptr<MyStreamEventStream>& value)"),
            "Event-stream member wither must take a shared_ptr: " + h);
        assertTrue(h.contains("std::shared_ptr<MyStreamEventStream> m_body;"),
            "Event-stream member must be stored as shared_ptr: " + h);
        assertTrue(h.contains("bool m_bodyHasBeenSet = false;"),
            "Event-stream member must still have a HasBeenSet flag: " + h);
        // Must NOT render the streaming member through the generic templated-setter path.
        assertFalse(h.contains("template <typename BodyT"),
            "Event-stream member must not use the generic templated setter: " + h);
        assertFalse(h.contains("Aws::String SerializePayload() const override;"),
            "Event-stream-input request must not also declare a plain SerializePayload: " + h);
    }

    @Test
    void bidirectionalRequestSource_definesGetBody() {
        // The header declares `std::shared_ptr<Aws::IOStream> GetBody() const override;`, so the
        // source MUST define it (returning the event-stream member) or linking fails. Matches C2J
        // StreamRequestSource.vm.
        String c = renderStreamingOp(true, true, "DoStreamRequest.cpp");
        assertTrue(c.contains(
            "std::shared_ptr<Aws::IOStream> DoStreamRequest::GetBody() const { return m_body; }"),
            "Bidirectional request source must define GetBody() returning the event-stream member: " + c);
        // C2J's event-stream request source pulls AmazonWebServiceResult.h and the Stream/Aws
        // usings rather than the JSON serde header.
        assertTrue(c.contains("#include <aws/core/AmazonWebServiceResult.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Stream;"), c);
    }

    @Test
    void nonStreamingRequest_hasNoEventStreamAugmentation() {
        String h = renderRequestHeaderForStreamingOp(false, false);
        assertFalse(h.contains("HasEventStreamResponse"), "Non-streaming request must be clean: " + h);
        assertFalse(h.contains("GetEventStreamDecoder"), "Non-streaming request must be clean: " + h);
        assertFalse(h.contains("IsEventStreamRequest"), "Non-streaming request must be clean: " + h);
    }

    private static Model queryMemberModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingInput")
            .addMember(MemberShape.builder()
                .id("com.example#DoThingInput$filter").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpQueryTrait("filter")).build())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput").addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId())
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .addOperation(op.getId()).build();
        return Model.builder().addShapes(str, input, output, op, service).build();
    }

    /**
     * Request headers must NOT include {@code <aws/core/http/URI.h>} even when they declare
     * URI-taking methods: the base {@code AmazonWebServiceRequest.h} forward-declares
     * {@code Aws::Http::URI}, which suffices for a reference parameter, and C2J omits the
     * include. Emitting it would break byte-parity with the C2J output.
     */
    @Test
    void requestWithQueryMember_doesNotIncludeUriHeader() {
        Model model = queryMemberModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new RequestRenderer(
            ShapeClassifier.classify(model, service, protocol).requests(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        String h = manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith("DoThingRequest.h")).findFirst().orElseThrow()).orElseThrow();
        assertFalse(h.contains("#include <aws/core/http/URI.h>"), h);
    }

    /** Operation whose input has an @httpPayload blob body + a contentType header + a plain member. */
    private static Model rawStreamingPayloadRequestModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        software.amazon.smithy.model.shapes.BlobShape blob =
            software.amazon.smithy.model.shapes.BlobShape.builder().id("com.example#Body").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoStreamInput")
            .addMember(MemberShape.builder()
                .id("com.example#DoStreamInput$body").target(blob.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build())
            .addMember(MemberShape.builder()
                .id("com.example#DoStreamInput$contentType").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("Content-Type")).build())
            .addMember("modelId", str.getId())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoStreamOutput").addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoStream").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, input, output, op, service).build();
    }

    private static String renderRawStreamingPayloadRequest(String fileSuffix) {
        Model model = rawStreamingPayloadRequestModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new RequestRenderer(
            ShapeClassifier.classify(model, service, protocol).requests(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith(fileSuffix)).findFirst().orElseThrow()).orElseThrow();
    }

    @Test
    void rawStreamingPayloadRequest_usesStreamingBaseClassAndDropsPayloadMembers() {
        // C2J: a request with a raw streaming @httpPayload member derives from
        // Streaming<Prefix>Request, which supplies GetBody/SetBody and GetContentType/SetContentType.
        // The payload member (body) and the contentType member are stripped, and SerializePayload
        // is not emitted (the base handles the body). Other members (modelId) remain.
        String h = renderRawStreamingPayloadRequest("DoStreamRequest.h");
        assertTrue(h.contains("class DoStreamRequest : public StreamingExampleRequest {"),
            "Must derive from StreamingExampleRequest: " + h);
        assertFalse(h.contains("GetBody") || h.contains("SetBody") || h.contains("m_body"),
            "Payload member must be dropped (base provides GetBody/SetBody): " + h);
        assertFalse(h.contains("GetContentType") || h.contains("m_contentType"),
            "contentType member must be dropped (base provides GetContentType): " + h);
        assertFalse(h.contains("SerializePayload"),
            "SerializePayload must not be emitted for a streaming-payload request: " + h);
        assertTrue(h.contains("GetModelId"),
            "Non-payload members must still be rendered: " + h);
    }

    @Test
    void rawStreamingPayloadRequestSource_includesBlobAndHeaderSerdeIncludes() {
        // The source scans ALL members (payload not filtered out there), so a blob payload pulls
        // HashingUtils.h and a header member pulls AWSStringStream.h — matching C2J.
        String c = renderRawStreamingPayloadRequest("DoStreamRequest.cpp");
        assertTrue(c.contains("#include <aws/core/utils/HashingUtils.h>"),
            "Blob payload member must pull HashingUtils.h into the source: " + c);
        assertTrue(c.contains("#include <aws/core/utils/memory/stl/AWSStringStream.h>"),
            "Header member must pull AWSStringStream.h into the source: " + c);
    }

    @Test
    void rawStreamingPayloadRequestSource_usesStreamIncludesNotJsonSerde() {
        // C2J routes a streaming (httpPayload blob body) request through StreamRequestSource.vm:
        // AmazonWebServiceResult.h + the Stream/Utils/Aws usings, and NOT the JSON serde header/using.
        String c = renderRawStreamingPayloadRequest("DoStreamRequest.cpp");
        assertTrue(c.contains("#include <aws/core/AmazonWebServiceResult.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Stream;"), c);
        assertFalse(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"),
            "Streaming-payload request source must not include the JSON serializer: " + c);
        assertFalse(c.contains("using namespace Aws::Utils::Json;"),
            "Streaming-payload request source must not use the Json namespace: " + c);
    }

    /**
     * Same as {@link #rawStreamingPayloadRequestModel()} but under REST-JSON, where {@code contentType}
     * (stripped, supplied by the streaming base) is the ONLY header-bound member and
     * {@code hasTargetHeader()} is false. This is the combination that exposes header/source drift.
     */
    private static Model rawStreamingPayloadRestJsonRequestModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        software.amazon.smithy.model.shapes.BlobShape blob =
            software.amazon.smithy.model.shapes.BlobShape.builder().id("com.example#Body").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoStreamInput")
            .addMember(MemberShape.builder()
                .id("com.example#DoStreamInput$body").target(blob.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build())
            .addMember(MemberShape.builder()
                .id("com.example#DoStreamInput$contentType").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("Content-Type")).build())
            .addMember("modelId", str.getId())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoStreamOutput").addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoStream").input(input.getId()).output(output.getId())
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, input, output, op, service).build();
    }

    private static String renderRawStreamingPayloadRestJsonRequest(String fileSuffix) {
        Model model = rawStreamingPayloadRestJsonRequestModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new RequestRenderer(
            ShapeClassifier.classify(model, service, protocol).requests(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith(fileSuffix)).findFirst().orElseThrow()).orElseThrow();
    }

    @Test
    void rawStreamingPayloadRequestRestJson_headerAndSourceAgreeOnRequestSpecificHeaders() {
        // Under a REST protocol (hasTargetHeader() == false), a raw-streaming-payload request whose
        // ONLY header-bound member is the stripped contentType must emit GetRequestSpecificHeaders in
        // NEITHER the header nor the source. The header renders from the contentType-excluded shape;
        // the source MUST render from the same shape. Otherwise the source defines
        // GetRequestSpecificHeaders() out-of-line for a method the header never declares (a C++
        // compile error).
        String h = renderRawStreamingPayloadRestJsonRequest("DoStreamRequest.h");
        String c = renderRawStreamingPayloadRestJsonRequest("DoStreamRequest.cpp");
        assertFalse(h.contains("GetRequestSpecificHeaders"),
            "Header must not declare GetRequestSpecificHeaders (contentType is stripped): " + h);
        assertFalse(c.contains("GetRequestSpecificHeaders"),
            "Source must not define GetRequestSpecificHeaders (contentType is stripped): " + c);
    }
}
