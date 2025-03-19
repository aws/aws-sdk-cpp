/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/shield/model/AutoRenew.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class UpdateSubscriptionRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API UpdateSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscription"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline AutoRenew GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(AutoRenew value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline UpdateSubscriptionRequest& WithAutoRenew(AutoRenew value) { SetAutoRenew(value); return *this;}
    ///@}
  private:

    AutoRenew m_autoRenew{AutoRenew::NOT_SET};
    bool m_autoRenewHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
