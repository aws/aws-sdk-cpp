/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PricingPlanManager {

template <typename DerivedClient>
class PricingPlanManagerPaginationBase {
 public:
  /**
   * Create a paginator for ListSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                    Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>
  ListSubscriptionsPaginator(const Model::ListSubscriptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                             Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PricingPlanManager
}  // namespace Aws
