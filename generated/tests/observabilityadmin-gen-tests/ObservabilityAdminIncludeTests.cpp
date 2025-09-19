/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/observabilityadmin/ObservabilityAdminClient.h>
#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <aws/observabilityadmin/ObservabilityAdminEndpointRules.h>
#include <aws/observabilityadmin/ObservabilityAdminErrorMarshaller.h>
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AccessDeniedException.h>
#include <aws/observabilityadmin/model/CentralizationFailureReason.h>
#include <aws/observabilityadmin/model/CentralizationRule.h>
#include <aws/observabilityadmin/model/CentralizationRuleDestination.h>
#include <aws/observabilityadmin/model/CentralizationRuleSource.h>
#include <aws/observabilityadmin/model/CentralizationRuleSummary.h>
#include <aws/observabilityadmin/model/CreateCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/CreateCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/DeleteCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/DeleteTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/DeleteTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/DestinationLogsConfiguration.h>
#include <aws/observabilityadmin/model/DestinationType.h>
#include <aws/observabilityadmin/model/EncryptedLogGroupStrategy.h>
#include <aws/observabilityadmin/model/EncryptionConflictResolutionStrategy.h>
#include <aws/observabilityadmin/model/EncryptionStrategy.h>
#include <aws/observabilityadmin/model/GetCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusResult.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/InternalServerException.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryResult.h>
#include <aws/observabilityadmin/model/ListTagsForResourceRequest.h>
#include <aws/observabilityadmin/model/ListTagsForResourceResult.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesResult.h>
#include <aws/observabilityadmin/model/LogsBackupConfiguration.h>
#include <aws/observabilityadmin/model/LogsEncryptionConfiguration.h>
#include <aws/observabilityadmin/model/ResourceType.h>
#include <aws/observabilityadmin/model/RuleHealth.h>
#include <aws/observabilityadmin/model/ServiceQuotaExceededException.h>
#include <aws/observabilityadmin/model/SourceLogsConfiguration.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/Status.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/TagResourceRequest.h>
#include <aws/observabilityadmin/model/TelemetryConfiguration.h>
#include <aws/observabilityadmin/model/TelemetryDestinationConfiguration.h>
#include <aws/observabilityadmin/model/TelemetryRule.h>
#include <aws/observabilityadmin/model/TelemetryRuleSummary.h>
#include <aws/observabilityadmin/model/TelemetryState.h>
#include <aws/observabilityadmin/model/TelemetryType.h>
#include <aws/observabilityadmin/model/UntagResourceRequest.h>
#include <aws/observabilityadmin/model/UpdateCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/UpdateCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/VPCFlowLogParameters.h>

using ObservabilityAdminIncludeTest = ::testing::Test;

TEST_F(ObservabilityAdminIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ObservabilityAdmin::ObservabilityAdminClient>("ObservabilityAdminIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
