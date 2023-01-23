/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/VocabularyFilterMethod.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/LanguageIdSettings.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides additional optional settings for your request, including content
   * redaction, automatic language identification; allows you to apply custom
   * language models, custom vocabulary filters, and custom
   * vocabularies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJobSettings">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsJobSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSettings();
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to include in your Call Analytics
     * transcription request. Custom vocabulary names are case sensitive.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Call
     * Analytics transcription request. Custom vocabulary filter names are case
     * sensitive.</p> <p>Note that if you include <code>VocabularyFilterName</code> in
     * your request, you must also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom language model you want to use when processing your
     * Call Analytics job. Note that custom language model names are case
     * sensitive.</p> <p>The language of the specified custom language model must match
     * the language code that you specify in your transcription request. If the
     * languages don't match, the custom language model isn't applied. There are no
     * errors or warnings associated with a language mismatch.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }

    
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }

    
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }

    
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }

    
    inline CallAnalyticsJobSettings& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}

    
    inline CallAnalyticsJobSettings& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}


    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline CallAnalyticsJobSettings& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media. Including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>Including language options can improve the accuracy of language
     * identification.</p> <p>For a list of languages supported with Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline CallAnalyticsJobSettings& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const{ return m_languageIdSettings; }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline void SetLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = value; }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline void SetLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::move(value); }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { SetLanguageIdSettings(value); return *this;}

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { SetLanguageIdSettings(std::move(value)); return *this;}

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline CallAnalyticsJobSettings& AddLanguageIdSettings(const LanguageCode& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this; }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline CallAnalyticsJobSettings& AddLanguageIdSettings(LanguageCode&& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline CallAnalyticsJobSettings& AddLanguageIdSettings(const LanguageCode& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>If using automatic language identification in your request and you want to
     * apply a custom language model, a custom vocabulary, or a custom vocabulary
     * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
     * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
     * <code>VocabularyFilterName</code>).</p> <p> <code>LanguageIdSettings</code>
     * supports two to five language codes. Each language code you include can have an
     * associated custom language model, custom vocabulary, and custom vocabulary
     * filter. The language codes that you specify must match the languages of the
     * associated custom language models, custom vocabularies, and custom vocabulary
     * filters.</p> <p>It's recommended that you include <code>LanguageOptions</code>
     * when using <code>LanguageIdSettings</code> to ensure that the correct language
     * dialect is identified. For example, if you specify a custom vocabulary that is
     * in <code>en-US</code> but Amazon Transcribe determines that the language spoken
     * in your media is <code>en-AU</code>, your custom vocabulary <i>is not</i>
     * applied to your transcription. If you include <code>LanguageOptions</code> and
     * include <code>en-US</code> as the only English language dialect, your custom
     * vocabulary <i>is</i> applied to your transcription.</p> <p>If you want to
     * include a custom language model, custom vocabulary, or custom vocabulary filter
     * with your request but <b>do not</b> want to use automatic language
     * identification, use instead the <code/> parameter with the
     * <code>LanguageModelName</code>, <code>VocabularyName</code>, or
     * <code>VocabularyFilterName</code> sub-parameters.</p> <p>For a list of languages
     * supported with Call Analytics, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages and language-specific features</a>.</p>
     */
    inline CallAnalyticsJobSettings& AddLanguageIdSettings(LanguageCode&& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet = false;

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    Aws::Map<LanguageCode, LanguageIdSettings> m_languageIdSettings;
    bool m_languageIdSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
