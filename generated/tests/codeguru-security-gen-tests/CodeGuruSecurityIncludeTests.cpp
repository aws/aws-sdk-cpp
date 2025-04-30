/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codeguru-security/CodeGuruSecurityClient.h>
#include <aws/codeguru-security/CodeGuruSecurityEndpointProvider.h>
#include <aws/codeguru-security/CodeGuruSecurityEndpointRules.h>
#include <aws/codeguru-security/CodeGuruSecurityErrorMarshaller.h>
#include <aws/codeguru-security/CodeGuruSecurityErrors.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/codeguru-security/CodeGuruSecurityServiceClientModel.h>
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/AccessDeniedException.h>
#include <aws/codeguru-security/model/AccountFindingsMetric.h>
#include <aws/codeguru-security/model/AnalysisType.h>
#include <aws/codeguru-security/model/BatchGetFindingsError.h>
#include <aws/codeguru-security/model/BatchGetFindingsRequest.h>
#include <aws/codeguru-security/model/BatchGetFindingsResult.h>
#include <aws/codeguru-security/model/CategoryWithFindingNum.h>
#include <aws/codeguru-security/model/CodeLine.h>
#include <aws/codeguru-security/model/ConflictException.h>
#include <aws/codeguru-security/model/CreateScanRequest.h>
#include <aws/codeguru-security/model/CreateScanResult.h>
#include <aws/codeguru-security/model/CreateUploadUrlRequest.h>
#include <aws/codeguru-security/model/CreateUploadUrlResult.h>
#include <aws/codeguru-security/model/EncryptionConfig.h>
#include <aws/codeguru-security/model/ErrorCode.h>
#include <aws/codeguru-security/model/FilePath.h>
#include <aws/codeguru-security/model/Finding.h>
#include <aws/codeguru-security/model/FindingIdentifier.h>
#include <aws/codeguru-security/model/FindingMetricsValuePerSeverity.h>
#include <aws/codeguru-security/model/GetAccountConfigurationRequest.h>
#include <aws/codeguru-security/model/GetAccountConfigurationResult.h>
#include <aws/codeguru-security/model/GetFindingsRequest.h>
#include <aws/codeguru-security/model/GetFindingsResult.h>
#include <aws/codeguru-security/model/GetMetricsSummaryRequest.h>
#include <aws/codeguru-security/model/GetMetricsSummaryResult.h>
#include <aws/codeguru-security/model/GetScanRequest.h>
#include <aws/codeguru-security/model/GetScanResult.h>
#include <aws/codeguru-security/model/InternalServerException.h>
#include <aws/codeguru-security/model/ListFindingsMetricsRequest.h>
#include <aws/codeguru-security/model/ListFindingsMetricsResult.h>
#include <aws/codeguru-security/model/ListScansRequest.h>
#include <aws/codeguru-security/model/ListScansResult.h>
#include <aws/codeguru-security/model/ListTagsForResourceRequest.h>
#include <aws/codeguru-security/model/ListTagsForResourceResult.h>
#include <aws/codeguru-security/model/MetricsSummary.h>
#include <aws/codeguru-security/model/Recommendation.h>
#include <aws/codeguru-security/model/Remediation.h>
#include <aws/codeguru-security/model/Resource.h>
#include <aws/codeguru-security/model/ResourceId.h>
#include <aws/codeguru-security/model/ResourceNotFoundException.h>
#include <aws/codeguru-security/model/ScanNameWithFindingNum.h>
#include <aws/codeguru-security/model/ScanState.h>
#include <aws/codeguru-security/model/ScanSummary.h>
#include <aws/codeguru-security/model/ScanType.h>
#include <aws/codeguru-security/model/Severity.h>
#include <aws/codeguru-security/model/Status.h>
#include <aws/codeguru-security/model/SuggestedFix.h>
#include <aws/codeguru-security/model/TagResourceRequest.h>
#include <aws/codeguru-security/model/TagResourceResult.h>
#include <aws/codeguru-security/model/ThrottlingException.h>
#include <aws/codeguru-security/model/UntagResourceRequest.h>
#include <aws/codeguru-security/model/UntagResourceResult.h>
#include <aws/codeguru-security/model/UpdateAccountConfigurationRequest.h>
#include <aws/codeguru-security/model/UpdateAccountConfigurationResult.h>
#include <aws/codeguru-security/model/ValidationException.h>
#include <aws/codeguru-security/model/ValidationExceptionField.h>
#include <aws/codeguru-security/model/ValidationExceptionReason.h>
#include <aws/codeguru-security/model/Vulnerability.h>

using CodeGuruSecurityIncludeTest = ::testing::Test;

TEST_F(CodeGuruSecurityIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeGuruSecurity::CodeGuruSecurityClient>("CodeGuruSecurityIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
