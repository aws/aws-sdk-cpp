/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.ResultRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpPayloadTrait;
import software.amazon.smithy.model.traits.StreamingTrait;
import software.amazon.smithy.model.traits.Trait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class ResultRendererTest {

    /** A one-member output operation under a service carrying the given protocol trait. */
    private static Model oneMemberOutputModel(Trait protocolTrait) {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingInput").addMember("name", str.getId()).build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput").addMember("field", str.getId()).build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(protocolTrait).addOperation(op.getId()).build();
        return Model.builder().addShapes(str, input, output, op, service).build();
    }

    private static String renderResultHeader(Trait protocolTrait) {
        Model model = oneMemberOutputModel(protocolTrait);
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new ResultRenderer(
            ShapeClassifier.classify(model, service, protocol).results(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith("DoThingResult.h")).findFirst().orElseThrow()).orElseThrow();
    }

    /** Renders the result header for the one-member model under the given smithyServiceName. */
    private static java.util.List<String> renderResultFileNames(Trait protocolTrait, String smithyServiceName) {
        Model model = oneMemberOutputModel(protocolTrait);
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new ResultRenderer(
            ShapeClassifier.classify(model, service, protocol).results(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", smithyServiceName)).render(delegator);
        delegator.flushWriters();
        return manifest.getFiles().stream().map(java.nio.file.Path::toString)
            .collect(java.util.stream.Collectors.toList());
    }

    @Test
    void ec2Result_usesResponseSuffix() {
        // ShapeUtil.getResultSuffix returns "Response" for the ec2 service, so EC2 result
        // classes/files must be named *Response, matching the legacy C2J generator.
        java.util.List<String> ec2Files =
            renderResultFileNames(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build(), "ec2");
        assertTrue(ec2Files.stream().anyMatch(f -> f.endsWith("DoThingResponse.h")), ec2Files.toString());
        assertTrue(ec2Files.stream().anyMatch(f -> f.endsWith("DoThingResponse.cpp")), ec2Files.toString());
        assertFalse(ec2Files.stream().anyMatch(f -> f.endsWith("DoThingResult.h")), ec2Files.toString());

        // Non-ec2 services keep the "Result" suffix.
        java.util.List<String> otherFiles =
            renderResultFileNames(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build(), "example");
        assertTrue(otherFiles.stream().anyMatch(f -> f.endsWith("DoThingResult.h")), otherFiles.toString());
    }

    @Test
    void cborResult_omitsHasBeenSetAccessors() {
        // C2J's CborResultHeader.vm sets useRequiredField=false, so result classes never emit
        // HasBeenSet() accessors — same as every other protocol. (Only sub-object and request
        // headers set useRequiredField=true.)
        String h = renderResultHeader(software.amazon.smithy.protocol.traits.Rpcv2CborTrait.builder().build());
        assertFalse(h.contains("HasBeenSet() const"), h);
    }

    @Test
    void jsonResult_omitsHasBeenSetAccessors() {
        String h = renderResultHeader(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build());
        assertFalse(h.contains("HasBeenSet() const"), h);
    }

    /** A GetBlob operation whose output binds a @httpPayload @streaming blob member "body". */
    private static Model streamingResultModel() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        BlobShape blob = BlobShape.builder()
            .id("com.example#StreamBlob").addTrait(new StreamingTrait()).build();
        StructureShape input = StructureShape.builder()
            .id("com.example#GetBlobInput").addMember("name", str.getId()).build();
        StructureShape output = StructureShape.builder()
            .id("com.example#GetBlobOutput")
            .addMember(MemberShape.builder()
                .id("com.example#GetBlobOutput$body").target(blob.getId())
                .addTrait(new HttpPayloadTrait()).build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#GetBlob").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build())
            .addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, input, output, op, service).build();
    }

    private static String renderStreaming(String fileSuffix) {
        Model model = streamingResultModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new ResultRenderer(
            ShapeClassifier.classify(model, service, protocol).results(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith(fileSuffix)).findFirst().orElseThrow()).orElseThrow();
    }

    @Test
    void streamingResult_isMoveOnlyWithResponseStream() {
        String h = renderStreaming("GetBlobResult.h");
        assertTrue(h.contains("GetBlobResult(GetBlobResult&&) = default;"), h);
        assertTrue(h.contains("GetBlobResult& operator=(GetBlobResult&&) = default;"), h);
        assertTrue(h.contains("GetBlobResult(const GetBlobResult&) = delete;"), h);
        assertTrue(h.contains("Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result"), h);
        assertTrue(h.contains("#include <aws/core/utils/stream/ResponseStream.h>"), h);
        assertTrue(h.contains("Aws::IOStream& GetBody() const"), h);
        assertTrue(h.contains("void ReplaceBody(Aws::IOStream* body)"), h);
        assertFalse(h.contains("SetBody"), h);
    }

    @Test
    void streamingResultSource_takesOwnershipOfPayload() {
        String cpp = renderStreaming("GetBlobResult.cpp");
        assertTrue(cpp.contains("m_body = result.TakeOwnershipOfPayload();"), cpp);
    }

    @Test
    void streamingResultSource_blobPayloadIncludesHashingUtils() {
        // The blob payload member pulls HashingUtils.h into the source (C2J computeSourceIncludes).
        String cpp = renderStreaming("GetBlobResult.cpp");
        assertTrue(cpp.contains("#include <aws/core/utils/HashingUtils.h>"), cpp);
    }

    /**
     * A GetStream operation whose output binds a @httpPayload @streaming blob member with the
     * given name, optionally alongside an @httpResponseCode integer member "statusCode".
     */
    private static Model streamingResultModel(String payloadMemberName, boolean withStatusCode) {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        BlobShape blob = BlobShape.builder()
            .id("com.example#StreamBlob").addTrait(new StreamingTrait()).build();
        software.amazon.smithy.model.shapes.IntegerShape intShape =
            software.amazon.smithy.model.shapes.IntegerShape.builder().id("com.example#Int").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#GetStreamInput").addMember("name", str.getId()).build();
        StructureShape.Builder outputBuilder = StructureShape.builder()
            .id("com.example#GetStreamOutput")
            .addMember(MemberShape.builder()
                .id("com.example#GetStreamOutput$" + payloadMemberName).target(blob.getId())
                .addTrait(new HttpPayloadTrait())
                .addTrait(new software.amazon.smithy.model.traits.RequiredTrait()).build());
        if (withStatusCode) {
            outputBuilder.addMember(MemberShape.builder()
                .id("com.example#GetStreamOutput$statusCode").target(intShape.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpResponseCodeTrait()).build());
        }
        StructureShape output = outputBuilder.build();
        OperationShape op = OperationShape.builder()
            .id("com.example#GetStream").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(str, blob, intShape, input, output, op, service).assemble().unwrap();
    }

    /** Same as the named-member model, but the payload member carries documentation. */
    private static Model documentedStreamingResultModel() {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        BlobShape blob = BlobShape.builder()
            .id("com.example#StreamBlob").addTrait(new StreamingTrait()).build();
        StructureShape input = StructureShape.builder()
            .id("com.example#GetStreamInput").addMember("name", str.getId()).build();
        StructureShape output = StructureShape.builder()
            .id("com.example#GetStreamOutput")
            .addMember(MemberShape.builder()
                .id("com.example#GetStreamOutput$body").target(blob.getId())
                .addTrait(new HttpPayloadTrait())
                .addTrait(new software.amazon.smithy.model.traits.DocumentationTrait(
                    "<p>Inference response from the model.</p>")).build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#GetStream").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .addOperation(op.getId()).build();
        return Model.builder().addShapes(str, blob, input, output, op, service).build();
    }

    @Test
    void streamingResult_payloadAccessorRendersMemberDoc() {
        // C2J emits the streaming payload member's @documentation above GetBody(); the smithy
        // streaming-header path must too (it was previously dropped for the hand-written accessor).
        String h = renderResultSource(documentedStreamingResultModel(), "GetStreamResult.h");
        assertTrue(h.contains("Inference response from the model."),
            "Streaming payload accessor must render the member doc comment: " + h);
        // The doc must precede the getter, inside the ///@{ group.
        int doc = h.indexOf("Inference response from the model.");
        int getter = h.indexOf("Aws::IOStream& GetBody() const");
        assertTrue(doc >= 0 && getter >= 0 && doc < getter,
            "Doc comment must come before GetBody(): " + h);
    }

    @Test
    void streamingResult_payloadAccessorNamedAfterMember() {
        String h = renderResultSource(streamingResultModel("audioStream", false), "GetStreamResult.h");
        assertTrue(h.contains("Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }"), h);
        // ReplaceBody stays literal regardless of member name, matching C2J StreamResultHeader.vm.
        assertTrue(h.contains("void ReplaceBody(Aws::IOStream* body) { m_audioStream = "), h);
        assertTrue(h.contains("Aws::Utils::Stream::ResponseStream m_audioStream{};"), h);
        assertTrue(h.contains("bool m_audioStreamHasBeenSet = false;"), h);
        assertFalse(h.contains("m_body"), h);
    }

    @Test
    void streamingResultSource_payloadFieldNamedAfterMember() {
        String cpp = renderResultSource(streamingResultModel("audioStream", false), "GetStreamResult.cpp");
        assertTrue(cpp.contains("m_audioStream = result.TakeOwnershipOfPayload();"), cpp);
        assertTrue(cpp.contains("m_audioStreamHasBeenSet = true;"), cpp);
        assertFalse(cpp.contains("m_body"), cpp);
    }

    @Test
    void streamingResultSource_setsStatusCodeMember() {
        String cpp = renderResultSource(streamingResultModel("body", true), "GetStreamResult.cpp");
        assertTrue(cpp.contains("m_statusCode = static_cast<int>(result.GetResponseCode());"), cpp);
        assertTrue(cpp.contains("m_statusCodeHasBeenSet = true;"), cpp);
    }

    /** A rest-json operation whose output has an @httpResponseCode integer member "status". */
    private static Model statusCodeResultModel() {
        software.amazon.smithy.model.shapes.IntegerShape intShape =
            software.amazon.smithy.model.shapes.IntegerShape.builder().id("com.example#Int").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#StatInput").build();
        StructureShape output = StructureShape.builder()
            .id("com.example#StatOutput")
            .addMember(MemberShape.builder()
                .id("com.example#StatOutput$status").target(intShape.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpResponseCodeTrait()).build())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#Stat").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(intShape, input, output, op, service).assemble().unwrap();
    }

    private static String renderResultSource(Model model, String fileSuffix) {
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        new ResultRenderer(
            ShapeClassifier.classify(model, service, protocol).results(),
            new RenderContext(model, service, ProtocolResolver.traitsFor(protocol),
                "Example", "AWS_EXAMPLE_API", "example")).render(delegator);
        delegator.flushWriters();
        return manifest.getFileString(manifest.getFiles().stream()
            .filter(p -> p.toString().endsWith(fileSuffix)).findFirst().orElseThrow()).orElseThrow();
    }

    @Test
    void statusCodeMember_setFromResponseCode() {
        String cpp = renderResultSource(statusCodeResultModel(), "StatResult.cpp");
        assertTrue(cpp.contains("m_status = static_cast<int>(result.GetResponseCode());"), cpp);
    }

    /**
     * A one-member rest-xml output operation whose output structure optionally carries the internal
     * {@link com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.TopLevelHostIdTrait}
     * marker (as {@code S3ControlTransforms} stamps it).
     */
    private static Model hostIdResultModel(boolean marked) {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingInput").addMember("name", str.getId()).build();
        StructureShape.Builder outputBuilder = StructureShape.builder()
            .id("com.example#DoThingOutput").addMember("field", str.getId());
        if (marked) {
            outputBuilder.addTrait(new com.amazonaws.util.awsclientsmithygenerator.generators
                .model.transforms.TopLevelHostIdTrait());
        }
        StructureShape output = outputBuilder.build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example").version("2024-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build())
            .addOperation(op.getId()).build();
        return Model.builder().addShapes(str, input, output, op, service).build();
    }

    @Test
    void hostIdTrait_rendersHostIdGroupAfterRequestId() {
        String h = renderResultSource(hostIdResultModel(true), "DoThingResult.h");
        assertTrue(h.contains("inline const Aws::String& GetHostId() const { return m_hostId; }"), h);
        assertTrue(h.contains("x-amz-id-2 header value, also known as Host Id"), h);
        assertTrue(h.contains("Aws::String m_hostId;"), h);
        assertTrue(h.contains("bool m_hostIdHasBeenSet = false;"), h);

        // The HostId accessor group renders immediately after the RequestId group.
        int reqAccessor = h.indexOf("GetRequestId");
        int hostAccessor = h.indexOf("GetHostId");
        assertTrue(reqAccessor >= 0 && hostAccessor > reqAccessor,
            "HostId accessor group must follow the RequestId group: " + h);

        // m_hostId is declared immediately after m_requestId in the private section.
        int reqMember = h.indexOf("Aws::String m_requestId;");
        int hostMember = h.indexOf("Aws::String m_hostId;");
        assertTrue(reqMember >= 0 && hostMember > reqMember,
            "m_hostId must be declared after m_requestId: " + h);

        int reqFlag = h.indexOf("bool m_requestIdHasBeenSet = false;");
        int hostFlag = h.indexOf("bool m_hostIdHasBeenSet = false;");
        assertTrue(reqFlag >= 0 && hostFlag > reqFlag,
            "m_hostIdHasBeenSet must be declared after m_requestIdHasBeenSet: " + h);
    }

    @Test
    void noHostIdTrait_omitsHostIdGroup() {
        String h = renderResultSource(hostIdResultModel(false), "DoThingResult.h");
        // A rest-xml result still gets the sibling top-level RequestId group ...
        assertTrue(h.contains("GetRequestId"), h);
        // ... but no HostId group without the marker trait.
        assertFalse(h.contains("GetHostId"), h);
        assertFalse(h.contains("m_hostId"), h);
    }
}
