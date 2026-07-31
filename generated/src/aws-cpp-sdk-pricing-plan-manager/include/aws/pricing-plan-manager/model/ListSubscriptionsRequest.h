/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManagerRequest.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PricingPlanManager {
namespace Model {

/**
 */
class ListSubscriptionsRequest : public PricingPlanManagerRequest {
 public:
  AWS_PRICINGPLANMANAGER_API ListSubscriptionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptions"; }

  AWS_PRICINGPLANMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A token from a previous <code>ListSubscriptions</code> response. If the
   * response included a <code>nextToken</code>, there are more results available.
   * Pass this value to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSubscriptionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
