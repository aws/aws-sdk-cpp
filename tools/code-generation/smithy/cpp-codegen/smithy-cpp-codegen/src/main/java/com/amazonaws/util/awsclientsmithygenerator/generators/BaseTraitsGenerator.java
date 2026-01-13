/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.ServiceShape;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.List;
import java.util.Map;

public abstract class BaseTraitsGenerator<T> {
    protected final PluginContext context;
    protected final ServiceShape service;
    protected final List<T> operations;
    protected final String smithyServiceName;
    private final CppWriterDelegator writerDelegator;

    public BaseTraitsGenerator(PluginContext context, ServiceShape service, List<T> operations, String smithyServiceName) {
        this.context = context;
        this.service = service;
        this.operations = operations;
        this.smithyServiceName = smithyServiceName;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
    }

    protected abstract String getFileNameForOperation(T operationData);
    protected abstract void generateOperationContent(CppWriter writer, T operationData, String serviceName);

    public final void write() {
        String serviceName = ServiceNameUtil.getServiceName(service);

        for (T operationData : operations) {
            String fileName = getFileNameForOperation(operationData);
            
            writerDelegator.useFileWriter(fileName, writer -> {
                writeHeader(writer);
                generateOperationContent(writer, operationData, serviceName);
            });
        }
        
        writerDelegator.flushWriters();
    }

    private void writeHeader(CppWriter writer) {
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("#pragma once");
    }
}
