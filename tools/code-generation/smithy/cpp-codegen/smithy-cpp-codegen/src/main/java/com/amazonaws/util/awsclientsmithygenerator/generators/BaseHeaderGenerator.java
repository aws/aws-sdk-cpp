/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.shapes.ServiceShape;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.List;
import java.util.Map;

public abstract class BaseHeaderGenerator<T> {
    protected final ServiceShape service;
    protected final List<T> operations;
    protected final Map<String, String> serviceMap;
    protected final String smithyServiceName;

    public BaseHeaderGenerator(ServiceShape service, List<T> operations, Map<String, String> serviceMap) {
        this.service = service;
        this.operations = operations;
        this.serviceMap = serviceMap;
        this.smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
    }

    protected abstract void writeSpecificIncludes(CppWriter writer, String serviceName, String smithyServiceName);
    protected abstract void writeSpecificContent(CppWriter writer, String serviceName);

    public final void render(CppWriter writer) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        
        writeHeader(writer);
        writeSpecificIncludes(writer, serviceName, smithyServiceName);
        writeNamespaceOpen(writer, serviceName);
        writeSpecificContent(writer, serviceName);
        writeNamespaceClose(writer, serviceName);
    }

    private void writeHeader(CppWriter writer) {
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("#pragma once");
    }

    private void writeNamespaceOpen(CppWriter writer, String serviceName) {
        writer.writeNamespaceOpen("Aws");
        writer.writeNamespaceOpen(serviceName);
        writer.write("");
    }

    private void writeNamespaceClose(CppWriter writer, String serviceName) {
        writer.writeNamespaceClose(serviceName);
        writer.writeNamespaceClose("Aws");
    }
}