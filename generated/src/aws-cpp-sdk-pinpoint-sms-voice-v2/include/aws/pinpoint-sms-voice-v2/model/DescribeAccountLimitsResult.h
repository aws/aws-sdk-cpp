﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/AccountLimit.h>
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
  class DescribeAccountLimitsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountLimitsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of AccountLimit objects that show the current spend limits.</p>
     */
    inline const Aws::Vector<AccountLimit>& GetAccountLimits() const{ return m_accountLimits; }
    inline void SetAccountLimits(const Aws::Vector<AccountLimit>& value) { m_accountLimits = value; }
    inline void SetAccountLimits(Aws::Vector<AccountLimit>&& value) { m_accountLimits = std::move(value); }
    inline DescribeAccountLimitsResult& WithAccountLimits(const Aws::Vector<AccountLimit>& value) { SetAccountLimits(value); return *this;}
    inline DescribeAccountLimitsResult& WithAccountLimits(Aws::Vector<AccountLimit>&& value) { SetAccountLimits(std::move(value)); return *this;}
    inline DescribeAccountLimitsResult& AddAccountLimits(const AccountLimit& value) { m_accountLimits.push_back(value); return *this; }
    inline DescribeAccountLimitsResult& AddAccountLimits(AccountLimit&& value) { m_accountLimits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAccountLimitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAccountLimitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAccountLimitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountLimit> m_accountLimits;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
