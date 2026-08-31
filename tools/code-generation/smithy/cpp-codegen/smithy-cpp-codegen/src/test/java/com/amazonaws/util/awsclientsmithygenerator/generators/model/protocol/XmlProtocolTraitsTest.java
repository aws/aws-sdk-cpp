/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.EnumSource;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

class XmlProtocolTraitsTest {

    private static String render(java.util.function.Consumer<CppWriter> body) {
        CppWriter writer = new CppWriter();
        body.accept(writer);
        return writer.toString();
    }

    /**
     * Renders inside a simulated class body (indent level 1), matching how request-method
     * declarations are emitted by {@code RequestRenderer}. Query/EC2 decls open with a
     * {@code dedent()} for the {@code protected:} sandwich, which requires a non-zero
     * starting indent.
     */
    private static String renderInClassBody(java.util.function.Consumer<CppWriter> body) {
        CppWriter writer = new CppWriter();
        writer.indent();
        body.accept(writer);
        return writer.toString();
    }

    private final ProtocolTraits restXml = new RestXmlProtocolTraits();
    private final ProtocolTraits queryXml = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
    private final ProtocolTraits ec2 = new QueryXmlProtocolTraits(Protocol.EC2);

    private static software.amazon.smithy.model.shapes.StructureShape reqWith(boolean header, boolean query) {
        software.amazon.smithy.model.shapes.StructureShape.Builder b =
            software.amazon.smithy.model.shapes.StructureShape.builder().id("com.example#DoThingRequest");
        if (header) {
            b.addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingRequest$h").target("com.example#Str")
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("X-H")).build());
        }
        if (query) {
            b.addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingRequest$q").target("com.example#Str")
                .addTrait(new software.amazon.smithy.model.traits.HttpQueryTrait("q")).build());
        }
        return b.build();
    }
    private static software.amazon.smithy.model.shapes.OperationShape opDoThing() {
        return software.amazon.smithy.model.shapes.OperationShape.builder().id("com.example#DoThing").build();
    }
    private static software.amazon.smithy.model.shapes.ServiceShape svcAthena() {
        return software.amazon.smithy.model.shapes.ServiceShape.builder()
            .id("com.example#AmazonAthena").version("2017-05-18").build();
    }
    private static software.amazon.smithy.model.Model modelWith(
            software.amazon.smithy.model.shapes.StructureShape req) {
        return software.amazon.smithy.model.Model.builder()
            .addShapes(software.amazon.smithy.model.shapes.StringShape.builder().id("com.example#Str").build(), req)
            .build();
    }

    // ---------- identity ----------

    @Test
    void reportIdentityAndNamespace() {
        assertEquals(Protocol.REST_XML, restXml.protocol());
        assertEquals(Protocol.QUERY_XML, queryXml.protocol());
        assertEquals(Protocol.EC2, ec2.protocol());
        assertEquals("Aws::Utils::Xml", restXml.serdeNamespace());
        assertEquals("Aws::Utils::Xml", queryXml.serdeNamespace());
        assertEquals("Aws::Utils::Xml", ec2.serdeNamespace());
    }

    @Test
    void queryXmlTraits_rejectsNonQueryProtocols() {
        assertThrows(IllegalArgumentException.class, () -> new QueryXmlProtocolTraits(Protocol.JSON));
        assertThrows(IllegalArgumentException.class, () -> new QueryXmlProtocolTraits(Protocol.REST_XML));
    }

    // ---------- REST_XML: AddToNode ----------

    @Test
    void restXml_serdeMethodDecls_emitAddToNode() {
        String out = render(w -> restXml.writeSerdeMethodDecls(w, "AWS_EXAMPLE_API", "Nested", null));
        assertTrue(out.contains("AWS_EXAMPLE_API Nested() = default;"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API Nested(const Aws::Utils::Xml::XmlNode& xmlNode);"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API Nested& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;"), out);
        assertFalse(out.contains("Jsonize"), out);
        assertFalse(out.contains("OutputToStream"), out);
    }

    @Test
    void restXml_serdeMethodImpls_emitAddToNodeBody() {
        String out = render(w -> restXml.writeSerdeMethodImpls(w, "Nested"));
        assertTrue(out.contains("Nested::Nested(const XmlNode& xmlNode) { *this = xmlNode; }"), out);
        assertTrue(out.contains("Nested& Nested::operator=(const XmlNode& xmlNode) {"), out);
        assertTrue(out.contains("void Nested::AddToNode(XmlNode& parentNode) const {"), out);
    }

    @Test
    void restXml_serdeMethodDecls_runsHookBeforeSerializeMethod() {
        CppWriter writer = new CppWriter();
        restXml.writeSerdeMethodDecls(writer, "AWS_EXAMPLE_API", "Nested",
            () -> writer.write("AWS_EXAMPLE_API Nested(const Http::HeaderValueCollection& responseHeaders);"));
        String out = writer.toString();
        int hook = out.indexOf("HeaderValueCollection");
        int serialize = out.indexOf("AddToNode");
        assertTrue(hook >= 0 && serialize > hook,
            "Hook must run before the serialize method: " + out);
    }

    // ---------- QUERY_XML / EC2: two OutputToStream overloads ----------

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLike_serdeMethodDecls_emitBothOutputToStreamOverloads(Protocol p) {
        ProtocolTraits traits = new QueryXmlProtocolTraits(p);
        String out = render(w -> traits.writeSerdeMethodDecls(w, "AWS_EXAMPLE_API", "Nested", null));
        assertTrue(out.contains("AWS_EXAMPLE_API Nested(const Aws::Utils::Xml::XmlNode& xmlNode);"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API void OutputToStream(Aws::OStream& ostream, "
            + "const char* location, unsigned index, const char* locationValue) const;"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API void OutputToStream(Aws::OStream& ostream, "
            + "const char* location) const;"), out);
        assertFalse(out.contains("AddToNode"), out);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLike_serdeMethodImpls_emitBothOutputToStreamBodies(Protocol p) {
        ProtocolTraits traits = new QueryXmlProtocolTraits(p);
        String out = render(w -> traits.writeSerdeMethodImpls(w, "Nested"));
        assertTrue(out.contains("Nested::Nested(const XmlNode& xmlNode) { *this = xmlNode; }"), out);
        assertTrue(out.contains("void Nested::OutputToStream(Aws::OStream& ostream, const char* location, "
            + "unsigned index, const char* locationValue) const {"), out);
        assertTrue(out.contains("void Nested::OutputToStream(Aws::OStream& ostream, "
            + "const char* location) const {"), out);
    }

    @ParameterizedTest
    @EnumSource(value = Protocol.class, names = {"QUERY_XML", "EC2"})
    void queryLike_serdeMethodDecls_runsHookBeforeSerializeMethod(Protocol p) {
        ProtocolTraits traits = new QueryXmlProtocolTraits(p);
        CppWriter writer = new CppWriter();
        traits.writeSerdeMethodDecls(writer, "AWS_EXAMPLE_API", "Nested",
            () -> writer.write("AWS_EXAMPLE_API Nested(const Http::HeaderValueCollection& responseHeaders);"));
        String out = writer.toString();
        int hook = out.indexOf("HeaderValueCollection");
        int serialize = out.indexOf("OutputToStream");
        assertTrue(hook >= 0 && serialize > hook,
            "Hook must run before the serialize method: " + out);
    }

    // ---------- shared XML behavior ----------

    @Test
    void allXmlTraits_shareForwardDeclarationsIncludeAndUsings() {
        for (ProtocolTraits traits : java.util.List.of(restXml, queryXml, ec2)) {
            String shapeFwd = render(traits::writeShapeForwardDeclarations);
            assertTrue(shapeFwd.contains("class XmlNode;"), shapeFwd);
            assertFalse(shapeFwd.contains("JsonValue"), shapeFwd);

            String resultFwd = render(traits::writeResultForwardDeclarations);
            assertTrue(resultFwd.contains("class XmlDocument;"), resultFwd);
            assertFalse(resultFwd.contains("class XmlNode;"),
                "Result headers declare the document type, not the node type: " + resultFwd);

            assertTrue(traits.serdeIncludes(FileKind.SUBOBJECT_SOURCE)
                .contains("aws/core/utils/xml/XmlSerializer.h"));

            var usings = traits.serdeUsings(FileKind.SUBOBJECT_SOURCE);
            assertTrue(usings.contains("Aws::Utils::Xml"), usings.toString());
            assertTrue(usings.contains("Aws::Utils"), usings.toString());
        }
    }

    @Test
    void allXmlTraits_useXmlDocumentForResults() {
        for (ProtocolTraits traits : java.util.List.of(restXml, queryXml, ec2)) {
            String decls = render(w -> traits.writeResultSerdeDecls(w, "AWS_EXAMPLE_API", "DoThingResult"));
            assertTrue(decls.contains("AWS_EXAMPLE_API DoThingResult(const "
                + "Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);"), decls);
            assertTrue(decls.contains("AWS_EXAMPLE_API DoThingResult& operator=(const "
                + "Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);"), decls);

            var req = reqWith(false, false); var model = modelWith(req);
            String impls = render(w -> traits.writeResultSerdeImpls(w, "DoThingResult", req, model, "Example"));
            assertTrue(impls.contains("DoThingResult::DoThingResult(const "
                + "Aws::AmazonWebServiceResult<XmlDocument>& result) {"), impls);
            assertTrue(impls.contains("DoThingResult& DoThingResult::operator=(const "
                + "Aws::AmazonWebServiceResult<XmlDocument>& result) {"), impls);
        }
    }

    // ---------- REST_XML request contract (Axis-1 gating) ----------

    @Test
    void restXml_noBindings_onlySerializePayload() {
        var req = reqWith(false, false); var model = modelWith(req);
        ProtocolTraits xml = new RestXmlProtocolTraits();
        String d = render(w -> xml.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("Aws::String SerializePayload() const override;"), d);
        assertFalse(d.contains("GetRequestSpecificHeaders"), d);
        assertFalse(d.contains("DumpBodyToUrl"), d);
        assertFalse(d.contains("AddQueryStringParameters"), d);
        String i = render(w -> xml.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("Aws::String DoThingRequest::SerializePayload() const { return {}; }"), i);
    }

    @Test
    void restXml_withHeaderMember_emitsHeadersWithoutTarget() {
        var req = reqWith(true, false); var model = modelWith(req);
        ProtocolTraits xml = new RestXmlProtocolTraits();
        String d = render(w -> xml.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("GetRequestSpecificHeaders() const override;"), d);
        String i = render(w -> xml.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertFalse(i.contains("X-Amz-Target"), i);
    }

    @Test
    void restXml_withQueryMember_emitsAddQueryStringParameters() {
        var req = reqWith(false, true); var model = modelWith(req);
        ProtocolTraits xml = new RestXmlProtocolTraits();
        String d = render(w -> xml.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("void AddQueryStringParameters(Aws::Http::URI& uri) const override;"), d);
    }

    private static software.amazon.smithy.model.shapes.StructureShape reqWithEmbeddedErrors() {
        return software.amazon.smithy.model.shapes.StructureShape.builder()
            .id("com.example#DoThingRequest")
            .addTrait(new com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms
                .EmbeddedErrorsTrait())
            .build();
    }

    @Test
    void restXml_withEmbeddedErrorsTrait_emitsHasEmbeddedError() {
        var req = reqWithEmbeddedErrors(); var model = modelWith(req);
        ProtocolTraits xml = new RestXmlProtocolTraits();
        String d = render(w -> xml.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("AWS_EX_API bool HasEmbeddedError(IOStream &body, "
            + "const Http::HeaderValueCollection &header) const override;"), d);
        String i = render(w -> xml.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        // The impl is the real constant XML error-sniff body (not a stub) — matches C2J's S3
        // request-source templates: parse the body and report true iff the root element is <Error>.
        assertTrue(i.contains("bool DoThingRequest::HasEmbeddedError("), i);
        assertTrue(i.contains("XmlDocument doc = XmlDocument::CreateFromXmlStream(body);"), i);
        assertTrue(i.contains("doc.GetRootElement().GetName() == Aws::String(\"Error\")"), i);
        assertFalse(i.contains("return false; }"), "impl must not be the one-line stub");
    }

    @Test
    void restXml_withoutEmbeddedErrorsTrait_omitsHasEmbeddedError() {
        var req = reqWith(false, false); var model = modelWith(req);
        ProtocolTraits xml = new RestXmlProtocolTraits();
        String d = render(w -> xml.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertFalse(d.contains("HasEmbeddedError"), d);
        String i = render(w -> xml.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertFalse(i.contains("HasEmbeddedError"), i);
    }

    // ---------- Query/EC2 request contract (Axis-1 gating + protected DumpBodyToUrl) ----------

    @Test
    void queryXml_serializePayloadAndProtectedDumpBodyToUrl() {
        var req = reqWith(false, false); var model = modelWith(req);
        ProtocolTraits q = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
        String d = renderInClassBody(w -> q.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("Aws::String SerializePayload() const override;"), d);
        assertTrue(d.contains("void DumpBodyToUrl(Aws::Http::URI& uri) const override;"), d);
        assertTrue(d.contains("protected:"), d);
        assertTrue(d.contains("public:"), d);
        assertFalse(d.contains("GetRequestSpecificHeaders"), d);
        String i = render(w -> q.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("Aws::String DoThingRequest::SerializePayload() const { return {}; }"), i);
        assertTrue(i.contains("void DoThingRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }"), i);
    }

    @Test
    void queryXml_withHeaderMember_alsoEmitsHeaders_andStillDumpBodyToUrl() {
        var req = reqWith(true, false); var model = modelWith(req);
        ProtocolTraits q = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
        String d = renderInClassBody(w -> q.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("GetRequestSpecificHeaders() const override;"), d);
        assertTrue(d.contains("DumpBodyToUrl"), d);
    }

    // ---------- Query/EC2 result ResponseMetadata / requestId extraction ----------

    @Test
    void queryResult_extractsResponseMetadata() {
        var req = reqWith(false, false); var model = modelWith(req);
        String out = render(w -> new QueryXmlProtocolTraits(Protocol.QUERY_XML)
            .writeResultSerdeImpls(w, "GetThingResult", req, model, "IAM"));
        assertTrue(out.contains("FirstChild(\"ResponseMetadata\")"), out);
        assertTrue(out.contains("m_responseMetadata"), out);
    }

    @Test
    void queryResult_logTagIsFullyQualified() {
        // C2J logs with the fully-qualified class name (Aws::<namespace>::Model::<class>).
        var req = reqWith(false, false); var model = modelWith(req);
        String out = render(w -> new QueryXmlProtocolTraits(Protocol.QUERY_XML)
            .writeResultSerdeImpls(w, "GetThingResult", req, model, "IAM"));
        assertTrue(out.contains("AWS_LOGSTREAM_DEBUG(\"Aws::IAM::Model::GetThingResult\""), out);
    }

    @Test
    void ec2Result_extractsRequestIdChild() {
        var req = reqWith(false, false); var model = modelWith(req);
        String out = render(w -> new QueryXmlProtocolTraits(Protocol.EC2)
            .writeResultSerdeImpls(w, "GetThingResult", req, model, "IAM"));
        assertTrue(out.contains("FirstChild(\"requestId\")"), out);
        assertTrue(out.contains("SetRequestId"), out);
    }
}
