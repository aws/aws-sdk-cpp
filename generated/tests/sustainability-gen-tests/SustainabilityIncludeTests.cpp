/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sustainability/SustainabilityClient.h>
#include <aws/sustainability/SustainabilityEndpointProvider.h>
#include <aws/sustainability/SustainabilityEndpointRules.h>
#include <aws/sustainability/SustainabilityErrorMarshaller.h>
#include <aws/sustainability/SustainabilityErrors.h>
#include <aws/sustainability/SustainabilityRequest.h>
#include <aws/sustainability/SustainabilityServiceClientModel.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/Dimension.h>
#include <aws/sustainability/model/DimensionEntry.h>
#include <aws/sustainability/model/Emissions.h>
#include <aws/sustainability/model/EmissionsType.h>
#include <aws/sustainability/model/EmissionsUnit.h>
#include <aws/sustainability/model/EstimatedCarbonEmissions.h>
#include <aws/sustainability/model/FilterExpression.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesRequest.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesResult.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsRequest.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsResult.h>
#include <aws/sustainability/model/GranularityConfiguration.h>
#include <aws/sustainability/model/TimeGranularity.h>
#include <aws/sustainability/model/TimePeriod.h>

using SustainabilityIncludeTest = ::testing::Test;

TEST_F(SustainabilityIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Sustainability::SustainabilityClient>("SustainabilityIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
