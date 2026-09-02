/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ResultInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.TopLevelHostIdTrait;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
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
    private final RenderContext ctx;

    public ResultRenderer(List<ResultInfo> results, RenderContext ctx) {
        this.results = results;
        this.ctx = ctx;
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

    /**
     * Name of the {@code @httpPayload} streaming member; a missing member is a codegen bug, so fail fast.
     */
    private String streamingPayloadMemberName(StructureShape shape) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            if (entry.getValue().hasTrait(HttpPayloadTrait.class)) {
                return entry.getKey();
            }
        }
        throw new IllegalStateException(
            "Streaming result " + shape.getId() + " has no @httpPayload member");
    }

    private void renderHeader(CppWriterDelegator writerDelegator,
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + ShapeUtil.getResultSuffix(ctx.model(), operation, ctx.smithyServiceName());
        String fileName = "include/aws/" + ctx.smithyServiceName() + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            // AWSString.h only for top-level m_requestId; string members self-include. Matches C2J.
            List<String> includes = new java.util.ArrayList<>(IncludeSets.resultHeaderBase(
                ctx.smithyServiceName(), ctx.namespace(), ctx.protocolTraits().resultHasTopLevelRequestId()));
            for (String memberInc : CppTypeMapper.getIncludesForShape(shape, ctx.model(), ctx.smithyServiceName())) {
                includes.add(memberInc);
            }
            // Protocols naming serde types in the class signature (CBOR: CborValue) add their header; JSON/XML forward-declare.
            includes.addAll(ctx.protocolTraits().serdeIncludes(FileKind.RESULT_HEADER));
            IncludeSets.emitAngleIncludes(writer, includes);

            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(),
                () -> {
            writer.write("template <typename RESULT_TYPE>");
            writer.write("class AmazonWebServiceResult;");
            writer.write("");
            ctx.protocolTraits().writeResultForwardDeclarations(writer);
                },
                () -> {

            if (shape.getTrait(DocumentationTrait.class).isPresent()) {
                MemberRenderer.renderClassDocComment(writer, shape, ctx.smithyServiceName(), ctx.service().getVersion());
            }

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", ctx.exportMacro(), className);
                ctx.protocolTraits().writeResultSerdeDecls(writer, ctx.exportMacro(), className);
                writer.write("");

                MemberRenderer members = MemberRenderer.forResult(ctx.model(), shape, className)
                    .wideIntegers(ctx.protocolTraits().widensIntegers());
                members.renderPublicAccessors(writer);

                boolean topLevelRequestId = ctx.protocolTraits().resultHasTopLevelRequestId();
                if (topLevelRequestId) {
                    MemberRenderer.renderRequestIdAccessors(writer, className);
                }

                // Top-level HostId (x-amz-id-2), S3 Control only, driven by the internal marker (not a protocol flag); always follows RequestId.
                boolean topLevelHostId = shape.hasTrait(TopLevelHostIdTrait.class);
                if (topLevelHostId) {
                    MemberRenderer.renderHostIdAccessors(writer, className);
                }

                writer.write("inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }");
                writer.write("");

                writer.dedent();
                writer.write("private:");
                writer.indent();
                members.renderDataMembers(writer);
                if (topLevelRequestId) {
                    // Blank line separates modeled members from the m_requestId group; C2J omits both for Query/EC2.
                    writer.write("");
                    writer.write("Aws::String m_requestId;");
                }
                if (topLevelHostId) {
                    // C2J declares m_hostId in its own group right after m_requestId.
                    writer.write("");
                    writer.write("Aws::String m_hostId;");
                }
                writer.write("Aws::Http::HttpResponseCode m_HttpResponseCode;");
                members.renderHasBeenSetFlags(writer);
                if (topLevelRequestId) {
                    writer.write("bool m_requestIdHasBeenSet = false;");
                }
                if (topLevelHostId) {
                    writer.write("bool m_hostIdHasBeenSet = false;");
                }
            });
            writer.write("");
                });
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator,
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + ShapeUtil.getResultSuffix(ctx.model(), operation, ctx.smithyServiceName());
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            IncludeSets.emitSourceIncludes(writer,
                IncludeSets.resultSourceBase(ctx.smithyServiceName(), className),
                ctx.protocolTraits(), FileKind.RESULT_SOURCE);
            writer.write("");
            writer.write("using namespace Aws::$L::Model;", ctx.namespace());
            IncludeSets.emitUsings(writer, ctx.protocolTraits().serdeUsings(FileKind.RESULT_SOURCE));
            writer.write("using namespace Aws;");
            writer.write("");

            ctx.protocolTraits().writeResultSerdeImpls(writer, className, shape, ctx.model(), ctx.namespace());
            writer.write("");
        });
    }

    /**
     * Renders a streaming result header: a move-only class whose ResponseStream payload is exposed
     * via {@code GetBody()} / {@code ReplaceBody}. Matches C2J {@code StreamResultHeader.vm}.
     */
    private void renderStreamingHeader(CppWriterDelegator writerDelegator,
                                       StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + ShapeUtil.getResultSuffix(ctx.model(), operation, ctx.smithyServiceName());
        String streamMember = streamingPayloadMemberName(shape);
        String fileName = "include/aws/" + ctx.smithyServiceName() + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            List<String> includes = new java.util.ArrayList<>(
                IncludeSets.streamingResultHeaderBase(ctx.smithyServiceName(), ctx.namespace()));
            for (String memberInc : CppTypeMapper.getIncludesForShape(shape, ctx.model(), ctx.smithyServiceName())) {
                includes.add(memberInc);
            }
            IncludeSets.emitAngleIncludes(writer, includes);

            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(),
                () -> {
            writer.write("template <typename RESULT_TYPE>");
            writer.write("class AmazonWebServiceResult;");
            writer.write("");
                },
                () -> {

            if (shape.getTrait(DocumentationTrait.class).isPresent()) {
                MemberRenderer.renderClassDocComment(writer, shape, ctx.smithyServiceName(), ctx.service().getVersion());
            }

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", ctx.exportMacro(), className);
                writer.write("$L $L($L&&) = default;", ctx.exportMacro(), className, className);
                writer.write("$L $L& operator=($L&&) = default;", ctx.exportMacro(), className, className);
                writer.write("// we delete these because Microsoft doesn't handle move generation correctly");
                writer.write("// and we therefore don't trust them to get it right here either.");
                writer.write("$L(const $L&) = delete;", className, className);
                writer.write("$L& operator=(const $L&) = delete;", className, className);
                writer.write("");
                writer.write("$L $L(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);",
                    ctx.exportMacro(), className);
                writer.write("$L $L& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);",
                    ctx.exportMacro(), className);
                writer.write("");

                // Streaming payload accessors (no Set/With/HasBeenSet). Getter named after the member;
                // ReplaceBody stays literal. Matches C2J StreamResultHeader.vm.
                String streamField = CppNames.fieldName(streamMember);
                writer.write("///@{");
                shape.getMember(streamMember)
                    .flatMap(m -> m.getTrait(DocumentationTrait.class))
                    .ifPresent(doc -> MemberRenderer.writeDocComment(writer,
                        MemberRenderer.collapseWhitespace(doc.getValue())));
                writer.write("inline Aws::IOStream& Get$L() const { return $L.GetUnderlyingStream(); }",
                    CppNames.capitalize(streamMember), streamField);
                writer.write("inline void ReplaceBody(Aws::IOStream* body) { "
                    + "$L = Aws::Utils::Stream::ResponseStream(body); }", streamField);
                writer.write("///@}");

                MemberRenderer members = MemberRenderer.forResult(ctx.model(), shape, className)
                    .wideIntegers(ctx.protocolTraits().widensIntegers())
                    .excluding(streamMember);
                members.renderPublicAccessors(writer);

                MemberRenderer.renderRequestIdAccessors(writer, className);

                // Defensive no-op: no streaming result is S3 Control today, so the marker is never stamped here.
                boolean topLevelHostId = shape.hasTrait(TopLevelHostIdTrait.class);
                if (topLevelHostId) {
                    MemberRenderer.renderHostIdAccessors(writer, className);
                }

                writer.write("inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }");
                writer.write("");

                writer.dedent();
                writer.write("private:");
                writer.indent();
                writer.write("Aws::Utils::Stream::ResponseStream $L{};", streamField);
                members.renderDataMembers(writer);
                writer.write("");
                writer.write("Aws::String m_requestId;");
                if (topLevelHostId) {
                    writer.write("");
                    writer.write("Aws::String m_hostId;");
                }
                writer.write("Aws::Http::HttpResponseCode m_HttpResponseCode;");
                writer.write("bool $LHasBeenSet = false;", streamField);
                members.renderHasBeenSetFlags(writer);
                writer.write("bool m_requestIdHasBeenSet = false;");
                if (topLevelHostId) {
                    writer.write("bool m_hostIdHasBeenSet = false;");
                }
            });
            writer.write("");
                });
        });
    }

    /**
     * Renders a streaming result source: move ctor/assign take ownership of the payload stream
     * ({@code TakeOwnershipOfPayload}) instead of parsing a body.
     */
    private void renderStreamingSource(CppWriterDelegator writerDelegator,
                                       StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + ShapeUtil.getResultSuffix(ctx.model(), operation, ctx.smithyServiceName());
        String streamField = CppNames.fieldName(streamingPayloadMemberName(shape));
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {
            IncludeSets.emitSourceIncludes(writer,
                IncludeSets.streamingResultSourceBase(ctx.smithyServiceName(), className),
                ctx.protocolTraits(), FileKind.STREAMING_RESULT_SOURCE);
            writer.write("");
            writer.write("using namespace Aws::$L::Model;", ctx.namespace());
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
                ctx.protocolTraits().writeResultStatusCodeMembers(writer, shape, ctx.model());
                writer.write("return *this;");
            });
            writer.write("");
        });
    }
}
