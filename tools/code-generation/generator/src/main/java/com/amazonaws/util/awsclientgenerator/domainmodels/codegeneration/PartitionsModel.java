/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class PartitionsModel {
    @Data
    public static class Partition {
        private String id;
        private Map<String, RegionDescription> regions;

        @Data
        public static class RegionDescription {
            private String description;
        }
    }
    private List<Partition> partitions;
    private String partitionsBlob;
}