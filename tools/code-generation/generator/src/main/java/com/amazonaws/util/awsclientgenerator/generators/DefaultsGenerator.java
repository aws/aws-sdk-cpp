/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.DefaultsModel;


public interface DefaultsGenerator {

    /**
     * Generates all source files for a defaults model
     *
     * @param serviceModel Defaults Model to use in generation.
     * @return
     */
    SdkFileEntry[] generateSourceFiles(final DefaultsModel serviceModel) throws Exception;

}
