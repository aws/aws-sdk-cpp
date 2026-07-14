/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.traits.EnumDefinition;
import software.amazon.smithy.model.traits.EnumTrait;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * Renders C++ enum class headers and mapper source files from Smithy enum shapes.
 *
 * <p>Generates two files per enum:
 * <ul>
 *   <li>Header: enum class declaration + mapper namespace with GetForName/GetNameFor declarations</li>
 *   <li>Source: hash-based mapper implementation with overflow container support</li>
 * </ul>
 *
 * <p>Supports both Smithy 2.0 EnumShape and legacy StringShape with @enum trait.
 */
public final class EnumRenderer {

    private EnumRenderer() {
    }

    /**
     * Writes the full enum header file content including copyright, includes,
     * enum class declaration, and mapper namespace with function declarations.
     *
     * @param writer      the CppWriter to write to
     * @param enumShape   the enum shape (EnumShape or StringShape with @enum trait)
     * @param serviceName the service name / C++ namespace (e.g., "Kinesis")
     * @param exportMacro the export macro (e.g., "AWS_KINESIS_API")
     * @param projectName the project directory name for include paths (e.g., "kinesis")
     */
    public static void renderHeader(CppWriter writer, Shape enumShape, String serviceName,
                                    String exportMacro, String projectName) {
        String enumName = enumShape.getId().getName();
        List<String> values = getEnumValues(enumShape);

        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#pragma once");
        writer.write("#include <aws/core/utils/memory/stl/AWSString.h>");
        writer.write("#include <aws/$1L/$2L_EXPORTS.h>",
            projectName, serviceName);
        writer.write("");
        writer.write("namespace Aws {");
        writer.write("namespace $L {", serviceName);
        writer.write("namespace Model {");

        // Enum class declaration
        // Use single-line format if it fits within ~140 chars, multi-line otherwise
        String singleLine = "enum class " + enumName + " { NOT_SET, " +
            String.join(", ", values) + " };";
        if (singleLine.length() <= 140) {
            writer.write("$L", singleLine);
        } else {
            writer.write("enum class $L {", enumName);
            writer.write("  NOT_SET,");
            for (int i = 0; i < values.size(); i++) {
                if (i < values.size() - 1) {
                    writer.write("  $L,", values.get(i));
                } else {
                    writer.write("  $L", values.get(i));
                }
            }
            writer.write("};");
        }
        writer.write("");

        // Mapper namespace
        writer.write("namespace $LMapper {", enumName);
        writer.write("$1L $2L Get$2LForName(const Aws::String& name);", exportMacro, enumName);
        writer.write("");
        writer.write("$1L Aws::String GetNameFor$2L($2L value);", exportMacro, enumName);
        writer.write("}  // namespace $LMapper", enumName);

        writer.write("}  // namespace Model");
        writer.write("}  // namespace $L", serviceName);
        writer.write("}  // namespace Aws");
    }

    /**
     * Writes the full enum mapper source file content including hash constants,
     * GetForName (hash-based lookup), and GetNameFor (switch-based reverse lookup).
     *
     * @param writer      the CppWriter to write to
     * @param enumShape   the enum shape (EnumShape or StringShape with @enum trait)
     * @param serviceName the service name (e.g., "Kinesis")
     * @param exportMacro the export macro (unused in source, kept for API consistency)
     * @param projectName the project directory name (e.g., "kinesis")
     */
    public static void renderSource(CppWriter writer, Shape enumShape, String serviceName,
                                    String exportMacro, String projectName) {
        String enumName = enumShape.getId().getName();
        List<String> values = getEnumValues(enumShape);
        List<String> wireValues = getEnumWireValues(enumShape);

        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#include <aws/$1L/model/$2L.h>", projectName, enumName);
        writer.write("#include <aws/core/utils/HashingUtils.h>");
        writer.write("#include <aws/core/Globals.h>");
        writer.write("#include <aws/core/utils/EnumParseOverflowContainer.h>");
        writer.write("");
        writer.write("using namespace Aws::Utils;");
        writer.write("");
        writer.write("namespace Aws {");
        writer.write("namespace $L {", serviceName);
        writer.write("namespace Model {");
        writer.write("namespace $LMapper {", enumName);
        writer.write("");

        // Hash constants
        for (int i = 0; i < values.size(); i++) {
            writer.write("  static const int $1L_HASH = HashingUtils::HashString(\"$2L\");",
                values.get(i), wireValues.get(i));
        }
        writer.write("");

        // GetForName
        writer.write("  $1L Get$1LForName(const Aws::String& name) {", enumName);
        writer.write("    int hashCode = HashingUtils::HashString(name.c_str());");
        for (int i = 0; i < values.size(); i++) {
            String prefix = i == 0 ? "    if" : "    else if";
            writer.write("$1L (hashCode == $2L_HASH) {", prefix, values.get(i));
            writer.write("      return $1L::$2L;", enumName, values.get(i));
            writer.write("    }");
        }
        writer.write("    EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();");
        writer.write("    if (overflowContainer) {");
        writer.write("      overflowContainer->StoreOverflow(hashCode, name);");
        writer.write("      return static_cast<$L>(hashCode);", enumName);
        writer.write("    }");
        writer.write("    return $L::NOT_SET;", enumName);
        writer.write("  }");
        writer.write("");

        // GetNameFor
        writer.write("  Aws::String GetNameFor$1L($1L value) {", enumName);
        writer.write("    switch (value) {");
        for (int i = 0; i < values.size(); i++) {
            writer.write("    case $1L::$2L:", enumName, values.get(i));
            writer.write("      return \"$L\";", wireValues.get(i));
        }
        writer.write("    default:");
        writer.write("      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();");
        writer.write("      if (overflowContainer) {");
        writer.write("        return overflowContainer->RetrieveOverflow(static_cast<int>(value));");
        writer.write("      }");
        writer.write("      return {};");
        writer.write("    }");
        writer.write("  }");
        writer.write("");

        writer.write("}  // namespace $LMapper", enumName);
        writer.write("}  // namespace Model");
        writer.write("}  // namespace $L", serviceName);
        writer.write("}  // namespace Aws");
    }

    /**
     * Returns the ordered list of sanitized C++ enum constant names for the given shape.
     *
     * <p>Uses the enum wire values (enumValue trait) sanitized for C++ identifiers.
     * This matches the C2J convention where PascalCase enum values become C++ enum constants.
     *
     * @param enumShape the enum shape (EnumShape or StringShape with @enum trait)
     * @return ordered list of sanitized enum constant names (e.g., "IncomingBytes", "ALL")
     */
    public static List<String> getEnumValues(Shape enumShape) {
        if (enumShape.isEnumShape()) {
            // Use wire values (from enumValue trait) as C++ enum constant names
            return enumShape.asEnumShape().get().getEnumValues().values().stream()
                .map(EnumRenderer::sanitizeEnumValue)
                .collect(Collectors.toList());
        }
        // Legacy @enum trait on StringShape
        EnumTrait trait = enumShape.expectTrait(EnumTrait.class);
        return trait.getValues().stream()
            .map(def -> sanitizeEnumValue(def.getValue()))
            .collect(Collectors.toList());
    }

    private static List<String> getEnumWireValues(Shape enumShape) {
        if (enumShape.isEnumShape()) {
            return new ArrayList<>(enumShape.asEnumShape().get().getEnumValues().values());
        }
        EnumTrait trait = enumShape.expectTrait(EnumTrait.class);
        return trait.getValues().stream()
            .map(EnumDefinition::getValue)
            .collect(Collectors.toList());
    }

    /**
     * C++ reserved words and platform-specific macros that conflict with enum constant names.
     * Matches C2J PlatformAndKeywordSanitizer.FORBIDDEN_WORDS.
     */
    private static final Set<String> FORBIDDEN_WORDS = Set.of(
        "alignas", "alignof", "and", "and_eq", "asm",
        "atomic_cancel", "atomic_commit", "atomic_noexcept", "auto",
        "bitand", "bitor", "bool", "break", "case", "catch", "char",
        "char16_t", "char32_t", "class", "compl", "concept", "const",
        "constexpr", "const_cast", "continue", "co_await", "co_return", "co_yeild",
        "decltype", "default", "delete", "do", "double", "dynamic_cast",
        "else", "enum", "explicit", "export", "extern", "false", "float",
        "for", "friend", "goto", "if", "import", "inline", "int", "long",
        "moduel", "mutable", "namespace", "new", "noexcept", "not", "not_eq",
        "nullptr", "operator", "or", "or_eq", "private", "protected", "public",
        "reflexpr", "register", "reinterpret_cast", "requires", "return",
        "short", "signed", "sizeof", "static", "static_assert", "static_cast",
        "struct", "switch", "synchronized", "template", "this", "thread_local",
        "throw", "true", "try", "typeid", "typename", "typeof", "union",
        "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while",
        "xor", "xor_eq",
        // Platform macros and min/max (defined as macros on Windows)
        "ANDROID", "BOOL", "CHAR", "DEBUG", "DELETE", "Double", "ERROR",
        "GET", "LINUX", "max", "min", "NEW", "NULL", "PRIVATE", "PUBLIC",
        "STATIC", "T_CHAR", "DOMAIN", "OVERFLOW", "WINDOWS"
    );

    /**
     * Sanitizes an enum wire value into a valid C++ identifier, matching C2J
     * PlatformAndKeywordSanitizer.fixEnumValue() behavior.
     */
    static String sanitizeEnumValue(String value) {
        if ("NOT_SET".equals(value)) {
            return "NOT_SET_VALUE";
        }

        String result = value
            .replace("-", "_")
            .replace("+", "_")
            .replace(":", "_")
            .replace(".", "_")
            .replace(",", "_COMMA_")
            .replace("*", "_")
            .replace("/", "_")
            .replace("(", "_")
            .replace(")", "_")
            .replace(" ", "_");

        // Collapse multiple underscores and strip trailing underscore
        result = result.replaceAll("_{2,}", "_").replaceAll("_$", "");

        if (FORBIDDEN_WORDS.contains(result)) {
            result = result + "_";
        }

        // Leading digit: prepend underscore
        if (!result.isEmpty() && Character.isDigit(result.charAt(0))) {
            result = "_" + result;
        }

        return result;
    }
}
