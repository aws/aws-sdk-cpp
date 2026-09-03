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
        return twoEventModel(false);
    }

    /**
     * @param restXml when true, stamps the service with {@code aws.protocols#restXml} so the
     *        renderer resolves to REST-XML (S3 {@code SelectObjectContent} shape); otherwise the
     *        service has no protocol trait and resolves to JSON.
     */
    private static Model twoEventModel(boolean restXml) {
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
        ServiceShape.Builder serviceBuilder = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .addOperation(op.getId());
        if (restXml) {
            serviceBuilder.addTrait(software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build());
        }
        ServiceShape service = serviceBuilder.build();
        return Model.builder().addShapes(str, stream, eventA, eventB, exc, modeledExc, input, output, op, service).build();
    }

    // A @streaming union with one empty event (no modeled members) and one data event. Callback/member
    // names derive from the target shape name (alpha -> AlphaEvent -> m_onAlphaEvent).
    private static Model unionWithEmptyAndDataEvent() {
        StringShape str = StringShape.builder().id("com.example#String").build();
        StructureShape emptyEvent = StructureShape.builder()
            .id("com.example#EmptyEvent")
            .build();
        StructureShape dataEvent = StructureShape.builder()
            .id("com.example#DataEvent")
            .addMember("data", str.getId())
            .build();
        UnionShape stream = UnionShape.builder()
            .id("com.example#MyStreamEventStream")
            .addTrait(new StreamingTrait())
            .addMember("emptyEvent", emptyEvent.getId())
            .addMember("dataEvent", dataEvent.getId())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoStreamInput")
            .addMember("name", str.getId())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoStreamOutput")
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoStreamOutput$stream").target(stream.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpPayloadTrait()).build())
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
        return Model.builder().addShapes(str, stream, emptyEvent, dataEvent, input, output, op, service).build();
    }

    private static String render(String fileSuffix) {
        return render(twoEventModel(), fileSuffix);
    }

    private static String renderHandlerHeaderFor(Model model) {
        return render(model, "DoStreamHandler.h");
    }

    private static String renderHandlerSourceFor(Model model) {
        return render(model, "DoStreamHandler.cpp");
    }

    private static String render(Model model, String fileSuffix) {
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

    private static java.util.List<String> renderedFilePaths(Model model) {
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
        return manifest.getFiles().stream()
            .map(java.nio.file.Path::toString)
            .collect(java.util.stream.Collectors.toList());
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
    void eventStreamUnionHeader_noLongerEmitted() {
        // The incoming event-stream union is realized via the handler; nothing references it as a
        // data type, so the renderer must not emit its standalone <Union>.h (dead public API).
        java.util.List<String> paths = renderedFilePaths(twoEventModel());
        assertTrue(paths.stream().noneMatch(p -> p.endsWith("MyStreamEventStream.h")),
            "incoming event-stream union header must not be emitted: " + paths);
        // And no rendered file declares the union class.
        for (String path : paths) {
            String contents = render(twoEventModel(), path.substring(path.lastIndexOf('/') + 1));
            assertFalse(contents.contains("class MyStreamEventStream"),
                "no rendered file may declare the union class: " + path);
        }
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
        // C2J synthesizes <op>InitialResponse from the result's non-event-stream members (here
        // contentType); the @httpPayload streaming union member (stream) must not appear.
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

    @Test
    void emptyEventEmitsVoidCallbackTypedef() {
        String out = renderHandlerHeaderFor(unionWithEmptyAndDataEvent());
        assertTrue(out.contains("typedef std::function<void()> EmptyEventCallback;"),
            "empty event => arg-less typedef: " + out);
        assertTrue(out.contains("typedef std::function<void(const DataEvent&)> DataEventCallback;"),
            "data event => struct-arg typedef preserved: " + out);
    }

    @Test
    void emptyEventEmitsArglessDefaultLambda() {
        String out = renderHandlerSourceFor(unionWithEmptyAndDataEvent());
        assertTrue(out.contains("m_onEmptyEvent = [&]() {"),
            "empty event default lambda takes no args: " + out);
        assertTrue(out.contains("m_onDataEvent = [&](const DataEvent&) {"),
            "data event default lambda unchanged: " + out);
    }

    @Test
    void emptyEventDispatchesWithoutConstructingStruct() {
        String out = renderHandlerSourceFor(unionWithEmptyAndDataEvent());
        assertTrue(out.contains("m_onEmptyEvent();"),
            "empty event dispatched arg-less: " + out);
        assertFalse(out.contains("m_onEmptyEvent(EmptyEvent{"),
            "empty event dispatch must not construct the empty struct: " + out);
    }

    @Test
    void nonEmptyEventBehaviorUnchanged() {
        String out = renderHandlerHeaderFor(unionWithEmptyAndDataEvent());
        assertTrue(out.contains("typedef std::function<void(const DataEvent&)> DataEventCallback;"),
            "non-empty event typedef unchanged: " + out);
    }

    @Test
    void restXmlInitialResponse_omitsHeaderCollectionCtor() {
        // For a REST-XML event-stream op (S3 SelectObjectContent shape), the InitialResponse is built
        // from the XML body root via its XmlNode serde ctor; no HeaderValueCollection ctor is emitted.
        Model model = twoEventModel(true);
        String h = render(model, "DoStreamInitialResponse.h");
        assertTrue(h.contains("class DoStreamInitialResponse"), "Missing class: " + h);
        assertFalse(h.contains("HeaderValueCollection"),
            "REST-XML InitialResponse must not emit a header-collection ctor: " + h);
        assertTrue(h.contains("XmlNode"), "REST-XML InitialResponse keeps its XmlNode serde ctor: " + h);

        String c = render(model, "DoStreamInitialResponse.cpp");
        assertFalse(c.contains("HeaderValueCollection"),
            "REST-XML InitialResponse source must not emit a header-collection ctor: " + c);

        String handler = render(model, "DoStreamHandler.cpp");
        assertTrue(handler.contains("DoStreamInitialResponse event(xmlDoc.GetRootElement());"),
            "REST-XML handler builds the initial response from the XML root: " + handler);
        assertFalse(handler.contains("GetEventHeadersAsHttpHeaders"), handler);
    }

    @Test
    void jsonInitialResponse_hasHeaderCollectionCtor() {
        // For a JSON event-stream op, the InitialResponse arrives as an event message with headers,
        // so it carries a HeaderValueCollection ctor and header-based handler construction.
        Model model = twoEventModel(false);
        String h = render(model, "DoStreamInitialResponse.h");
        assertTrue(h.contains("DoStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders)"),
            "JSON InitialResponse must emit the header-collection ctor: " + h);

        String handler = render(model, "DoStreamHandler.cpp");
        assertTrue(handler.contains("DoStreamInitialResponse event(GetEventHeadersAsHttpHeaders());"),
            "JSON handler builds the initial response from event headers: " + handler);
        assertFalse(handler.contains("xmlDoc"), handler);
    }

    @Test
    void emptyEventStructHeaderNotIncluded() {
        // An empty event's struct is dropped by the classifier, so including its header would dangle
        // and is unnecessary (the callback is arg-less). A data event keeps its struct include.
        String out = renderHandlerHeaderFor(unionWithEmptyAndDataEvent());
        assertFalse(out.contains("#include <aws/example/model/EmptyEvent.h>"),
            "empty event struct header must not be included: " + out);
        assertTrue(out.contains("#include <aws/example/model/DataEvent.h>"),
            "data event struct header must still be included: " + out);
    }
}
