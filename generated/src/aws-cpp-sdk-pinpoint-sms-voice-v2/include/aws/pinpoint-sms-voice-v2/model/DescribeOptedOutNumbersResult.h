/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/OptedOutNumberInformation.h>
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
  class DescribeOptedOutNumbersResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListArn() const { return m_optOutListArn; }
    template<typename OptOutListArnT = Aws::String>
    void SetOptOutListArn(OptOutListArnT&& value) { m_optOutListArnHasBeenSet = true; m_optOutListArn = std::forward<OptOutListArnT>(value); }
    template<typename OptOutListArnT = Aws::String>
    DescribeOptedOutNumbersResult& WithOptOutListArn(OptOutListArnT&& value) { SetOptOutListArn(std::forward<OptOutListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    DescribeOptedOutNumbersResult& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of OptedOutNumbersInformation objects that provide information about
     * the requested OptedOutNumbers.</p>
     */
    inline const Aws::Vector<OptedOutNumberInformation>& GetOptedOutNumbers() const { return m_optedOutNumbers; }
    template<typename OptedOutNumbersT = Aws::Vector<OptedOutNumberInformation>>
    void SetOptedOutNumbers(OptedOutNumbersT&& value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers = std::forward<OptedOutNumbersT>(value); }
    template<typename OptedOutNumbersT = Aws::Vector<OptedOutNumberInformation>>
    DescribeOptedOutNumbersResult& WithOptedOutNumbers(OptedOutNumbersT&& value) { SetOptedOutNumbers(std::forward<OptedOutNumbersT>(value)); return *this;}
    template<typename OptedOutNumbersT = OptedOutNumberInformation>
    DescribeOptedOutNumbersResult& AddOptedOutNumbers(OptedOutNumbersT&& value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers.emplace_back(std::forward<OptedOutNumbersT>(value)); return *this; }
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
    DescribeOptedOutNumbersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOptedOutNumbersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_optOutListArn;
    bool m_optOutListArnHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::Vector<OptedOutNumberInformation> m_optedOutNumbers;
    bool m_optedOutNumbersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
