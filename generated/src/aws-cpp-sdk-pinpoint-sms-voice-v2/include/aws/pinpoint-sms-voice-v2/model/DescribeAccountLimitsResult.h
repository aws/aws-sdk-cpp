/**
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
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountLimitsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of AccountLimit objects that show the current spend limits.</p>
     */
    inline const Aws::Vector<AccountLimit>& GetAccountLimits() const { return m_accountLimits; }
    template<typename AccountLimitsT = Aws::Vector<AccountLimit>>
    void SetAccountLimits(AccountLimitsT&& value) { m_accountLimitsHasBeenSet = true; m_accountLimits = std::forward<AccountLimitsT>(value); }
    template<typename AccountLimitsT = Aws::Vector<AccountLimit>>
    DescribeAccountLimitsResult& WithAccountLimits(AccountLimitsT&& value) { SetAccountLimits(std::forward<AccountLimitsT>(value)); return *this;}
    template<typename AccountLimitsT = AccountLimit>
    DescribeAccountLimitsResult& AddAccountLimits(AccountLimitsT&& value) { m_accountLimitsHasBeenSet = true; m_accountLimits.emplace_back(std::forward<AccountLimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccountLimitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountLimit> m_accountLimits;
    bool m_accountLimitsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
