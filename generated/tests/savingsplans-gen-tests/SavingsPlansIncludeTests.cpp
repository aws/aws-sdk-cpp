/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/savingsplans/SavingsPlansClient.h>
#include <aws/savingsplans/SavingsPlansEndpointProvider.h>
#include <aws/savingsplans/SavingsPlansEndpointRules.h>
#include <aws/savingsplans/SavingsPlansErrorMarshaller.h>
#include <aws/savingsplans/SavingsPlansErrors.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/savingsplans/SavingsPlansServiceClientModel.h>
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/model/CreateSavingsPlanRequest.h>
#include <aws/savingsplans/model/CreateSavingsPlanResult.h>
#include <aws/savingsplans/model/CurrencyCode.h>
#include <aws/savingsplans/model/DeleteQueuedSavingsPlanRequest.h>
#include <aws/savingsplans/model/DeleteQueuedSavingsPlanResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlanRatesRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlanRatesResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingsRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingsResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansRequest.h>
#include <aws/savingsplans/model/DescribeSavingsPlansResult.h>
#include <aws/savingsplans/model/ListTagsForResourceRequest.h>
#include <aws/savingsplans/model/ListTagsForResourceResult.h>
#include <aws/savingsplans/model/ParentSavingsPlanOffering.h>
#include <aws/savingsplans/model/ReturnSavingsPlanRequest.h>
#include <aws/savingsplans/model/ReturnSavingsPlanResult.h>
#include <aws/savingsplans/model/SavingsPlan.h>
#include <aws/savingsplans/model/SavingsPlanFilter.h>
#include <aws/savingsplans/model/SavingsPlanOffering.h>
#include <aws/savingsplans/model/SavingsPlanOfferingFilterAttribute.h>
#include <aws/savingsplans/model/SavingsPlanOfferingFilterElement.h>
#include <aws/savingsplans/model/SavingsPlanOfferingProperty.h>
#include <aws/savingsplans/model/SavingsPlanOfferingPropertyKey.h>
#include <aws/savingsplans/model/SavingsPlanOfferingRate.h>
#include <aws/savingsplans/model/SavingsPlanOfferingRateFilterElement.h>
#include <aws/savingsplans/model/SavingsPlanOfferingRateProperty.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/savingsplans/model/SavingsPlanRate.h>
#include <aws/savingsplans/model/SavingsPlanRateFilter.h>
#include <aws/savingsplans/model/SavingsPlanRateFilterAttribute.h>
#include <aws/savingsplans/model/SavingsPlanRateFilterName.h>
#include <aws/savingsplans/model/SavingsPlanRateProperty.h>
#include <aws/savingsplans/model/SavingsPlanRatePropertyKey.h>
#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
#include <aws/savingsplans/model/SavingsPlanRateUnit.h>
#include <aws/savingsplans/model/SavingsPlanState.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/SavingsPlansFilterName.h>
#include <aws/savingsplans/model/TagResourceRequest.h>
#include <aws/savingsplans/model/TagResourceResult.h>
#include <aws/savingsplans/model/UntagResourceRequest.h>
#include <aws/savingsplans/model/UntagResourceResult.h>

using SavingsPlansIncludeTest = ::testing::Test;

TEST_F(SavingsPlansIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SavingsPlans::SavingsPlansClient>("SavingsPlansIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
