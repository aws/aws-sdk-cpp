/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.UnitTypeTrait;

import java.util.List;

/**
 * CBOR (Smithy {@code rpcv2Cbor}) serde rendering. Distinct from the JSON family: it
 * uses {@code Aws::Utils::Cbor::CborValue} model/result types, includes the CRT and core
 * CBOR headers, and carries its protocol identity through content-type headers rather
 * than an {@code X-Amz-Target} header.
 */
public final class CborProtocolTraits implements ProtocolTraits {

    @Override
    public Protocol protocol() {
        return Protocol.CBOR;
    }

    @Override
    public String serdeNamespace() {
        return Protocol.CBOR.getSerdeNamespace();
    }

    @Override
    public boolean widensIntegers() {
        return true;
    }

    @Override
    public boolean serializesHttpBindingMembers() {
        // rpcv2Cbor is an RPC protocol: @httpHeader / @httpQuery members go into the body, not the wire.
        return false;
    }

    @Override
    public void writeShapeForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Cbor");
        writer.write("class CborValue;");
        writer.writeNamespaceClose("Cbor");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeResultForwardDeclarations(CppWriter writer) {
        writer.writeNamespaceOpen("Utils");
        writer.writeNamespaceOpen("Cbor");
        writer.write("class CborValue;");
        writer.writeNamespaceClose("Cbor");
        writer.writeNamespaceClose("Utils");
    }

    @Override
    public void writeSerdeMethodDecls(CppWriter writer, String exportMacro, String className,
                                      Runnable beforeSerializeMethod) {
        // CBOR sub-objects deserialize from a streaming CborDecoder and serialize via CborEncode
        // (CborSubObjectHeader.vm), NOT the JSON-family CborValue/Jsonize shape.
        writer.write("$L $L() = default;", exportMacro, className);
        writer.write("$L $L(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);", exportMacro, className);
        writer.write("$L $L& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);",
            exportMacro, className);
        if (beforeSerializeMethod != null) {
            beforeSerializeMethod.run();
        }
        writer.write("$L void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;", exportMacro);
    }

    @Override
    public void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className) {
        writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);",
            exportMacro, className);
        writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);",
            exportMacro, className);
    }

    @Override
    public List<String> serdeIncludes(FileKind kind) {
        switch (kind) {
            // CborSubObjectHeader.vm / CborResultHeader.vm hard-include <aws/crt/cbor/Cbor.h>: the
            // header signatures reference Aws::Crt::Cbor::CborDecoder / CborEncoder directly.
            case SUBOBJECT_HEADER:
            case RESULT_HEADER:
                return List.of("aws/crt/cbor/Cbor.h");
            // All source kinds share one include set. RPC CBOR request sources never run the shared
            // @httpQuery/@httpHeader serializers, so REQUEST_SOURCE carries the same set as the rest.
            case REQUEST_SOURCE:
            case SUBOBJECT_SOURCE:
            case RESULT_SOURCE:
            case STREAMING_RESULT_SOURCE:
            case EVENT_HANDLER_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
                return List.of(
                    "aws/crt/cbor/Cbor.h",
                    "aws/core/utils/cbor/CborValue.h",
                    "aws/core/utils/UnreferencedParam.h",
                    "aws/core/utils/memory/stl/AWSStringStream.h",
                    "aws/core/utils/HashingUtils.h",
                    "utility");
            default:
                throw new UnsupportedOperationException(
                    "No serde includes defined for FileKind " + kind + " in CborProtocolTraits");
        }
    }

    @Override
    public List<String> serdeUsings(FileKind kind) {
        switch (kind) {
            case EVENT_HANDLER_SOURCE:
                return List.of(serdeNamespace());
            case RESULT_SOURCE:
            case INITIAL_RESPONSE_SOURCE:
                // CborResultSource.vm pulls the full set (result payloads use the CborValue DOM).
                return List.of("Aws::Crt", "Aws::Crt::Cbor", "Aws::Utils", "Aws::Utils::Cbor");
            case REQUEST_SOURCE:
            case SUBOBJECT_SOURCE:
                // CborRequestSource.vm / CborSubObjectSource.vm: streaming encode/decode only —
                // just Aws::Crt::Cbor + Aws::Utils, no Aws::Crt / Aws::Utils::Cbor.
                return List.of("Aws::Crt::Cbor", "Aws::Utils");
            default:
                throw new UnsupportedOperationException(
                    "No serde usings defined for FileKind " + kind + " in CborProtocolTraits");
        }
    }

    @Override
    public void writeSerdeMethodImpls(CppWriter writer, String className) {
        writer.write("$L::$L(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }",
            className, className);
        writer.write("");
        writer.openBlock("$L& $L::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {", "}",
            className, className, () -> {
            writer.write("AWS_UNREFERENCED_PARAM(decoder);");
            writer.write("return *this;");
        });
        writer.write("");
        writer.openBlock("void $L::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {", "}", className, () -> {
            writer.write("size_t mapSize = 0;");
            writer.write("encoder.WriteMapStart(mapSize);");
        });
    }

    @Override
    public void writeResultSerdeImpls(CppWriter writer, String className, StructureShape shape, Model model,
                                      String namespace) {
        writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {", "}",
            className, className, () -> writer.write("*this = result;"));
        writer.write("");
        writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {",
            "}", className, className, () -> {
            writeResultStatusCodeMembers(writer, shape, model);
            writer.write("return *this;");
        });
    }

    @Override
    public void writeRequestMethodDecls(CppWriter writer, String exportMacro,
                                        StructureShape shape, OperationShape operation, Model model) {
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
        }
        // CBOR always emits GetRequestSpecificHeaders: it attaches protocol headers
        // (content-type / smithy-protocol / accept) regardless of member bindings.
        writer.write("");
        writeGetRequestSpecificHeadersDecl(writer, exportMacro);
        // RPC CBOR routes @httpQuery members to the body, so no AddQueryStringParameters is emitted.
        if (serializesHttpBindingMembers() && RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersDecl(writer, exportMacro);
        }
    }

    @Override
    public void writeRequestMethodImpls(CppWriter writer, String className,
                                        StructureShape shape, OperationShape operation,
                                        ServiceShape service, Model model) {
        boolean hasRequest = !operation.getInputShape().equals(UnitTypeTrait.UNIT);
        if (RequestBindings.emitsSerializePayload(operation, model)) {
            if (hasRequest) {
                writer.openBlock("Aws::String $L::SerializePayload() const {", "}", className, () -> {
                    writer.write("Aws::Crt::Cbor::CborEncoder encoder;");
                    writer.write("");
                    writer.write("// Calculate map size");
                    writer.write("size_t mapSize = 0;");
                    writer.write("");
                    writer.write("encoder.WriteMapStart(mapSize);");
                    writer.write("");
                    writer.write("const auto str = Aws::String(reinterpret_cast<char*>("
                        + "encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);");
                    writer.write("return str;");
                });
            } else {
                writer.write("Aws::String $L::SerializePayload() const { return {}; }", className);
            }
            writer.write("");
        }
        writer.openBlock("Aws::Http::HeaderValueCollection $L::GetRequestSpecificHeaders() const {", "}",
            className, () -> {
            writer.write("Aws::Http::HeaderValueCollection headers;");
            if (hasRequest) {
                writer.write("headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);");
            }
            writer.write("headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);");
            writer.write("headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);");
            // RPC CBOR routes @httpHeader members to the body, so no member header serialization
            // follows the fixed protocol headers.
            writer.write("return headers;");
        });
        if (serializesHttpBindingMembers() && RequestBindings.hasQueryStringMembers(shape, model)) {
            writer.write("");
            writeAddQueryStringParametersImpl(writer, className, shape, model);
        }
    }

    @Override
    public void writeStructureEventPayload(CppWriter writer, String msgVar, String valueExpr) {
        // CBOR encodes structure/list event payloads via CborEncode, tagged application/cbor.
        writer.write("$L.InsertEventHeader(\":content-type\", Aws::String(\"application/cbor\"));", msgVar);
        writer.write("Aws::Crt::Cbor::CborEncoder encoder;");
        writer.write("$L.CborEncode(encoder);", valueExpr);
        writer.write("$L.WriteEventPayload(encoder.GetEncodedData().ptr, encoder.GetEncodedData().len);", msgVar);
    }
}
