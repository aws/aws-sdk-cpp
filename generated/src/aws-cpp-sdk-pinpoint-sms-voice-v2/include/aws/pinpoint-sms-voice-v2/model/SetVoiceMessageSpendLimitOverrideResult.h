/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class SetVoiceMessageSpendLimitOverrideResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetVoiceMessageSpendLimitOverrideResult();
    AWS_PINPOINTSMSVOICEV2_API SetVoiceMessageSpendLimitOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SetVoiceMessageSpendLimitOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current monthly limit to enforce on sending voice messages.</p>
     */
    inline long long GetMonthlyLimit() const{ return m_monthlyLimit; }

    /**
     * <p>The current monthly limit to enforce on sending voice messages.</p>
     */
    inline void SetMonthlyLimit(long long value) { m_monthlyLimit = value; }

    /**
     * <p>The current monthly limit to enforce on sending voice messages.</p>
     */
    inline SetVoiceMessageSpendLimitOverrideResult& WithMonthlyLimit(long long value) { SetMonthlyLimit(value); return *this;}

  private:

    long long m_monthlyLimit;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
