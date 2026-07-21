/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ResultInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;

import java.util.List;
import java.util.Set;
import java.util.TreeSet;

/**
 * Renders C++ headers and sources for result (operation output) shapes.
 */
public final class ResultRenderer implements ShapeRenderer {

    private final List<ResultInfo> results;
    private final Model model;
    private final ServiceShape service;
    private final Protocol protocol;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public ResultRenderer(List<ResultInfo> results, Model model, ServiceShape service,
                          Protocol protocol, String namespace, String exportMacro,
                          String smithyServiceName) {
        this.results = results;
        this.model = model;
        this.service = service;
        this.protocol = protocol;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (ResultInfo resInfo : results) {
            renderHeader(writerDelegator, resInfo.shape(), resInfo.operation());
            renderSource(writerDelegator, resInfo.shape(), resInfo.operation());
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator,
                              StructureShape shape, OperationShape operation) {
        String className = operation.getId().getName() + "Result";
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);
            writer.write("#pragma once");

            Set<String> includes = new TreeSet<>();
            includes.add("<aws/core/http/HttpResponse.h>");
            includes.add("<aws/core/utils/memory/stl/AWSString.h>");
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
            includes.addAll(memberIncludes);
            for (String include : includes) {
                writer.write("#include $L", include);
            }

            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.write("template <typename RESULT_TYPE>");
            writer.write("class AmazonWebServiceResult;");
            writer.write("");
            renderForwardDeclarations(writer);

            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");

            if (shape.getTrait(DocumentationTrait.class).isPresent()) {
                renderClassDocComment(writer, shape);
            }

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", exportMacro, className);
                if (protocol.isJsonLike()) {
                    writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);", exportMacro, className);
                    writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);", exportMacro, className);
                } else {
                    writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);", exportMacro, className);
                    writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);", exportMacro, className);
                }
                writer.write("");

                MemberRenderer.renderPublicSectionForResult(writer, shape, model, exportMacro, className);

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
                MemberRenderer.renderPrivateDataMembers(writer, shape, model);
                writer.write("");
                writer.write("Aws::String m_requestId;");
                writer.write("Aws::Http::HttpResponseCode m_HttpResponseCode;");
                MemberRenderer.renderPrivateHasBeenSetFlags(writer, shape, model);
                writer.write("bool m_requestIdHasBeenSet = false;");
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
            writeCopyright(writer);

            writer.write("#include <aws/core/AmazonWebServiceResult.h>");
            writer.write("#include <aws/core/utils/StringUtils.h>");
            writer.write("#include <aws/core/utils/UnreferencedParam.h>");
            if (protocol.isJsonLike()) {
                writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
            } else {
                writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
            }
            writer.write("#include <aws/core/utils/memory/stl/AWSStringStream.h>");
            writer.write("#include <aws/$L/model/$L.h>", smithyServiceName, className);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");
            if (protocol.isJsonLike()) {
                writer.write("using namespace Aws::$L::Model;", namespace);
                writer.write("using namespace Aws::Utils::Json;");
                writer.write("using namespace Aws::Utils;");
                writer.write("using namespace Aws;");
            } else {
                writer.write("using namespace Aws::$L::Model;", namespace);
                writer.write("using namespace Aws::Utils::Xml;");
                writer.write("using namespace Aws::Utils;");
                writer.write("using namespace Aws;");
            }
            writer.write("");

            if (protocol.isJsonLike()) {
                writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}",
                    className, className, () -> writer.write("*this = result;"));
                writer.write("");
                writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}",
                    className, className, () -> writer.write("return *this;"));
            } else {
                writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
                    className, className, () -> writer.write("*this = result;"));
                writer.write("");
                writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {", "}",
                    className, className, () -> writer.write("return *this;"));
            }
            writer.write("");
        });
    }

    private void renderForwardDeclarations(CppWriter writer) {
        if (protocol.isJsonLike()) {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Json");
            writer.write("class JsonValue;");
            writer.writeNamespaceClose("Json");
            writer.writeNamespaceClose("Utils");
        } else {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Xml");
            writer.write("class XmlDocument;");
            writer.writeNamespaceClose("Xml");
            writer.writeNamespaceClose("Utils");
        }
    }

    private void renderClassDocComment(CppWriter writer, StructureShape shape) {
        if (shape.getTrait(DocumentationTrait.class).isPresent()) {
            String docText = MemberRenderer.collapseWhitespace(
                shape.getTrait(DocumentationTrait.class).get().getValue());
            String version = service.getVersion();
            String seeAlso = String.format(
                "<p><h3>See Also:</h3>   <a href=\"http://docs.aws.amazon.com/goto/WebAPI/%s-%s/%s\">AWS API Reference</a></p>",
                smithyServiceName, version, shape.getId().getName());
            MemberRenderer.writeDocComment(writer, docText + seeAlso);
        } else {
            writer.write("/**");
            writer.write(" */");
        }
    }

    private void writeCopyright(CppWriter writer) {
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
    }
}
