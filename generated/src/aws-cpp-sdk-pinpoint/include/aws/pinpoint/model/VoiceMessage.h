/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the settings for a one-time voice message that's sent directly to
   * an endpoint through the voice channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VoiceMessage">AWS
   * API Reference</a></p>
   */
  class VoiceMessage
  {
  public:
    AWS_PINPOINT_API VoiceMessage() = default;
    AWS_PINPOINT_API VoiceMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VoiceMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the script to use for the voice message.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    VoiceMessage& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the language to use when synthesizing the text of the message
     * script. For a list of supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    VoiceMessage& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long code to send the voice message from. This value should be one of the
     * dedicated long codes that's assigned to your AWS account. Although it isn't
     * required, we recommend that you specify the long code in E.164 format, for
     * example +12065550100, to ensure prompt and accurate delivery of the message.</p>
     */
    inline const Aws::String& GetOriginationNumber() const { return m_originationNumber; }
    inline bool OriginationNumberHasBeenSet() const { return m_originationNumberHasBeenSet; }
    template<typename OriginationNumberT = Aws::String>
    void SetOriginationNumber(OriginationNumberT&& value) { m_originationNumberHasBeenSet = true; m_originationNumber = std::forward<OriginationNumberT>(value); }
    template<typename OriginationNumberT = Aws::String>
    VoiceMessage& WithOriginationNumber(OriginationNumberT&& value) { SetOriginationNumber(std::forward<OriginationNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message variables to use in the voice message. You can override
     * the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const { return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetSubstitutions(SubstitutionsT&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::forward<SubstitutionsT>(value); }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    VoiceMessage& WithSubstitutions(SubstitutionsT&& value) { SetSubstitutions(std::forward<SubstitutionsT>(value)); return *this;}
    template<typename SubstitutionsKeyT = Aws::String, typename SubstitutionsValueT = Aws::Vector<Aws::String>>
    VoiceMessage& AddSubstitutions(SubstitutionsKeyT&& key, SubstitutionsValueT&& value) {
      m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::forward<SubstitutionsKeyT>(key), std::forward<SubstitutionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the voice to use when delivering the message. For a list of
     * supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const { return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    template<typename VoiceIdT = Aws::String>
    void SetVoiceId(VoiceIdT&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::forward<VoiceIdT>(value); }
    template<typename VoiceIdT = Aws::String>
    VoiceMessage& WithVoiceId(VoiceIdT&& value) { SetVoiceId(std::forward<VoiceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_originationNumber;
    bool m_originationNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
