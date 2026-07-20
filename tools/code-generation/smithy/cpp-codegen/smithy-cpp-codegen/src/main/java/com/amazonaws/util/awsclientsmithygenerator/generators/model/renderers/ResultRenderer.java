/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ResultInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.HttpPayloadTrait;

import java.util.List;
import java.util.Map;

/**
 * Renders C++ headers and sources for result (operation output) shapes.
 */
public final class ResultRenderer implements ShapeRenderer {

    private final List<ResultInfo> results;
    private final Model model;
    private final ServiceShape service;
    private final ProtocolTraits protocolTraits;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public ResultRenderer(List<ResultInfo> results, Model model, ServiceShape service,
                          ProtocolTraits protocolTraits, String namespace, String exportMacro,
                          String smithyServiceName) {
        this.results = results;
        this.model = model;
        this.service = service;
        this.protocolTraits = protocolTraits;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (ResultInfo resInfo : results) {
            if (resInfo.streaming()) {
                renderStreamingHeader(writerDelegator, resInfo.shape(), resInfo.operation());
                renderStreamingSource(writerDelegator, resInfo.shape(), resInfo.operation());
            } else {
                renderHeader(writerDelegator, resInfo.shape(), resInfo.operation());
                renderSource(writerDelegator, resInfo.shape(), resInfo.operation());
            }
        }
    }

    /** Returns the name of the {@code @httpPayload} streaming member, or null if none. */
    private String streamingPayloadMemberName(StructureShape shape) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            if (entry.getValue().hasTrait(HttpPayloadTrait.class)) {
                return entry.getKey();
            }
        }
        return null;
    }

    /** {@code m_} + decapitalized member name, e.g. "AudioStream" -> "m_audioStream". */
    private static String fieldName(String memberName) {
        return "m_" + Character.toLowerCase(memberName.charAt(0)) + memberName.substring(1);
    }

    /** Capitalized member name for accessor methods, e.g. "audioStream" -> "AudioStream". */
    private static String capitalize(String memberName) {
        return Character.toUpperCase(memberName.charAt(0)) + memberName.substring(1);
    }

    private void renderHeader(CppWriterDelegator writerDelegator,
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Result";
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            // AWSString.h is only needed for the top-level m_requestId; string-typed members
            // bring their own include via getIncludesForShape. Matches C2J include hygiene.
            List<String> includes = new java.util.ArrayList<>(IncludeSets.resultHeaderBase(
                smithyServiceName, namespace, protocolTraits.resultHasTopLevelRequestId()));
            for (String memberInc : CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName)) {
                includes.add(memberInc.replaceAll("^<|>$", ""));
            }
            // Protocols whose result-header serde types are named in the class signature (CBOR:
            // CborValue) add their own header here; JSON/XML forward-declare and add nothing.
            includes.addAll(protocolTraits.serdeIncludes(FileKind.RESULT_HEADER));
            IncludeSets.emit(writer, includes);

            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.write("template <typename RESULT_TYPE>");
            writer.write("class AmazonWebServiceResult;");
            writer.write("");
            protocolTraits.writeResultForwardDeclarations(writer);

            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");

            if (shape.getTrait(DocumentationTrait.class).isPresent()) {
                MemberRenderer.renderClassDocComment(writer, shape, smithyServiceName, service.getVersion());
            }

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", exportMacro, className);
                protocolTraits.writeResultSerdeDecls(writer, exportMacro, className);
                writer.write("");

                MemberRenderer.renderPublicSectionForResult(writer, shape, model, exportMacro, className,
                    protocolTraits.widensIntegers());

                boolean topLevelRequestId = protocolTraits.resultHasTopLevelRequestId();
                if (topLevelRequestId) {
                    writer.write("");
                    writer.write("///@{");
                    writer.write("");
                    writer.write("inline const Aws::String& GetRequestId() const { return m_requestId; }");
                    writer.write("template <typename RequestIdT = Aws::String>");
                    writer.openBlock("void SetRequestId(RequestIdT&& value) {", "}", () -> {
                        writer.write("m_requestIdHasBeenSet = true;");
                        writer.write("m_requestId = std::forward<RequestIdT>(value);");
                    });
                    writer.write("template <typename RequestIdT = Aws::String>");
                    writer.openBlock("$L& WithRequestId(RequestIdT&& value) {", "}", className, () -> {
                        writer.write("SetRequestId(std::forward<RequestIdT>(value));");
                        writer.write("return *this;");
                    });
                    writer.write("///@}");
                }

                writer.write("inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }");
                writer.write("");

                writer.dedent();
                writer.write("private:");
                writer.indent();
                MemberRenderer.renderPrivateDataMembers(writer, shape, model, protocolTraits.widensIntegers());
                if (topLevelRequestId) {
                    // The blank line separates the modeled members from the m_requestId group;
                    // C2J omits it (and m_requestId) for Query/EC2 results.
                    writer.write("");
                    writer.write("Aws::String m_requestId;");
                }
                writer.write("Aws::Http::HttpResponseCode m_HttpResponseCode;");
                MemberRenderer.renderPrivateHasBeenSetFlags(writer, shape, model);
                if (topLevelRequestId) {
                    writer.write("bool m_requestIdHasBeenSet = false;");
                }
            });
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator,
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Result";
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            List<String> includes = new java.util.ArrayList<>(
                IncludeSets.resultSourceBase(smithyServiceName, className));
            includes.addAll(protocolTraits.serdeIncludes(FileKind.RESULT_SOURCE));
            // Serde-implementation includes derived from members (HashingUtils.h for blob Base64
            // serde, AWSStringStream.h for header/query members), matching C2J computeSourceIncludes.
            includes.addAll(CppTypeMapper.getSourceIncludesForShape(shape, model, smithyServiceName));
            IncludeSets.emit(writer, includes);
            writer.write("");
            writer.write("using namespace Aws::$L::Model;", namespace);
            IncludeSets.emitUsings(writer, protocolTraits.serdeUsings(FileKind.RESULT_SOURCE));
            writer.write("using namespace Aws;");
            writer.write("");

            protocolTraits.writeResultSerdeImpls(writer, className, shape, model, namespace);
            writer.write("");
        });
    }

    /**
     * Renders a streaming result header: a move-only class whose payload is an
     * {@code Aws::Utils::Stream::ResponseStream} exposed via {@code GetBody()} /
     * {@code ReplaceBody}, matching the legacy C2J {@code StreamResultHeader.vm} output.
     */
    private void renderStreamingHeader(CppWriterDelegator writerDelegator,
                                       StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Result";
        String streamMember = streamingPayloadMemberName(shape);
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            List<String> includes = new java.util.ArrayList<>(
                IncludeSets.streamingResultHeaderBase(smithyServiceName, namespace));
            for (String memberInc : CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName)) {
                includes.add(memberInc.replaceAll("^<|>$", ""));
            }
            IncludeSets.emit(writer, includes);

            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.write("template <typename RESULT_TYPE>");
            writer.write("class AmazonWebServiceResult;");
            writer.write("");

            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");

            if (shape.getTrait(DocumentationTrait.class).isPresent()) {
                MemberRenderer.renderClassDocComment(writer, shape, smithyServiceName, service.getVersion());
            }

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", exportMacro, className);
                writer.write("$L $L($L&&) = default;", exportMacro, className, className);
                writer.write("$L $L& operator=($L&&) = default;", exportMacro, className, className);
                writer.write("// we delete these because Microsoft doesn't handle move generation correctly");
                writer.write("// and we therefore don't trust them to get it right here either.");
                writer.write("$L(const $L&) = delete;", className, className);
                writer.write("$L& operator=(const $L&) = delete;", className, className);
                writer.write("");
                writer.write("$L $L(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);",
                    exportMacro, className);
                writer.write("$L $L& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);",
                    exportMacro, className);
                writer.write("");

                // Streaming payload accessors (no Set/With/HasBeenSet for the stream member).
                // The getter is named after the member (GetBody, GetAudioStream, GetResponse);
                // ReplaceBody stays literal, matching C2J StreamResultHeader.vm.
                String streamField = fieldName(streamMember);
                writer.write("///@{");
                shape.getMember(streamMember)
                    .flatMap(m -> m.getTrait(DocumentationTrait.class))
                    .ifPresent(doc -> MemberRenderer.writeDocComment(writer,
                        MemberRenderer.collapseWhitespace(doc.getValue())));
                writer.write("inline Aws::IOStream& Get$L() const { return $L.GetUnderlyingStream(); }",
                    capitalize(streamMember), streamField);
                writer.write("inline void ReplaceBody(Aws::IOStream* body) { "
                    + "$L = Aws::Utils::Stream::ResponseStream(body); }", streamField);
                writer.write("///@}");

                MemberRenderer.renderPublicSectionForResultExcluding(writer, shape, model, exportMacro,
                    className, streamMember, protocolTraits.widensIntegers());

                writer.write("");
                writer.write("///@{");
                writer.write("");
                writer.write("inline const Aws::String& GetRequestId() const { return m_requestId; }");
                writer.write("template <typename RequestIdT = Aws::String>");
                writer.openBlock("void SetRequestId(RequestIdT&& value) {", "}", () -> {
                    writer.write("m_requestIdHasBeenSet = true;");
                    writer.write("m_requestId = std::forward<RequestIdT>(value);");
                });
                writer.write("template <typename RequestIdT = Aws::String>");
                writer.openBlock("$L& WithRequestId(RequestIdT&& value) {", "}", className, () -> {
                    writer.write("SetRequestId(std::forward<RequestIdT>(value));");
                    writer.write("return *this;");
                });
                writer.write("///@}");

                writer.write("inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }");
                writer.write("");

                writer.dedent();
                writer.write("private:");
                writer.indent();
                writer.write("Aws::Utils::Stream::ResponseStream $L{};", streamField);
                MemberRenderer.renderPrivateDataMembersExcluding(writer, shape, model, streamMember,
                    protocolTraits.widensIntegers());
                writer.write("");
                writer.write("Aws::String m_requestId;");
                writer.write("Aws::Http::HttpResponseCode m_HttpResponseCode;");
                writer.write("bool $LHasBeenSet = false;", streamField);
                MemberRenderer.renderPrivateHasBeenSetFlagsExcluding(writer, shape, model, streamMember);
                writer.write("bool m_requestIdHasBeenSet = false;");
            });
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    /**
     * Renders a streaming result source: the move ctor/assign take ownership of the
     * response payload stream ({@code TakeOwnershipOfPayload}) rather than parsing a body.
     */
    private void renderStreamingSource(CppWriterDelegator writerDelegator,
                                       StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Result";
        String streamField = fieldName(streamingPayloadMemberName(shape));
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {
            List<String> includes = new java.util.ArrayList<>(
                IncludeSets.streamingResultSourceBase(smithyServiceName, className));
            includes.addAll(protocolTraits.serdeIncludes(FileKind.STREAMING_RESULT_SOURCE));
            // Serde-implementation includes derived from members (e.g. HashingUtils.h for the
            // blob payload member's Base64 serde), matching C2J computeSourceIncludes.
            includes.addAll(CppTypeMapper.getSourceIncludesForShape(shape, model, smithyServiceName));
            IncludeSets.emit(writer, includes);
            writer.write("");
            writer.write("using namespace Aws::$L::Model;", namespace);
            writer.write("using namespace Aws::Utils::Stream;");
            writer.write("using namespace Aws::Utils;");
            writer.write("using namespace Aws;");
            writer.write("");

            writer.write("$L::$L(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }",
                className, className);
            writer.write("");
            writer.openBlock("$L& $L::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {", "}",
                className, className, () -> {
                writer.write("m_HttpResponseCode = result.GetResponseCode();");
                writer.write("$L = result.TakeOwnershipOfPayload();", streamField);
                writer.write("$LHasBeenSet = true;", streamField);
                writer.write("// TODO: header-bound member deserialization");
                protocolTraits.writeResultStatusCodeMembers(writer, shape, model);
                writer.write("return *this;");
            });
            writer.write("");
        });
    }
}
