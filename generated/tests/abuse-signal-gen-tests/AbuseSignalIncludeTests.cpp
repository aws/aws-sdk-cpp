/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/abuse-signal/AbuseSignalClient.h>
#include <aws/abuse-signal/AbuseSignalClientPagination.h>
#include <aws/abuse-signal/AbuseSignalEndpointProvider.h>
#include <aws/abuse-signal/AbuseSignalErrorMarshaller.h>
#include <aws/abuse-signal/AbuseSignalErrors.h>
#include <aws/abuse-signal/AbuseSignalPaginationBase.h>
#include <aws/abuse-signal/AbuseSignalRequest.h>
#include <aws/abuse-signal/AbuseSignalServiceClientModel.h>
#include <aws/abuse-signal/AbuseSignalWaiter.h>
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/internal/AbuseSignalEndpointRules.h>
#include <aws/abuse-signal/model/CreateAbuseReportRequest.h>
#include <aws/abuse-signal/model/CreateAbuseReportResult.h>
#include <aws/abuse-signal/model/GetAbuseReportStatusRequest.h>
#include <aws/abuse-signal/model/GetAbuseReportStatusResult.h>
#include <aws/abuse-signal/model/InternalServerException.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesPaginationTraits.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesRequest.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesResult.h>
#include <aws/abuse-signal/model/ReasonCode.h>
#include <aws/abuse-signal/model/ReportData.h>
#include <aws/abuse-signal/model/ReportStatusListItem.h>
#include <aws/abuse-signal/model/ReportSubmissionStatus.h>
#include <aws/abuse-signal/model/ResourceNotFoundException.h>
#include <aws/abuse-signal/model/SubmissionRequirement.h>
#include <aws/abuse-signal/model/SubmissionRequirementException.h>
#include <aws/abuse-signal/model/ThrottlingException.h>
#include <aws/abuse-signal/model/ValidationException.h>
#include <aws/abuse-signal/model/ValidationExceptionField.h>

using AbuseSignalIncludeTest = ::testing::Test;

TEST_F(AbuseSignalIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AbuseSignal::AbuseSignalClient>("AbuseSignalIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
