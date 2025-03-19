/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/OptOutListInformation.h>
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
  class DescribeOptOutListsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeOptOutListsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeOptOutListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeOptOutListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline const Aws::Vector<OptOutListInformation>& GetOptOutLists() const { return m_optOutLists; }
    template<typename OptOutListsT = Aws::Vector<OptOutListInformation>>
    void SetOptOutLists(OptOutListsT&& value) { m_optOutListsHasBeenSet = true; m_optOutLists = std::forward<OptOutListsT>(value); }
    template<typename OptOutListsT = Aws::Vector<OptOutListInformation>>
    DescribeOptOutListsResult& WithOptOutLists(OptOutListsT&& value) { SetOptOutLists(std::forward<OptOutListsT>(value)); return *this;}
    template<typename OptOutListsT = OptOutListInformation>
    DescribeOptOutListsResult& AddOptOutLists(OptOutListsT&& value) { m_optOutListsHasBeenSet = true; m_optOutLists.emplace_back(std::forward<OptOutListsT>(value)); return *this; }
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
    DescribeOptOutListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOptOutListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OptOutListInformation> m_optOutLists;
    bool m_optOutListsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
