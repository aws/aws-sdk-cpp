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
    AWS_PINPOINT_API JourneySMSMessage() = default;
    AWS_PINPOINT_API JourneySMSMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneySMSMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SMS message type. Valid values are TRANSACTIONAL (for messages that are
     * critical or time-sensitive, such as a one-time passwords) and PROMOTIONAL (for
     * messsages that aren't critical or time-sensitive, such as marketing
     * messages).</p>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline JourneySMSMessage& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long code to send the SMS message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code using an E.164 format to
     * ensure prompt and accurate delivery of the message. For example,
     * +12065550100.</p>
     */
    inline const Aws::String& GetOriginationNumber() const { return m_originationNumber; }
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }
    template<typename OriginationNumberT = Aws::String>
    void SetOriginationNumber(OriginationNumberT&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::forward<OriginationNumberT>(value); }
    template<typename OriginationNumberT = Aws::String>
    JourneySMSMessage& WithOriginationNumber(OriginationNumberT&& value) { SetOriginationNumber(std::forward<OriginationNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender ID to display as the sender of the message on a recipient's
     * device. Support for sender IDs varies by country or region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-countries.html">Supported
     * Countries and Regions</a> in the Amazon Pinpoint User Guide.</p>
     */
    inline const Aws::String& GetSenderId() const { return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    template<typename SenderIdT = Aws::String>
    void SetSenderId(SenderIdT&& value) { m_senderIdHasBeenSet = true; m_senderId = std::forward<SenderIdT>(value); }
    template<typename SenderIdT = Aws::String>
    JourneySMSMessage& WithSenderId(SenderIdT&& value) { SetSenderId(std::forward<SenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity ID or Principal Entity (PE) id received from the regulatory body
     * for sending SMS in your country.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    JourneySMSMessage& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template ID received from the regulatory body for sending SMS in your
     * country.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    JourneySMSMessage& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}
  private:

    MessageType m_messageType{MessageType::NOT_SET};
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
