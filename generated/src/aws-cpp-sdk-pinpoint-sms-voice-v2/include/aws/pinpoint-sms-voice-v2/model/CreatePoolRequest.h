/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class CreatePoolRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreatePoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePool"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * SenderId or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p> <p>After the pool is
     * created you can add more origination identities to the pool by using <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference_smsvoicev2/API_AssociateOriginationIdentity.html">AssociateOriginationIdentity</a>.</p>
     *  <p>If you are using a shared AWS End User Messaging SMS and Voice
     * resource then you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }
    inline CreatePoolRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline CreatePoolRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline CreatePoolRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region of the new pool.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }
    inline CreatePoolRequest& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline CreatePoolRequest& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline CreatePoolRequest& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive. After the pool is created the MessageType can't be changed.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }
    inline CreatePoolRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline CreatePoolRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the pool can't be deleted.
     * You can change this value using the <a>UpdatePool</a> action.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline CreatePoolRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) associated with the pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePoolRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePoolRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePoolRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePoolRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreatePoolRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreatePoolRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreatePoolRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
