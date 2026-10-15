/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SupportsPresigningTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;

/**
 * JSON-flavored serde rendering. Serves {@link Protocol#JSON} (awsJson-RPC) and
 * {@link Protocol#REST_JSON} (rest-json), which share an identical C++ serde surface and
 * differ only on whether they attach an {@code X-Amz-Target} header. CBOR has its own
 * {@link CborProtocolTraits}.
 */
public final class JsonProtocolTraits implements ProtocolTraits {

    private final Protocol protocol;

    public JsonProtocolTraits(Protocol protocol) {
        if (protocol != Protocol.JSON && protocol != Protocol.REST_JSON) {
            throw new IllegalArgumentException(
                "JsonProtocolTraits only serves JSON and REST_JSON, got: " + protocol);
        }
        this.protocol = protocol;
    }

    @Override
    public Protocol protocol() {
        return protocol;
    }

    @Override
    public String serdeNamespace() {
        return protocol.getSerdeNamespace();
    }

    @Override
    public void writeShapeForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Json");
        writer.write("class JsonValue;");
        writer.write("class JsonView;");
        writer.writeNamespaceClose("Json");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeResultForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Json");
        writer.write("class JsonValue;");
        writer.writeNamespaceClose("Json");
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
        writer.write("$L $L($L jsonValue);", exportMacro, className, protocol.getViewType());
        writer.write("$L $L& operator=($L jsonValue);", exportMacro, className, protocol.getViewType());
        if (beforeSerializeMethod != null) {
            beforeSerializeMethod.run();
        }
        writer.write("$L $L $L() const;", exportMacro, protocol.getValueType(),
            protocol.getSerializeMethodName());
    }

    @Override
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className,
                                      StructureShape shape, Model model) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<$L>& result);",
            exportMacro, className, protocol.getValueType());
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<$L>& result);",
            exportMacro, className, protocol.getValueType());
        if (emitsResultDeser(shape, model)) {
            SchemaSerdeRenderer.writeResultDeserMethodDecls(writer, exportMacro);
        }
    }

    @Override
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            // Headers forward-declare JsonValue/JsonView; no serializer include.
            case SUBOBJECT_HEADER:
                return List.of();
            // AWSMemory is needed for the Aws::UniquePtr return type of GetSchemaSerdeOutput().
            case RESULT_HEADER:
                return List.of("aws/core/utils/memory/AWSMemory.h");
            // Request sources also serialize @httpHeader/@httpQuery members, needing URI,
            // StringUtils, and <numeric> (std::accumulate for comma-joined list headers). Added
            // only here to avoid widening other source kinds.
            case REQUEST_SOURCE:
                return List.of(
                    "aws/core/utils/json/JsonSerializer.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
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
                    "smithy/client/schema/JsonTraits.h",
                    "smithy/client/schema/HttpTraits.h",
                    "smithy/client/schema/DocumentConversion.h",
                    "numeric",
                    "utility");
            // Result sources also carry the schema-serde deserialize adapters (GetSchemaSerdeOutput) and
            // parse header-bound members (StringUtils).
            case RESULT_SOURCE:
                return List.of(
                    "aws/core/utils/json/JsonSerializer.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h",
                    "aws/core/utils/StringUtils.h",
                    "aws/core/utils/memory/AWSMemory.h",
                    "smithy/client/schema/Schema.h",
                    "smithy/client/schema/SchemaBuilder.h",
                    "smithy/client/schema/SerializableStruct.h",
                    "smithy/client/schema/ShapeDeserializer.h",
                    "smithy/client/schema/SerdeTraits.h",
                    "smithy/client/schema/JsonTraits.h",
                    "smithy/client/schema/HttpTraits.h",
                    "smithy/client/schema/DocumentConversion.h",
                    "utility");
            // All source kinds share one union (supersets allowed). Only #includes widen; usings unchanged.
            case SUBOBJECT_SOURCE:
            case STREAMING_RESULT_SOURCE:
            case EVENT_HANDLER_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
                return List.of(
                    "aws/core/utils/json/JsonSerializer.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h",
                    "utility");
            default:
                throw new UnsupportedOperationException(
                    "No serde includes defined for FileKind " + kind + " in JsonProtocolTraits");
        }
    }

    @Override
    public List<String> serdeUsings(FileKind kind) {
        switch (kind) {
            case EVENT_HANDLER_SOURCE:
                return List.of(serdeNamespace());
            case RESULT_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
            case REQUEST_SOURCE:
            case SUBOBJECT_SOURCE:
                return List.of("Aws::Utils::Json", "Aws::Utils");
            default:
                throw new UnsupportedOperationException(
                    "No serde usings defined for FileKind " + kind + " in JsonProtocolTraits");
        }
    }

    @Override
    public void writeSerdeMethodImpls(CppWriter writer, String className) {
        writer.write("$L::$L(JsonView jsonValue) { *this = jsonValue; }", className, className);
        writer.write("");
        // Unnamed param: placeholder serde stub (body pending); a named param would trip -Werror,-Wunused-parameter.
        writer.openBlock("$L& $L::operator=(JsonView) {", "}", className, className, () -> {
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("JsonValue $L::Jsonize() const {", "}", className, () -> {
            writer.write("JsonValue payload;");
            writer.write("return payload;");
        });
    }

    @Override
    public void writeResultSerdeImpls(CppWriter writer, String className, StructureShape shape, Model model,
                                      String namespace) {
        writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}",
            className, className, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}",
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
        java.util.Optional<MemberShape> payload = resultPayload(shape, model);
        if (bindsResultViaSchemaSerde(shape, model)) {
            writer.write("");
            SchemaSerdeRenderer.writeResultDeser(writer, className, RequestBindings.resultMembers(shape), model, memberTraits());
        } else if (payload.isPresent()) {
            writer.write("");
            SchemaSerdeRenderer.writePayloadResultDeser(writer, className, payload.get(), model, memberTraits());
        } else if (RequestBindings.resultBodySchemaDeserializable(shape, model)) {
            writer.write("");
            SchemaSerdeRenderer.writeResultDeser(writer, className, shape, model, memberTraits());
        }
    }

    /** A structure / union {@code @httpPayload} result member (rest-json only; awsJson routes all members to the body). */
    private java.util.Optional<MemberShape> resultPayload(StructureShape shape, Model model) {
        return serializesHttpBindingMembers()
            ? RequestBindings.schemaSerializableStructurePayload(shape, model) : java.util.Optional.empty();
    }

    private boolean emitsResultDeser(StructureShape shape, Model model) {
        return bindsResultViaSchemaSerde(shape, model) || resultPayload(shape, model).isPresent()
            || RequestBindings.resultBodySchemaDeserializable(shape, model);
    }

    @Override
    public boolean hasTargetHeader() {
        // awsJson1_0 / awsJson1_1 send X-Amz-Target; rest-json and CBOR do not.
        return protocol == Protocol.JSON;
    }

    @Override
    public boolean serializesHttpBindingMembers() {
        // rest-json honors HTTP bindings; awsJson (RPC) routes those members to the body.
        return protocol == Protocol.REST_JSON;
    }

    @Override
    public void writeInitialResponseCtorDecl(CppWriter writer, String exportMacro, String className) {
        // JSON initial responses arrive as an event message with headers.
        writer.write("$L $L(const Http::HeaderValueCollection& responseHeaders);", exportMacro, className);
    }

    @Override
    public void writeInitialResponseCtorImpl(CppWriter writer, String className) {
        // Delegate to the default ctor so all members are value-initialized before the
        // header-derived ones are set (matches C2J).
        writer.openBlock("$1L::$1L(const Http::HeaderValueCollection& responseHeaders) : $1L() {", "}",
            className, () -> writer.write("AWS_UNREFERENCED_PARAM(responseHeaders);"));
    }

    @Override
    public void writeInitialResponseHandlerConstruction(CppWriter writer, String className,
                                                        String handlerClassTag) {
        writer.write("$L event(GetEventHeadersAsHttpHeaders());", className);
    }

    @Override
    public void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                        StructureShape shape, OperationShape operation, Model model) {
        // A raw-streaming-payload request sends its body via the streaming base class, so no
        // SerializePayload is emitted (matches C2J).
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
            SchemaSerdeRenderer.writeOperationContextDecl(writer, exportMacro);
            if (bindsRequestViaSchemaSerde(shape, operation, model)
                    || RequestBindings.nonEmptyRequestBodySchemaSerializable(shape, model)
                    || RequestBindings.schemaSerializableStructurePayload(shape, model).isPresent()) {
                SchemaSerdeRenderer.writeSchemaSerdeMethodDecls(writer, exportMacro);
            }
        }
        if (hasTargetHeader()
                || (serializesHttpBindingMembers() && RequestBindings.hasHeaderMembers(shape, model))) {
            writer.write("");
            writeGetRequestSpecificHeadersDecl(writer, exportMacro);
        }
        if (serializesHttpBindingMembers() && RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersDecl(writer, exportMacro);
        }
    }

    /** Only restJson1 honors {@code @jsonName}; awsJson 1.0 / 1.1 always use the member name. */
    private SchemaSerdeRenderer.MemberTraits memberTraits() {
        return protocol == Protocol.REST_JSON ? SchemaSerdeRenderer::jsonMemberTraits : SchemaSerdeRenderer::cborMemberTraits;
    }

    @Override
    public void writeRequestMethodImpls(CppWriter writer, String className,
                                        StructureShape shape, OperationShape operation,
                                        ServiceShape service, Model model) {
        boolean bound = bindsRequestViaSchemaSerde(shape, operation, model);
        if (bound) {
            // The HTTP-binding protocol places every member (path, query, headers, payload, body) from the schema.
            SchemaSerdeRenderer.writeSerializePayload(writer, className, new java.util.ArrayList<>(shape.getAllMembers().values()),
                model, memberTraits());
            SchemaSerdeRenderer.writeOperationContext(writer, className, operation.getId().getName(), service.getVersion(),
                ProtocolTraits.uriPattern(operation), ProtocolTraits.hostPrefix(operation));
        } else if (RequestBindings.emitsSerializePayload(operation, model)) {
            java.util.Optional<MemberShape> payload = RequestBindings.schemaSerializableStructurePayload(shape, model);
            if (payload.isPresent()) {
                SchemaSerdeRenderer.writePayloadSerializePayload(writer, className, payload.get(), model,
                    memberTraits(), "");
            } else if (RequestBindings.nonEmptyRequestBodySchemaSerializable(shape, model)) {
                SchemaSerdeRenderer.writeSerializePayload(writer, className, shape, model,
                    memberTraits());
            } else {
                String payloadBody = protocol == Protocol.JSON ? "\"{}\"" : "{}";
                writer.write("Aws::String $L::SerializePayload() const { return $L; }", className, payloadBody);
            }
            SchemaSerdeRenderer.writeOperationContext(writer, className, operation.getId().getName(), service.getVersion());
        }
        if (hasTargetHeader()
                || (serializesHttpBindingMembers() && RequestBindings.hasHeaderMembers(shape, model))) {
            writer.write("");
            writeGetRequestSpecificHeadersImpl(writer, className, shape, operation, service, model, !bound);
        }
        if (serializesHttpBindingMembers() && RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            if (bound) {
                writeEmptyAddQueryStringParametersImpl(writer, className);
            } else {
                writeAddQueryStringParametersImpl(writer, className, shape, model);
            }
        }
        // DumpBodyToUrl stub for presigning-capable operations; body serialization pending schema serde.
        if (operation.hasTrait(SupportsPresigningTrait.class)) {
            writer.write("");
            writer.write("void $L::DumpBodyToUrl(Aws::Http::URI& uri) const { AWS_UNREFERENCED_PARAM(uri); }",
                className);
        }
    }
}
