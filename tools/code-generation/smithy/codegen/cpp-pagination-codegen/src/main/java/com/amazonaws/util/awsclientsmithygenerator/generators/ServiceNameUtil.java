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
    
    // Legacy service IDs that need special handling to match what the legacy c2j code generator produced
    // This logic is copied from C2jModelToGeneratorModelTransformer.convertMetadata() method
    private static final Set<String> LEGACY_SERVICE_IDS = Set.of(
        "amp", "appintegrations", "amazonappintegrationservice", "billingconductor", "clouddirectory", "cloudfront",
        "cloudsearch", "cloudsearchdomain", "codeartifact", "codestar-notifications",
        "config", "databrew", "elasticache", "emr-containers",
        "entitlement.marketplace", "events", "evidently", "forecast", "forecastquery",
        "grafana", "importexport", "inspector", "lambda", "location", "lookoutvision",
        "m2", "migrationhubstrategy", "mobile", "mobileanalytics", "mq", "nimble",
        "opensearch", "rbin", "rds-data", "redshift-data", "resiliencehub", "rum",
        "sagemaker-a2i-runtime", "sagemaker-edge", "schemas", "sdb", "transcribe",
        "transcribe-streaming", "wisdom", "lex", "lexv2-runtime", "lexv2-models",
        "marketplace-entitlement", "sagemaker-runtime", "awstransfer", "transcribestreaming",
        "dynamodbstreams"
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
        Map.entry("synthetics", "Synthetics")
    );
    
    public static String getServiceName(ServiceShape service) {
        String serviceId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName());
        
        // Check hardcoded mappings first
        String sanitized = sanitizeServiceAbbreviation(serviceId);
        String mapped = SMITHY_TO_C2J_NAMESPACE.get(sanitized.toLowerCase());
        if (mapped != null) {
            return mapped;
        }
        
        if (LEGACY_SERVICE_IDS.contains(serviceId.toLowerCase())) {
            String title = service.getTrait(TitleTrait.class)
                .map(TitleTrait::getValue)
                .orElse(null);
            if (title != null) {
                return sanitizeServiceAbbreviation(title);
            }
        }
        
        return sanitized;
    }
    
    // Match C2jModelToGeneratorModelTransformer.sanitizeServiceAbbreviation() exactly
    private static String sanitizeServiceAbbreviation(String serviceAbbreviation) {
        return serviceAbbreviation.replace(" ", "").replace("-", "").replace("_", "").replace("Amazon", "").replace("AWS", "").replace("/", "");
    }
    
    public static String getC2jServiceName(ServiceShape service, Map<String, String> c2jMap) {
        String sdkId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .trim()
            .toLowerCase()
            .replace(" ", "-");
        
        return c2jMap != null ? c2jMap.getOrDefault(sdkId, sdkId) : sdkId;
    }
}