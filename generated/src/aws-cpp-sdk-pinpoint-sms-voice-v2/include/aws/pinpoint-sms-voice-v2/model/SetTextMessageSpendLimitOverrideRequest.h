/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class SetTextMessageSpendLimitOverrideRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetTextMessageSpendLimitOverrideRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTextMessageSpendLimitOverride"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new monthly limit to enforce on text messages.</p>
     */
    inline long long GetMonthlyLimit() const{ return m_monthlyLimit; }

    /**
     * <p>The new monthly limit to enforce on text messages.</p>
     */
    inline bool MonthlyLimitHasBeenSet() const { return m_monthlyLimitHasBeenSet; }

    /**
     * <p>The new monthly limit to enforce on text messages.</p>
     */
    inline void SetMonthlyLimit(long long value) { m_monthlyLimitHasBeenSet = true; m_monthlyLimit = value; }

    /**
     * <p>The new monthly limit to enforce on text messages.</p>
     */
    inline SetTextMessageSpendLimitOverrideRequest& WithMonthlyLimit(long long value) { SetMonthlyLimit(value); return *this;}

  private:

    long long m_monthlyLimit;
    bool m_monthlyLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
