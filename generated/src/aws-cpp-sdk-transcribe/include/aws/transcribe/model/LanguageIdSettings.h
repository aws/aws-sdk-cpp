﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>If using automatic language identification in your request and you want to
   * apply a custom language model, a custom vocabulary, or a custom vocabulary
   * filter, include <code>LanguageIdSettings</code> with the relevant sub-parameters
   * (<code>VocabularyName</code>, <code>LanguageModelName</code>, and
   * <code>VocabularyFilterName</code>). Note that multi-language identification
   * (<code>IdentifyMultipleLanguages</code>) doesn't support custom language
   * models.</p> <p> <code>LanguageIdSettings</code> supports two to five language
   * codes. Each language code you include can have an associated custom language
   * model, custom vocabulary, and custom vocabulary filter. The language codes that
   * you specify must match the languages of the associated custom language models,
   * custom vocabularies, and custom vocabulary filters.</p> <p>It's recommended that
   * you include <code>LanguageOptions</code> when using
   * <code>LanguageIdSettings</code> to ensure that the correct language dialect is
   * identified. For example, if you specify a custom vocabulary that is in
   * <code>en-US</code> but Amazon Transcribe determines that the language spoken in
   * your media is <code>en-AU</code>, your custom vocabulary <i>is not</i> applied
   * to your transcription. If you include <code>LanguageOptions</code> and include
   * <code>en-US</code> as the only English language dialect, your custom vocabulary
   * <i>is</i> applied to your transcription.</p> <p>If you want to include a custom
   * language model with your request but <b>do not</b> want to use automatic
   * language identification, use instead the <code/> parameter with the
   * <code>LanguageModelName</code> sub-parameter. If you want to include a custom
   * vocabulary or a custom vocabulary filter (or both) with your request but <b>do
   * not</b> want to use automatic language identification, use instead the <code/>
   * parameter with the <code>VocabularyName</code> or
   * <code>VocabularyFilterName</code> (or both) sub-parameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/LanguageIdSettings">AWS
   * API Reference</a></p>
   */
  class LanguageIdSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API LanguageIdSettings() = default;
    AWS_TRANSCRIBESERVICE_API LanguageIdSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API LanguageIdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Custom vocabulary names are case sensitive.</p> <p>The
     * language of the specified custom vocabulary must match the language code that
     * you specify in your transcription request. If the languages do not match, the
     * custom vocabulary isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    LanguageIdSettings& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Custom vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified custom vocabulary filter must match the language code
     * that you specify in your transcription request. If the languages do not match,
     * the custom vocabulary filter isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    template<typename VocabularyFilterNameT = Aws::String>
    void SetVocabularyFilterName(VocabularyFilterNameT&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value); }
    template<typename VocabularyFilterNameT = Aws::String>
    LanguageIdSettings& WithVocabularyFilterName(VocabularyFilterNameT&& value) { SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that custom language model names are case sensitive.</p>
     * <p>The language of the specified custom language model must match the language
     * code that you specify in your transcription request. If the languages do not
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p>
     */
    inline const Aws::String& GetLanguageModelName() const { return m_languageModelName; }
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }
    template<typename LanguageModelNameT = Aws::String>
    void SetLanguageModelName(LanguageModelNameT&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::forward<LanguageModelNameT>(value); }
    template<typename LanguageModelNameT = Aws::String>
    LanguageIdSettings& WithLanguageModelName(LanguageModelNameT&& value) { SetLanguageModelName(std::forward<LanguageModelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
