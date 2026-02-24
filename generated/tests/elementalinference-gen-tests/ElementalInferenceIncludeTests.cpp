/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/elementalinference/ElementalInferenceClient.h>
#include <aws/elementalinference/ElementalInferenceEndpointProvider.h>
#include <aws/elementalinference/ElementalInferenceEndpointRules.h>
#include <aws/elementalinference/ElementalInferenceErrorMarshaller.h>
#include <aws/elementalinference/ElementalInferenceErrors.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInferenceServiceClientModel.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/AssociateFeedRequest.h>
#include <aws/elementalinference/model/AssociateFeedResult.h>
#include <aws/elementalinference/model/ClippingConfig.h>
#include <aws/elementalinference/model/CreateFeedRequest.h>
#include <aws/elementalinference/model/CreateFeedResult.h>
#include <aws/elementalinference/model/CreateOutput.h>
#include <aws/elementalinference/model/CroppingConfig.h>
#include <aws/elementalinference/model/DeleteFeedRequest.h>
#include <aws/elementalinference/model/DeleteFeedResult.h>
#include <aws/elementalinference/model/DisassociateFeedRequest.h>
#include <aws/elementalinference/model/DisassociateFeedResult.h>
#include <aws/elementalinference/model/FeedAssociation.h>
#include <aws/elementalinference/model/FeedStatus.h>
#include <aws/elementalinference/model/FeedSummary.h>
#include <aws/elementalinference/model/GetFeedRequest.h>
#include <aws/elementalinference/model/GetFeedResult.h>
#include <aws/elementalinference/model/GetOutput.h>
#include <aws/elementalinference/model/ListFeedsRequest.h>
#include <aws/elementalinference/model/ListFeedsResult.h>
#include <aws/elementalinference/model/ListTagsForResourceRequest.h>
#include <aws/elementalinference/model/ListTagsForResourceResult.h>
#include <aws/elementalinference/model/OutputConfig.h>
#include <aws/elementalinference/model/OutputStatus.h>
#include <aws/elementalinference/model/TagResourceRequest.h>
#include <aws/elementalinference/model/UntagResourceRequest.h>
#include <aws/elementalinference/model/UpdateFeedRequest.h>
#include <aws/elementalinference/model/UpdateFeedResult.h>
#include <aws/elementalinference/model/UpdateOutput.h>

using ElementalInferenceIncludeTest = ::testing::Test;

TEST_F(ElementalInferenceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ElementalInference::ElementalInferenceClient>("ElementalInferenceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
