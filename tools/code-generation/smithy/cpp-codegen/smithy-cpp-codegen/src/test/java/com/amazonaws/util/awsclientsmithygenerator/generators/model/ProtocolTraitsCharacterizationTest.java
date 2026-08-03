/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.ResultRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.SubObjectRenderer;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.EnumSource;
import software.amazon.smithy.build.MockManifest;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.Trait;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Characterization tests: they assert the generated C++ text produced TODAY, so that
 * the ProtocolTraits refactor can be proven output-preserving.
 *
 * <p>If one of these fails during the refactor, the refactor changed generated output.
 * Fix the production code, NOT the assertion.
 */
class ProtocolTraitsCharacterizationTest {

    // ---------- fixtures ----------

    /** Returns the Smithy protocol trait that makes ProtocolResolver resolve to {@code p}. */
    private static Trait traitFor(Protocol p) {
        switch (p) {
            case JSON:
                return software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build();
            case CBOR:
                return software.amazon.smithy.protocol.traits.Rpcv2CborTrait.builder().build();
            case REST_XML:
                return software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build();
            case QUERY_XML:
                return new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait();
            case EC2:
                return new software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait();
            default:
                throw new IllegalArgumentException("Unhandled protocol: " + p);
        }
    }

    /**
     * A minimal service with one operation whose input and output each reference a
     * nested structure, so SubObject / Request / Result renderers all have work to do.
     */
    private static Model modelFor(Protocol p) {
        StringShape str = StringShape.builder().id("com.example#Str").build();
        StructureShape nested = StructureShape.builder()
            .id("com.example#Nested")
            .addMember("value", str.getId())
            .build();
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingInput")
            .addMember("name", str.getId())
            .addMember("nested", nested.getId())
            .build();
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput")
            .addMember("nested", nested.getId())
            .build();
        OperationShape op = OperationShape.builder()
            .id("com.example#DoThing")
            .input(input.getId())
            .output(output.getId())
            .build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#Example")
            .version("2024-01-01")
            .addTrait(traitFor(p))
            .addOperation(op.getId())
            .build();
        return Model.builder().addShapes(str, nested, input, output, op, service).build();
    }

    private static ServiceShape serviceOf(Model model) {
        return model.expectShape(ShapeId.from("com.example#Example"), ServiceShape.class);
    }

    /** Renders every model file for the protocol and returns file-name -> contents. */
    private static java.util.Map<String, String> renderAll(Protocol p) {
        Model model = modelFor(p);
        ServiceShape service = serviceOf(model);
        Protocol resolved = ProtocolResolver.resolve(service, model);
        assertEquals(p, resolved, "Fixture trait did not resolve to the intended protocol");

        ShapeClassifier.ClassifiedShapes classified = ShapeClassifier.classify(model, service);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);

        // NOTE (Tasks 4-7): when a renderer's ctor switches from Protocol to
        // ProtocolTraits, change ONLY the argument below -- never the assertions.
        new SubObjectRenderer(classified.subObjects(), model, service, resolved,
            "Example", "AWS_EXAMPLE_API", "Example", "example").render(delegator);
        new RequestRenderer(classified.requests(), model, service, resolved,
            "Example", "AWS_EXAMPLE_API", "example").render(delegator);
        new ResultRenderer(classified.results(), model, service, resolved,
            "Example", "AWS_EXAMPLE_API", "example").render(delegator);

        delegator.flushWriters();

        java.util.Map<String, String> out = new java.util.TreeMap<>();
        for (java.nio.file.Path path : manifest.getFiles()) {
            String name = path.getFileName().toString();
            out.put(name, manifest.getFileString(path).orElseThrow());
        }
        return out;
    }

    private static String file(Protocol p, String fileName) {
        java.util.Map<String, String> files = renderAll(p);
        String content = files.get(fileName);
        assertTrue(content != null,
            "Expected generated file " + fileName + " for " + p + "; got " + files.keySet());
        return content;
    }

    // ---------- every protocol produces the same file set ----------

    @ParameterizedTest
    @EnumSource(Protocol.class)
    void everyProtocol_generatesTheSameFileSet(Protocol p) {
        assertEquals(
            java.util.Set.of("Nested.h", "Nested.cpp",
                             "DoThingRequest.h", "DoThingRequest.cpp",
                             "DoThingResult.h", "DoThingResult.cpp"),
            renderAll(p).keySet(),
            "File set drifted for " + p);
    }

    // ---------- sub-object: serde decls, includes, usings, fwd decls ----------

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "CBOR"})
    void jsonLike_subObjectHeader_hasJsonSerdeDeclsAndFwdDecls(Protocol p) {
        String h = file(p, "Nested.h");
        assertTrue(h.contains("AWS_EXAMPLE_API Nested() = default;"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API Nested(Aws::Utils::Json::JsonView jsonValue);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API Nested& operator=(Aws::Utils::Json::JsonView jsonValue);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API Aws::Utils::Json::JsonValue Jsonize() const;"), h);
        assertTrue(h.contains("class JsonValue;"), h);
        assertTrue(h.contains("class JsonView;"), h);
        assertFalse(h.contains("XmlNode"), "JSON-like header must not mention XML: " + h);
    }

    @Test
    void restXml_subObjectHeader_hasAddToNodeAndXmlNodeFwdDecl() {
        String h = file(Protocol.REST_XML, "Nested.h");
        assertTrue(h.contains("AWS_EXAMPLE_API Nested(const Aws::Utils::Xml::XmlNode& xmlNode);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API Nested& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;"), h);
        assertTrue(h.contains("class XmlNode;"), h);
        assertFalse(h.contains("Jsonize"), "REST_XML header must not mention Jsonize: " + h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLike_subObjectHeader_hasBothOutputToStreamOverloads(Protocol p) {
        String h = file(p, "Nested.h");
        assertTrue(h.contains("AWS_EXAMPLE_API Nested(const Aws::Utils::Xml::XmlNode& xmlNode);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API void OutputToStream(Aws::OStream& ostream, "
            + "const char* location, unsigned index, const char* locationValue) const;"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API void OutputToStream(Aws::OStream& ostream, "
            + "const char* location) const;"), h);
        assertFalse(h.contains("AddToNode"), "Query-like header must not use AddToNode: " + h);
        assertFalse(h.contains("Jsonize"), "Query-like header must not mention Jsonize: " + h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "CBOR"})
    void jsonLike_subObjectSource_hasJsonIncludeUsingAndStubs(Protocol p) {
        String c = file(p, "Nested.cpp");
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
        assertTrue(c.contains("using namespace Aws::Utils;"), c);
        assertTrue(c.contains("Nested::Nested(JsonView jsonValue) { *this = jsonValue; }"), c);
        assertTrue(c.contains("Nested& Nested::operator=(JsonView jsonValue) {"), c);
        assertTrue(c.contains("JsonValue Nested::Jsonize() const {"), c);
        assertTrue(c.contains("JsonValue payload;"), c);
        assertFalse(c.contains("XmlSerializer.h"), c);
    }

    @Test
    void restXml_subObjectSource_hasXmlIncludeUsingAndStubs() {
        String c = file(Protocol.REST_XML, "Nested.cpp");
        assertTrue(c.contains("#include <aws/core/utils/xml/XmlSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Xml;"), c);
        assertTrue(c.contains("Nested::Nested(const XmlNode& xmlNode) { *this = xmlNode; }"), c);
        assertTrue(c.contains("Nested& Nested::operator=(const XmlNode& xmlNode) {"), c);
        assertTrue(c.contains("void Nested::AddToNode(XmlNode& parentNode) const {"), c);
        assertFalse(c.contains("JsonSerializer.h"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLike_subObjectSource_hasBothOutputToStreamBodies(Protocol p) {
        String c = file(p, "Nested.cpp");
        assertTrue(c.contains("#include <aws/core/utils/xml/XmlSerializer.h>"), c);
        assertTrue(c.contains("void Nested::OutputToStream(Aws::OStream& ostream, const char* location, "
            + "unsigned index, const char* locationValue) const {"), c);
        assertTrue(c.contains("void Nested::OutputToStream(Aws::OStream& ostream, "
            + "const char* location) const {"), c);
    }

    // ---------- result: AmazonWebServiceResult<> payload type ----------

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "CBOR"})
    void jsonLike_resultHeader_usesJsonValuePayloadAndForwardDeclaresJsonValue(Protocol p) {
        String h = file(p, "DoThingResult.h");
        assertTrue(h.contains("AWS_EXAMPLE_API DoThingResult(const "
            + "Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API DoThingResult& operator=(const "
            + "Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);"), h);
        assertTrue(h.contains("class JsonValue;"), h);
        // Result headers forward-declare only the document type, never JsonView.
        assertFalse(h.contains("class JsonView;"),
            "Result header must not forward-declare JsonView: " + h);
        assertFalse(h.contains("XmlDocument"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"REST_XML", "QUERY_XML", "EC2"})
    void xmlLike_resultHeader_usesXmlDocumentPayloadAndForwardDeclaresXmlDocument(Protocol p) {
        String h = file(p, "DoThingResult.h");
        assertTrue(h.contains("AWS_EXAMPLE_API DoThingResult(const "
            + "Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API DoThingResult& operator=(const "
            + "Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);"), h);
        assertTrue(h.contains("class XmlDocument;"), h);
        assertFalse(h.contains("JsonValue"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "CBOR"})
    void jsonLike_resultSource_hasJsonUsingsAndCtorImpls(Protocol p) {
        String c = file(p, "DoThingResult.cpp");
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Example::Model;"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
        assertTrue(c.contains("using namespace Aws::Utils;"), c);
        assertTrue(c.contains("using namespace Aws;"), c);
        assertTrue(c.contains("DoThingResult::DoThingResult(const "
            + "Aws::AmazonWebServiceResult<JsonValue>& result) {"), c);
        assertTrue(c.contains("DoThingResult& DoThingResult::operator=(const "
            + "Aws::AmazonWebServiceResult<JsonValue>& result) {"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"REST_XML", "QUERY_XML", "EC2"})
    void xmlLike_resultSource_hasXmlUsingsAndCtorImpls(Protocol p) {
        String c = file(p, "DoThingResult.cpp");
        assertTrue(c.contains("#include <aws/core/utils/xml/XmlSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Xml;"), c);
        assertTrue(c.contains("DoThingResult::DoThingResult(const "
            + "Aws::AmazonWebServiceResult<XmlDocument>& result) {"), c);
        assertTrue(c.contains("DoThingResult& DoThingResult::operator=(const "
            + "Aws::AmazonWebServiceResult<XmlDocument>& result) {"), c);
    }

    // ---------- request: only the serde include + usings are protocol-specific ----------

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "CBOR"})
    void jsonLike_requestSource_hasJsonIncludeAndUsings(Protocol p) {
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Example::Model;"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
        assertTrue(c.contains("using namespace Aws::Utils;"), c);
        assertFalse(c.contains("XmlSerializer.h"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"REST_XML", "QUERY_XML", "EC2"})
    void xmlLike_requestSource_hasXmlIncludeAndUsings(Protocol p) {
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("#include <aws/core/utils/xml/XmlSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Xml;"), c);
        assertFalse(c.contains("JsonSerializer.h"), c);
    }

    /** The request header is protocol-agnostic today; pin that so a regression is loud. */
    @ParameterizedTest
    @EnumSource(Protocol.class)
    void requestHeader_isProtocolAgnostic(Protocol p) {
        String h = file(p, "DoThingRequest.h");
        assertTrue(h.contains("Aws::String SerializePayload() const override;"), h);
        assertFalse(h.contains("JsonSerializer.h"), "Request header must not include serde headers: " + h);
        assertFalse(h.contains("XmlSerializer.h"), "Request header must not include serde headers: " + h);
    }
}
