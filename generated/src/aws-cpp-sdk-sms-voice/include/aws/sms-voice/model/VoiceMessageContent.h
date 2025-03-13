/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/model/CallInstructionsMessageType.h>
#include <aws/sms-voice/model/PlainTextMessageType.h>
#include <aws/sms-voice/model/SSMLMessageType.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that contains a voice message and information about the recipient that
   * you want to send it to.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/VoiceMessageContent">AWS
   * API Reference</a></p>
   */
  class VoiceMessageContent
  {
  public:
    AWS_PINPOINTSMSVOICE_API VoiceMessageContent() = default;
    AWS_PINPOINTSMSVOICE_API VoiceMessageContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API VoiceMessageContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CallInstructionsMessageType& GetCallInstructionsMessage() const { return m_callInstructionsMessage; }
    inline bool CallInstructionsMessageHasBeenSet() const { return m_callInstructionsMessageHasBeenSet; }
    template<typename CallInstructionsMessageT = CallInstructionsMessageType>
    void SetCallInstructionsMessage(CallInstructionsMessageT&& value) { m_callInstructionsMessageHasBeenSet = true; m_callInstructionsMessage = std::forward<CallInstructionsMessageT>(value); }
    template<typename CallInstructionsMessageT = CallInstructionsMessageType>
    VoiceMessageContent& WithCallInstructionsMessage(CallInstructionsMessageT&& value) { SetCallInstructionsMessage(std::forward<CallInstructionsMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PlainTextMessageType& GetPlainTextMessage() const { return m_plainTextMessage; }
    inline bool PlainTextMessageHasBeenSet() const { return m_plainTextMessageHasBeenSet; }
    template<typename PlainTextMessageT = PlainTextMessageType>
    void SetPlainTextMessage(PlainTextMessageT&& value) { m_plainTextMessageHasBeenSet = true; m_plainTextMessage = std::forward<PlainTextMessageT>(value); }
    template<typename PlainTextMessageT = PlainTextMessageType>
    VoiceMessageContent& WithPlainTextMessage(PlainTextMessageT&& value) { SetPlainTextMessage(std::forward<PlainTextMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SSMLMessageType& GetSSMLMessage() const { return m_sSMLMessage; }
    inline bool SSMLMessageHasBeenSet() const { return m_sSMLMessageHasBeenSet; }
    template<typename SSMLMessageT = SSMLMessageType>
    void SetSSMLMessage(SSMLMessageT&& value) { m_sSMLMessageHasBeenSet = true; m_sSMLMessage = std::forward<SSMLMessageT>(value); }
    template<typename SSMLMessageT = SSMLMessageType>
    VoiceMessageContent& WithSSMLMessage(SSMLMessageT&& value) { SetSSMLMessage(std::forward<SSMLMessageT>(value)); return *this;}
    ///@}
  private:

    CallInstructionsMessageType m_callInstructionsMessage;
    bool m_callInstructionsMessageHasBeenSet = false;

    PlainTextMessageType m_plainTextMessage;
    bool m_plainTextMessageHasBeenSet = false;

    SSMLMessageType m_sSMLMessage;
    bool m_sSMLMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
