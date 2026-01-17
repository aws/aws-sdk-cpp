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
    
    public static String getServiceName(ServiceShape service) {
        // TODO: This logic should match C2jModelToGeneratorModelTransformer.convertMetadata()
        // to ensure consistent service name generation between legacy and new generators
        
        String serviceId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName());
        
        if (LEGACY_SERVICE_IDS.contains(serviceId.toLowerCase())) {
            // For legacy services, use title trait (serviceFullName equivalent) which includes "Service" suffix
            String title = service.getTrait(TitleTrait.class)
                .map(TitleTrait::getValue)
                .orElse(null);
            if (title != null) {
                return sanitizeServiceAbbreviation(title);
            }
        }
        
        // For new services or legacy without title, use serviceId trait
        return sanitizeServiceAbbreviation(serviceId);
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