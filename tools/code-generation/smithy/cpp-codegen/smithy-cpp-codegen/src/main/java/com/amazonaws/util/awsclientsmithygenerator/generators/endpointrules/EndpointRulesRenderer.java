/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.endpointrules;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;

public final class EndpointRulesRenderer {

    private static final int BYTES_PER_LINE = 25;

    private EndpointRulesRenderer() {}

    public static void renderHeader(CppWriter writer, String namespace, String classPrefix,
                                    String smithyServiceName, String localMacro) {
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#pragma once");
        writer.write("#include <aws/$1L/$2L_EXPORTS.h>", smithyServiceName, classPrefix);
        writer.write("");
        writer.write("#include <cstddef>");
        writer.write("");
        writer.write("namespace Aws {");
        writer.write("namespace $L {", namespace);
        writer.write("class $1L $2LEndpointRules {", localMacro, classPrefix);
        writer.write(" public:");
        writer.write("  static const size_t RulesBlobStrLen;");
        writer.write("  static const size_t RulesBlobSize;");
        writer.write("");
        writer.write("  static const char* GetRulesBlob();");
        writer.write("};");
        writer.write("}  // namespace $L", namespace);
        writer.write("}  // namespace Aws");
    }

    public static void renderSource(CppWriter writer, String namespace, String classPrefix,
                                    String smithyServiceName, byte[] bytecode) {
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#include <aws/core/utils/memory/stl/AWSArray.h>");
        writer.write("#include <aws/$1L/internal/$2LEndpointRules.h>", smithyServiceName, classPrefix);
        writer.write("");
        writer.write("namespace Aws {");
        writer.write("namespace $L {", namespace);
        writer.write("const size_t $1LEndpointRules::RulesBlobStrLen = $2L;", classPrefix, Integer.toString(bytecode.length));
        writer.write("const size_t $1LEndpointRules::RulesBlobSize = $2L;", classPrefix, Integer.toString(bytecode.length));
        writer.write("");
        writer.write("using RulesBlobT = Aws::Array<const char, $LEndpointRules::RulesBlobSize>;", classPrefix);
        writer.write("static constexpr RulesBlobT RulesBlob = {");
        writeByteArray(writer, bytecode);
        writer.write("};");
        writer.write("");
        writer.write("const char* $LEndpointRules::GetRulesBlob() { return RulesBlob.data(); }", classPrefix);
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

    private static String charLiteral(byte b) {
        return String.format("'\\x%02x'", b & 0xFF);
    }

}
