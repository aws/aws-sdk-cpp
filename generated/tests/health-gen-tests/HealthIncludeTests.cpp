/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/health/HealthClient.h>
#include <aws/health/HealthEndpointProvider.h>
#include <aws/health/HealthEndpointRules.h>
#include <aws/health/HealthErrorMarshaller.h>
#include <aws/health/HealthErrors.h>
#include <aws/health/HealthRequest.h>
#include <aws/health/HealthServiceClientModel.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/AccountEntityAggregate.h>
#include <aws/health/model/AffectedEntity.h>
#include <aws/health/model/DateTimeRange.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationResult.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationResult.h>
#include <aws/health/model/DescribeAffectedEntitiesRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesResult.h>
#include <aws/health/model/DescribeEntityAggregatesForOrganizationRequest.h>
#include <aws/health/model/DescribeEntityAggregatesForOrganizationResult.h>
#include <aws/health/model/DescribeEntityAggregatesRequest.h>
#include <aws/health/model/DescribeEntityAggregatesResult.h>
#include <aws/health/model/DescribeEventAggregatesRequest.h>
#include <aws/health/model/DescribeEventAggregatesResult.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationRequest.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationResult.h>
#include <aws/health/model/DescribeEventDetailsRequest.h>
#include <aws/health/model/DescribeEventDetailsResult.h>
#include <aws/health/model/DescribeEventTypesRequest.h>
#include <aws/health/model/DescribeEventTypesResult.h>
#include <aws/health/model/DescribeEventsForOrganizationRequest.h>
#include <aws/health/model/DescribeEventsForOrganizationResult.h>
#include <aws/health/model/DescribeEventsRequest.h>
#include <aws/health/model/DescribeEventsResult.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationRequest.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationResult.h>
#include <aws/health/model/DisableHealthServiceAccessForOrganizationRequest.h>
#include <aws/health/model/EnableHealthServiceAccessForOrganizationRequest.h>
#include <aws/health/model/EntityAccountFilter.h>
#include <aws/health/model/EntityAggregate.h>
#include <aws/health/model/EntityFilter.h>
#include <aws/health/model/EntityStatusCode.h>
#include <aws/health/model/Event.h>
#include <aws/health/model/EventAccountFilter.h>
#include <aws/health/model/EventAggregate.h>
#include <aws/health/model/EventAggregateField.h>
#include <aws/health/model/EventDetails.h>
#include <aws/health/model/EventDetailsErrorItem.h>
#include <aws/health/model/EventFilter.h>
#include <aws/health/model/EventScopeCode.h>
#include <aws/health/model/EventStatusCode.h>
#include <aws/health/model/EventTypeCategory.h>
#include <aws/health/model/EventTypeFilter.h>
#include <aws/health/model/OrganizationAffectedEntitiesErrorItem.h>
#include <aws/health/model/OrganizationEntityAggregate.h>
#include <aws/health/model/OrganizationEvent.h>
#include <aws/health/model/OrganizationEventDetails.h>
#include <aws/health/model/OrganizationEventDetailsErrorItem.h>
#include <aws/health/model/OrganizationEventFilter.h>

using HealthIncludeTest = ::testing::Test;

TEST_F(HealthIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Health::HealthClient>("HealthIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
