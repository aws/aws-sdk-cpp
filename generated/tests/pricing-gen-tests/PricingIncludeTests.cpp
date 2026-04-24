/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pricing/PricingClient.h>
#include <aws/pricing/PricingEndpointProvider.h>
#include <aws/pricing/PricingEndpointRules.h>
#include <aws/pricing/PricingErrorMarshaller.h>
#include <aws/pricing/PricingErrors.h>
#include <aws/pricing/PricingRequest.h>
#include <aws/pricing/PricingServiceClientModel.h>
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/model/AttributeValue.h>
#include <aws/pricing/model/DescribeServicesRequest.h>
#include <aws/pricing/model/DescribeServicesResult.h>
#include <aws/pricing/model/Filter.h>
#include <aws/pricing/model/FilterType.h>
#include <aws/pricing/model/GetAttributeValuesRequest.h>
#include <aws/pricing/model/GetAttributeValuesResult.h>
#include <aws/pricing/model/GetPriceListFileUrlRequest.h>
#include <aws/pricing/model/GetPriceListFileUrlResult.h>
#include <aws/pricing/model/GetProductsRequest.h>
#include <aws/pricing/model/GetProductsResult.h>
#include <aws/pricing/model/ListPriceListsRequest.h>
#include <aws/pricing/model/ListPriceListsResult.h>
#include <aws/pricing/model/PriceList.h>
#include <aws/pricing/model/Service.h>

using PricingIncludeTest = ::testing::Test;

TEST_F(PricingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Pricing::PricingClient>("PricingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
