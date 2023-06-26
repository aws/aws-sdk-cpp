﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class SetTextMessageSpendLimitOverrideResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetTextMessageSpendLimitOverrideResult();
    AWS_PINPOINTSMSVOICEV2_API SetTextMessageSpendLimitOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SetTextMessageSpendLimitOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current monthly limit to enforce on sending text messages.</p>
     */
    inline long long GetMonthlyLimit() const{ return m_monthlyLimit; }

    /**
     * <p>The current monthly limit to enforce on sending text messages.</p>
     */
    inline void SetMonthlyLimit(long long value) { m_monthlyLimit = value; }

    /**
     * <p>The current monthly limit to enforce on sending text messages.</p>
     */
    inline SetTextMessageSpendLimitOverrideResult& WithMonthlyLimit(long long value) { SetMonthlyLimit(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SetTextMessageSpendLimitOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SetTextMessageSpendLimitOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SetTextMessageSpendLimitOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_monthlyLimit;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
