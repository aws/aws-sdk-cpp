/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ClassifiedShapes;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.RequestInfo;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ResultInfo;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.aws.traits.clientendpointdiscovery.ClientEndpointDiscoveryTrait;
import software.amazon.smithy.rulesengine.traits.ContextParamTrait;
import software.amazon.smithy.rulesengine.traits.StaticContextParamsTrait;

import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

/**
 * Orchestrates C++ model code generation for all classified shapes in a service.
 *
 * <p>Dispatches to {@link EnumRenderer}, {@link MemberRenderer}, and {@link SerdeStub}
 * to produce header and source files for each model shape.
 */
public class ModelGenerator {
    private final Model model;
    private final ServiceShape service;
    private final CppWriterDelegator writerDelegator;
    private final String serviceName;
    private final String smithyServiceName;
    private final String exportMacro;
    private final String namespace;
    private final Protocol protocol;

    public ModelGenerator(Model model, ServiceShape service, CppWriterDelegator writerDelegator,
                          String serviceName, String smithyServiceName,
                          String exportMacro, String namespace) {
        this.model = model;
        this.service = service;
        this.writerDelegator = writerDelegator;
        this.serviceName = serviceName;
        this.smithyServiceName = smithyServiceName;
        this.exportMacro = exportMacro;
        this.namespace = namespace;
        this.protocol = ProtocolResolver.resolve(service, model);
    }

    public void generateAll() {
        ClassifiedShapes classified = ShapeClassifier.classify(model, service);

        // Generate enum headers + sources
        for (Shape enumShape : classified.enums()) {
            generateEnumHeader(enumShape);
            generateEnumSource(enumShape);
        }

        // Generate sub-object headers + sources
        for (Shape shape : classified.subObjects()) {
            if (shape.isStructureShape()) {
                generateSubObjectHeader(shape.asStructureShape().get());
                generateSubObjectSource(shape.asStructureShape().get());
            }
        }

        // Generate request headers + sources (Input -> Request)
        for (RequestInfo reqInfo : classified.requests()) {
            generateRequestHeader(reqInfo.shape(), reqInfo.operation());
            generateRequestSource(reqInfo.shape(), reqInfo.operation());
        }

        // Generate result headers + sources (Output -> Result)
        for (ResultInfo resInfo : classified.results()) {
            generateResultHeader(resInfo.shape(), resInfo.operation());
            generateResultSource(resInfo.shape(), resInfo.operation());
        }
    }

    private void generateEnumHeader(Shape enumShape) {
        String fileName = "include/aws/" + smithyServiceName + "/model/" + enumShape.getId().getName() + ".h";
        writerDelegator.useFileWriter(fileName, writer ->
            EnumRenderer.renderHeader(writer, enumShape, namespace, exportMacro, smithyServiceName));
    }

    private void generateEnumSource(Shape enumShape) {
        String fileName = "source/model/" + enumShape.getId().getName() + ".cpp";
        writerDelegator.useFileWriter(fileName, writer ->
            EnumRenderer.renderSource(writer, enumShape, namespace, exportMacro, smithyServiceName));
    }

    private void generateSubObjectHeader(StructureShape shape) {
        String className = shape.getId().getName();
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);
            writer.write("#pragma once");

            // Includes
            renderIncludes(writer, shape);

            // Include <utility> unless ALL members are primitives
            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
                .allMatch(ModelGenerator::isPrimitive);
            if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }
            writer.write("");

            // Open namespace Aws
            writer.writeNamespaceOpen("Aws");

            // Forward declarations for serde types
            renderForwardDeclarations(writer);

            // Service namespace
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            // Class-level documentation comment
            renderClassDocComment(writer, shape);

            // Class declaration
            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");

                // Serde declarations
                SerdeStub.renderHeaderDeclarations(writer, protocol, exportMacro, className);
                writer.write("");

                // Member accessors (with HasBeenSet)
                MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className);

                // Private section
                writer.dedent();
                writer.write("private:");
                writer.indent();
                MemberRenderer.renderPrivateSection(writer, shape, model);
            });
            writer.write("");

            // Namespace close
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void generateSubObjectSource(StructureShape shape) {
        String className = shape.getId().getName();
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);

            // Includes
            writeSourceIncludes(writer, className, false, false);

            // Explicit namespace blocks for sub-objects
            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            // Serde implementation
            SerdeStub.renderSourceImplementation(writer, shape, model, protocol,
                className, serviceName, smithyServiceName);
            writer.write("");

            // Namespace close
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void generateRequestHeader(StructureShape shape, OperationShape operation) {
        String className = getRequestClassName(operation);
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);
            writer.write("#pragma once");

            // Includes - request needs the service request base class
            Set<String> includes = new TreeSet<>();
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "Request.h>");
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
            includes.addAll(memberIncludes);
            for (String include : includes) {
                writer.write("#include $L", include);
            }

            // Include <utility> unless ALL members are primitives
            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
                .allMatch(ModelGenerator::isPrimitive);
            if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }
            writer.write("");

            // Open namespace Aws - no forward declarations for requests (base class provides them)
            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            // Class-level doc comment
            renderClassDocComment(writer, shape);

            // Class declaration - inherits from service request
            String baseClass = namespace + "Request";
            writer.openBlock("class $L : public $L {", "};", className, baseClass, () -> {
                writer.write("public:");

                // Export macro + default constructor
                writer.write("$L $L() = default;", exportMacro, className);
                writer.write("");

                // Declare service-specific overrides
                writer.write("// Service request name is the Operation name which will send this request out,");
                writer.write("// each operation should has unique request name, so that we can get operation's name from this request.");
                writer.write("// Note: this is not true for response, multiple operations may have the same response name,");
                writer.write("// so we can not get operation's name from response.");
                writer.write("inline virtual const char* GetServiceRequestName() const override { return \"$L\"; }", operation.getId().getName());
                writer.write("");
                writer.write("$L Aws::String SerializePayload() const override;", exportMacro);
                writer.write("");
                writer.write("$L Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;", exportMacro);

                // Endpoint context params if needed
                if (hasEndpointContextParams(operation, shape)) {
                    writer.write("");
                    writer.write("/**");
                    writer.write(" * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.");
                    writer.write(" */");
                    writer.write("$L EndpointParameters GetEndpointContextParams() const override;", exportMacro);
                }

                writer.write("");

                // Member accessors (with HasBeenSet)
                MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className);

                // Private section - only emit if there are members
                if (!shape.getAllMembers().isEmpty()) {
                    writer.dedent();
                    writer.write("private:");
                    writer.indent();
                    MemberRenderer.renderPrivateSection(writer, shape, model);
                }
            });
            writer.write("");

            // Namespace close
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void generateRequestSource(StructureShape shape, OperationShape operation) {
        String className = getRequestClassName(operation);
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);

            // Includes and using namespace (not explicit namespace blocks)
            writeSourceIncludes(writer, className, true, false);

            // SerializePayload stub
            writer.write("Aws::String $L::SerializePayload() const { return \"{}\"; }", className);
            writer.write("");

            // GetRequestSpecificHeaders stub
            writer.write("Aws::Http::HeaderValueCollection $L::GetRequestSpecificHeaders() const { return {}; }", className);

            // GetEndpointContextParams if needed
            if (hasEndpointContextParams(operation, shape)) {
                writer.write("");
                renderEndpointContextParams(writer, className, operation, shape);
            }
            writer.write("");
        });
    }

    private void generateResultHeader(StructureShape shape, OperationShape operation) {
        String className = getResultClassName(operation);
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);
            writer.write("#pragma once");

            // Includes — match C2J: HttpResponse, AWSString, service exports, member types
            Set<String> includes = new TreeSet<>();
            includes.add("<aws/core/http/HttpResponse.h>");
            includes.add("<aws/core/utils/memory/stl/AWSString.h>");
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
            includes.addAll(memberIncludes);
            for (String include : includes) {
                writer.write("#include $L", include);
            }

            // Always include <utility> for results (synthetic RequestId is Aws::String)
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            // Open namespace Aws with forward declarations matching C2J pattern
            writer.writeNamespaceOpen("Aws");
            // Forward-declare AmazonWebServiceResult template
            writer.write("template <typename RESULT_TYPE>");
            writer.write("class AmazonWebServiceResult;");
            writer.write("");
            // Forward-declare JsonValue only (not JsonView)
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Json");
            writer.write("class JsonValue;");
            writer.writeNamespaceClose("Json");
            writer.writeNamespaceClose("Utils");

            // Service namespace
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");

            // Class-level doc comment — only emit if shape has documentation (C2J doesn't emit empty block for results)
            if (shape.getTrait(DocumentationTrait.class).isPresent()) {
                renderClassDocComment(writer, shape);
            }

            // Class declaration
            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");

                // Export macro + constructors
                writer.write("$L $L() = default;", exportMacro, className);
                writer.write("$L $L(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);", exportMacro, className);
                writer.write("$L $L& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);", exportMacro, className);
                writer.write("");

                // Member accessors (NO HasBeenSet for results)
                MemberRenderer.renderPublicSectionForResult(writer, shape, model, exportMacro, className);

                // Synthetic members: RequestId
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

                // HttpResponseCode accessor
                writer.write("inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }");
                writer.write("");

                // Private section
                writer.dedent();
                writer.write("private:");
                writer.indent();
                MemberRenderer.renderPrivateDataMembers(writer, shape, model);
                writer.write("");
                writer.write("Aws::String m_requestId;");
                writer.write("Aws::Http::HttpResponseCode m_HttpResponseCode;");
                // HasBeenSet flags for all members + requestId
                MemberRenderer.renderPrivateHasBeenSetFlags(writer, shape, model);
                writer.write("bool m_requestIdHasBeenSet = false;");
            });
            writer.write("");

            // Namespace close
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void generateResultSource(StructureShape shape, OperationShape operation) {
        String className = getResultClassName(operation);
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {
            writeCopyright(writer);

            // Result-specific includes (matching C2J)
            writer.write("#include <aws/core/AmazonWebServiceResult.h>");
            writer.write("#include <aws/core/utils/StringUtils.h>");
            writer.write("#include <aws/core/utils/UnreferencedParam.h>");
            writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
            writer.write("#include <aws/core/utils/memory/stl/AWSStringStream.h>");
            writer.write("#include <aws/$L/model/$L.h>", smithyServiceName, className);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");
            writer.write("using namespace Aws::$L::Model;", namespace);
            writer.write("using namespace Aws::Utils::Json;");
            writer.write("using namespace Aws::Utils;");
            writer.write("using namespace Aws;");
            writer.write("");

            // AmazonWebServiceResult constructor stub
            writer.openBlock("$L::$L(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}", className, className, () -> {
                writer.write("*this = result;");
            });
            writer.write("");

            // operator= stub
            writer.openBlock("$L& $L::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {", "}", className, className, () -> {
                writer.write("return *this;");
            });
            writer.write("");
        });
    }

    private String getRequestClassName(OperationShape operation) {
        return operation.getId().getName() + "Request";
    }

    private String getResultClassName(OperationShape operation) {
        return operation.getId().getName() + "Result";
    }

    private void writeCopyright(CppWriter writer) {
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
    }

    /**
     * Writes source file includes and using declarations.
     *
     * @param writer          the CppWriter
     * @param className       the class name (for the model include)
     * @param useModelNamespace if true, emit "using namespace Aws::{Namespace}::Model;" instead of explicit namespace blocks
     * @param useAwsNamespace  if true, also emit "using namespace Aws;" (for result sources)
     */
    private void writeSourceIncludes(CppWriter writer, String className,
                                     boolean useModelNamespace, boolean useAwsNamespace) {
        // Includes
        if (protocol.isJsonLike()) {
            writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
        } else {
            writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
        }
        writer.write("#include <aws/$L/model/$L.h>", smithyServiceName, className);
        writer.write("");
        writer.write("#include <utility>");
        writer.write("");

        // Using declarations
        if (useModelNamespace) {
            writer.write("using namespace Aws::$L::Model;", namespace);
        }
        if (protocol.isJsonLike()) {
            writer.write("using namespace Aws::Utils::Json;");
            writer.write("using namespace Aws::Utils;");
        } else {
            writer.write("using namespace Aws::Utils::Xml;");
            writer.write("using namespace Aws::Utils;");
        }
        if (useAwsNamespace) {
            writer.write("using namespace Aws;");
        }
        writer.write("");
    }

    private void renderIncludes(CppWriter writer, StructureShape shape) {
        Set<String> includes = new TreeSet<>(); // sorted for deterministic output
        includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");

        List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
        includes.addAll(memberIncludes);

        for (String include : includes) {
            writer.write("#include $L", include);
        }
    }

    private void renderForwardDeclarations(CppWriter writer) {
        if (protocol.isJsonLike()) {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Json");
            writer.write("class JsonValue;");
            writer.write("class JsonView;");
            writer.writeNamespaceClose("Json");
            writer.writeNamespaceClose("Utils");
        } else {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Xml");
            writer.write("class XmlNode;");
            writer.writeNamespaceClose("Xml");
            writer.writeNamespaceClose("Utils");
        }
    }

    private static boolean isPrimitive(Shape shape) {
        return shape.isIntegerShape() || shape.isLongShape()
            || shape.isBooleanShape() || shape.isDoubleShape()
            || shape.isFloatShape();
    }

    /**
     * Renders the class-level documentation comment.
     * If the shape has no documentation, emits an empty doc block to match C2J output.
     */
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
            // Empty doc block matching C2J output for undocumented shapes
            writer.write("/**");
            writer.write(" */");
        }
    }

    /**
     * Checks if an operation has endpoint context parameters (static or member-level).
     */
    private boolean hasEndpointContextParams(OperationShape operation, StructureShape requestShape) {
        // Check for @staticContextParams on the operation
        if (operation.hasTrait(StaticContextParamsTrait.class)) {
            return true;
        }
        // Check for @contextParam on any member of the request shape
        for (MemberShape member : requestShape.getAllMembers().values()) {
            if (member.hasTrait(ContextParamTrait.class)) {
                return true;
            }
        }
        return false;
    }

    /**
     * Renders the GetEndpointContextParams function body.
     */
    private void renderEndpointContextParams(CppWriter writer, String className,
                                             OperationShape operation, StructureShape shape) {
        writer.openBlock("$L::EndpointParameters $L::GetEndpointContextParams() const {", "}",
            className, className, () -> {
            writer.write("EndpointParameters parameters;");

            // Static context params
            if (operation.hasTrait(StaticContextParamsTrait.class)) {
                writer.write("// Static context parameters");
                StaticContextParamsTrait staticParams = operation.expectTrait(StaticContextParamsTrait.class);
                staticParams.getParameters().forEach((name, def) -> {
                    def.getValue().accept(new software.amazon.smithy.model.node.NodeVisitor.Default<Void>() {
                        @Override
                        protected Void getDefault(software.amazon.smithy.model.node.Node node) {
                            return null;
                        }
                        @Override
                        public Void stringNode(software.amazon.smithy.model.node.StringNode node) {
                            writer.write("parameters.emplace_back(Aws::String(\"$L\"), \"$L\", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);",
                                name, node.getValue());
                            return null;
                        }
                        @Override
                        public Void booleanNode(software.amazon.smithy.model.node.BooleanNode node) {
                            writer.write("parameters.emplace_back(Aws::String(\"$L\"), $L, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);",
                                name, node.getValue());
                            return null;
                        }
                    });
                });
            }

            // Operation context params (from members with @contextParam)
            boolean hasContextParams = shape.getAllMembers().values().stream()
                .anyMatch(m -> m.hasTrait(ContextParamTrait.class));
            if (hasContextParams) {
                writer.write("// Operation context parameters");
                for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
                    MemberShape member = entry.getValue();
                    if (member.hasTrait(ContextParamTrait.class)) {
                        ContextParamTrait contextParam = member.expectTrait(ContextParamTrait.class);
                        String paramName = contextParam.getName();
                        String memberName = entry.getKey();
                        writer.openBlock("if ($LHasBeenSet()) {", "}", memberName, () -> {
                            writer.write("parameters.emplace_back(Aws::String(\"$L\"), this->Get$L(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);",
                                paramName, memberName);
                        });
                    }
                }
            }

            writer.write("return parameters;");
        });
    }
}
