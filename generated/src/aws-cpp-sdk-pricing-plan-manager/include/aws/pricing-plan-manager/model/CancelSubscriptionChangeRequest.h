/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManagerRequest.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PricingPlanManager {
namespace Model {

/**
 */
class CancelSubscriptionChangeRequest : public PricingPlanManagerRequest {
 public:
  AWS_PRICINGPLANMANAGER_API CancelSubscriptionChangeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelSubscriptionChange"; }

  AWS_PRICINGPLANMANAGER_API Aws::String SerializePayload() const override;

  AWS_PRICINGPLANMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the subscription whose pending change you want to cancel.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CancelSubscriptionChangeRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>ETag</code> value from a previous <code>GetSubscription</code> or
   * <code>ListSubscriptions</code> response.</p>
   */
  inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
  inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
  template <typename IfMatchT = Aws::String>
  void SetIfMatch(IfMatchT&& value) {
    m_ifMatchHasBeenSet = true;
    m_ifMatch = std::forward<IfMatchT>(value);
  }
  template <typename IfMatchT = Aws::String>
  CancelSubscriptionChangeRequest& WithIfMatch(IfMatchT&& value) {
    SetIfMatch(std::forward<IfMatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the request is
   * handled only once.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CancelSubscriptionChangeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_ifMatch;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_arnHasBeenSet = false;
  bool m_ifMatchHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
