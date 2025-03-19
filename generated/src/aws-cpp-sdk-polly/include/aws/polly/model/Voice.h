/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Gender.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/Engine.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Description of the voice.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Voice">AWS API
   * Reference</a></p>
   */
  class Voice
  {
  public:
    AWS_POLLY_API Voice() = default;
    AWS_POLLY_API Voice(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Voice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Gender of the voice.</p>
     */
    inline Gender GetGender() const { return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    inline void SetGender(Gender value) { m_genderHasBeenSet = true; m_gender = value; }
    inline Voice& WithGender(Gender value) { SetGender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Polly assigned voice ID. This is the ID that you specify when calling
     * the <code>SynthesizeSpeech</code> operation.</p>
     */
    inline VoiceId GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(VoiceId value) { m_idHasBeenSet = true; m_id = value; }
    inline Voice& WithId(VoiceId value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Language code of the voice.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline Voice& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human readable name of the language in English.</p>
     */
    inline const Aws::String& GetLanguageName() const { return m_languageName; }
    inline bool LanguageNameHasBeenSet() const { return m_languageNameHasBeenSet; }
    template<typename LanguageNameT = Aws::String>
    void SetLanguageName(LanguageNameT&& value) { m_languageNameHasBeenSet = true; m_languageName = std::forward<LanguageNameT>(value); }
    template<typename LanguageNameT = Aws::String>
    Voice& WithLanguageName(LanguageNameT&& value) { SetLanguageName(std::forward<LanguageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the voice (for example, Salli, Kendra, etc.). This provides a human
     * readable voice name that you might display in your application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Voice& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional codes for languages available for the specified voice in addition
     * to its default language. </p> <p>For example, the default language for Aditi is
     * Indian English (en-IN) because it was first used for that language. Since Aditi
     * is bilingual and fluent in both Indian English and Hindi, this parameter would
     * show the code <code>hi-IN</code>.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetAdditionalLanguageCodes() const { return m_additionalLanguageCodes; }
    inline bool AdditionalLanguageCodesHasBeenSet() const { return m_additionalLanguageCodesHasBeenSet; }
    template<typename AdditionalLanguageCodesT = Aws::Vector<LanguageCode>>
    void SetAdditionalLanguageCodes(AdditionalLanguageCodesT&& value) { m_additionalLanguageCodesHasBeenSet = true; m_additionalLanguageCodes = std::forward<AdditionalLanguageCodesT>(value); }
    template<typename AdditionalLanguageCodesT = Aws::Vector<LanguageCode>>
    Voice& WithAdditionalLanguageCodes(AdditionalLanguageCodesT&& value) { SetAdditionalLanguageCodes(std::forward<AdditionalLanguageCodesT>(value)); return *this;}
    inline Voice& AddAdditionalLanguageCodes(LanguageCode value) { m_additionalLanguageCodesHasBeenSet = true; m_additionalLanguageCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies which engines (<code>standard</code>, <code>neural</code>,
     * <code>long-form</code> or <code>generative</code>) are supported by a given
     * voice.</p>
     */
    inline const Aws::Vector<Engine>& GetSupportedEngines() const { return m_supportedEngines; }
    inline bool SupportedEnginesHasBeenSet() const { return m_supportedEnginesHasBeenSet; }
    template<typename SupportedEnginesT = Aws::Vector<Engine>>
    void SetSupportedEngines(SupportedEnginesT&& value) { m_supportedEnginesHasBeenSet = true; m_supportedEngines = std::forward<SupportedEnginesT>(value); }
    template<typename SupportedEnginesT = Aws::Vector<Engine>>
    Voice& WithSupportedEngines(SupportedEnginesT&& value) { SetSupportedEngines(std::forward<SupportedEnginesT>(value)); return *this;}
    inline Voice& AddSupportedEngines(Engine value) { m_supportedEnginesHasBeenSet = true; m_supportedEngines.push_back(value); return *this; }
    ///@}
  private:

    Gender m_gender{Gender::NOT_SET};
    bool m_genderHasBeenSet = false;

    VoiceId m_id{VoiceId::NOT_SET};
    bool m_idHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageName;
    bool m_languageNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<LanguageCode> m_additionalLanguageCodes;
    bool m_additionalLanguageCodesHasBeenSet = false;

    Aws::Vector<Engine> m_supportedEngines;
    bool m_supportedEnginesHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
