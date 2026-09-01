/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.OverrideStreamingTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SupportsPresigningTrait;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.StreamingTrait;
import software.amazon.smithy.rulesengine.traits.OperationContextParamDefinition;
import software.amazon.smithy.rulesengine.traits.OperationContextParamsTrait;

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

    private static Model overrideStreamingModel(boolean marked) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape.Builder inB = StructureShape.builder()
            .id("com.example#DoThingRequest").addMember("name", str.getId());
        if (marked) {
            inB.addTrait(new OverrideStreamingTrait());
        }
        StructureShape input = inB.build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput").addMember("result", str.getId()).build();
        OperationShape op = OperationShape.builder().id("com.example#DoThing")
            .input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder().id("com.example#Example")
            .version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, input, output, op, service).build();
    }

    private static String renderDoThingRequestHeader(Model model) {
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
                .filter(p -> p.toString().endsWith("DoThingRequest.h"))
                .findFirst().orElseThrow())
            .orElseThrow();
    }

    @Test
    void overrideStreamingTrait_emitsIsStreamingFalse() {
        String h = renderDoThingRequestHeader(overrideStreamingModel(true));
        assertTrue(h.contains("bool IsStreaming() const override { return false; }"),
            "OverrideStreamingTrait must emit the non-streaming override: " + h);
    }

    @Test
    void withoutOverrideStreamingTrait_omitsIsStreaming() {
        String h = renderDoThingRequestHeader(overrideStreamingModel(false));
        assertFalse(h.contains("IsStreaming"),
            "unmarked requests must not emit IsStreaming: " + h);
    }

    private static Model supportsPresigningModel(boolean marked) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape.Builder inB = StructureShape.builder()
            .id("com.example#DoThingRequest").addMember("name", str.getId());
        if (marked) {
            inB.addTrait(new SupportsPresigningTrait());
        }
        StructureShape input = inB.build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput").addMember("result", str.getId()).build();
        OperationShape op = OperationShape.builder().id("com.example#DoThing")
            .input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder().id("com.example#Example")
            .version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, input, output, op, service).build();
    }

    @Test
    void supportsPresigningTrait_emitsProtectedDumpBodyToUrlOverride() {
        // C2J's RequestHeader.vm emits DumpBodyToUrl protocol-agnostically under
        // #if($shape.supportsPresigning()); the marker drives the same protected override here.
        String h = renderDoThingRequestHeader(supportsPresigningModel(true));
        assertTrue(h.contains("protected:"), "presignable request must open a protected: section: " + h);
        assertTrue(h.contains(
            "AWS_EXAMPLE_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;"),
            "presignable request must declare the DumpBodyToUrl override: " + h);
        assertTrue(h.contains("public:"), "presignable request must restore public: afterwards: " + h);
    }

    @Test
    void withoutSupportsPresigningTrait_omitsDumpBodyToUrl() {
        String h = renderDoThingRequestHeader(supportsPresigningModel(false));
        assertFalse(h.contains("DumpBodyToUrl"),
            "unmarked requests must not declare DumpBodyToUrl: " + h);
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

    // --- @httpChecksum ---

    /**
     * A JSON operation with @httpChecksum. The input carries a {@code checksumAlgorithm} enum member
     * (for requestAlgorithmMember) and a {@code checksumMode} enum member (for
     * requestValidationModeMember); the trait is configured from the given values.
     */
    private static Model httpChecksumModel(software.amazon.smithy.aws.traits.HttpChecksumTrait trait) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        software.amazon.smithy.model.shapes.EnumShape algo =
            software.amazon.smithy.model.shapes.EnumShape.builder()
                .id("com.example#ChecksumAlgorithm").addMember("CRC32", "CRC32").build();
        software.amazon.smithy.model.shapes.EnumShape mode =
            software.amazon.smithy.model.shapes.EnumShape.builder()
                .id("com.example#ChecksumMode").addMember("ENABLED", "ENABLED").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#PutThingInput")
            .addMember("checksumAlgorithm", algo.getId())
            .addMember("checksumMode", mode.getId())
            .addMember("name", str.getId())
            .build();
        StructureShape output = StructureShape.builder().id("com.example#PutThingOutput")
            .addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#PutThing").input(input.getId()).output(output.getId())
            .addTrait(trait).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, algo, mode, input, output, op, service).build();
    }

    private static String renderChecksumRequest(software.amazon.smithy.aws.traits.HttpChecksumTrait trait,
                                                 String fileSuffix) {
        Model model = httpChecksumModel(trait);
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
    void httpChecksumRequestAlgorithm_rendersAlgorithmNameAndIsSet() {
        // requestAlgorithmMember → GetChecksumAlgorithmName (crc64nvme default, else Mapper) +
        // ChecksumAlgorithmIsSet. Matches C2J ModelClassChecksumMembers.vm / PutObjectRequest.
        software.amazon.smithy.aws.traits.HttpChecksumTrait trait =
            software.amazon.smithy.aws.traits.HttpChecksumTrait.builder()
                .requestAlgorithmMember("checksumAlgorithm").build();
        String h = renderChecksumRequest(trait, "PutThingRequest.h");
        String c = renderChecksumRequest(trait, "PutThingRequest.cpp");

        assertTrue(h.contains("AWS_EXAMPLE_API Aws::String GetChecksumAlgorithmName() const override;"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API bool ChecksumAlgorithmIsSet() const override;"), h);

        assertTrue(c.contains("Aws::String PutThingRequest::GetChecksumAlgorithmName() const {"), c);
        assertTrue(c.contains("if (m_checksumAlgorithm == ChecksumAlgorithm::NOT_SET) {"), c);
        assertTrue(c.contains("return \"crc64nvme\";"), c);
        assertTrue(c.contains("return ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm);"), c);
        assertTrue(c.contains("return m_checksumAlgorithm != ChecksumAlgorithm::NOT_SET;"), c);
    }

    @Test
    void httpChecksumValidationAndResponseAlgorithms_render() {
        // requestValidationModeMember → ShouldValidateResponseChecksum; responseAlgorithms →
        // GetResponseChecksumAlgorithmNames (one push_back per algorithm, in order).
        software.amazon.smithy.aws.traits.HttpChecksumTrait trait =
            software.amazon.smithy.aws.traits.HttpChecksumTrait.builder()
                .requestValidationModeMember("checksumMode")
                .responseAlgorithms(java.util.List.of("CRC64NVME", "CRC32")).build();
        String h = renderChecksumRequest(trait, "PutThingRequest.h");
        String c = renderChecksumRequest(trait, "PutThingRequest.cpp");

        assertTrue(h.contains("AWS_EXAMPLE_API bool ShouldValidateResponseChecksum() const override;"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API Aws::Vector<Aws::String> GetResponseChecksumAlgorithmNames() const override;"), h);

        assertTrue(c.contains("return m_checksumMode == ChecksumMode::ENABLED;"), c);
        assertTrue(c.contains("responseChecksumAlgorithmNames.push_back(\"CRC64NVME\");"), c);
        assertTrue(c.contains("responseChecksumAlgorithmNames.push_back(\"CRC32\");"), c);
        assertTrue(c.contains("return responseChecksumAlgorithmNames;"), c);
    }

    @Test
    void httpChecksumRequestChecksumRequired_rendersInlineOverride() {
        // requestChecksumRequired → inline RequestChecksumRequired() in the header (no .cpp body),
        // matching C2J's PutBucketPolicyRequest.h (note the trailing semicolon after the brace).
        software.amazon.smithy.aws.traits.HttpChecksumTrait trait =
            software.amazon.smithy.aws.traits.HttpChecksumTrait.builder()
                .requestAlgorithmMember("checksumAlgorithm").requestChecksumRequired(true).build();
        String h = renderChecksumRequest(trait, "PutThingRequest.h");
        assertTrue(h.contains("inline bool RequestChecksumRequired() const override { return true; };"), h);
    }

    @Test
    void httpChecksumRequired_rendersInlineShouldComputeContentMd5() {
        // The legacy smithy.api#httpChecksumRequired trait (s3control uses it) requests a
        // Content-MD5 header. C2J derives Shape.computeContentMd5 from it and emits an inline
        // ShouldComputeContentMd5() override (RequestHeader.vm:105-108, no .cpp body). Distinct
        // from the flexible @httpChecksum trait.
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape input = StructureShape.builder().id("com.example#PutThingInput")
            .addMember("name", str.getId()).build();
        StructureShape output = StructureShape.builder().id("com.example#PutThingOutput")
            .addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#PutThing").input(input.getId()).output(output.getId())
            .addTrait(new software.amazon.smithy.model.traits.HttpChecksumRequiredTrait()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        Model model = Model.builder().addShapes(str, input, output, op, service).build();

        ServiceShape svc = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(svc, model);
        new RequestRenderer(
            ShapeClassifier.classify(model, svc, protocol).requests(),
            new RenderContext(model, svc, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        String h = manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith("PutThingRequest.h")).findFirst().orElseThrow()).orElseThrow();
        String c = manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith("PutThingRequest.cpp")).findFirst().orElseThrow()).orElseThrow();
        assertTrue(h.contains("AWS_EXAMPLE_API inline bool ShouldComputeContentMd5() const override { return true; }"), h);
        assertFalse(c.contains("ShouldComputeContentMd5"), "inline method must have no out-of-line body: " + c);
    }

    @Test
    void requestWithoutHttpChecksum_emitsNoChecksumMethods() {
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
        assertFalse(h.contains("GetChecksumAlgorithmName"), h);
        assertFalse(h.contains("RequestChecksumRequired"), h);
    }

    // --- @requestCompression ---

    /**
     * Model for a JSON operation carrying {@code @requestCompression(encodings: ["gzip"])} on
     * either a plain input (streaming = false) or a raw {@code @httpPayload} blob body input
     * (streaming = true).
     */
    private static Model requestCompressionModel(boolean streaming, java.util.List<String> encodings) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape.Builder input = StructureShape.builder().id("com.example#PutThingInput");
        if (streaming) {
            software.amazon.smithy.model.shapes.BlobShape blob =
                software.amazon.smithy.model.shapes.BlobShape.builder().id("com.example#Body").build();
            input.addMember(MemberShape.builder()
                .id("com.example#PutThingInput$body").target(blob.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build());
            input.addMember(MemberShape.builder()
                .id("com.example#PutThingInput$contentType").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("Content-Type")).build());
            Model.Builder mb = Model.builder().addShape(blob);
            return finishCompressionModel(mb, str, input.build(), encodings);
        }
        input.addMember("name", str.getId());
        return finishCompressionModel(Model.builder(), str, input.build(), encodings);
    }

    private static Model finishCompressionModel(Model.Builder mb, StringShape str,
                                                StructureShape input, java.util.List<String> encodings) {
        StructureShape output = StructureShape.builder().id("com.example#PutThingOutput")
            .addMember("r", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#PutThing").input(input.getId()).output(output.getId())
            .addTrait(software.amazon.smithy.model.traits.RequestCompressionTrait.builder()
                .encodings(encodings).build())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return mb.addShapes(str, input, output, op, service).build();
    }

    private static String renderCompressionRequest(boolean streaming, String fileSuffix) {
        Model model = requestCompressionModel(streaming, java.util.List.of("gzip"));
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
    void requestCompressionGzip_headerDeclaresGuardedVirtualOverride() {
        // C2J's RequestHeader.vm:148-156 emits GetSelectedCompressionAlgorithm as a virtual override
        // gated by ENABLED_ZLIB_REQUEST_COMPRESSION. The types (CompressionAlgorithm,
        // RequestCompressionConfig) come from the base AmazonWebServiceRequest.h transitively —
        // NO extra include in the request header.
        String h = renderCompressionRequest(false, "PutThingRequest.h");
        assertTrue(h.contains("#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION"),
            "Missing ENABLED_ZLIB_REQUEST_COMPRESSION guard: " + h);
        assertTrue(h.contains(
            "virtual Aws::Client::CompressionAlgorithm GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const override;"),
            "Missing GetSelectedCompressionAlgorithm decl: " + h);
        assertFalse(h.contains("#include <aws/core/client/RequestCompression"),
            "Header must not include RequestCompression header (transitively provided): " + h);
    }

    @Test
    void requestCompressionGzip_nonStreamingSourceUsesBodySizeCheck() {
        // Non-streaming variant (ModelClassRequiredCompression.vm): DISABLE -> NONE, then read the
        // already-serialized body via AmazonSerializableWebServiceRequest::GetBody(), compare its
        // size to config.requestMinCompressionSizeBytes, and either NONE or GZIP. Matches cloudwatch
        // PutMetricDataRequest.cpp exactly. Body only touches base state; NOT serde-blocked.
        String c = renderCompressionRequest(false, "PutThingRequest.cpp");
        assertTrue(c.contains("#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION"), c);
        assertTrue(c.contains(
            "Aws::Client::CompressionAlgorithm PutThingRequest::GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const {"),
            c);
        assertTrue(c.contains("config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE"), c);
        assertTrue(c.contains("const auto& body = AmazonSerializableWebServiceRequest::GetBody();"), c);
        assertTrue(c.contains("bodySize < config.requestMinCompressionSizeBytes"), c);
        assertTrue(c.contains("return Aws::Client::CompressionAlgorithm::NONE;"), c);
        assertTrue(c.contains("return Aws::Client::CompressionAlgorithm::GZIP;"), c);
    }

    @Test
    void requestCompressionGzip_streamingSourceCompressesWheneverEnabled() {
        // Streaming variant (ModelClassRequiredCompressionStream.vm): the body isn't sized up front,
        // so DISABLE -> NONE, else GZIP unconditionally. No body-size check.
        String c = renderCompressionRequest(true, "PutThingRequest.cpp");
        assertTrue(c.contains("#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION"), c);
        assertTrue(c.contains("PutThingRequest::GetSelectedCompressionAlgorithm"), c);
        assertTrue(c.contains("return Aws::Client::CompressionAlgorithm::GZIP;"), c);
        assertFalse(c.contains("requestMinCompressionSizeBytes"),
            "Streaming variant must not do a body-size check: " + c);
        assertFalse(c.contains("AmazonSerializableWebServiceRequest::GetBody"),
            "Streaming variant must not query the body: " + c);
    }

    @Test
    void requestCompression_nonGzipEncoding_throws() {
        // C2J transformer:795-800 rejects non-gzip encodings; the plugin must match. Rendering
        // aborts at request time (the renderer walks operations and encounters the trait).
        Model model = requestCompressionModel(false, java.util.List.of("deflate"));
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        RequestRenderer renderer = new RequestRenderer(
            ShapeClassifier.classify(model, service, protocol).requests(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example"));
        RuntimeException ex = org.junit.jupiter.api.Assertions.assertThrows(
            RuntimeException.class, () -> renderer.render(delegator));
        assertTrue(ex.getMessage().contains("gzip"), "Should mention gzip: " + ex.getMessage());
    }

    @Test
    void requestWithoutCompressionTrait_emitsNothingCompressionRelated() {
        // Regression guard: operations without @requestCompression must not gain the override or
        // its #ifdef. Reuses the query-member model which has no compression trait.
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
        String c = manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith("DoThingRequest.cpp")).findFirst().orElseThrow()).orElseThrow();
        assertFalse(h.contains("GetSelectedCompressionAlgorithm"), h);
        assertFalse(c.contains("GetSelectedCompressionAlgorithm"), c);
        assertFalse(h.contains("ENABLED_ZLIB_REQUEST_COMPRESSION"), h);
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

    // --- smithy.rules#operationContextParams ---

    /** Operation carrying ONLY smithy.rules#operationContextParams (no static, no member-level). */
    private static Model operationContextParamsOnlyModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        // Map<String, String> for keys(RequestItems) — the JMESPath the trait resolves.
        MapShape requestItemsMap = MapShape.builder()
            .id("com.example#RequestItemsMap")
            .key(MemberShape.builder().id("com.example#RequestItemsMap$key").target(str.getId()).build())
            .value(MemberShape.builder().id("com.example#RequestItemsMap$value").target(str.getId()).build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoBatchInput")
            .addMember("RequestItems", requestItemsMap.getId())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoBatchOutput").addMember("r", str.getId()).build();
        OperationContextParamsTrait ctxTrait = OperationContextParamsTrait.builder()
            .putParameter("ResourceArnList",
                OperationContextParamDefinition.builder().path("keys(RequestItems)").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoBatch").input(input.getId()).output(output.getId())
            .addTrait(ctxTrait).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, requestItemsMap, input, output, op, service).build();
    }

    private static String renderOperationContextRequest(Model model, String fileSuffix) {
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
    void operationContextParams_headerDeclaresGetters() {
        // An operation carrying only smithy.rules#operationContextParams must produce both the
        // GetEndpointContextParams() virtual override and the GetOperationContextParams() accessor
        // in its request header. Fails on main because RequestRenderer ignores the trait.
        String h = renderOperationContextRequest(operationContextParamsOnlyModel(), "DoBatchRequest.h");
        assertTrue(h.contains("EndpointParameters GetEndpointContextParams() const override;"),
            "Missing GetEndpointContextParams decl: " + h);
        assertTrue(h.contains("Aws::Vector<Aws::String> GetOperationContextParams() const;"),
            "Missing GetOperationContextParams decl: " + h);
    }

    /** Struct-dot-string: TableCreationParameters.TableName. */
    private static Model operationContextParams_dotAccessModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape tcp = StructureShape.builder()
            .id("com.example#TableCreationParameters").addMember("TableName", str.getId()).build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoBatchInput")
            .addMember("TableCreationParameters", tcp.getId()).build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoBatchOutput").addMember("r", str.getId()).build();
        OperationContextParamsTrait trait = OperationContextParamsTrait.builder()
            .putParameter("ResourceArn",
                OperationContextParamDefinition.builder().path("TableCreationParameters.TableName").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoBatch").input(input.getId()).output(output.getId()).addTrait(trait).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, tcp, input, output, op, service).build();
    }

    /** List-projection-dot-string: TransactItems[*].Get.TableName. */
    private static Model operationContextParams_projectionModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape get = StructureShape.builder()
            .id("com.example#Get").addMember("TableName", str.getId()).build();
        StructureShape item = StructureShape.builder()
            .id("com.example#Item").addMember("Get", get.getId()).build();
        ListShape list = ListShape.builder()
            .id("com.example#Items")
            .member(MemberShape.builder().id("com.example#Items$member").target(item.getId()).build())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoBatchInput").addMember("TransactItems", list.getId()).build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoBatchOutput").addMember("r", str.getId()).build();
        OperationContextParamsTrait trait = OperationContextParamsTrait.builder()
            .putParameter("ResourceArnList",
                OperationContextParamDefinition.builder().path("TransactItems[*].Get.TableName").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoBatch").input(input.getId()).output(output.getId()).addTrait(trait).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, get, item, list, input, output, op, service).build();
    }

    /** Multi-select-list flatten: TransactItems[*].[ConditionCheck.TableName, Put.TableName, Delete.TableName, Update.TableName][]. */
    private static Model operationContextParams_multiSelectFlattenModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape cc = StructureShape.builder()
            .id("com.example#CC").addMember("TableName", str.getId()).build();
        StructureShape put = StructureShape.builder()
            .id("com.example#Put").addMember("TableName", str.getId()).build();
        StructureShape del = StructureShape.builder()
            .id("com.example#Delete").addMember("TableName", str.getId()).build();
        StructureShape upd = StructureShape.builder()
            .id("com.example#Update").addMember("TableName", str.getId()).build();
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
            .id("com.example#DoBatchInput").addMember("TransactItems", list.getId()).build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoBatchOutput").addMember("r", str.getId()).build();
        OperationContextParamsTrait trait = OperationContextParamsTrait.builder()
            .putParameter("ResourceArnList",
                OperationContextParamDefinition.builder()
                    .path("TransactItems[*].[ConditionCheck.TableName, Put.TableName, Delete.TableName, Update.TableName][]").build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoBatch").input(input.getId()).output(output.getId()).addTrait(trait).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01").addOperation(op.getId()).build();
        return Model.builder().addShapes(str, cc, put, del, upd, item, list, input, output, op, service).build();
    }

    @Test
    void operationContextParams_keysPattern_endToEnd() {
        // Uses Task 1's operationContextParamsOnlyModel() (keys(RequestItems)).
        String h = renderOperationContextRequest(operationContextParamsOnlyModel(), "DoBatchRequest.h");
        String c = renderOperationContextRequest(operationContextParamsOnlyModel(), "DoBatchRequest.cpp");
        assertTrue(h.contains("EndpointParameters GetEndpointContextParams() const override;"), h);
        assertTrue(h.contains("Aws::Vector<Aws::String> GetOperationContextParams() const;"), h);
        assertTrue(c.contains(
            "parameters.emplace_back(Aws::String{\"ResourceArnList\"}, this->GetOperationContextParams()"), c);
        assertTrue(c.contains("Aws::Vector<Aws::String> DoBatchRequest::GetOperationContextParams() const"), c);
        assertTrue(c.contains("auto& RequestItemsElems = (*this).GetRequestItems();"), c);
        assertTrue(c.contains("for (auto& keysElem : RequestItemsElems)"), c);
        assertTrue(c.contains("result.emplace_back(keysElem.first);"), c);
    }

    @Test
    void operationContextParams_dotAccessPattern_endToEnd() {
        Model model = operationContextParams_dotAccessModel();
        String h = renderOperationContextRequest(model, "DoBatchRequest.h");
        String c = renderOperationContextRequest(model, "DoBatchRequest.cpp");
        assertTrue(h.contains("Aws::Vector<Aws::String> GetOperationContextParams() const;"), h);
        assertTrue(c.contains(
            "parameters.emplace_back(Aws::String{\"ResourceArn\"}, this->GetOperationContextParams()"), c);
        assertTrue(c.contains(
            "auto& TableCreationParametersElems = (*this).GetTableCreationParameters().GetTableName();"), c);
        assertTrue(c.contains("result.emplace_back(TableCreationParametersElems);"), c);
        assertFalse(c.contains("for (auto&"),
            "Dot-access pattern must not emit a for-loop: " + c);
    }

    @Test
    void operationContextParams_projectionPattern_endToEnd() {
        Model model = operationContextParams_projectionModel();
        String c = renderOperationContextRequest(model, "DoBatchRequest.cpp");
        assertTrue(c.contains("auto& TransactItemsElems = (*this).GetTransactItems();"), c);
        assertTrue(c.contains("for (auto& TransactItemsElem : TransactItemsElems)"), c);
        assertTrue(c.contains(
            "auto& GetElems = TransactItemsElem.GetGet().GetTableName();"), c);
        assertTrue(c.contains("result.emplace_back(GetElems);"), c);
    }

    @Test
    void operationContextParams_multiSelectFlattenPattern_endToEnd() {
        Model model = operationContextParams_multiSelectFlattenModel();
        String c = renderOperationContextRequest(model, "DoBatchRequest.cpp");
        assertTrue(c.contains("for (auto& TransactItemsElem : TransactItemsElems)"), c);
        // Each of the four field-access branches must appear inside the loop body.
        for (String branch : java.util.List.of("ConditionCheck", "Put", "Delete", "Update")) {
            assertTrue(c.contains(
                "auto& " + branch + "Elems = TransactItemsElem.Get" + branch + "().GetTableName();"),
                "Missing branch " + branch + ": " + c);
            assertTrue(c.contains("result.emplace_back(" + branch + "Elems);"),
                "Missing result push for " + branch + ": " + c);
        }
    }
}
