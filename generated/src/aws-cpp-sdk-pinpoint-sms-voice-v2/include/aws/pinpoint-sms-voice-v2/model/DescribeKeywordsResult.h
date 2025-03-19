/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/KeywordInformation.h>
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
  class DescribeKeywordsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The PhoneNumberArn or PoolArn that is associated with the
     * OriginationIdentity. </p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const { return m_originationIdentityArn; }
    template<typename OriginationIdentityArnT = Aws::String>
    void SetOriginationIdentityArn(OriginationIdentityArnT&& value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn = std::forward<OriginationIdentityArnT>(value); }
    template<typename OriginationIdentityArnT = Aws::String>
    DescribeKeywordsResult& WithOriginationIdentityArn(OriginationIdentityArnT&& value) { SetOriginationIdentityArn(std::forward<OriginationIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId or PoolId that is associated with the
     * OriginationIdentity.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    DescribeKeywordsResult& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of KeywordInformation objects that contain the results.</p>
     */
    inline const Aws::Vector<KeywordInformation>& GetKeywords() const { return m_keywords; }
    template<typename KeywordsT = Aws::Vector<KeywordInformation>>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::Vector<KeywordInformation>>
    DescribeKeywordsResult& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = KeywordInformation>
    DescribeKeywordsResult& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
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
    DescribeKeywordsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeKeywordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentityArn;
    bool m_originationIdentityArnHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::Vector<KeywordInformation> m_keywords;
    bool m_keywordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
