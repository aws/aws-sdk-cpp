/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/TranslationSettings.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class TranslateTextRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API TranslateTextRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TranslateText"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    TranslateTextRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a terminology list file to add to the translation job. This file
     * provides source terms and the desired translation for each term. A terminology
     * list can contain a maximum of 256 terms. You can use one custom terminology
     * resource in your translation request.</p> <p>Use the <a>ListTerminologies</a>
     * operation to get the available terminology lists.</p> <p>For more information
     * about custom terminology lists, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/how-custom-terminology.html">Custom
     * terminology</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const { return m_terminologyNames; }
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }
    template<typename TerminologyNamesT = Aws::Vector<Aws::String>>
    void SetTerminologyNames(TerminologyNamesT&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::forward<TerminologyNamesT>(value); }
    template<typename TerminologyNamesT = Aws::Vector<Aws::String>>
    TranslateTextRequest& WithTerminologyNames(TerminologyNamesT&& value) { SetTerminologyNames(std::forward<TerminologyNamesT>(value)); return *this;}
    template<typename TerminologyNamesT = Aws::String>
    TranslateTextRequest& AddTerminologyNames(TerminologyNamesT&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.emplace_back(std::forward<TerminologyNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language code for the language of the source text. For a list of language
     * codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    TranslateTextRequest& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code requested for the language of the target text. For a list
     * of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetTargetLanguageCode() const { return m_targetLanguageCode; }
    inline bool TargetLanguageCodeHasBeenSet() const { return m_targetLanguageCodeHasBeenSet; }
    template<typename TargetLanguageCodeT = Aws::String>
    void SetTargetLanguageCode(TargetLanguageCodeT&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::forward<TargetLanguageCodeT>(value); }
    template<typename TargetLanguageCodeT = Aws::String>
    TranslateTextRequest& WithTargetLanguageCode(TargetLanguageCodeT&& value) { SetTargetLanguageCode(std::forward<TargetLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: reduces the length of the
     * translated output for most translations.</p> </li> <li> <p>Formality: sets the
     * formality level of the output text.</p> </li> <li> <p>Profanity: masks profane
     * words and phrases in your translation output.</p> </li> </ul>
     */
    inline const TranslationSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = TranslationSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = TranslationSettings>
    TranslateTextRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminologyNames;
    bool m_terminologyNamesHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::String m_targetLanguageCode;
    bool m_targetLanguageCodeHasBeenSet = false;

    TranslationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
