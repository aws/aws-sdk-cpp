/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/KeywordAction.h>
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
  class PutKeywordResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutKeywordResult() = default;
    AWS_PINPOINTSMSVOICEV2_API PutKeywordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API PutKeywordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const { return m_originationIdentityArn; }
    template<typename OriginationIdentityArnT = Aws::String>
    void SetOriginationIdentityArn(OriginationIdentityArnT&& value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn = std::forward<OriginationIdentityArnT>(value); }
    template<typename OriginationIdentityArnT = Aws::String>
    PutKeywordResult& WithOriginationIdentityArn(OriginationIdentityArnT&& value) { SetOriginationIdentityArn(std::forward<OriginationIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    PutKeywordResult& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keyword that was added.</p>
     */
    inline const Aws::String& GetKeyword() const { return m_keyword; }
    template<typename KeywordT = Aws::String>
    void SetKeyword(KeywordT&& value) { m_keywordHasBeenSet = true; m_keyword = std::forward<KeywordT>(value); }
    template<typename KeywordT = Aws::String>
    PutKeywordResult& WithKeyword(KeywordT&& value) { SetKeyword(std::forward<KeywordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the keyword.</p>
     */
    inline const Aws::String& GetKeywordMessage() const { return m_keywordMessage; }
    template<typename KeywordMessageT = Aws::String>
    void SetKeywordMessage(KeywordMessageT&& value) { m_keywordMessageHasBeenSet = true; m_keywordMessage = std::forward<KeywordMessageT>(value); }
    template<typename KeywordMessageT = Aws::String>
    PutKeywordResult& WithKeywordMessage(KeywordMessageT&& value) { SetKeywordMessage(std::forward<KeywordMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when the keyword is used.</p>
     */
    inline KeywordAction GetKeywordAction() const { return m_keywordAction; }
    inline void SetKeywordAction(KeywordAction value) { m_keywordActionHasBeenSet = true; m_keywordAction = value; }
    inline PutKeywordResult& WithKeywordAction(KeywordAction value) { SetKeywordAction(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutKeywordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentityArn;
    bool m_originationIdentityArnHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::String m_keywordMessage;
    bool m_keywordMessageHasBeenSet = false;

    KeywordAction m_keywordAction{KeywordAction::NOT_SET};
    bool m_keywordActionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
