/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the sender ID and message type for an SMS message that's sent to
   * participants in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneySMSMessage">AWS
   * API Reference</a></p>
   */
  class JourneySMSMessage
  {
  public:
    AWS_PINPOINT_API JourneySMSMessage();
    AWS_PINPOINT_API JourneySMSMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneySMSMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline JourneySMSMessage& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline JourneySMSMessage& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline const Aws::String& GetOriginationNumber() const{ return m_originationNumber; }

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline void SetOriginationNumber(const Aws::String& value) { m_originationNumberHasBeenSet = true; m_originationNumber = value; }

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline void SetOriginationNumber(Aws::String&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::move(value); }

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline void SetOriginationNumber(const char* value) { m_originationNumberHasBeenSet = true; m_originationNumber.assign(value); }

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline JourneySMSMessage& WithOriginationNumber(const Aws::String& value) { SetOriginationNumber(value); return *this;}

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline JourneySMSMessage& WithOriginationNumber(Aws::String&& value) { SetOriginationNumber(std::move(value)); return *this;}

    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline JourneySMSMessage& WithOriginationNumber(const char* value) { SetOriginationNumber(value); return *this;}


    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline JourneySMSMessage& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline JourneySMSMessage& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline JourneySMSMessage& WithSenderId(const char* value) { SetSenderId(value); return *this;}


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
    inline JourneySMSMessage& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline JourneySMSMessage& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline JourneySMSMessage& WithEntityId(const char* value) { SetEntityId(value); return *this;}


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
    inline JourneySMSMessage& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline JourneySMSMessage& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline JourneySMSMessage& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}

  private:

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    Aws::String m_originationNumber;
    bool m_originationNumberHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
