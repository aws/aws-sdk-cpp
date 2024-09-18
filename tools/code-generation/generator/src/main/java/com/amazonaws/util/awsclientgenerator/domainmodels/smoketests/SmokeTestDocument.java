
package com.amazonaws.util.awsclientgenerator.domainmodels.smoketests;

import com.google.gson.annotations.SerializedName;
import java.util.List;
import java.util.Map;

import lombok.Data;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jShape;

@Data
public class SmokeTestDocument {

    @SerializedName("version")
    public int version;

    @SerializedName("testCases")
    public List<TestCase> testCases;

    @Data
    public static class TestCase {

        @SerializedName("id")
        public String id;

        @SerializedName("operationName")
        public String operationName;

        @SerializedName("input")
        public Map<String, Object> input; // Use a Map for flexible key-value pairs

        @SerializedName("expectation")
        public Expectation expectation;

        @SerializedName("config")
        public Config config;

        @SerializedName("tags")
        public List<String> tags;

        @Data
        public static class Expectation {
            @SerializedName("success")
            public Map<String, Object> success;

            @SerializedName("failure")
            public Failure failure;

            @Data
            public static class Failure {
                @SerializedName("errorId")
                public String errorId;
            }
        }

        @Data
        public static class Config {
            @SerializedName("region")
            public String region;

            @SerializedName("sigv4aRegionSet")
            public List<String> sigv4aRegionSet;

            @SerializedName("uri")
            public String uri;

            @SerializedName("useFips")
            public Boolean useFips = false;

            @SerializedName("useDualstack")
            public Boolean useDualstack = false;

            @SerializedName("useAccelerate")
            public Boolean useAccelerate = false;

            @SerializedName("useGlobalEndpoint")
            public Boolean useGlobalEndpoint = false;

            @SerializedName("useArnRegion")
            public Boolean useArnRegion = true;

            @SerializedName("useMultiRegionAccessPoints")
            public Boolean useMultiRegionAccessPoints = true;

            @SerializedName("forcePathStyle")
            public Boolean forcePathStyle = false;

            @SerializedName("useAccountIdRouting")
            public Boolean useAccountIdRouting = true;
        }
    }
}
