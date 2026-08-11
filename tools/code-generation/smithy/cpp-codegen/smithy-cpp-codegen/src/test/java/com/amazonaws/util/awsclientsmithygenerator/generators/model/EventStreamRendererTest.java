/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EventStreamRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.ErrorTrait;
import software.amazon.smithy.model.traits.StreamingTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class EventStreamRendererTest {

    private static Model twoEventModel() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape eventA = StructureShape.builder()
            .id("com.example#AlphaEvent")
            .addMember("data", str.getId())
            .build();
        StructureShape eventB = StructureShape.builder()
            .id("com.example#BetaEvent")
            .addMember("data", str.getId())
            .build();
        // Non-modeled exception: only a trivial "message" member -> generic ExampleError.
        StructureShape exc = StructureShape.builder()
            .id("com.example#BadException")
            .addTrait(new ErrorTrait("client"))
            .addMember("message", str.getId())
            .build();
        // Modeled exception: has a non-trivial member -> concrete type + model include.
        StructureShape modeledExc = StructureShape.builder()
            .id("com.example#DetailedException")
            .addTrait(new ErrorTrait("client"))
            .addMember("message", str.getId())
            .addMember("detail", str.getId())
            .build();
        UnionShape stream = UnionShape.builder()
            .id("com.example#MyStreamEventStream")
            .addTrait(new StreamingTrait())
            .addTrait(new DocumentationTrait("<p>Tagged union of stream events.</p>"))
            .addMember("alpha", eventA.getId(),
                b -> b.addTrait(new DocumentationTrait("<p>Alpha event doc.</p>")))
            .addMember("beta", eventB.getId())
            .addMember("badException", exc.getId())
            .addMember("detailedException", modeledExc.getId())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoStreamInput")
            .addMember("name", str.getId())
            .build();
        // Output carries the streaming union member AND a non-streaming member: C2J synthesizes
        // the InitialResponse from the result's non-event-stream members.
        StructureShape output = StructureShape.builder()
            .id("com.example#DoStreamOutput")
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoStreamOutput$stream").target(stream.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build())
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoStreamOutput$contentType").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("X-Content-Type")).build())
            .build();
        software.amazon.smithy.model.shapes.OperationShape op =
            software.amazon.smithy.model.shapes.OperationShape.builder()
                .id("com.example#DoStream")
                .input(input.getId())
                .output(output.getId())
                .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .addOperation(op.getId())
            .build();
        return Model.builder().addShapes(str, stream, eventA, eventB, exc, modeledExc, input, output, op, service).build();
    }

    private static String render(String fileSuffix) {
        Model model = twoEventModel();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        EventStreamRenderer renderer = new EventStreamRenderer(
            ShapeClassifier.classify(model, service, protocol).eventStreamHandlers(),
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
    void handlerHeader_hasEnumAndCallbacksPerEvent() {
        String h = render("DoStreamHandler.h");
        assertTrue(h.contains("enum class DoStreamEventType"), "Missing EventType enum: " + h);
        assertTrue(h.contains("INITIAL_RESPONSE"), "Missing INITIAL_RESPONSE: " + h);
        assertTrue(h.contains("ALPHA") && h.contains("BETA"), "Missing event enum constants: " + h);
        assertTrue(h.contains("UNKNOWN"), "Missing UNKNOWN: " + h);
        assertTrue(h.contains("SetAlphaEventCallback") && h.contains("SetBetaEventCallback"),
            "Missing per-event setters: " + h);
        assertTrue(h.contains("m_onAlphaEvent") && h.contains("m_onBetaEvent"),
            "Missing per-event members: " + h);
        assertTrue(h.contains("void OnEvent() override"), "Missing OnEvent override: " + h);
        // Exception must NOT get its own callback
        assertFalse(h.contains("SetBadExceptionCallback"), "Exception should not get a callback: " + h);
    }

    @Test
    void handlerHeader_wrapsInitialResponseSettersInDocGroup() {
        String h = render("DoStreamHandler.h");
        assertTrue(h.contains("Sets an initial response callback."),
            "Missing initial-response setter doc: " + h);
        assertTrue(h.contains("a legacy one that does not distinguish"),
            "Missing legacy initial-response setter doc: " + h);
        // The two initial-response setters must be inside a ///@{ ... ///@} group.
        int groupOpen = h.indexOf("///@{");
        int exSetter = h.indexOf("SetInitialResponseCallbackEx");
        int groupClose = h.indexOf("///@}", exSetter);
        assertTrue(groupOpen >= 0 && groupOpen < exSetter && groupClose > exSetter,
            "Initial-response setters must be wrapped in a ///@{ ... ///@} group: " + h);
    }

    @Test
    void eventStreamUnionHeader_typesEventAndExceptionMembers() {
        String h = render("MyStreamEventStream.h");
        // NOTE: file name derives from the UNION shape name (MyStream), not the operation.
        assertTrue(h.contains("class MyStreamEventStream"), "Missing union class: " + h);
        // Event member typed as its concrete shape
        assertTrue(h.contains("const AlphaEvent& GetAlpha()") || h.contains("GetAlpha"),
            "Missing event accessor: " + h);
        // Exception member typed as <namespace>Error
        assertTrue(h.contains("ExampleError"), "Exception members must be typed as ExampleError: " + h);
    }

    @Test
    void eventStreamUnionHeader_modeledExceptionUsesConcreteTypeAndInclude() {
        // C2J types a modeled exception member (extra members beyond message/code) as its concrete
        // shape and includes its model header, while a non-modeled exception stays the generic
        // <namespace>Error (no include). Matches CppViewHelper's isException/isModeledException gate.
        String h = render("MyStreamEventStream.h");
        // Modeled exception -> concrete type + include.
        assertTrue(h.contains("const DetailedException& GetDetailedException()"),
            "Modeled exception must use its concrete type: " + h);
        assertTrue(h.contains("#include <aws/example/model/DetailedException.h>"),
            "Modeled exception must bring its model include: " + h);
        // Non-modeled exception -> generic ExampleError.
        assertTrue(h.contains("const ExampleError& GetBadException()"),
            "Non-modeled exception must use the generic error type: " + h);
    }

    @Test
    void eventStreamUnionHeader_omitsServiceErrorsInclude() {
        // C2J's computeHeaderIncludes skips the model include for non-modeled exception members
        // (CppViewHelper: `if (next.isException() && !next.isModeledException()) continue;`).
        // The union's exception members are the generic ExampleError wrapper, so the union header
        // must NOT include the service Errors header — it resolves transitively. The handler
        // header (a separate file) still includes it.
        String h = render("MyStreamEventStream.h");
        assertFalse(h.contains("#include <aws/example/ExampleErrors.h>"),
            "Union header must not include the service Errors header: " + h);
    }

    @Test
    void eventStreamUnionHeader_rendersClassAndMemberDocs() {
        String h = render("MyStreamEventStream.h");
        // Union class-level documentation + See Also link.
        assertTrue(h.contains("Tagged union of stream events."), "Missing union class doc: " + h);
        assertTrue(h.contains("See Also:"), "Missing See Also block on union class: " + h);
        // Member-level doc flows to the accessor for the member that has one.
        assertTrue(h.contains("Alpha event doc."), "Missing alpha member doc: " + h);
    }

    @Test
    void initialResponseHeader_hasHeaderCollectionCtorAndSerdeDecls() {
        String h = render("DoStreamInitialResponse.h");
        assertTrue(h.contains("class DoStreamInitialResponse"), "Missing class: " + h);
        assertTrue(h.contains("DoStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders)"),
            "Missing header-collection ctor: " + h);
        // JSON serde declaration present (test model resolves to a JSON-like protocol)
        assertTrue(h.contains("Jsonize") || h.contains("XmlNode") || h.contains("OutputToStream"),
            "Missing serde declarations: " + h);
        // The HeaderValueCollection ctor must precede Jsonize (mainline ordering).
        int headerCtor = h.indexOf("const Http::HeaderValueCollection& responseHeaders");
        int jsonize = h.indexOf("Jsonize");
        assertTrue(headerCtor >= 0 && jsonize >= 0 && headerCtor < jsonize,
            "HeaderValueCollection ctor must come before Jsonize: " + h);
    }

    @Test
    void initialResponseHeader_rendersNonStreamingResultMembers() {
        // C2J synthesizes <op>InitialResponse from the result's non-event-stream members, so the
        // header must carry accessors for those members (here: contentType) plus a private section.
        // The @httpPayload streaming union member (stream) must NOT appear.
        String h = render("DoStreamInitialResponse.h");
        assertTrue(h.contains("GetContentType") && h.contains("SetContentType") && h.contains("WithContentType"),
            "InitialResponse must render accessors for non-streaming result members: " + h);
        assertTrue(h.contains("bool m_contentTypeHasBeenSet = false;"),
            "InitialResponse must render private members: " + h);
        assertFalse(h.contains("GetStream"),
            "InitialResponse must not render the streaming union member: " + h);
    }

    @Test
    void initialResponseSource_hasHeaderCtorDefinition() {
        String c = render("DoStreamInitialResponse.cpp");
        assertTrue(c.contains("DoStreamInitialResponse::DoStreamInitialResponse(const Http::HeaderValueCollection&"),
            "Missing header ctor definition: " + c);
        // The header ctor must delegate to the default ctor so members are value-initialized
        // before the header-derived ones are set (matches C2J).
        assertTrue(c.contains(
            "DoStreamInitialResponse::DoStreamInitialResponse(const Http::HeaderValueCollection& "
            + "responseHeaders) : DoStreamInitialResponse() {"),
            "Header ctor must delegate to the default ctor: " + c);
    }

    @Test
    void initialResponseSource_hasJsonSerdeIncludesAndUsings() {
        // The JSON InitialResponse source matches C2J: StringUtils + UnreferencedParam + the JSON
        // serializer, the Json/Utils usings, and <utility>.
        String c = render("DoStreamInitialResponse.cpp");
        assertTrue(c.contains("#include <aws/core/utils/StringUtils.h>"), c);
        assertTrue(c.contains("#include <aws/core/utils/UnreferencedParam.h>"), c);
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("#include <utility>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
        assertTrue(c.contains("using namespace Aws::Utils;"), c);
        // The header-bound member (contentType) pulls AWSStringStream.h into the source, matching
        // C2J's computeSourceIncludes.
        assertTrue(c.contains("#include <aws/core/utils/memory/stl/AWSStringStream.h>"), c);
    }

    @Test
    void initialResponseSource_wrapsBodyInNamespaceBlockNotUsingModel() {
        // C2J renders InitialResponse via the sub-object source template, which wraps the body in
        // an explicit namespace block rather than a `using namespace ...Model;`.
        String c = render("DoStreamInitialResponse.cpp");
        assertTrue(c.contains("namespace Aws"), c);
        assertTrue(c.contains("namespace Example"), c);
        assertTrue(c.contains("namespace Model"), c);
        assertTrue(c.contains("// namespace Model"), c);
        assertFalse(c.contains("using namespace Aws::Example::Model;"),
            "InitialResponse must use a namespace block, not using-Model: " + c);
    }

    @Test
    void handlerSource_hasProtocolSerdeIncludeAndUsing() {
        // The JSON handler parses event/exception payloads as JSON, so its source includes the
        // JSON serializer and uses the Json namespace, matching C2J JsonEventStreamHandlerSource.vm.
        String c = render("DoStreamHandler.cpp");
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
    }

    @Test
    void handlerSource_eventCasesUseStubNoProtocolTokens() {
        String c = render("DoStreamHandler.cpp");
        assertTrue(c.contains("// TODO: protocol-specific event payload deserialization"),
            "Missing event decode stub: " + c);
        assertTrue(c.contains("m_onAlphaEvent(AlphaEvent{});"), "Missing alpha stub body: " + c);
        assertTrue(c.contains("case DoStreamEventType::INITIAL_RESPONSE:"),
            "Missing INITIAL_RESPONSE case: " + c);
        assertTrue(c.contains("// TODO: protocol-specific error payload deserialization"),
            "Missing error parse stub: " + c);
        // EventMapper hash uses the wire member key, not the shape name
        assertTrue(c.contains("HashString(\"alpha\")") && c.contains("HashString(\"beta\")"),
            "EventMapper must key on wire member name: " + c);
        assertFalse(c.contains("JsonValue"), "No protocol tokens in handler: " + c);
        assertFalse(c.contains("Cbor"), "No protocol tokens in handler: " + c);
    }
}
