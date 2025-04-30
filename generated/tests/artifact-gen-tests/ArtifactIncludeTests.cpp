/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/artifact/ArtifactClient.h>
#include <aws/artifact/ArtifactEndpointProvider.h>
#include <aws/artifact/ArtifactEndpointRules.h>
#include <aws/artifact/ArtifactErrorMarshaller.h>
#include <aws/artifact/ArtifactErrors.h>
#include <aws/artifact/ArtifactRequest.h>
#include <aws/artifact/ArtifactServiceClientModel.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/AcceptanceType.h>
#include <aws/artifact/model/AccountSettings.h>
#include <aws/artifact/model/AgreementType.h>
#include <aws/artifact/model/ConflictException.h>
#include <aws/artifact/model/CustomerAgreementState.h>
#include <aws/artifact/model/CustomerAgreementSummary.h>
#include <aws/artifact/model/GetAccountSettingsRequest.h>
#include <aws/artifact/model/GetAccountSettingsResult.h>
#include <aws/artifact/model/GetReportMetadataRequest.h>
#include <aws/artifact/model/GetReportMetadataResult.h>
#include <aws/artifact/model/GetReportRequest.h>
#include <aws/artifact/model/GetReportResult.h>
#include <aws/artifact/model/GetTermForReportRequest.h>
#include <aws/artifact/model/GetTermForReportResult.h>
#include <aws/artifact/model/InternalServerException.h>
#include <aws/artifact/model/ListCustomerAgreementsRequest.h>
#include <aws/artifact/model/ListCustomerAgreementsResult.h>
#include <aws/artifact/model/ListReportsRequest.h>
#include <aws/artifact/model/ListReportsResult.h>
#include <aws/artifact/model/NotificationSubscriptionStatus.h>
#include <aws/artifact/model/PublishedState.h>
#include <aws/artifact/model/PutAccountSettingsRequest.h>
#include <aws/artifact/model/PutAccountSettingsResult.h>
#include <aws/artifact/model/ReportDetail.h>
#include <aws/artifact/model/ReportSummary.h>
#include <aws/artifact/model/ResourceNotFoundException.h>
#include <aws/artifact/model/ServiceQuotaExceededException.h>
#include <aws/artifact/model/ThrottlingException.h>
#include <aws/artifact/model/UploadState.h>
#include <aws/artifact/model/ValidationException.h>
#include <aws/artifact/model/ValidationExceptionField.h>
#include <aws/artifact/model/ValidationExceptionReason.h>

using ArtifactIncludeTest = ::testing::Test;

TEST_F(ArtifactIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Artifact::ArtifactClient>("ArtifactIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
