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
 * <p>Serde includes come from {@code ProtocolTraits.serdeIncludes}; member includes come
 * from {@code CppTypeMapper.getIncludesForShape}.
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
        // <utility> NOT added: Query/EC2 must omit it, and non-Query serdeIncludes(REQUEST_SOURCE) already carry it.
        return inc;
    }

    static List<String> subObjectSourceBase(String smithyServiceName, String className) {
        List<String> inc = new ArrayList<>();
        inc.add("aws/" + smithyServiceName + "/model/" + className + ".h");
        inc.add("utility");
        return inc;
    }

    /**
     * Emits a source file's {@code #include} block: {@code base} plus the protocol's source
     * includes for {@code kind}, via {@link #emit} (dedup/sort/bracket). Usings are the caller's
     * job ({@link #emitUsings}); this method never touches them.
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
     * Emits {@code #include <path>} per path, normalizing brackets so callers may pass
     * {@code <aws/x/X.h>} or {@code aws/x/X.h}. Deduped/sorted like {@link #emit}; the single
     * place header bracket policy lives.
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
