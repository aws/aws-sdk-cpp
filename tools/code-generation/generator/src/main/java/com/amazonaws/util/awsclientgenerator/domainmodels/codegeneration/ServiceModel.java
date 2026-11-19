/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTests;
import lombok.AccessLevel;
import lombok.Builder;
import lombok.Data;
import lombok.Getter;
import lombok.Setter;
import org.apache.commons.lang3.tuple.Pair;

import java.util.*;
import java.util.stream.Collectors;

@Data
@Builder(toBuilder = true)
public class ServiceModel {
    String version;
    String runtimeMajorVersion;
    String runtimeMajorVersionUpperBound;
    String runtimeMinorVersion;
    String namespace;
    String serviceName;
    Metadata metadata;
    String documentation;
    String licenseText;
    Map<String, Shape> shapes;
    Map<String, Operation> operations;
    boolean enableVirtualOperations;
    boolean disableSmithyGeneration;
    boolean skipModelGeneration;
    boolean skipEndpointRulesBlob;
    Collection<Error> serviceErrors;
    Collection<CustomPresignedUtility> presigners;
    Map<String, String> queryCompatibleErrorMappings;

    public boolean hasStreamingRequestShapes() {
        return shapes.values().parallelStream().anyMatch(shape -> shape.isRequest() && (shape.hasStreamMembers() || shape.hasEventStreamMembers()));
    }

    public boolean hasEventStreamingRequestShapes() {
        return shapes.values().parallelStream().anyMatch(shape -> shape.isRequest() && shape.hasEventStreamMembers());
    }

    public Collection<Error> getNonCoreServiceErrors() {
        return serviceErrors.stream().filter(e -> !e.isCoreError()).collect(Collectors.toSet());
    }

    public boolean hasSigV4Auth() {
        if(metadata.getSignatureVersion().equals("v4") || metadata.getSignatureVersion().equals("s3v4")) {
            return true;
        }
        return authSchemes.contains("aws.auth#sigv4") || operations.values().parallelStream().anyMatch(operation -> operation.getSignerName().equals("Aws::Auth::SIGV4_SIGNER") || operation.hasSigV4Auth());
    }

    public boolean hasSigV4aAuth() {
        return authSchemes.contains("aws.auth#sigv4a") || operations.values().parallelStream().anyMatch(operation -> operation.getSignerName().equals("Aws::Auth::SIGV4A_SIGNER") || operation.hasSigV4aAuth());
    }

    public boolean hasNoAuth() {
        return authSchemes.contains("smithy.api#noAuth") || operations.values().parallelStream().anyMatch(operation -> operation.getSignerName().equals("Aws::Auth::NULL_SIGNER") || operation.hasNoAuth());
    }

    public boolean hasBearerAuth() {
        if(metadata.getSignatureVersion().equals("bearer")) {
            return true;
        }
        return authSchemes.contains("smithy.api#httpBearerAuth") || operations.values().parallelStream().anyMatch(operation -> operation.getSignerName().equals("Aws::Auth::BEARER_SIGNER") || operation.hasBearerAuth());
    }

    public boolean hasOnlyBearerAuth() {
        if(!metadata.getSignatureVersion().equals("bearer")) {
            return false;
        }
        return authSchemes.size() == 1 && operations.values().parallelStream().allMatch(operation -> operation.getSignerName().equals("Aws::Auth::BEARER_SIGNER"));
    }

    public boolean shouldCreateLegacyBearerConstructor() {
        return !(metadata.getServiceId().equalsIgnoreCase("Bedrock") ||
                metadata.getServiceId().equalsIgnoreCase("Bedrock Runtime") ||
                metadata.getServiceId().equalsIgnoreCase("Bedrock Agent") ||
                metadata.getServiceId().equalsIgnoreCase("Bedrock Agent Runtime") ||
                metadata.getServiceId().equalsIgnoreCase("Bedrock Data Automation") ||
                metadata.getServiceId().equalsIgnoreCase("Bedrock Data Automation Runtime")
        );
    }

    /**
     * Names of the Aws::Client::ClientConfiguration fields this service supports beyond the shared ones.
     * The generated service configuration exposes only these, plus the shared fields.
     */
    private static final java.util.regex.Pattern SIGV4A_ENDPOINT_AUTH_SCHEME =
            java.util.regex.Pattern.compile("\"name\"\\s*:\\s*\"sigv4a\"");

    public List<String> getSupportedClientOptions() {
        List<String> options = new ArrayList<>();

        Set<String> builtIns = new HashSet<>();
        if (endpointRuleSetModel != null && endpointRuleSetModel.getParameters() != null) {
            endpointRuleSetModel.getParameters().values().stream()
                    .map(EndpointRuleSetModel.Parameter::getBuiltIn)
                    .filter(Objects::nonNull)
                    .forEach(builtIns::add);
        }
        if (builtIns.contains("AWS::UseFIPS")) {
            options.add("useFIPS");
        }
        if (builtIns.contains("AWS::UseDualStack")) {
            options.add("useDualStack");
        }
        // Matched by builtIn and by parameter name: some rule sets (e.g. S3 Control) declare AccountId without a builtIn
        // and take its value from the client configuration.
        Set<String> paramNames = endpointRuleSetModel != null && endpointRuleSetModel.getParameters() != null
                ? endpointRuleSetModel.getParameters().keySet() : Collections.emptySet();
        if (builtIns.contains("AWS::Auth::AccountId") || paramNames.contains("AccountId")) {
            options.add("accountId");
        }
        if (builtIns.contains("AWS::Auth::AccountIdEndpointMode") || paramNames.contains("AccountIdEndpointMode")) {
            options.add("accountIdEndpointMode");
        }
        if (metadata.isHasEndpointDiscoveryTrait()) {
            options.add("enableEndpointDiscovery");
        }
        if (operations.values().stream().anyMatch(op -> op.getEndpoint() != null && op.getEndpoint().getHostPrefix() != null)) {
            options.add("enableHostPrefixInjection");
        }
        if (operations.values().stream().anyMatch(Operation::isRequestCompressionRequired)) {
            options.add("requestCompressionConfig");
        }
        if (operations.values().stream().anyMatch(op -> op.isRequestChecksumRequired() || op.getRequestAlgorithmMember() != null
                || (op.getResponseAlgorithms() != null && !op.getResponseAlgorithms().isEmpty()))) {
            options.add("checksumConfig");
        }
        if (hasStreamingRequestShapes()) {
            options.add("disableExpectHeader");
            options.add("httpClientChunkedMode");
            options.add("awsChunkedBufferSize");
        }
        // SigV4a can come from the model's auth traits or from the endpoint rules' auth schemes (e.g. S3 Multi-Region Access Points).
        if (hasSigV4aAuth() || (endpointRules != null && SIGV4A_ENDPOINT_AUTH_SCHEME.matcher(endpointRules).find())) {
            options.add("sigV4aSigningRegionSet");
        }
        return options;
    }

    public Operation getOperationForRequestShapeName(String requestShapeName) {
        for (Map.Entry<String, Operation> opEntry : operations.entrySet()) {
            Operation op = opEntry.getValue();
            if (op.getRequest() != null && op.getRequest().getShape().getName() == requestShapeName) {
                return op;
            }
        }
        return null;
    }

    String endpointRules; // as a blob
    EndpointRuleSetModel endpointRuleSetModel;
    EndpointTests endpointTests;
    ClientContextParams clientContextParams;
    boolean useSmithyClient;
    List<String> authSchemes;
    String rawEndpointRules;
}
