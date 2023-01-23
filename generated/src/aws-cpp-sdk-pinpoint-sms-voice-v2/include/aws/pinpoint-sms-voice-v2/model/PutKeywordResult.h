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
    AWS_PINPOINTSMSVOICEV2_API PutKeywordResult();
    AWS_PINPOINTSMSVOICEV2_API PutKeywordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API PutKeywordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const{ return m_originationIdentityArn; }

    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline void SetOriginationIdentityArn(const Aws::String& value) { m_originationIdentityArn = value; }

    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline void SetOriginationIdentityArn(Aws::String&& value) { m_originationIdentityArn = std::move(value); }

    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline void SetOriginationIdentityArn(const char* value) { m_originationIdentityArn.assign(value); }

    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline PutKeywordResult& WithOriginationIdentityArn(const Aws::String& value) { SetOriginationIdentityArn(value); return *this;}

    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline PutKeywordResult& WithOriginationIdentityArn(Aws::String&& value) { SetOriginationIdentityArn(std::move(value)); return *this;}

    /**
     * <p>The PhoneNumberArn or PoolArn that the keyword was associated with.</p>
     */
    inline PutKeywordResult& WithOriginationIdentityArn(const char* value) { SetOriginationIdentityArn(value); return *this;}


    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentity = value; }

    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentity = std::move(value); }

    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentity.assign(value); }

    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline PutKeywordResult& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline PutKeywordResult& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The PhoneNumberId or PoolId that the keyword was associated with.</p>
     */
    inline PutKeywordResult& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>The keyword that was added.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>The keyword that was added.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keyword = value; }

    /**
     * <p>The keyword that was added.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keyword = std::move(value); }

    /**
     * <p>The keyword that was added.</p>
     */
    inline void SetKeyword(const char* value) { m_keyword.assign(value); }

    /**
     * <p>The keyword that was added.</p>
     */
    inline PutKeywordResult& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>The keyword that was added.</p>
     */
    inline PutKeywordResult& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>The keyword that was added.</p>
     */
    inline PutKeywordResult& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>The message associated with the keyword.</p>
     */
    inline const Aws::String& GetKeywordMessage() const{ return m_keywordMessage; }

    /**
     * <p>The message associated with the keyword.</p>
     */
    inline void SetKeywordMessage(const Aws::String& value) { m_keywordMessage = value; }

    /**
     * <p>The message associated with the keyword.</p>
     */
    inline void SetKeywordMessage(Aws::String&& value) { m_keywordMessage = std::move(value); }

    /**
     * <p>The message associated with the keyword.</p>
     */
    inline void SetKeywordMessage(const char* value) { m_keywordMessage.assign(value); }

    /**
     * <p>The message associated with the keyword.</p>
     */
    inline PutKeywordResult& WithKeywordMessage(const Aws::String& value) { SetKeywordMessage(value); return *this;}

    /**
     * <p>The message associated with the keyword.</p>
     */
    inline PutKeywordResult& WithKeywordMessage(Aws::String&& value) { SetKeywordMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the keyword.</p>
     */
    inline PutKeywordResult& WithKeywordMessage(const char* value) { SetKeywordMessage(value); return *this;}


    /**
     * <p>The action to perform when the keyword is used.</p>
     */
    inline const KeywordAction& GetKeywordAction() const{ return m_keywordAction; }

    /**
     * <p>The action to perform when the keyword is used.</p>
     */
    inline void SetKeywordAction(const KeywordAction& value) { m_keywordAction = value; }

    /**
     * <p>The action to perform when the keyword is used.</p>
     */
    inline void SetKeywordAction(KeywordAction&& value) { m_keywordAction = std::move(value); }

    /**
     * <p>The action to perform when the keyword is used.</p>
     */
    inline PutKeywordResult& WithKeywordAction(const KeywordAction& value) { SetKeywordAction(value); return *this;}

    /**
     * <p>The action to perform when the keyword is used.</p>
     */
    inline PutKeywordResult& WithKeywordAction(KeywordAction&& value) { SetKeywordAction(std::move(value)); return *this;}

  private:

    Aws::String m_originationIdentityArn;

    Aws::String m_originationIdentity;

    Aws::String m_keyword;

    Aws::String m_keywordMessage;

    KeywordAction m_keywordAction;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
