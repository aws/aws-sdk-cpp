/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/SenderIdInformation.h>
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
  class DescribeSenderIdsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of SernderIdInformation objects that contain the details for the
     * requested SenderIds.</p>
     */
    inline const Aws::Vector<SenderIdInformation>& GetSenderIds() const { return m_senderIds; }
    template<typename SenderIdsT = Aws::Vector<SenderIdInformation>>
    void SetSenderIds(SenderIdsT&& value) { m_senderIdsHasBeenSet = true; m_senderIds = std::forward<SenderIdsT>(value); }
    template<typename SenderIdsT = Aws::Vector<SenderIdInformation>>
    DescribeSenderIdsResult& WithSenderIds(SenderIdsT&& value) { SetSenderIds(std::forward<SenderIdsT>(value)); return *this;}
    template<typename SenderIdsT = SenderIdInformation>
    DescribeSenderIdsResult& AddSenderIds(SenderIdsT&& value) { m_senderIdsHasBeenSet = true; m_senderIds.emplace_back(std::forward<SenderIdsT>(value)); return *this; }
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
    DescribeSenderIdsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSenderIdsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SenderIdInformation> m_senderIds;
    bool m_senderIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
