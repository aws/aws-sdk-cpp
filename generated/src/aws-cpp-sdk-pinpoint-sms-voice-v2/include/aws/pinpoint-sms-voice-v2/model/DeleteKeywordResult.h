﻿/**
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
  class DeleteKeywordResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteKeywordResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteKeywordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteKeywordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const{ return m_originationIdentityArn; }
    inline void SetOriginationIdentityArn(const Aws::String& value) { m_originationIdentityArn = value; }
    inline void SetOriginationIdentityArn(Aws::String&& value) { m_originationIdentityArn = std::move(value); }
    inline void SetOriginationIdentityArn(const char* value) { m_originationIdentityArn.assign(value); }
    inline DeleteKeywordResult& WithOriginationIdentityArn(const Aws::String& value) { SetOriginationIdentityArn(value); return *this;}
    inline DeleteKeywordResult& WithOriginationIdentityArn(Aws::String&& value) { SetOriginationIdentityArn(std::move(value)); return *this;}
    inline DeleteKeywordResult& WithOriginationIdentityArn(const char* value) { SetOriginationIdentityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentity.assign(value); }
    inline DeleteKeywordResult& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline DeleteKeywordResult& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline DeleteKeywordResult& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keyword that was deleted.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }
    inline void SetKeyword(const Aws::String& value) { m_keyword = value; }
    inline void SetKeyword(Aws::String&& value) { m_keyword = std::move(value); }
    inline void SetKeyword(const char* value) { m_keyword.assign(value); }
    inline DeleteKeywordResult& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}
    inline DeleteKeywordResult& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}
    inline DeleteKeywordResult& WithKeyword(const char* value) { SetKeyword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that was associated with the deleted keyword.</p>
     */
    inline const Aws::String& GetKeywordMessage() const{ return m_keywordMessage; }
    inline void SetKeywordMessage(const Aws::String& value) { m_keywordMessage = value; }
    inline void SetKeywordMessage(Aws::String&& value) { m_keywordMessage = std::move(value); }
    inline void SetKeywordMessage(const char* value) { m_keywordMessage.assign(value); }
    inline DeleteKeywordResult& WithKeywordMessage(const Aws::String& value) { SetKeywordMessage(value); return *this;}
    inline DeleteKeywordResult& WithKeywordMessage(Aws::String&& value) { SetKeywordMessage(std::move(value)); return *this;}
    inline DeleteKeywordResult& WithKeywordMessage(const char* value) { SetKeywordMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that was associated with the deleted keyword.</p>
     */
    inline const KeywordAction& GetKeywordAction() const{ return m_keywordAction; }
    inline void SetKeywordAction(const KeywordAction& value) { m_keywordAction = value; }
    inline void SetKeywordAction(KeywordAction&& value) { m_keywordAction = std::move(value); }
    inline DeleteKeywordResult& WithKeywordAction(const KeywordAction& value) { SetKeywordAction(value); return *this;}
    inline DeleteKeywordResult& WithKeywordAction(KeywordAction&& value) { SetKeywordAction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteKeywordResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteKeywordResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteKeywordResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentityArn;

    Aws::String m_originationIdentity;

    Aws::String m_keyword;

    Aws::String m_keywordMessage;

    KeywordAction m_keywordAction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
