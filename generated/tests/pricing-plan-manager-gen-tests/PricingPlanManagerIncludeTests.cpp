/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pricing-plan-manager/PricingPlanManagerClient.h>
#include <aws/pricing-plan-manager/PricingPlanManagerClientPagination.h>
#include <aws/pricing-plan-manager/PricingPlanManagerEndpointProvider.h>
#include <aws/pricing-plan-manager/PricingPlanManagerErrorMarshaller.h>
#include <aws/pricing-plan-manager/PricingPlanManagerErrors.h>
#include <aws/pricing-plan-manager/PricingPlanManagerPaginationBase.h>
#include <aws/pricing-plan-manager/PricingPlanManagerRequest.h>
#include <aws/pricing-plan-manager/PricingPlanManagerServiceClientModel.h>
#include <aws/pricing-plan-manager/PricingPlanManagerWaiter.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/internal/PricingPlanManagerEndpointRules.h>
#include <aws/pricing-plan-manager/model/ApprovalMode.h>
#include <aws/pricing-plan-manager/model/ApprovePaidSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/ApprovePaidSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/AssociateResourcesToSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/AssociateResourcesToSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionChangeRequest.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionChangeResult.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/ConflictException.h>
#include <aws/pricing-plan-manager/model/CreateSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/CreateSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/DisassociateResourcesFromSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/DisassociateResourcesFromSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/GetSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/GetSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsPaginationTraits.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsRequest.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsResult.h>
#include <aws/pricing-plan-manager/model/ResourceNotFoundException.h>
#include <aws/pricing-plan-manager/model/ScheduledChange.h>
#include <aws/pricing-plan-manager/model/ScheduledChangeType.h>
#include <aws/pricing-plan-manager/model/Status.h>
#include <aws/pricing-plan-manager/model/Subscription.h>
#include <aws/pricing-plan-manager/model/SubscriptionSummary.h>
#include <aws/pricing-plan-manager/model/UpdateSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/UpdateSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/ValidationException.h>

using PricingPlanManagerIncludeTest = ::testing::Test;

TEST_F(PricingPlanManagerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PricingPlanManager::PricingPlanManagerClient>("PricingPlanManagerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
