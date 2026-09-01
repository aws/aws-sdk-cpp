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
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
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
 * Characterization tests pinning the exact generated C++ text for every supported
 * protocol, so that changes to the model renderers or their {@link ProtocolTraits}
 * strategies cannot silently alter generated output.
 *
 * <p>A failure here means generated output changed. Unless the change is intentional,
 * fix the production code rather than the assertion; if it is intentional, update the
 * assertion in the same commit that changes the renderer.
 */
class ProtocolTraitsCharacterizationTest {

    // ---------- fixtures ----------

    /** Returns the Smithy protocol trait that makes ProtocolResolver resolve to {@code p}. */
    private static Trait traitFor(Protocol p) {
        switch (p) {
            case JSON:
                return software.amazon.smithy.aws.traits.protocols.AwsJson1_0Trait.builder().build();
            case REST_JSON:
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
        software.amazon.smithy.model.shapes.IntegerShape intShape =
            software.amazon.smithy.model.shapes.IntegerShape.builder().id("com.example#Int").build();
        StructureShape nested = StructureShape.builder()
            .id("com.example#Nested")
            .addMember("value", str.getId())
            .build();
        // Input carries a plain member, an httpHeader member, and an httpQuery member so
        // both request Axis-1 predicates (header + query) fire.
        StructureShape input = StructureShape.builder()
            .id("com.example#DoThingInput")
            .addMember("name", str.getId())
            .addMember("nested", nested.getId())
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingInput$hdr").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("X-Thing")).build())
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingInput$q").target(str.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpQueryTrait("q")).build())
            .build();
        // Output carries a plain member and an httpResponseCode member.
        StructureShape output = StructureShape.builder()
            .id("com.example#DoThingOutput")
            .addMember("nested", nested.getId())
            .addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingOutput$status").target(intShape.getId())
                .addTrait(new software.amazon.smithy.model.traits.HttpResponseCodeTrait()).build())
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
        return Model.builder().addShapes(str, intShape, nested, input, output, op, service).build();
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

        ShapeClassifier.ClassifiedShapes classified = ShapeClassifier.classify(model, service, resolved);
        MockManifest manifest = new MockManifest();
        CppWriterDelegator delegator = new CppWriterDelegator(manifest);

        ProtocolTraits traits = ProtocolResolver.traitsFor(resolved);
        RenderContext ctx = new RenderContext(model, service, traits,
            "Example", "AWS_EXAMPLE_API", "example");
        new SubObjectRenderer(classified.subObjects(), ctx).render(delegator);
        new RequestRenderer(classified.requests(), ctx).render(delegator);
        new ResultRenderer(classified.results(), ctx).render(delegator);

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
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON"})
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
    void cbor_subObjectHeader_hasCborDecoderSerdeDeclsAndCborInclude() {
        // CborSubObjectHeader.vm: streaming CborDecoder ctor/operator= + CborEncode, a hard
        // <aws/crt/cbor/Cbor.h> include, and a CborValue forward declaration. NOT Jsonize/CborValue-arg.
        String h = file(Protocol.CBOR, "Nested.h");
        assertTrue(h.contains("#include <aws/crt/cbor/Cbor.h>"), h);
        assertTrue(h.contains(
            "AWS_EXAMPLE_API Nested(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);"), h);
        assertTrue(h.contains(
            "AWS_EXAMPLE_API Nested& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);"), h);
        assertTrue(h.contains("AWS_EXAMPLE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;"), h);
        assertTrue(h.contains("class CborValue;"), h);
        assertFalse(h.contains("Jsonize"), "CBOR header must not mention Jsonize: " + h);
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
    void queryLike_subObjectHeader_forwardDeclaresOStreamViaAWSStreamFwd(Protocol p) {
        // Query/EC2 sub-objects declare OutputToStream(Aws::OStream&, ...), so the header must
        // include AWSStreamFwd.h to forward-declare Aws::OStream, matching C2J.
        String h = file(p, "Nested.h");
        assertTrue(h.contains("#include <aws/core/utils/memory/stl/AWSStreamFwd.h>"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON", "REST_XML", "CBOR"})
    void nonQuery_subObjectHeader_omitsAWSStreamFwd(Protocol p) {
        // Only Query/EC2 sub-objects emit OutputToStream; other protocols must not pull in
        // AWSStreamFwd.h.
        String h = file(p, "Nested.h");
        assertFalse(h.contains("AWSStreamFwd.h"), h);
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
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON"})
    void jsonLike_subObjectSource_hasJsonIncludeUsingAndStubs(Protocol p) {
        String c = file(p, "Nested.cpp");
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
        assertTrue(c.contains("using namespace Aws::Utils;"), c);
        assertTrue(c.contains("Nested::Nested(JsonView jsonValue) { *this = jsonValue; }"), c);
        assertTrue(c.contains("Nested& Nested::operator=(JsonView jsonValue) {"), c);
        assertTrue(c.contains("JsonValue Nested::Jsonize() const {"), c);
        assertTrue(c.contains("JsonValue payload;"), c);
    }

    @Test
    void restXml_subObjectSource_hasXmlIncludeUsingAndStubs() {
        String c = file(Protocol.REST_XML, "Nested.cpp");
        assertTrue(c.contains("#include <aws/core/utils/xml/XmlSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Xml;"), c);
        assertTrue(c.contains("Nested::Nested(const XmlNode& xmlNode) { *this = xmlNode; }"), c);
        assertTrue(c.contains("Nested& Nested::operator=(const XmlNode& xmlNode) {"), c);
        assertTrue(c.contains("void Nested::AddToNode(XmlNode& parentNode) const {"), c);
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
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON"})
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
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON", "CBOR"})
    void jsonAndCbor_resultSource_includesUnreferencedParam(Protocol p) {
        // C2J JSON/REST-JSON/CBOR result templates include UnreferencedParam.h; XML-family does not.
        String c = file(p, "DoThingResult.cpp");
        assertTrue(c.contains("#include <aws/core/utils/UnreferencedParam.h>"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON", "REST_XML", "CBOR"})
    void nonQuery_resultSource_includesAWSStringStream(Protocol p) {
        // C2J emits AWSStringStream.h in JSON/REST-JSON/REST-XML/CBOR result sources.
        String c = file(p, "DoThingResult.cpp");
        assertTrue(c.contains("#include <aws/core/utils/memory/stl/AWSStringStream.h>"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON"})
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
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON"})
    void jsonLike_requestSource_hasJsonIncludeAndUsings(Protocol p) {
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("#include <aws/core/utils/json/JsonSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Example::Model;"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Json;"), c);
        assertTrue(c.contains("using namespace Aws::Utils;"), c);
    }

    @Test
    void restXml_requestSource_hasXmlIncludeAndUsings() {
        String c = file(Protocol.REST_XML, "DoThingRequest.cpp");
        assertTrue(c.contains("#include <aws/core/utils/xml/XmlSerializer.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Xml;"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLike_requestSource_usesStringStreamNotXmlSerializer(Protocol p) {
        // Query/EC2 request bodies serialize to a query string (Action=...&Version=...), so the
        // source uses StringUtils + AWSStringStream, matching C2J (QueryRequestSource.vm).
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("#include <aws/core/utils/StringUtils.h>"), c);
        assertTrue(c.contains("#include <aws/core/utils/memory/stl/AWSStringStream.h>"), c);
        // Usings are held exact: Query/EC2 request sources must not open the XML namespace.
        assertFalse(c.contains("using namespace Aws::Utils::Xml;"), c);
        assertFalse(c.contains("JsonSerializer.h"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON", "REST_XML", "CBOR"})
    void nonQuery_requestSource_includesUtility(Protocol p) {
        // JSON/REST-JSON/REST-XML/CBOR request sources include <utility> for std::forward/move.
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("#include <utility>"), c);
    }

    /** Every protocol's request emits SerializePayload and never leaks serde headers. */
    @ParameterizedTest
    @EnumSource(Protocol.class)
    void requestHeader_alwaysHasSerializePayload_neverSerdeIncludes(Protocol p) {
        String h = file(p, "DoThingRequest.h");
        assertTrue(h.contains("Aws::String SerializePayload() const override;"), h);
        assertFalse(h.contains("JsonSerializer.h"), "Request header must not include serde headers: " + h);
        assertFalse(h.contains("XmlSerializer.h"), "Request header must not include serde headers: " + h);
    }

    // ---------- per-protocol request surface (fixture has header + query + status members) ----------

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON"})
    void awsJson_request_hasTargetHeaderAndSerialize_noWireBindings(Protocol p) {
        String h = file(p, "DoThingRequest.h");
        assertTrue(h.contains("SerializePayload() const override;"), h);
        assertTrue(h.contains("GetRequestSpecificHeaders() const override;"), h);   // X-Amz-Target
        // RPC awsJson routes @httpHeader/@httpQuery members to the body: no AddQueryStringParameters,
        // and no member header serialization inside GetRequestSpecificHeaders.
        assertFalse(h.contains("AddQueryStringParameters(Aws::Http::URI& uri) const override;"), h);
        assertFalse(h.contains("DumpBodyToUrl"), h);
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("X-Amz-Target"), c);
        assertFalse(c.contains("uri.AddQueryStringParameter"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"REST_JSON", "REST_XML"})
    void restProtocols_request_headerFromMemberOnly_noTarget_noDump(Protocol p) {
        String c = file(p, "DoThingRequest.cpp");
        assertFalse(c.contains("X-Amz-Target"), c);            // rest protocols never target
        String h = file(p, "DoThingRequest.h");
        assertTrue(h.contains("GetRequestSpecificHeaders() const override;"), h);   // fixture has header member
        assertTrue(h.contains("AddQueryStringParameters(Aws::Http::URI& uri) const override;"), h);
        assertFalse(h.contains("DumpBodyToUrl"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryProtocols_request_haveProtectedDumpBodyToUrl(Protocol p) {
        String h = file(p, "DoThingRequest.h");
        assertTrue(h.contains("void DumpBodyToUrl(Aws::Http::URI& uri) const override;"), h);
        assertTrue(h.contains("protected:"), h);
        String c = file(p, "DoThingRequest.cpp");
        assertTrue(c.contains("uri.SetQueryString(SerializePayload());"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"CBOR"})
    void cbor_request_noTargetHeader(Protocol p) {
        String c = file(p, "DoThingRequest.cpp");
        assertFalse(c.contains("X-Amz-Target"), c);
    }

    // ---------- per-protocol result surface ----------

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON"})
    void jsonResults_useJsonValue(Protocol p) {
        String h = file(p, "DoThingResult.h");
        assertTrue(h.contains("AmazonWebServiceResult<Aws::Utils::Json::JsonValue>"), h);
        assertFalse(h.contains("HasBeenSet() const"), h);   // JSON results hide HasBeenSet
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"CBOR"})
    void cborResults_useCborValueAndHideHasBeenSet(Protocol p) {
        String h = file(p, "DoThingResult.h");
        assertTrue(h.contains("AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>"), h);
        // CborResultHeader.vm sets useRequiredField=false, so CBOR results hide HasBeenSet too.
        assertFalse(h.contains("HasBeenSet() const"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"REST_XML", "QUERY_XML", "EC2"})
    void xmlResults_useXmlDocument(Protocol p) {
        String h = file(p, "DoThingResult.h");
        assertTrue(h.contains("AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>"), h);
    }

    @ParameterizedTest
    @EnumSource(Protocol.class)
    void allResults_setStatusCodeMemberFromResponseCode(Protocol p) {
        String c = file(p, "DoThingResult.cpp");
        assertTrue(c.contains("m_status = static_cast<int>(result.GetResponseCode());"), c);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON", "REST_XML", "CBOR"})
    void nonQueryResultHeader_hasTopLevelRequestId(Protocol p) {
        // JSON/REST-XML/CBOR results expose a top-level GetRequestId, matching C2J.
        String h = file(p, "DoThingResult.h");
        assertTrue(h.contains("inline const Aws::String& GetRequestId() const"), h);
        assertTrue(h.contains("Aws::String m_requestId;"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLikeResultHeader_omitsTopLevelRequestId(Protocol p) {
        // Query/EC2 results carry RequestId inside ResponseMetadata, so they must NOT expose a
        // top-level GetRequestId / m_requestId, matching C2J.
        String h = file(p, "DoThingResult.h");
        assertFalse(h.contains("GetRequestId"), h);
        assertFalse(h.contains("m_requestId"), h);
    }

    /** Collapses each line to its trailing content, ignoring leading indentation. */
    private static String stripIndent(String s) {
        return s.replaceAll("(?m)^[ \\t]+", "");
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLikeResultHeader_noBlankBeforeHttpResponseCodeWhenNoRequestId(Protocol p) {
        // Without a top-level m_requestId, the last data member is followed directly by
        // m_HttpResponseCode (no intervening blank line), matching C2J. The fixture's last
        // result member is the @httpResponseCode int "status".
        String h = stripIndent(file(p, "DoThingResult.h"));
        assertTrue(h.contains("int m_status{0};\nAws::Http::HttpResponseCode m_HttpResponseCode;"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"JSON", "REST_JSON", "REST_XML", "CBOR"})
    void nonQueryResultHeader_blankLinePrecedesRequestId(Protocol p) {
        // With a top-level m_requestId, a blank line separates the data members from the
        // m_requestId / m_HttpResponseCode group, matching C2J.
        String h = stripIndent(file(p, "DoThingResult.h"));
        assertTrue(h.contains("\n\nAws::String m_requestId;\nAws::Http::HttpResponseCode m_HttpResponseCode;"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLikeResultHeader_omitsAWSStringWhenNoStringMemberOrRequestId(Protocol p) {
        // With no top-level m_requestId and no string-typed member, the Query/EC2 result header
        // has no Aws::String use and must not include AWSString.h, matching C2J include hygiene.
        // (The fixture DoThingOutput has only a nested struct + httpResponseCode int member.)
        String h = file(p, "DoThingResult.h");
        assertFalse(h.contains("AWSString.h"), h);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLikeResultSource_includesLogMacrosForResponseMetadataDebug(Protocol p) {
        // Query/EC2 result operator= emits AWS_LOGSTREAM_DEBUG / ResponseMetadata handling,
        // so the source must include LogMacros.h and use the Logging namespace, matching C2J.
        String c = file(p, "DoThingResult.cpp");
        assertTrue(c.contains("#include <aws/core/utils/logging/LogMacros.h>"), c);
        assertTrue(c.contains("using namespace Aws::Utils::Logging;"), c);
    }
}
