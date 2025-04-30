/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/connect-contact-lens/ConnectContactLensClient.h>
#include <aws/connect-contact-lens/ConnectContactLensEndpointProvider.h>
#include <aws/connect-contact-lens/ConnectContactLensEndpointRules.h>
#include <aws/connect-contact-lens/ConnectContactLensErrorMarshaller.h>
#include <aws/connect-contact-lens/ConnectContactLensErrors.h>
#include <aws/connect-contact-lens/ConnectContactLensRequest.h>
#include <aws/connect-contact-lens/ConnectContactLensServiceClientModel.h>
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/Categories.h>
#include <aws/connect-contact-lens/model/CategoryDetails.h>
#include <aws/connect-contact-lens/model/CharacterOffsets.h>
#include <aws/connect-contact-lens/model/IssueDetected.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsRequest.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsResult.h>
#include <aws/connect-contact-lens/model/PointOfInterest.h>
#include <aws/connect-contact-lens/model/PostContactSummary.h>
#include <aws/connect-contact-lens/model/PostContactSummaryFailureCode.h>
#include <aws/connect-contact-lens/model/PostContactSummaryStatus.h>
#include <aws/connect-contact-lens/model/RealtimeContactAnalysisSegment.h>
#include <aws/connect-contact-lens/model/SentimentValue.h>
#include <aws/connect-contact-lens/model/Transcript.h>

using ConnectContactLensIncludeTest = ::testing::Test;

TEST_F(ConnectContactLensIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ConnectContactLens::ConnectContactLensClient>("ConnectContactLensIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
