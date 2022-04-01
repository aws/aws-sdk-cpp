/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import lombok.Data;

import java.util.Set;

@Data
public class CppShapeInformation {
   private final Shape shape;
   private final ServiceModel serviceModel;
   private final String className;
   private final String jsonType = "Aws::Utils::Json::JsonValue";
   private final String jsonViewType = "Aws::Utils::Json::JsonView";
   private final String xmlDocType = "Aws::Utils::Xml::XmlDocument";
   private final String xmlNodeType = "Aws::Utils::Xml::XmlNode";
   private final String exportValue;
   private final String cppType;
   private final Set<String> headerIncludes;
   private final Set<String> sourceIncludes;
   private final String baseClass;
   private final String requestContentType;

   public CppShapeInformation(final Shape shape, final ServiceModel serviceModel) {
       this.shape = shape;
       this.serviceModel = serviceModel;
       className = shape.getName();
       exportValue = CppViewHelper.computeExportValue(serviceModel.getMetadata().getClassNamePrefix());
       cppType = CppViewHelper.computeCppType(shape);
       headerIncludes = CppViewHelper.computeHeaderIncludes(serviceModel.getMetadata().getProjectName(), shape);
       sourceIncludes = CppViewHelper.computeSourceIncludes(serviceModel.getMetadata().getProjectName(), shape);
       baseClass = CppViewHelper.computeBaseClass(serviceModel.getMetadata().getClassNamePrefix(), shape);
       requestContentType = CppViewHelper.computeRequestContentType(serviceModel.getMetadata());
   }
}
