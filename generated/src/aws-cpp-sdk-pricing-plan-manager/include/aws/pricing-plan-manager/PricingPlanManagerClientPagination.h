/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pricing-plan-manager/PricingPlanManagerClient.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsPaginationTraits.h>

namespace Aws {
namespace PricingPlanManager {

using ListSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<PricingPlanManagerClient, Model::ListSubscriptionsRequest,
                                      Pagination::ListSubscriptionsPaginationTraits<PricingPlanManagerClient>>;

}  // namespace PricingPlanManager
}  // namespace Aws
