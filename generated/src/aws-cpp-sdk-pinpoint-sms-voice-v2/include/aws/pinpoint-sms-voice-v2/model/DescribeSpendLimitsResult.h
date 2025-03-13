/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/SpendLimit.h>
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
  class DescribeSpendLimitsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeSpendLimitsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeSpendLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeSpendLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline const Aws::Vector<SpendLimit>& GetSpendLimits() const { return m_spendLimits; }
    template<typename SpendLimitsT = Aws::Vector<SpendLimit>>
    void SetSpendLimits(SpendLimitsT&& value) { m_spendLimitsHasBeenSet = true; m_spendLimits = std::forward<SpendLimitsT>(value); }
    template<typename SpendLimitsT = Aws::Vector<SpendLimit>>
    DescribeSpendLimitsResult& WithSpendLimits(SpendLimitsT&& value) { SetSpendLimits(std::forward<SpendLimitsT>(value)); return *this;}
    template<typename SpendLimitsT = SpendLimit>
    DescribeSpendLimitsResult& AddSpendLimits(SpendLimitsT&& value) { m_spendLimitsHasBeenSet = true; m_spendLimits.emplace_back(std::forward<SpendLimitsT>(value)); return *this; }
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
    DescribeSpendLimitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSpendLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpendLimit> m_spendLimits;
    bool m_spendLimitsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
