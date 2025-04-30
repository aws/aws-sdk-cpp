/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/billing/BillingClient.h>
#include <aws/billing/BillingEndpointProvider.h>
#include <aws/billing/BillingEndpointRules.h>
#include <aws/billing/BillingErrorMarshaller.h>
#include <aws/billing/BillingErrors.h>
#include <aws/billing/BillingRequest.h>
#include <aws/billing/BillingServiceClientModel.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ActiveTimeRange.h>
#include <aws/billing/model/BillingViewElement.h>
#include <aws/billing/model/BillingViewListElement.h>
#include <aws/billing/model/BillingViewType.h>
#include <aws/billing/model/ConflictException.h>
#include <aws/billing/model/CreateBillingViewRequest.h>
#include <aws/billing/model/CreateBillingViewResult.h>
#include <aws/billing/model/DeleteBillingViewRequest.h>
#include <aws/billing/model/DeleteBillingViewResult.h>
#include <aws/billing/model/Dimension.h>
#include <aws/billing/model/DimensionValues.h>
#include <aws/billing/model/Expression.h>
#include <aws/billing/model/GetBillingViewRequest.h>
#include <aws/billing/model/GetBillingViewResult.h>
#include <aws/billing/model/GetResourcePolicyRequest.h>
#include <aws/billing/model/GetResourcePolicyResult.h>
#include <aws/billing/model/ListBillingViewsRequest.h>
#include <aws/billing/model/ListBillingViewsResult.h>
#include <aws/billing/model/ListSourceViewsForBillingViewRequest.h>
#include <aws/billing/model/ListSourceViewsForBillingViewResult.h>
#include <aws/billing/model/ListTagsForResourceRequest.h>
#include <aws/billing/model/ListTagsForResourceResult.h>
#include <aws/billing/model/ResourceNotFoundException.h>
#include <aws/billing/model/ResourceTag.h>
#include <aws/billing/model/ServiceQuotaExceededException.h>
#include <aws/billing/model/TagResourceRequest.h>
#include <aws/billing/model/TagResourceResult.h>
#include <aws/billing/model/TagValues.h>
#include <aws/billing/model/UntagResourceRequest.h>
#include <aws/billing/model/UntagResourceResult.h>
#include <aws/billing/model/UpdateBillingViewRequest.h>
#include <aws/billing/model/UpdateBillingViewResult.h>
#include <aws/billing/model/ValidationException.h>
#include <aws/billing/model/ValidationExceptionField.h>
#include <aws/billing/model/ValidationExceptionReason.h>

using BillingIncludeTest = ::testing::Test;

TEST_F(BillingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Billing::BillingClient>("BillingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
