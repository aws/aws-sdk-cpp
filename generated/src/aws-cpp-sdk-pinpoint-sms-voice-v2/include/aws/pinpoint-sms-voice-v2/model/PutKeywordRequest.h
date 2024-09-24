/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/KeywordAction.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class PutKeywordRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutKeywordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutKeyword"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * SenderId or SenderIdArn. You can use <a>DescribePhoneNumbers</a> get the values
     * for PhoneNumberId and PhoneNumberArn while <a>DescribeSenderIds</a> can be used
     * to get the values for SenderId and SenderIdArn.</p>  <p>If you are
     * using a shared AWS End User Messaging SMS and Voice resource then you must use
     * the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }
    inline PutKeywordRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline PutKeywordRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline PutKeywordRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new keyword to add.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }
    inline PutKeywordRequest& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}
    inline PutKeywordRequest& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}
    inline PutKeywordRequest& WithKeyword(const char* value) { SetKeyword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the keyword.</p>
     */
    inline const Aws::String& GetKeywordMessage() const{ return m_keywordMessage; }
    inline bool KeywordMessageHasBeenSet() const { return m_keywordMessageHasBeenSet; }
    inline void SetKeywordMessage(const Aws::String& value) { m_keywordMessageHasBeenSet = true; m_keywordMessage = value; }
    inline void SetKeywordMessage(Aws::String&& value) { m_keywordMessageHasBeenSet = true; m_keywordMessage = std::move(value); }
    inline void SetKeywordMessage(const char* value) { m_keywordMessageHasBeenSet = true; m_keywordMessage.assign(value); }
    inline PutKeywordRequest& WithKeywordMessage(const Aws::String& value) { SetKeywordMessage(value); return *this;}
    inline PutKeywordRequest& WithKeywordMessage(Aws::String&& value) { SetKeywordMessage(std::move(value)); return *this;}
    inline PutKeywordRequest& WithKeywordMessage(const char* value) { SetKeywordMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform for the new keyword when it is received.</p> <ul> <li>
     * <p>AUTOMATIC_RESPONSE: A message is sent to the recipient.</p> </li> <li>
     * <p>OPT_OUT: Keeps the recipient from receiving future messages.</p> </li> <li>
     * <p>OPT_IN: The recipient wants to receive future messages.</p> </li> </ul>
     */
    inline const KeywordAction& GetKeywordAction() const{ return m_keywordAction; }
    inline bool KeywordActionHasBeenSet() const { return m_keywordActionHasBeenSet; }
    inline void SetKeywordAction(const KeywordAction& value) { m_keywordActionHasBeenSet = true; m_keywordAction = value; }
    inline void SetKeywordAction(KeywordAction&& value) { m_keywordActionHasBeenSet = true; m_keywordAction = std::move(value); }
    inline PutKeywordRequest& WithKeywordAction(const KeywordAction& value) { SetKeywordAction(value); return *this;}
    inline PutKeywordRequest& WithKeywordAction(KeywordAction&& value) { SetKeywordAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::String m_keywordMessage;
    bool m_keywordMessageHasBeenSet = false;

    KeywordAction m_keywordAction;
    bool m_keywordActionHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
