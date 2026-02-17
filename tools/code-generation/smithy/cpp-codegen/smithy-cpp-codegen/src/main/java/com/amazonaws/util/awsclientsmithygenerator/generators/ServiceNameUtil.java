/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.traits.TitleTrait;
import java.util.Map;
import java.util.Set;

public final class ServiceNameUtil {
    
    // S3-CRT projection prefix for detecting S3-CRT builds from projection name
    private static final String S3_CRT_PROJECTION_PREFIX = "s3-crt";
    private static final String S3_CRT_NAMESPACE = "S3Crt";
    
    // Legacy service IDs that need special handling to match what the legacy c2j code generator produced
    // This logic is copied from C2jModelToGeneratorModelTransformer.convertMetadata() method
    // Hardcoded mappings for legacy services where C2J used fullServiceName for file naming
    // Maps serviceId (lowercase, sanitized) to the sanitized fullServiceName from C2J models
    private static final Map<String, String> LEGACY_FULL_SERVICE_NAME_MAP = Map.ofEntries(
        Map.entry("amp", "PrometheusService"),
        Map.entry("appintegrations", "AppIntegrationsService"),
        Map.entry("billingconductor", "BillingConductor"),
        Map.entry("chatbot", "chatbot"),
        Map.entry("clouddirectory", "CloudDirectory"),
        Map.entry("cloudfront", "CloudFront"),
        Map.entry("cloudsearch", "CloudSearch"),
        Map.entry("cloudsearchdomain", "CloudSearchDomain"),
        Map.entry("codeartifact", "CodeArtifact"),
        Map.entry("codestarnotifications", "CodeStarNotifications"),
        Map.entry("configservice", "ConfigService"),
        Map.entry("databrew", "GlueDataBrew"),
        Map.entry("deadline", "deadline"),
        Map.entry("elasticache", "ElastiCache"),
        Map.entry("emrcontainers", "EMRContainers"),
        Map.entry("marketplaceentitlementservice", "MarketplaceEntitlementService"),
        Map.entry("cloudwatchevents", "CloudWatchEvents"),
        Map.entry("evidently", "CloudWatchEvidently"),
        Map.entry("forecast", "ForecastService"),
        Map.entry("forecastquery", "ForecastQueryService"),
        Map.entry("grafana", "ManagedGrafana"),
        Map.entry("importexport", "ImportExport"),
        Map.entry("inspector", "Inspector"),
        Map.entry("lambda", "Lambda"),
        Map.entry("location", "LocationService"),
        Map.entry("m2", "MainframeModernization"),
        Map.entry("migrationhubstrategy", "MigrationHubStrategyRecommendations"),
        Map.entry("mq", "MQ"),
        Map.entry("opensearch", "OpenSearchService"),
        Map.entry("rbin", "RecycleBin"),
        Map.entry("rdsdata", "RDSDataService"),
        Map.entry("redshiftdata", "RedshiftDataAPIService"),
        Map.entry("resiliencehub", "ResilienceHub"),
        Map.entry("rum", "CloudWatchRUM"),
        Map.entry("lexruntimeservice", "LexRuntimeService"),
        Map.entry("lexruntimev2", "LexRuntimeV2"),
        Map.entry("lexmodelsv2", "LexModelsV2"),
        Map.entry("sagemakerruntime", "SageMakerRuntime"),
        Map.entry("sagemakera2iruntime", "AugmentedAIRuntime"),
        Map.entry("sagemakeredge", "SagemakerEdgeManager"),
        Map.entry("schemas", "Schemas"),
        Map.entry("simpledb", "SimpleDB"),
        Map.entry("dynamodbstreams", "DynamoDBStreams"),
        Map.entry("transcribe", "TranscribeService"),
        Map.entry("transcribestreaming", "TranscribeStreamingService"),
        Map.entry("transfer", "TransferFamily"),
        Map.entry("wisdom", "ConnectWisdomService"),
        Map.entry("marketplaceagreement", "MarketplaceAgreementService")
    );
    
    // TODO: Remove hardcoded mappings once Smithy models include serviceAbbreviation trait
    // Smithy sdkId matches C2J serviceId, but C2J prioritizes serviceAbbreviation (which Smithy lacks).
    // 18 of 66 services where C2J abbrev != serviceId require these mappings to match C2J output.
    // Hardcoded mappings where Smithy sdkId doesn't match C2J serviceAbbreviation
    private static final Map<String, String> SMITHY_TO_C2J_NAMESPACE = Map.ofEntries(
        Map.entry("b2bi", "B2BI"),
        Map.entry("cloudcontrol", "CloudControlApi"),
        Map.entry("ecrpublic", "ECRPublic"),
        Map.entry("evs", "EVS"),
        Map.entry("finspacedata", "FinSpaceData"),
        Map.entry("fis", "FIS"),
        Map.entry("identitystore", "IdentityStore"),
        Map.entry("inspectorscan", "inspectorscan"),
        Map.entry("iotdeviceadvisor", "IoTDeviceAdvisor"),
        Map.entry("ivs", "IVS"),
        Map.entry("ivsrealtime", "ivsrealtime"),
        Map.entry("kinesisvideosignaling", "KinesisVideoSignalingChannels"),
        Map.entry("marketplaceagreement", "AgreementService"),
        Map.entry("mediapackagev2", "mediapackagev2"),
        Map.entry("savingsplans", "SavingsPlans"),
        Map.entry("servicecatalogappregistry", "AppRegistry"),
        Map.entry("sesv2", "SESV2"),
        Map.entry("synthetics", "Synthetics"),
        Map.entry("transfer", "Transfer")
    );
    
    public static String getServiceName(ServiceShape service) {
        // S3-CRT override: when service is S3-CRT, use S3Crt namespace
        if (isS3CrtProjection(service)) {
            return S3_CRT_NAMESPACE;
        }
        
        String serviceId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName());
        
        String sanitized = sanitizeServiceAbbreviation(serviceId);
        
        // Check serviceAbbreviation mappings first (highest priority in C2J)
        String mapped = SMITHY_TO_C2J_NAMESPACE.get(sanitized.toLowerCase());
        if (mapped != null) {
            return mapped;
        }
        
        // Check legacy fullServiceName mappings (fallback when serviceAbbreviation missing)
        String legacyName = LEGACY_FULL_SERVICE_NAME_MAP.get(sanitized.toLowerCase());
        if (legacyName != null) {
            return legacyName;
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
    private static String sanitizeServiceAbbreviation(String serviceAbbreviation) {
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