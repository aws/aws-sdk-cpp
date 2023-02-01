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
  class DeleteVoiceMessageSpendLimitOverrideResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteVoiceMessageSpendLimitOverrideResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteVoiceMessageSpendLimitOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteVoiceMessageSpendLimitOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current monthly limit, in US dollars.</p>
     */
    inline long long GetMonthlyLimit() const{ return m_monthlyLimit; }

    /**
     * <p>The current monthly limit, in US dollars.</p>
     */
    inline void SetMonthlyLimit(long long value) { m_monthlyLimit = value; }

    /**
     * <p>The current monthly limit, in US dollars.</p>
     */
    inline DeleteVoiceMessageSpendLimitOverrideResult& WithMonthlyLimit(long long value) { SetMonthlyLimit(value); return *this;}

  private:

    long long m_monthlyLimit;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
