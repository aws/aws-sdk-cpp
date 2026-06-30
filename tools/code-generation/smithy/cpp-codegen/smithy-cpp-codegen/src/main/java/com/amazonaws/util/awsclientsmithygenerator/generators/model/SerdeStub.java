/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.Map;

/**
 * Generates protocol-specific serialization/deserialization method signatures
 * and stub implementations for Smithy structure shapes.
 *
 * <p>This produces correct method signatures matching C2J output. Bodies will be
 * replaced by real schema-based serde logic in Task 15.
 */
public final class SerdeStub {

    private SerdeStub() {
    }

    /**
     * Writes serde method declarations in the header's public section.
     * For JSON/CBOR: default ctor, JsonView ctor, operator=(JsonView), Jsonize()
     * For XML: default ctor, XmlNode ctor, operator=(XmlNode), AddToNode(XmlNode)/OutputToStream(OStream)
     */
    public static void renderHeaderDeclarations(CppWriter writer, Protocol protocol,
                                                String exportMacro, String className) {
        if (protocol.isJsonLike()) {
            writer.write("  $L $L() = default;", exportMacro, className);
            writer.write("  $L $L(Aws::Utils::Json::JsonView jsonValue);", exportMacro, className);
            writer.write("  $L $L& operator=(Aws::Utils::Json::JsonView jsonValue);", exportMacro, className);
            writer.write("  $L Aws::Utils::Json::JsonValue Jsonize() const;", exportMacro);
        } else if (protocol == Protocol.REST_XML) {
            writer.write("  $L $L() = default;", exportMacro, className);
            writer.write("  $L $L(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("  $L $L& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("  $L void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;", exportMacro);
        } else if (protocol == Protocol.QUERY_XML || protocol == Protocol.EC2) {
            writer.write("  $L $L() = default;", exportMacro, className);
            writer.write("  $L $L(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("  $L $L& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);", exportMacro, className);
            writer.write("  $L void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;", exportMacro);
            writer.write("  $L void OutputToStream(Aws::OStream& ostream, const char* location) const;", exportMacro);
        }
    }

    /**
     * Writes serde method implementations in the source file.
     * Currently stubs — real implementation comes with schema-based serde.
     */
    public static void renderSourceImplementation(CppWriter writer, StructureShape shape,
                                                  Model model, Protocol protocol,
                                                  String className, String serviceName,
                                                  String projectName) {
        if (protocol.isJsonLike()) {
            renderJsonSourceStub(writer, shape, model, className, serviceName);
        } else if (protocol == Protocol.REST_XML) {
            renderXmlSourceStub(writer, shape, model, className, serviceName);
        } else {
            renderQueryXmlSourceStub(writer, shape, model, className, serviceName);
        }
    }

    private static void renderJsonSourceStub(CppWriter writer, StructureShape shape,
                                             Model model, String className, String serviceName) {
        writer.write("$L::$L(JsonView jsonValue) { *this = jsonValue; }", className, className);
        writer.write("");
        writer.write("$L& $L::operator=(JsonView jsonValue) {", className, className);
        // Stub: iterate members and generate deserialization
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            String memberName = entry.getKey();
            String fieldName = "m_" + decapitalize(memberName);
            Shape targetShape = model.expectShape(entry.getValue().getTarget());
            renderJsonDeserializeMember(writer, memberName, fieldName, targetShape, model);
        }
        writer.write("  return *this;");
        writer.write("}");
        writer.write("");
        writer.write("JsonValue $L::Jsonize() const {", className);
        writer.write("  JsonValue payload;");
        writer.write("");
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            String memberName = entry.getKey();
            String fieldName = "m_" + decapitalize(memberName);
            Shape targetShape = model.expectShape(entry.getValue().getTarget());
            renderJsonSerializeMember(writer, memberName, fieldName, targetShape, model);
        }
        writer.write("  return payload;");
        writer.write("}");
    }

    private static void renderJsonDeserializeMember(CppWriter writer, String memberName,
                                                    String fieldName, Shape targetShape, Model model) {
        // TODO: Replace with schema-based serde. This stub handles basic types.
        writer.write("  if (jsonValue.ValueExists(\"$L\")) {", memberName);
        if (targetShape.isStringShape()) {
            writer.write("    $L = jsonValue.GetString(\"$L\");", fieldName, memberName);
        } else if (targetShape.isIntegerShape()) {
            writer.write("    $L = jsonValue.GetInteger(\"$L\");", fieldName, memberName);
        } else if (targetShape.isLongShape()) {
            writer.write("    $L = jsonValue.GetInt64(\"$L\");", fieldName, memberName);
        } else if (targetShape.isBooleanShape()) {
            writer.write("    $L = jsonValue.GetBool(\"$L\");", fieldName, memberName);
        } else if (targetShape.isDoubleShape()) {
            writer.write("    $L = jsonValue.GetDouble(\"$L\");", fieldName, memberName);
        } else if (targetShape.isStructureShape() || targetShape.isUnionShape()) {
            writer.write("    $L = jsonValue.GetObject(\"$L\");", fieldName, memberName);
        } else {
            writer.write("    // TODO: serde for $L", targetShape.getType());
        }
        writer.write("    ${L}HasBeenSet = true;", fieldName);
        writer.write("  }");
    }

    private static void renderJsonSerializeMember(CppWriter writer, String memberName,
                                                  String fieldName, Shape targetShape, Model model) {
        writer.write("  if (${L}HasBeenSet) {", fieldName);
        if (targetShape.isStringShape()) {
            writer.write("    payload.WithString(\"$L\", $L);", memberName, fieldName);
        } else if (targetShape.isIntegerShape()) {
            writer.write("    payload.WithInteger(\"$L\", $L);", memberName, fieldName);
        } else if (targetShape.isLongShape()) {
            writer.write("    payload.WithInt64(\"$L\", $L);", memberName, fieldName);
        } else if (targetShape.isBooleanShape()) {
            writer.write("    payload.WithBool(\"$L\", $L);", memberName, fieldName);
        } else if (targetShape.isDoubleShape()) {
            writer.write("    payload.WithDouble(\"$L\", $L);", memberName, fieldName);
        } else if (targetShape.isStructureShape() || targetShape.isUnionShape()) {
            writer.write("    payload.WithObject(\"$L\", $L.Jsonize());", memberName, fieldName);
        } else {
            writer.write("    // TODO: serde for $L", targetShape.getType());
        }
        writer.write("  }");
        writer.write("");
    }

    private static void renderXmlSourceStub(CppWriter writer, StructureShape shape,
                                            Model model, String className, String serviceName) {
        writer.write("$L::$L(const XmlNode& xmlNode) { *this = xmlNode; }", className, className);
        writer.write("");
        writer.write("$L& $L::operator=(const XmlNode& xmlNode) {", className, className);
        writer.write("  // TODO: XML deserialization (schema-based serde)");
        writer.write("  return *this;");
        writer.write("}");
        writer.write("");
        writer.write("void $L::AddToNode(XmlNode& parentNode) const {", className);
        writer.write("  // TODO: XML serialization (schema-based serde)");
        writer.write("}");
    }

    private static void renderQueryXmlSourceStub(CppWriter writer, StructureShape shape,
                                                 Model model, String className, String serviceName) {
        writer.write("$L::$L(const XmlNode& xmlNode) { *this = xmlNode; }", className, className);
        writer.write("");
        writer.write("$L& $L::operator=(const XmlNode& xmlNode) {", className, className);
        writer.write("  // TODO: QueryXML deserialization (schema-based serde)");
        writer.write("  return *this;");
        writer.write("}");
        writer.write("");
        writer.write("void $L::OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const {", className);
        writer.write("  // TODO: QueryXML serialization (schema-based serde)");
        writer.write("}");
        writer.write("");
        writer.write("void $L::OutputToStream(Aws::OStream& ostream, const char* location) const {", className);
        writer.write("  // TODO: QueryXML serialization (schema-based serde)");
        writer.write("}");
    }

    private static String decapitalize(String name) {
        if (name.isEmpty()) return name;
        return Character.toLowerCase(name.charAt(0)) + name.substring(1);
    }
}
