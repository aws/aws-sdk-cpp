/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.pagination;

import software.amazon.smithy.build.PluginContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import java.util.Map;
import java.util.HashMap;

/**
 * Generates empty pagination base headers for legacy services that don't have Smithy pagination models.
 * TODO: Remove this workaround once all services have proper Smithy models.
 */
public class PaginationEmptyHeaderGenerator {
    // Legacy services without Smithy models that still need pagination base headers
    // TODO: Remove once all services have proper Smithy models
    private static final Map<String, String> LEGACY_SERVICES = Map.of(
        "importexport", "ImportExport",
        "sdb", "SimpleDB"
    );
    
    public static void generate(PluginContext context) {
        String projectionName = context.getProjectionName();
        if (!projectionName.endsWith(".mock")) {
            return;
        }
        
        String c2jName = projectionName.replace(".mock", "");
        String serviceName = LEGACY_SERVICES.get(c2jName);
        
        if (serviceName == null) {
            return;
        }
        
        CppWriterDelegator writers = new CppWriterDelegator(context.getFileManifest());
        
        writers.useFileWriter("include/aws/" + c2jName + "/" + serviceName + "PaginationBase.h", writer -> {
            writer.write("#pragma once");
            writer.write("");
            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(serviceName);
            writer.openBlock("template <typename ClientType>\nclass $LPaginationBase {\n public:", "};", serviceName, () -> {
                writer.write("  virtual ~$LPaginationBase() = default;", serviceName);
            });
            writer.writeNamespaceClose(serviceName);
            writer.writeNamespaceClose("Aws");
        });
        
        writers.flushWriters();
    }
}
