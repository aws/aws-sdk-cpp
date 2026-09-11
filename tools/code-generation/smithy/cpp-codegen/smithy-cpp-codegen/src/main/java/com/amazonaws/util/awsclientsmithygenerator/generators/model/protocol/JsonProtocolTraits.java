/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.SupportsPresigningTrait;
import software.amazon.smithy.model.Model;
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
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<$L>& result);",
            exportMacro, className, protocol.getValueType());
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<$L>& result);",
            exportMacro, className, protocol.getValueType());
    }

    @Override
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            // Headers forward-declare JsonValue/JsonView; no serializer include.
            case SUBOBJECT_HEADER:
            case RESULT_HEADER:
                return List.of();
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
                    "numeric",
                    "utility");
            // All source kinds share one union (supersets allowed). Only #includes widen; usings unchanged.
            case SUBOBJECT_SOURCE:
            case RESULT_SOURCE:
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
        writer.openBlock("$L& $L::operator=(JsonView jsonValue) {", "}", className, className, () -> {
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
            writeResultStatusCodeMembers(writer, shape, model);
            writer.write("return *this;");
        });
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

    @Override
    public void writeRequestMethodImpls(CppWriter writer, String className,
                                        StructureShape shape, OperationShape operation,
                                        ServiceShape service, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            String payloadBody = protocol == Protocol.JSON ? "\"{}\"" : "{}";
            writer.write("Aws::String $L::SerializePayload() const { return $L; }", className, payloadBody);
        }
        if (hasTargetHeader()
                || (serializesHttpBindingMembers() && RequestBindings.hasHeaderMembers(shape, model))) {
            writer.write("");
            writeGetRequestSpecificHeadersImpl(writer, className, shape, operation, service, model);
        }
        if (serializesHttpBindingMembers() && RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersImpl(writer, className, shape, model);
        }
        // DumpBodyToUrl stub for presigning-capable operations; body serialization pending schema serde.
        if (operation.hasTrait(SupportsPresigningTrait.class)) {
            writer.write("");
            writer.write("void $L::DumpBodyToUrl(Aws::Http::URI& uri) const { AWS_UNREFERENCED_PARAM(uri); }",
                className);
        }
    }
}
