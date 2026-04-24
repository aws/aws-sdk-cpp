/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/support/SupportClient.h>
#include <aws/support/SupportEndpointProvider.h>
#include <aws/support/SupportEndpointRules.h>
#include <aws/support/SupportErrorMarshaller.h>
#include <aws/support/SupportErrors.h>
#include <aws/support/SupportRequest.h>
#include <aws/support/SupportServiceClientModel.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/AddAttachmentsToSetRequest.h>
#include <aws/support/model/AddAttachmentsToSetResult.h>
#include <aws/support/model/AddCommunicationToCaseRequest.h>
#include <aws/support/model/AddCommunicationToCaseResult.h>
#include <aws/support/model/Attachment.h>
#include <aws/support/model/AttachmentDetails.h>
#include <aws/support/model/CaseDetails.h>
#include <aws/support/model/Category.h>
#include <aws/support/model/Communication.h>
#include <aws/support/model/CommunicationTypeOptions.h>
#include <aws/support/model/CreateCaseRequest.h>
#include <aws/support/model/CreateCaseResult.h>
#include <aws/support/model/DateInterval.h>
#include <aws/support/model/DescribeAttachmentRequest.h>
#include <aws/support/model/DescribeAttachmentResult.h>
#include <aws/support/model/DescribeCasesRequest.h>
#include <aws/support/model/DescribeCasesResult.h>
#include <aws/support/model/DescribeCommunicationsRequest.h>
#include <aws/support/model/DescribeCommunicationsResult.h>
#include <aws/support/model/DescribeCreateCaseOptionsRequest.h>
#include <aws/support/model/DescribeCreateCaseOptionsResult.h>
#include <aws/support/model/DescribeServicesRequest.h>
#include <aws/support/model/DescribeServicesResult.h>
#include <aws/support/model/DescribeSeverityLevelsRequest.h>
#include <aws/support/model/DescribeSeverityLevelsResult.h>
#include <aws/support/model/DescribeSupportedLanguagesRequest.h>
#include <aws/support/model/DescribeSupportedLanguagesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksResult.h>
#include <aws/support/model/RecentCaseCommunications.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckRequest.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckResult.h>
#include <aws/support/model/ResolveCaseRequest.h>
#include <aws/support/model/ResolveCaseResult.h>
#include <aws/support/model/Service.h>
#include <aws/support/model/SeverityLevel.h>
#include <aws/support/model/SupportedHour.h>
#include <aws/support/model/SupportedLanguage.h>
#include <aws/support/model/TrustedAdvisorCategorySpecificSummary.h>
#include <aws/support/model/TrustedAdvisorCheckDescription.h>
#include <aws/support/model/TrustedAdvisorCheckRefreshStatus.h>
#include <aws/support/model/TrustedAdvisorCheckResult.h>
#include <aws/support/model/TrustedAdvisorCheckSummary.h>
#include <aws/support/model/TrustedAdvisorCostOptimizingSummary.h>
#include <aws/support/model/TrustedAdvisorResourceDetail.h>
#include <aws/support/model/TrustedAdvisorResourcesSummary.h>

using SupportIncludeTest = ::testing::Test;

TEST_F(SupportIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Support::SupportClient>("SupportIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
