/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.endpointrules;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;

/**
 * Renders the {@code <Prefix>EndpointRules} header and source that carry a service's compiled BDD
 * bytecode blob. The emitted ABI matches the C2J-generated {@code EndpointRules} class exactly
 * (class {@code AWS_<SVC>_LOCAL <Prefix>EndpointRules} exposing {@code RulesBlobStrLen},
 * {@code RulesBlobSize} and {@code GetRulesBlob()}) so the core {@code CrtEndpointProvider} consumes
 * it unchanged. The only difference from the JSON path is that the blob bytes are binary BDD
 * bytecode instead of ruleset JSON.
 */
public final class EndpointRulesRenderer {

    // Byte-array lines wrap after this many entries, mirroring the C2J template's 25-per-line layout.
    // clang-format re-flows afterwards, so this only affects the pre-format footprint.
    private static final int BYTES_PER_LINE = 25;

    private EndpointRulesRenderer() {}

    /**
     * include/aws/&lt;svc&gt;/internal/&lt;Prefix&gt;EndpointRules.h
     */
    public static void renderHeader(CppWriter writer, String namespace, String smithyServiceName,
                                    String exportMacro) {
        String localMacro = toLocalMacro(exportMacro);
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#pragma once");
        writer.write("#include <aws/$1L/$2L_EXPORTS.h>", smithyServiceName, namespace);
        writer.write("");
        writer.write("#include <cstddef>");
        writer.write("");
        writer.write("namespace Aws {");
        writer.write("namespace $L {", namespace);
        writer.write("class $1L $2LEndpointRules {", localMacro, namespace);
        writer.write(" public:");
        writer.write("  static const size_t RulesBlobStrLen;");
        writer.write("  static const size_t RulesBlobSize;");
        writer.write("");
        writer.write("  static const char* GetRulesBlob();");
        writer.write("};");
        writer.write("}  // namespace $L", namespace);
        writer.write("}  // namespace Aws");
    }

    /**
     * source/&lt;Prefix&gt;EndpointRules.cpp
     */
    public static void renderSource(CppWriter writer, String namespace, String smithyServiceName,
                                    byte[] bytecode) {
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#include <aws/core/utils/memory/stl/AWSArray.h>");
        writer.write("#include <aws/$1L/internal/$2LEndpointRules.h>", smithyServiceName, namespace);
        writer.write("");
        writer.write("namespace Aws {");
        writer.write("namespace $L {", namespace);
        // Binary bytecode has no NUL terminator; StrLen and Size are the same for the BDD blob.
        writer.write("const size_t $1LEndpointRules::RulesBlobStrLen = $2L;", namespace, Integer.toString(bytecode.length));
        writer.write("const size_t $1LEndpointRules::RulesBlobSize = $2L;", namespace, Integer.toString(bytecode.length));
        writer.write("");
        writer.write("using RulesBlobT = Aws::Array<const char, $LEndpointRules::RulesBlobSize>;", namespace);
        writer.write("static constexpr RulesBlobT RulesBlob = {");
        writeByteArray(writer, bytecode);
        writer.write("};");
        writer.write("");
        writer.write("const char* $LEndpointRules::GetRulesBlob() { return RulesBlob.data(); }", namespace);
        writer.write("}  // namespace $L", namespace);
        writer.write("}  // namespace Aws");
    }

    private static void writeByteArray(CppWriter writer, byte[] bytecode) {
        StringBuilder line = new StringBuilder("    {");
        for (int i = 0; i < bytecode.length; i++) {
            line.append(charLiteral(bytecode[i]));
            if (i != bytecode.length - 1) {
                line.append(',');
            }
            if ((i + 1) % BYTES_PER_LINE == 0 && i != bytecode.length - 1) {
                writer.write("$L", line.toString());
                line.setLength(0);
                line.append("     ");
            }
        }
        line.append("}");
        writer.write("$L", line.toString());
    }

    /**
     * Emits a byte as a C++ char literal. Bytecode is arbitrary binary, so every byte is written as a
     * hex escape ('\xNN'); this is unambiguous, avoids narrowing warnings on values &gt; 0x7F, and never
     * needs the printable/escape special-casing the C2J JSON template relied on.
     */
    private static String charLiteral(byte b) {
        return String.format("'\\x%02x'", b & 0xFF);
    }

    private static String toLocalMacro(String exportMacro) {
        // exportMacro is "AWS_<SVC>_API"; the local (hidden-visibility) macro is "AWS_<SVC>_LOCAL".
        if (exportMacro.endsWith("_API")) {
            return exportMacro.substring(0, exportMacro.length() - "_API".length()) + "_LOCAL";
        }
        return exportMacro + "_LOCAL";
    }
}
