/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientsmithygenerator;

import com.amazonaws.util.awsclientsmithygenerator.CliOptions.CliOptions;
import com.amazonaws.util.awsclientsmithygenerator.generators.SmithyParser;

public class main {

    public static void main(String[] args) {
        try {
            final CliOptions options = CliOptions.BuildFromInput(args);
            final SmithyParser parser = SmithyParser.BuildFromServiceName(options.GetServiceName(),
                    options.GetSmithyModelPath());
            parser.GenerateTests();
        } catch (Exception e) {
            System.out.println("Failed to generate code: " + e.getMessage());
        }
    }
}
