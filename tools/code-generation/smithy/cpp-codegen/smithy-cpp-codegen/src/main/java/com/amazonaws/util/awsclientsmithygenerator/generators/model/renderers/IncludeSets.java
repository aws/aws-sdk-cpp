/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;

import java.util.ArrayList;
import java.util.List;

/**
 * Universal (non-serde, non-member) {@code #include} paths for each generated file kind.
 * Paths are returned without angle brackets; callers add {@code #include <...>}.
 *
 * <p>These are the boilerplate includes that were previously hand-written as string literals
 * in each renderer. Serde includes come from {@code ProtocolTraits.serdeIncludes}; member
 * includes come from {@code CppTypeMapper.getIncludesForShape}.
 */
final class IncludeSets {

    private IncludeSets() {}

    static List<String> resultHeaderBase(String smithyServiceName, String namespace,
                                         boolean includeAwsString) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/core/http/HttpResponse.h");
        inc.add("aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h");
        if (includeAwsString) {
            inc.add("aws/core/utils/memory/stl/AWSString.h");
        }
        return inc;
    }

    static List<String> streamingResultHeaderBase(String smithyServiceName, String namespace) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/core/http/HttpResponse.h");
        inc.add("aws/core/utils/memory/stl/AWSString.h");
        inc.add("aws/core/utils/stream/ResponseStream.h");
        inc.add("aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h");
        return inc;
    }

    static List<String> resultSourceBase(String smithyServiceName, String className) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/core/AmazonWebServiceResult.h");
        inc.add("aws/core/utils/StringUtils.h");
        inc.add("aws/" + smithyServiceName + "/model/" + className + ".h");
        inc.add("utility");
        return inc;
    }

    static List<String> streamingResultSourceBase(String smithyServiceName, String className) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/core/AmazonWebServiceResult.h");
        inc.add("aws/core/utils/StringUtils.h");
        inc.add("aws/core/utils/memory/stl/AWSStringStream.h");
        inc.add("aws/" + smithyServiceName + "/model/" + className + ".h");
        inc.add("utility");
        return inc;
    }

    static List<String> requestSourceBase(String smithyServiceName, String className) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/" + smithyServiceName + "/model/" + className + ".h");
        // NOTE: <utility> is NOT added here. Query/EC2 request sources must not include it,
        // and the non-Query protocols' serdeIncludes(REQUEST_SOURCE) already carry <utility>.
        // Adding it here would force it onto Query.
        return inc;
    }

    static List<String> subObjectSourceBase(String smithyServiceName, String className) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/" + smithyServiceName + "/model/" + className + ".h");
        inc.add("utility");
        return inc;
    }

    /**
     * Assembles and emits a source file's {@code #include} block: the per-site {@code base}
     * (self-header, {@code AmazonWebServiceResult.h}, etc.) plus the protocol's source-include
     * union for {@code kind}. The two lists are concatenated then emitted via {@link #emit},
     * which dedups, sorts (CaseSensitive) and brackets. Usings are emitted separately by the
     * caller via {@link #emitUsings} — this method never touches usings.
     */
    static void emitSourceIncludes(CppWriter writer, List<String> base,
                                   ProtocolTraits traits, FileKind kind) {
        List<String> includes = new ArrayList<>(base);
        includes.addAll(traits.serdeIncludes(kind));
        emit(writer, includes);
    }

    /** Writes each path as {@code #include <path>}, deduped and sorted (CaseSensitive). */
    static void emit(com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter writer,
                     List<String> includePaths) {
        java.util.TreeSet<String> sorted = new java.util.TreeSet<>(includePaths);
        for (String path : sorted) {
            writer.write("#include <$L>", path);
        }
    }

    /**
     * Emits {@code #include <path>} for each path, normalizing brackets so a caller may
     * pass either {@code <aws/x/X.h>} or {@code aws/x/X.h}. Deduped and sorted CaseSensitive,
     * matching {@link #emit}. This is the single place bracket policy for header includes lives.
     */
    static void emitAngleIncludes(com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter writer,
                                  java.util.Collection<String> includePaths) {
        java.util.TreeSet<String> sorted = new java.util.TreeSet<>();
        for (String p : includePaths) {
            sorted.add(p.replaceAll("^<|>$", ""));
        }
        for (String path : sorted) {
            writer.write("#include <$L>", path);
        }
    }

    /** Writes each namespace as {@code using namespace X;} in the given order (not sorted). */
    static void emitUsings(com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter writer,
                           List<String> namespaces) {
        for (String ns : namespaces) {
            writer.write("using namespace $L;", ns);
        }
    }
}
