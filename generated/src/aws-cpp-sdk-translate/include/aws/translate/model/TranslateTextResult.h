/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/TranslationSettings.h>
#include <aws/translate/model/AppliedTerminology.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Translate
{
namespace Model
{
  class TranslateTextResult
  {
  public:
    AWS_TRANSLATE_API TranslateTextResult() = default;
    AWS_TRANSLATE_API TranslateTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API TranslateTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The translated text.</p>
     */
    inline const Aws::String& GetTranslatedText() const { return m_translatedText; }
    template<typename TranslatedTextT = Aws::String>
    void SetTranslatedText(TranslatedTextT&& value) { m_translatedTextHasBeenSet = true; m_translatedText = std::forward<TranslatedTextT>(value); }
    template<typename TranslatedTextT = Aws::String>
    TranslateTextResult& WithTranslatedText(TranslatedTextT&& value) { SetTranslatedText(std::forward<TranslatedTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    TranslateTextResult& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const { return m_targetLanguageCode; }
    template<typename TargetLanguageCodeT = Aws::String>
    void SetTargetLanguageCode(TargetLanguageCodeT&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::forward<TargetLanguageCodeT>(value); }
    template<typename TargetLanguageCodeT = Aws::String>
    TranslateTextResult& WithTargetLanguageCode(TargetLanguageCodeT&& value) { SetTargetLanguageCode(std::forward<TargetLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline const Aws::Vector<AppliedTerminology>& GetAppliedTerminologies() const { return m_appliedTerminologies; }
    template<typename AppliedTerminologiesT = Aws::Vector<AppliedTerminology>>
    void SetAppliedTerminologies(AppliedTerminologiesT&& value) { m_appliedTerminologiesHasBeenSet = true; m_appliedTerminologies = std::forward<AppliedTerminologiesT>(value); }
    template<typename AppliedTerminologiesT = Aws::Vector<AppliedTerminology>>
    TranslateTextResult& WithAppliedTerminologies(AppliedTerminologiesT&& value) { SetAppliedTerminologies(std::forward<AppliedTerminologiesT>(value)); return *this;}
    template<typename AppliedTerminologiesT = AppliedTerminology>
    TranslateTextResult& AddAppliedTerminologies(AppliedTerminologiesT&& value) { m_appliedTerminologiesHasBeenSet = true; m_appliedTerminologies.emplace_back(std::forward<AppliedTerminologiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional settings that modify the translation output.</p>
     */
    inline const TranslationSettings& GetAppliedSettings() const { return m_appliedSettings; }
    template<typename AppliedSettingsT = TranslationSettings>
    void SetAppliedSettings(AppliedSettingsT&& value) { m_appliedSettingsHasBeenSet = true; m_appliedSettings = std::forward<AppliedSettingsT>(value); }
    template<typename AppliedSettingsT = TranslationSettings>
    TranslateTextResult& WithAppliedSettings(AppliedSettingsT&& value) { SetAppliedSettings(std::forward<AppliedSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TranslateTextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_translatedText;
    bool m_translatedTextHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::String m_targetLanguageCode;
    bool m_targetLanguageCodeHasBeenSet = false;

    Aws::Vector<AppliedTerminology> m_appliedTerminologies;
    bool m_appliedTerminologiesHasBeenSet = false;

    TranslationSettings m_appliedSettings;
    bool m_appliedSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
