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
    AWS_TRANSLATE_API TranslateTextResult();
    AWS_TRANSLATE_API TranslateTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API TranslateTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The translated text.</p>
     */
    inline const Aws::String& GetTranslatedText() const{ return m_translatedText; }

    /**
     * <p>The translated text.</p>
     */
    inline void SetTranslatedText(const Aws::String& value) { m_translatedText = value; }

    /**
     * <p>The translated text.</p>
     */
    inline void SetTranslatedText(Aws::String&& value) { m_translatedText = std::move(value); }

    /**
     * <p>The translated text.</p>
     */
    inline void SetTranslatedText(const char* value) { m_translatedText.assign(value); }

    /**
     * <p>The translated text.</p>
     */
    inline TranslateTextResult& WithTranslatedText(const Aws::String& value) { SetTranslatedText(value); return *this;}

    /**
     * <p>The translated text.</p>
     */
    inline TranslateTextResult& WithTranslatedText(Aws::String&& value) { SetTranslatedText(std::move(value)); return *this;}

    /**
     * <p>The translated text.</p>
     */
    inline TranslateTextResult& WithTranslatedText(const char* value) { SetTranslatedText(value); return *this;}


    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline TranslateTextResult& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline TranslateTextResult& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the source text.</p>
     */
    inline TranslateTextResult& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCode = value; }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline TranslateTextResult& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline TranslateTextResult& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline TranslateTextResult& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}


    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline const Aws::Vector<AppliedTerminology>& GetAppliedTerminologies() const{ return m_appliedTerminologies; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetAppliedTerminologies(const Aws::Vector<AppliedTerminology>& value) { m_appliedTerminologies = value; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetAppliedTerminologies(Aws::Vector<AppliedTerminology>&& value) { m_appliedTerminologies = std::move(value); }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& WithAppliedTerminologies(const Aws::Vector<AppliedTerminology>& value) { SetAppliedTerminologies(value); return *this;}

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& WithAppliedTerminologies(Aws::Vector<AppliedTerminology>&& value) { SetAppliedTerminologies(std::move(value)); return *this;}

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& AddAppliedTerminologies(const AppliedTerminology& value) { m_appliedTerminologies.push_back(value); return *this; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& AddAppliedTerminologies(AppliedTerminology&& value) { m_appliedTerminologies.push_back(std::move(value)); return *this; }


    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline const TranslationSettings& GetAppliedSettings() const{ return m_appliedSettings; }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline void SetAppliedSettings(const TranslationSettings& value) { m_appliedSettings = value; }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline void SetAppliedSettings(TranslationSettings&& value) { m_appliedSettings = std::move(value); }

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline TranslateTextResult& WithAppliedSettings(const TranslationSettings& value) { SetAppliedSettings(value); return *this;}

    /**
     * <p>Settings that configure the translation output.</p>
     */
    inline TranslateTextResult& WithAppliedSettings(TranslationSettings&& value) { SetAppliedSettings(std::move(value)); return *this;}

  private:

    Aws::String m_translatedText;

    Aws::String m_sourceLanguageCode;

    Aws::String m_targetLanguageCode;

    Aws::Vector<AppliedTerminology> m_appliedTerminologies;

    TranslationSettings m_appliedSettings;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
