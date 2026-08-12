/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import org.junit.jupiter.api.Test;

import java.util.List;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.junit.jupiter.api.Assertions.assertFalse;

class IncludeSetsTest {

    @Test
    void resultHeaderBase_withRequestId_hasAwsString() {
        List<String> inc = IncludeSets.resultHeaderBase("iam", "IAM", true);
        assertTrue(inc.contains("aws/core/http/HttpResponse.h"), inc.toString());
        assertTrue(inc.contains("aws/iam/IAM_EXPORTS.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/memory/stl/AWSString.h"), inc.toString());
    }

    @Test
    void resultHeaderBase_withoutRequestId_omitsAwsString() {
        List<String> inc = IncludeSets.resultHeaderBase("iam", "IAM", false);
        assertFalse(inc.contains("aws/core/utils/memory/stl/AWSString.h"), inc.toString());
    }

    @Test
    void resultSourceBase_hasAwsResultAndStringUtilsAndSelfHeaderAndUtility() {
        List<String> inc = IncludeSets.resultSourceBase("iam", "GetRoleResult");
        assertEquals(List.of(
            "aws/core/AmazonWebServiceResult.h",
            "aws/core/utils/StringUtils.h",
            "aws/iam/model/GetRoleResult.h",
            "utility"), inc);
    }

    @Test
    void streamingResultSourceBase_hasStringStreamButNoSerdeHeader() {
        List<String> inc = IncludeSets.streamingResultSourceBase("s3", "GetObjectResult");
        assertTrue(inc.contains("aws/core/AmazonWebServiceResult.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/memory/stl/AWSStringStream.h"), inc.toString());
        assertTrue(inc.contains("aws/s3/model/GetObjectResult.h"), inc.toString());
        assertTrue(inc.contains("utility"), inc.toString());
    }

    @Test
    void requestSourceBase_hasSelfHeaderAndNoUtility() {
        // <utility> is carried by the per-protocol serdeIncludes(REQUEST_SOURCE), not the base,
        // so Query/EC2 (which must not emit <utility>) are not forced to include it.
        List<String> inc = IncludeSets.requestSourceBase("iam", "CreateRoleRequest");
        assertTrue(inc.contains("aws/iam/model/CreateRoleRequest.h"), inc.toString());
        assertFalse(inc.contains("utility"), inc.toString());
    }

    @Test
    void emit_dedupsAndSortsAndWrapsInAngleBrackets() {
        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter w =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        IncludeSets.emit(w, java.util.List.of("b/z.h", "a/a.h", "b/z.h"));
        String out = w.toString();
        assertTrue(out.contains("#include <a/a.h>"), out);
        assertTrue(out.contains("#include <b/z.h>"), out);
        // dedup: only one occurrence of b/z.h
        assertEquals(out.indexOf("b/z.h"), out.lastIndexOf("b/z.h"), out);
        // sorted: a/a.h before b/z.h
        assertTrue(out.indexOf("a/a.h") < out.indexOf("b/z.h"), out);
    }

    @Test
    void emitAngleIncludes_normalizesBracketsDedupesAndSorts() {
        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter writer =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        IncludeSets.emitAngleIncludes(writer, java.util.List.of(
            "<aws/b/B.h>", "aws/a/A.h", "<aws/b/B.h>"));
        String out = writer.toString();
        // deduped to two, each bracketed exactly once, sorted A before B
        assertEquals(
            "#include <aws/a/A.h>\n#include <aws/b/B.h>\n",
            out);
    }

    @Test
    void emitUsings_preservesOrder() {
        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter w =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        IncludeSets.emitUsings(w, java.util.List.of("Aws::Utils::Xml", "Aws::Utils"));
        String out = w.toString();
        assertTrue(out.indexOf("using namespace Aws::Utils::Xml;")
            < out.indexOf("using namespace Aws::Utils;"), out);
    }

    @Test
    void emitSourceIncludes_composesBaseAndSerdeUnionSortedDedupedBracketed() {
        com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter w =
            new com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter();
        // A representative source base plus the real JSON serde union for a source kind. The base
        // repeats "utility" (also in the JSON union) to prove dedup across the two sources.
        java.util.List<String> base = java.util.List.of(
            "aws/iam/model/GetRoleRequest.h", "utility");
        com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits json =
            new com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.JsonProtocolTraits(
                com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol.JSON);
        IncludeSets.emitSourceIncludes(w, base, json,
            com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind.REQUEST_SOURCE);
        String out = w.toString();
        // Base member + every JSON source-union member appears, each exactly once, bracketed.
        assertTrue(out.contains("#include <aws/iam/model/GetRoleRequest.h>"), out);
        assertTrue(out.contains("#include <aws/core/utils/json/JsonSerializer.h>"), out);
        assertTrue(out.contains("#include <aws/core/utils/UnreferencedParam.h>"), out);
        assertTrue(out.contains("#include <aws/core/utils/memory/stl/AWSStringStream.h>"), out);
        assertTrue(out.contains("#include <aws/core/utils/HashingUtils.h>"), out);
        assertTrue(out.contains("#include <utility>"), out);
        // dedup: <utility> emitted once despite appearing in both base and the union
        assertEquals(out.indexOf("<utility>"), out.lastIndexOf("<utility>"), out);
        // sorted CaseSensitive: the "aws/..." paths precede "utility"
        assertTrue(out.indexOf("aws/core/utils/json/JsonSerializer.h") < out.indexOf("<utility>"), out);
    }
}
