/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that defines a message that contains SSML-formatted text.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/SSMLMessageType">AWS
   * API Reference</a></p>
   */
  class SSMLMessageType
  {
  public:
    AWS_PINPOINTSMSVOICE_API SSMLMessageType();
    AWS_PINPOINTSMSVOICE_API SSMLMessageType(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API SSMLMessageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }
    inline SSMLMessageType& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline SSMLMessageType& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline SSMLMessageType& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * The SSML-formatted text to deliver to the recipient.
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline SSMLMessageType& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline SSMLMessageType& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline SSMLMessageType& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the voice that you want to use to deliver the message. For a
     * complete list of supported voices, see the Amazon Polly Developer Guide.
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    inline void SetVoiceId(const Aws::String& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }
    inline void SetVoiceId(Aws::String&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }
    inline void SetVoiceId(const char* value) { m_voiceIdHasBeenSet = true; m_voiceId.assign(value); }
    inline SSMLMessageType& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}
    inline SSMLMessageType& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}
    inline SSMLMessageType& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}
    ///@}
  private:

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
