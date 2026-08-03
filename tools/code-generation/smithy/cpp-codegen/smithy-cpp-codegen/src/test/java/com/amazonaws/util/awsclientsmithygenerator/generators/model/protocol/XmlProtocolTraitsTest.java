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

    private final ProtocolTraits restXml = new RestXmlProtocolTraits();
    private final ProtocolTraits queryXml = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
    private final ProtocolTraits ec2 = new QueryXmlProtocolTraits(Protocol.EC2);

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

            assertTrue(render(traits::writeSerdeInclude)
                .contains("#include <aws/core/utils/xml/XmlSerializer.h>"));

            String usings = render(traits::writeSerdeUsingDeclarations);
            assertTrue(usings.contains("using namespace Aws::Utils::Xml;"), usings);
            assertTrue(usings.contains("using namespace Aws::Utils;"), usings);
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

            String impls = render(w -> traits.writeResultSerdeImpls(w, "DoThingResult"));
            assertTrue(impls.contains("DoThingResult::DoThingResult(const "
                + "Aws::AmazonWebServiceResult<XmlDocument>& result) {"), impls);
            assertTrue(impls.contains("DoThingResult& DoThingResult::operator=(const "
                + "Aws::AmazonWebServiceResult<XmlDocument>& result) {"), impls);
        }
    }
}
