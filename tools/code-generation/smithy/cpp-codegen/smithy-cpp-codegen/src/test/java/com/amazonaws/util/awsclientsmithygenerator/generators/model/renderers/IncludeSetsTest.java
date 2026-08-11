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
}
