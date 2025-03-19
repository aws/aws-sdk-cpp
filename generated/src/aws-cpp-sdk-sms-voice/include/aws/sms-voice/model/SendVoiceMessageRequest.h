/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms-voice/model/VoiceMessageContent.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * SendVoiceMessageRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/SendVoiceMessageRequest">AWS
   * API Reference</a></p>
   */
  class SendVoiceMessageRequest : public PinpointSMSVoiceRequest
  {
  public:
    AWS_PINPOINTSMSVOICE_API SendVoiceMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendVoiceMessage"; }

    AWS_PINPOINTSMSVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline const Aws::String& GetCallerId() const { return m_callerId; }
    inline bool CallerIdHasBeenSet() const { return m_callerIdHasBeenSet; }
    template<typename CallerIdT = Aws::String>
    void SetCallerId(CallerIdT&& value) { m_callerIdHasBeenSet = true; m_callerId = std::forward<CallerIdT>(value); }
    template<typename CallerIdT = Aws::String>
    SendVoiceMessageRequest& WithCallerId(CallerIdT&& value) { SetCallerId(std::forward<CallerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SendVoiceMessageRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VoiceMessageContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = VoiceMessageContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = VoiceMessageContent>
    SendVoiceMessageRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The phone number that you want to send the voice message to.
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    SendVoiceMessageRequest& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline const Aws::String& GetOriginationPhoneNumber() const { return m_originationPhoneNumber; }
    inline bool OriginationPhoneNumberHasBeenSet() const { return m_originationPhoneNumberHasBeenSet; }
    template<typename OriginationPhoneNumberT = Aws::String>
    void SetOriginationPhoneNumber(OriginationPhoneNumberT&& value) { m_originationPhoneNumberHasBeenSet = true; m_originationPhoneNumber = std::forward<OriginationPhoneNumberT>(value); }
    template<typename OriginationPhoneNumberT = Aws::String>
    SendVoiceMessageRequest& WithOriginationPhoneNumber(OriginationPhoneNumberT&& value) { SetOriginationPhoneNumber(std::forward<OriginationPhoneNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callerId;
    bool m_callerIdHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    VoiceMessageContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_originationPhoneNumber;
    bool m_originationPhoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
