/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.EmbeddedErrorsTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;

/**
 * REST-XML serde rendering. Shapes serialize by attaching themselves to a parent
 * node via {@code AddToNode}.
 */
public final class RestXmlProtocolTraits implements ProtocolTraits {

    @Override
    public Protocol protocol() {
        return Protocol.REST_XML;
    }

    @Override
    public String serdeNamespace() {
        return Protocol.REST_XML.getSerdeNamespace();
    }

    @Override
    public void writeShapeForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Xml");
        writer.write("class XmlNode;");
        writer.writeNamespaceClose("Xml");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeResultForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Xml");
        writer.write("class XmlDocument;");
        writer.writeNamespaceClose("Xml");
        writer.writeNamespaceClose("Utils");
        // Forward-declare the schema-serde adapter base for the GetSchemaSerdeOutput() return type.
        writer.write("}");  // close Aws (reopened below by the result body)
        writer.write("namespace smithy { namespace schema { class SerializableStruct; } }");
        writer.write("namespace Aws {");
    }

    @Override
    public void writeSerdeMethodDecls(CppWriter writer, String exportMacro, String className,
                                      Runnable beforeSerializeMethod) {
        writer.write("$L $L() = default;", exportMacro, className);
        writer.write("$L $L(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
        writer.write("$L $L& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
        if (beforeSerializeMethod != null) {
            beforeSerializeMethod.run();
        }
        writer.write("$L void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;", exportMacro);
    }

    @Override
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className,
                                      StructureShape shape, Model model) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);",
            exportMacro, className);
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);",
            exportMacro, className);
        if (bindsResultViaSchemaSerde(shape, model)
                || RequestBindings.schemaSerializableStructurePayload(shape, model).isPresent()
                || RequestBindings.resultBodySchemaDeserializable(shape, model)) {
            SchemaSerdeRenderer.writeResultDeserMethodDecls(writer, exportMacro);
        }
    }

    @Override
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            // Sub-object headers forward-declare XmlNode; no serializer include.
            case SUBOBJECT_HEADER:
                return List.of();
            // AWSMemory is needed for the Aws::UniquePtr return type of GetSchemaSerdeOutput().
            case RESULT_HEADER:
                return List.of("aws/core/utils/memory/AWSMemory.h");
            // Request sources also serialize @httpHeader/@httpQuery members, needing StringUtils,
            // URI (URLEncodePath), and <numeric> (std::accumulate for comma-joined list headers).
            // Carried for every request source (superset).
            case REQUEST_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/http/URI.h",
                    "aws/core/utils/memory/AWSMemory.h",
                    "smithy/client/schema/Schema.h",
                    "smithy/client/schema/SchemaBuilder.h",
                    "smithy/client/schema/SerializableStruct.h",
                    "smithy/client/schema/MapSerializer.h",
                    "smithy/client/schema/ShapeSerializer.h",
                    "smithy/client/schema/SerdeTraits.h",
                    "smithy/client/schema/ClientProtocol.h",
                    "smithy/client/schema/XmlTraits.h",
                    "smithy/client/schema/HttpTraits.h",
                    "smithy/client/schema/DocumentConversion.h",
                    "numeric",
                    "utility");
            // Result sources also carry the schema-serde deserialize adapters (GetSchemaSerdeOutput) and
            // parse header-bound members (StringUtils).
            case RESULT_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/utils/memory/AWSMemory.h",
                    "smithy/client/schema/Schema.h",
                    "smithy/client/schema/SchemaBuilder.h",
                    "smithy/client/schema/SerializableStruct.h",
                    "smithy/client/schema/ShapeDeserializer.h",
                    "smithy/client/schema/SerdeTraits.h",
                    "smithy/client/schema/XmlTraits.h",
                    "smithy/client/schema/HttpTraits.h",
                    "smithy/client/schema/DocumentConversion.h",
                    "utility");
            // The remaining source kinds share one union (supersets allowed).
            case SUBOBJECT_SOURCE:
            case STREAMING_RESULT_SOURCE:
            case EVENT_HANDLER_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
                return List.of(
                    "aws/core/utils/xml/XmlSerializer.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/HashingUtils.h",
                    "utility");
            default:
                throw new UnsupportedOperationException(
                    "No serde includes defined for FileKind " + kind + " in RestXmlProtocolTraits");
        }
    }

    @Override
    public List<String> serdeUsings(FileKind kind) {
        switch (kind) {
            case EVENT_HANDLER_SOURCE:
                return List.of(serdeNamespace());
            // Request sources add Aws::Http so URI::URLEncodePath resolves unqualified (C2J emits
            // `using namespace Aws::Http;` in every XML request source that serializes headers/query).
            case REQUEST_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils", "Aws::Http");
            case RESULT_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
            case SUBOBJECT_SOURCE:
                return List.of("Aws::Utils::Xml", "Aws::Utils");
            default:
                throw new UnsupportedOperationException(
                    "No serde usings defined for FileKind " + kind + " in RestXmlProtocolTraits");
        }
    }

    @Override
    public void writeSerdeMethodImpls(CppWriter writer, String className) {
        writer.write("$L::$L(const XmlNode& xmlNode) { *this = xmlNode; }", className, className);
        writer.write("");
        // Unnamed params: placeholder serde stubs (bodies pending); named params would trip
        // -Werror,-Wunused-parameter.
        writer.openBlock("$L& $L::operator=(const XmlNode&) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("void $L::AddToNode(XmlNode&) const {", "}", className, () -> {
        });
    }

    @Override
    public void writeResultSerdeImpls(CppWriter writer, String className, StructureShape shape, Model model,
                                      String namespace) {
        writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
            className, className, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
            className, className, () -> {
            // The body is NOT deserialized here: the client drives ClientProtocol::DeserializeResponse
            // over GetSchemaSerdeOutput(). This handles only the transport concerns (status, headers).
            writer.write("m_HttpResponseCode = result.GetResponseCode();");
            writer.write("AWS_UNREFERENCED_PARAM(result);");
            // An HTTP-binding result's headers / status are deserialized by the protocol with its body.
            boolean bound = bindsResultViaSchemaSerde(shape, model);
            writeResultHeaderMembers(writer, shape, model, !bound);
            if (!bound) {
                writeResultStatusCodeMembers(writer, shape, model);
            }
            writer.write("return *this;");
        });
        java.util.Optional<MemberShape> payload = RequestBindings.schemaSerializableStructurePayload(shape, model);
        if (bindsResultViaSchemaSerde(shape, model)) {
            writer.write("");
            SchemaSerdeRenderer.writeResultDeser(writer, className, RequestBindings.resultMembers(shape), model,
                SchemaSerdeRenderer::xmlMemberTraits);
        } else if (payload.isPresent()) {
            writer.write("");
            SchemaSerdeRenderer.writePayloadResultDeser(writer, className, payload.get(), model,
                SchemaSerdeRenderer::xmlMemberTraits);
        } else if (RequestBindings.resultBodySchemaDeserializable(shape, model)) {
            writer.write("");
            SchemaSerdeRenderer.writeResultDeser(writer, className, shape, model, SchemaSerdeRenderer::xmlMemberTraits);
        }
    }

    @Override
    public void writeInitialResponseHandlerConstruction(CppWriter writer, String className,
                                                        String handlerClassTag) {
        // REST-XML reuses its XmlNode serde ctor: the initial response is built from the XML body
        // root element (C2J addEventStreamInitialResponse), not from event headers. The payload is
        // first parsed into an XmlDocument (resolved via serdeUsings(EVENT_HANDLER_SOURCE) ->
        // Aws::Utils::Xml) and a failed parse warns and breaks out of the case. No extra
        // header-collection ctor is emitted (writeInitialResponseCtorDecl inherits the no-op default).
        writer.write("auto xmlDoc = XmlDocument::CreateFromXmlString(GetEventPayloadAsString());");
        writer.openBlock("if (!xmlDoc.WasParseSuccessful()) {", "}", () -> {
            writer.write("AWS_LOGSTREAM_WARN($L, \"Unable to generate a proper InitialResponse "
                + "object from the response in XML format.\");", handlerClassTag);
            writer.write("break;");
        });
        writer.write("$L event(xmlDoc.GetRootElement());", className);
    }

    @Override
    public void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                        StructureShape shape, OperationShape operation, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
            SchemaSerdeRenderer.writeOperationContextDecl(writer, exportMacro);
            if (bindsRequestViaSchemaSerde(shape, operation, model)
                    || RequestBindings.nonEmptyRequestBodySchemaSerializable(shape, model)
                    || RequestBindings.schemaSerializableStructurePayload(shape, model).isPresent()) {
                SchemaSerdeRenderer.writeSchemaSerdeMethodDecls(writer, exportMacro);
            }
        }
        if (RequestBindings.hasHeaderMembers(shape, model)) {
            writer.write("");
            writeGetRequestSpecificHeadersDecl(writer, exportMacro);
        }
        if (RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersDecl(writer, exportMacro);
        }
        if (shape.hasTrait(EmbeddedErrorsTrait.class)) {
            writer.write("");
            writeHasEmbeddedErrorDecl(writer, exportMacro);
        }
    }

    @Override
    public void writeRequestMethodImpls(CppWriter writer, String className,
                                        StructureShape shape, OperationShape operation,
                                        ServiceShape service, Model model) {
        boolean bound = bindsRequestViaSchemaSerde(shape, operation, model);
        if (bound) {
            // The HTTP-binding protocol places every member (path, query, headers, payload, body) from the schema.
            SchemaSerdeRenderer.writeSerializePayload(writer, className, new java.util.ArrayList<>(shape.getAllMembers().values()),
                model, SchemaSerdeRenderer::xmlMemberTraits);
            SchemaSerdeRenderer.writeOperationContext(writer, className, operation.getId().getName(), service.getVersion(),
                ProtocolTraits.uriPattern(operation), ProtocolTraits.hostPrefix(operation));
        } else if (RequestBindings.emitsSerializePayload(operation, model)) {
            java.util.Optional<MemberShape> payload = RequestBindings.schemaSerializableStructurePayload(shape, model);
            if (payload.isPresent()) {
                SchemaSerdeRenderer.writePayloadSerializePayload(writer, className, payload.get(), model,
                    SchemaSerdeRenderer::xmlMemberTraits, SchemaSerdeRenderer.xmlPayloadRootTraitArg(payload.get(), model));
            } else if (RequestBindings.nonEmptyRequestBodySchemaSerializable(shape, model)) {
                SchemaSerdeRenderer.writeSerializePayload(writer, className, shape, model,
                    SchemaSerdeRenderer::xmlMemberTraits);
            } else {
                writer.write("Aws::String $L::SerializePayload() const { return {}; }", className);
            }
            SchemaSerdeRenderer.writeOperationContext(writer, className, operation.getId().getName(), service.getVersion());
        }
        if (RequestBindings.hasHeaderMembers(shape, model)) {
            writer.write("");
            writeGetRequestSpecificHeadersImpl(writer, className, shape, operation, service, model, !bound);
        }
        if (RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            if (bound) {
                writeEmptyAddQueryStringParametersImpl(writer, className);
            } else {
                writeAddQueryStringParametersImpl(writer, className, shape, model);
            }
        }
        if (shape.hasTrait(EmbeddedErrorsTrait.class)) {
            writer.write("");
            writeHasEmbeddedErrorImpl(writer, className);
        }
    }

    // C2J RequestHeader.vm decl: unqualified IOStream / Http::HeaderValueCollection, resolved via the
    // request header's Aws usings. Only S3 requests carry EmbeddedErrorsTrait, so the caller gates.
    private void writeHasEmbeddedErrorDecl(CppWriter writer, String exportMacro) {
        writer.write("$L bool HasEmbeddedError(IOStream &body, "
            + "const Http::HeaderValueCollection &header) const override;", exportMacro);
    }

    // Constant XML error-sniff body, identical across C2J's S3 request-source templates: parse the
    // body as XML and report an embedded error when the root element is <Error>. Not shape-dependent.
    private void writeHasEmbeddedErrorImpl(CppWriter writer, String className) {
        writer.openBlock("bool $L::HasEmbeddedError(Aws::IOStream& body, "
            + "const Aws::Http::HeaderValueCollection& header) const {", "}", className, () -> {
            writer.write("AWS_UNREFERENCED_PARAM(header);");
            writer.write("auto readPointer = body.tellg();");
            writer.write("Utils::Xml::XmlDocument doc = XmlDocument::CreateFromXmlStream(body);");
            writer.write("body.seekg(readPointer);");
            writer.openBlock("if (!doc.WasParseSuccessful()) {", "}",
                () -> writer.write("return false;"));
            writer.openBlock("if (!doc.GetRootElement().IsNull() "
                + "&& doc.GetRootElement().GetName() == Aws::String(\"Error\")) {", "}",
                () -> writer.write("return true;"));
            writer.write("return false;");
        });
    }
}
