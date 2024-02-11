/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/translate/model/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class TranslateDocumentRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API TranslateDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TranslateDocument"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The content and content type for the document to be translated. The document
     * size must not exceed 100 KB.</p>
     */
    inline const Document& GetDocument() const{ return m_document; }

    /**
     * <p>The content and content type for the document to be translated. The document
     * size must not exceed 100 KB.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The content and content type for the document to be translated. The document
     * size must not exceed 100 KB.</p>
     */
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The content and content type for the document to be translated. The document
     * size must not exceed 100 KB.</p>
     */
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The content and content type for the document to be translated. The document
     * size must not exceed 100 KB.</p>
     */
    inline TranslateDocumentRequest& WithDocument(const Document& value) { SetDocument(value); return *this;}

    /**
     * <p>The content and content type for the document to be translated. The document
     * size must not exceed 100 KB.</p>
     */
    inline TranslateDocumentRequest& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }

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
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }

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
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }

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
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }

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
    inline TranslateDocumentRequest& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}

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
    inline TranslateDocumentRequest& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}

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
    inline TranslateDocumentRequest& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }

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
    inline TranslateDocumentRequest& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }

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
    inline TranslateDocumentRequest& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }


    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline TranslateDocumentRequest& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline TranslateDocumentRequest& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the source text. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateDocument</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline TranslateDocumentRequest& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool TargetLanguageCodeHasBeenSet() const { return m_targetLanguageCodeHasBeenSet; }

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = value; }

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::move(value); }

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode.assign(value); }

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline TranslateDocumentRequest& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline TranslateDocumentRequest& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code requested for the translated document. For a list of
     * supported language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p>
     */
    inline TranslateDocumentRequest& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}


    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline const TranslationSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline void SetSettings(const TranslationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline void SetSettings(TranslationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline TranslateDocumentRequest& WithSettings(const TranslationSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Settings to configure your translation output. You can configure the
     * following options:</p> <ul> <li> <p>Brevity: not supported.</p> </li> <li>
     * <p>Formality: sets the formality level of the output text.</p> </li> <li>
     * <p>Profanity: masks profane words and phrases in your translation output.</p>
     * </li> </ul>
     */
    inline TranslateDocumentRequest& WithSettings(TranslationSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Document m_document;
    bool m_documentHasBeenSet = false;

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
