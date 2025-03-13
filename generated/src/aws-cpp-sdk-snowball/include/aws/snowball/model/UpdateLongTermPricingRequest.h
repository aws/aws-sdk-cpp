/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class UpdateLongTermPricingRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API UpdateLongTermPricingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLongTermPricing"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const { return m_longTermPricingId; }
    inline bool LongTermPricingIdHasBeenSet() const { return m_longTermPricingIdHasBeenSet; }
    template<typename LongTermPricingIdT = Aws::String>
    void SetLongTermPricingId(LongTermPricingIdT&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::forward<LongTermPricingIdT>(value); }
    template<typename LongTermPricingIdT = Aws::String>
    UpdateLongTermPricingRequest& WithLongTermPricingId(LongTermPricingIdT&& value) { SetLongTermPricingId(std::forward<LongTermPricingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that a device that is ordered with long-term pricing should be
     * replaced with a new device.</p>
     */
    inline const Aws::String& GetReplacementJob() const { return m_replacementJob; }
    inline bool ReplacementJobHasBeenSet() const { return m_replacementJobHasBeenSet; }
    template<typename ReplacementJobT = Aws::String>
    void SetReplacementJob(ReplacementJobT&& value) { m_replacementJobHasBeenSet = true; m_replacementJob = std::forward<ReplacementJobT>(value); }
    template<typename ReplacementJobT = Aws::String>
    UpdateLongTermPricingRequest& WithReplacementJob(ReplacementJobT&& value) { SetReplacementJob(std::forward<ReplacementJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, specifies that the current long-term pricing
     * type for the device should be automatically renewed before the long-term pricing
     * contract expires.</p>
     */
    inline bool GetIsLongTermPricingAutoRenew() const { return m_isLongTermPricingAutoRenew; }
    inline bool IsLongTermPricingAutoRenewHasBeenSet() const { return m_isLongTermPricingAutoRenewHasBeenSet; }
    inline void SetIsLongTermPricingAutoRenew(bool value) { m_isLongTermPricingAutoRenewHasBeenSet = true; m_isLongTermPricingAutoRenew = value; }
    inline UpdateLongTermPricingRequest& WithIsLongTermPricingAutoRenew(bool value) { SetIsLongTermPricingAutoRenew(value); return *this;}
    ///@}
  private:

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;

    Aws::String m_replacementJob;
    bool m_replacementJobHasBeenSet = false;

    bool m_isLongTermPricingAutoRenew{false};
    bool m_isLongTermPricingAutoRenewHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
