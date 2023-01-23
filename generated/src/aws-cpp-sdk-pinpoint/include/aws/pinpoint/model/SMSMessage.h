/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the default settings for a one-time SMS message that's sent
   * directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SMSMessage">AWS
   * API Reference</a></p>
   */
  class SMSMessage
  {
  public:
    AWS_PINPOINT_API SMSMessage();
    AWS_PINPOINT_API SMSMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SMSMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the SMS message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the SMS message.</p>
     */
    inline SMSMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline SMSMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the SMS message.</p>
     */
    inline SMSMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline SMSMessage& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline SMSMessage& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>The SMS program name that you provided to AWS Support when you requested your
     * dedicated number.</p>
     */
    inline SMSMessage& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>This field is reserved for future use.</p>
     */
    inline const Aws::String& GetMediaUrl() const{ return m_mediaUrl; }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline void SetMediaUrl(const Aws::String& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = value; }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline void SetMediaUrl(Aws::String&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::move(value); }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline void SetMediaUrl(const char* value) { m_mediaUrlHasBeenSet = true; m_mediaUrl.assign(value); }

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline SMSMessage& WithMediaUrl(const Aws::String& value) { SetMediaUrl(value); return *this;}

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline SMSMessage& WithMediaUrl(Aws::String&& value) { SetMediaUrl(std::move(value)); return *this;}

    /**
     * <p>This field is reserved for future use.</p>
     */
    inline SMSMessage& WithMediaUrl(const char* value) { SetMediaUrl(value); return *this;}


    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline SMSMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline SMSMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline const Aws::String& GetOriginationNumber() const{ return m_originationNumber; }

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline void SetOriginationNumber(const Aws::String& value) { m_originationNumberHasBeenSet = true; m_originationNumber = value; }

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline void SetOriginationNumber(Aws::String&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::move(value); }

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline void SetOriginationNumber(const char* value) { m_originationNumberHasBeenSet = true; m_originationNumber.assign(value); }

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline SMSMessage& WithOriginationNumber(const Aws::String& value) { SetOriginationNumber(value); return *this;}

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline SMSMessage& WithOriginationNumber(Aws::String&& value) { SetOriginationNumber(std::move(value)); return *this;}

    /**
     * <p>The number to send the SMS message from. This value should be one of the
     * dedicated long or short codes that's assigned to your AWS account. If you don't
     * specify a long or short code, Amazon Pinpoint assigns a random long code to the
     * SMS message and sends the message from that code.</p>
     */
    inline SMSMessage& WithOriginationNumber(const char* value) { SetOriginationNumber(value); return *this;}


    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline SMSMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline SMSMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region.</p>
     */
    inline SMSMessage& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The message variables to use in the SMS message. You can override the default
     * variables with individual address variables.</p>
     */
    inline SMSMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline SMSMessage& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline SMSMessage& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline SMSMessage& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline SMSMessage& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline SMSMessage& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline SMSMessage& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    Aws::String m_originationNumber;
    bool m_originationNumberHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
