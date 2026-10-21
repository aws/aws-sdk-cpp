/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.aws.traits.ServiceTrait;

import java.util.Map;
import java.util.Optional;

public final class ServiceNameUtil {
    
    // S3-CRT projection prefix for detecting S3-CRT builds from projection name
    private static final String S3_CRT_PROJECTION_PREFIX = "s3-crt";
    private static final String S3_CRT_NAMESPACE = "S3Crt";
    
    // SEP exception: legacy services with NO serviceId in their C2J model (generated as Smithy
    // "mock" projections). They cannot be keyed by serviceId, so their already-released namespaces
    // are preserved here, keyed by the normalized (sanitized, lower-cased) sdkId. Every other
    // preserved namespace lives in the shared, serviceId-keyed table (ServiceNamespaceTable).
    private static final Map<String, String> SERVICE_ID_LESS_NAMESPACES = Map.ofEntries(
        Map.entry("importexport", "ImportExport"),
        Map.entry("simpledb", "SimpleDB")
    );

    public static String getServiceName(ServiceShape service) {
        // S3-CRT override: when service is S3-CRT, use S3Crt namespace
        if (isS3CrtProjection(service)) {
            return S3_CRT_NAMESPACE;
        }

        // Namespace is derived from the codegen id (sdkId == C2J serviceId) ONLY, per Revision 2 of
        // the Service ID SEP. Docgen ids (smithy.api#title) MUST NOT be read. Pre-rev2 names that
        // diverge from the sdkId-derived name are preserved via the shared identifier table.
        String serviceId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName());

        String sanitized = sanitizeServiceAbbreviation(serviceId);
        String key = sanitized.toLowerCase();

        // SEP exception: serviceId-less legacy (mock) services.
        String exception = SERVICE_ID_LESS_NAMESPACES.get(key);
        if (exception != null) {
            return exception;
        }

        // Preserved divergent name from the shared Service ID SEP table (keyed by serviceId).
        String preserved = ServiceNamespaceTable.getByNormalizedKey(key);
        if (preserved != null) {
            return preserved;
        }

        // SEP uniqueness guard: a sdkId-derived name must never collide with a preserved one.
        if (ServiceNamespaceTable.isReservedNamespace(sanitized)) {
            throw new IllegalStateException(String.format(
                "Derived namespace '%s' for serviceId '%s' collides with a reserved namespace in %s",
                sanitized, serviceId, "service-namespace-table.json"));
        }

        return sanitized;
    }
    
    public static String getServiceNameUpperCamel(ServiceShape service) {
        return capitalize(getServiceName(service));
    }
    
    public static String capitalize(String str) {
        return str.substring(0, 1).toUpperCase() + str.substring(1);
    }
    
    // Match C2jModelToGeneratorModelTransformer.sanitizeServiceAbbreviation() exactly
    public static String sanitizeServiceAbbreviation(String serviceAbbreviation) {
        return serviceAbbreviation.replace(" ", "").replace("-", "").replace("_", "").replace("Amazon", "").replace("AWS", "").replace("/", "");
    }
    
    public static String getSmithyServiceName(ServiceShape service, Map<String, String> serviceMap) {
        // S3-CRT override: use s3-crt as the smithy service name for file paths
        if (isS3CrtProjection(service)) {
            return S3_CRT_PROJECTION_PREFIX;
        }
        
        String sdkId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .trim()
            .toLowerCase()
            .replace(" ", "-");
        
        return serviceMap != null ? serviceMap.getOrDefault(sdkId, sdkId) : sdkId;
    }

    /**
     * Returns the export macro for a service (e.g., "AWS_KINESIS_API").
     * Follows C2J convention: AWS_{UPPERCASED_SERVICE_NAME}_API
     *
     * @param service The service shape to generate the macro for
     * @param serviceMap Service ID mappings for namespace overrides (reserved for future consistency with getSmithyServiceName)
     * @return The export macro in format AWS_{SERVICE_NAME}_API
     */
    public static String getExportMacro(ServiceShape service, Map<String, String> serviceMap) {
        String serviceName = getServiceName(service);
        return "AWS_" + serviceName.toUpperCase() + "_API";
    }

    /**
     * Returns the hidden-visibility macro for a service (e.g., "AWS_KINESIS_LOCAL").
     * Follows C2J convention: AWS_{UPPERCASED_SERVICE_NAME}_LOCAL
     *
     * @param service The service shape to generate the macro for
     * @param serviceMap Service ID mappings, used to resolve the key into namespaceMap
     * @param namespaceMap Namespace overrides, keyed by smithy service name; the macro must follow the
     *                     override because the C2J-generated {@code <Prefix>_EXPORTS.h} defines it off
     *                     {@code metadata.classNamePrefix}
     * @return The local macro in format AWS_{SERVICE_NAME}_LOCAL
     */
    public static String getLocalMacro(ServiceShape service, Map<String, String> serviceMap,
                                       Map<String, String> namespaceMap) {
        return Optional.ofNullable(namespaceMap.get(getSmithyServiceName(service, serviceMap)))
            .orElseGet(() -> getServiceName(service))
            .toUpperCase()
            .transform(name -> "AWS_" + name + "_LOCAL");
    }

    public static boolean isS3CrtProjection(ServiceShape service) {
        String serviceId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName());
        return "s3-crt".equals(serviceId.toLowerCase());
    }

    /**
     * Process service shape for S3-CRT projection by injecting s3-crt service ID
     */
    public static ServiceShape processS3CrtProjection(ServiceShape service, String projectionName) {
        if (!projectionName.toLowerCase().startsWith("s3-crt")) {
            return service;
        }
        
        return service.toBuilder()
            .addTrait(ServiceTrait.builder()
                .sdkId("s3-crt")
                .arnNamespace(service.getTrait(ServiceTrait.class).map(ServiceTrait::getArnNamespace).orElse(null))
                .cloudFormationName(service.getTrait(ServiceTrait.class).map(ServiceTrait::getCloudFormationName).orElse(null))
                .cloudTrailEventSource(service.getTrait(ServiceTrait.class).map(ServiceTrait::getCloudTrailEventSource).orElse(null))
                .docId(service.getTrait(ServiceTrait.class).map(trait -> trait.getSdkId()).orElse(null))
                .endpointPrefix(service.getTrait(ServiceTrait.class).map(ServiceTrait::getEndpointPrefix).orElse(null))
                .build())
            .build();
    }
}