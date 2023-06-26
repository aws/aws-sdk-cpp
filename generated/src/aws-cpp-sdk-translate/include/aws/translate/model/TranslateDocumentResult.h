/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TranslatedDocument.h>
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
  class TranslateDocumentResult
  {
  public:
    AWS_TRANSLATE_API TranslateDocumentResult();
    AWS_TRANSLATE_API TranslateDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API TranslateDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The document containing the translated content. The document format matches
     * the source document format.</p>
     */
    inline const TranslatedDocument& GetTranslatedDocument() const{ return m_translatedDocument; }

    /**
     * <p>The document containing the translated content. The document format matches
     * the source document format.</p>
     */
    inline void SetTranslatedDocument(const TranslatedDocument& value) { m_translatedDocument = value; }

    /**
     * <p>The document containing the translated content. The document format matches
     * the source document format.</p>
     */
    inline void SetTranslatedDocument(TranslatedDocument&& value) { m_translatedDocument = std::move(value); }

    /**
     * <p>The document containing the translated content. The document format matches
     * the source document format.</p>
     */
    inline TranslateDocumentResult& WithTranslatedDocument(const TranslatedDocument& value) { SetTranslatedDocument(value); return *this;}

    /**
     * <p>The document containing the translated content. The document format matches
     * the source document format.</p>
     */
    inline TranslateDocumentResult& WithTranslatedDocument(TranslatedDocument&& value) { SetTranslatedDocument(std::move(value)); return *this;}


    /**
     * <p>The language code of the source document.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code of the source document.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCode = value; }

    /**
     * <p>The language code of the source document.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code of the source document.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code of the source document.</p>
     */
    inline TranslateDocumentResult& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code of the source document.</p>
     */
    inline TranslateDocumentResult& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code of the source document.</p>
     */
    inline TranslateDocumentResult& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code of the translated document. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>The language code of the translated document. </p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCode = value; }

    /**
     * <p>The language code of the translated document. </p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCode = std::move(value); }

    /**
     * <p>The language code of the translated document. </p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCode.assign(value); }

    /**
     * <p>The language code of the translated document. </p>
     */
    inline TranslateDocumentResult& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the translated document. </p>
     */
    inline TranslateDocumentResult& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code of the translated document. </p>
     */
    inline TranslateDocumentResult& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}


    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline const Aws::Vector<AppliedTerminology>& GetAppliedTerminologies() const{ return m_appliedTerminologies; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline void SetAppliedTerminologies(const Aws::Vector<AppliedTerminology>& value) { m_appliedTerminologies = value; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline void SetAppliedTerminologies(Aws::Vector<AppliedTerminology>&& value) { m_appliedTerminologies = std::move(value); }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline TranslateDocumentResult& WithAppliedTerminologies(const Aws::Vector<AppliedTerminology>& value) { SetAppliedTerminologies(value); return *this;}

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline TranslateDocumentResult& WithAppliedTerminologies(Aws::Vector<AppliedTerminology>&& value) { SetAppliedTerminologies(std::move(value)); return *this;}

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline TranslateDocumentResult& AddAppliedTerminologies(const AppliedTerminology& value) { m_appliedTerminologies.push_back(value); return *this; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline TranslateDocumentResult& AddAppliedTerminologies(AppliedTerminology&& value) { m_appliedTerminologies.push_back(std::move(value)); return *this; }


    
    inline const TranslationSettings& GetAppliedSettings() const{ return m_appliedSettings; }

    
    inline void SetAppliedSettings(const TranslationSettings& value) { m_appliedSettings = value; }

    
    inline void SetAppliedSettings(TranslationSettings&& value) { m_appliedSettings = std::move(value); }

    
    inline TranslateDocumentResult& WithAppliedSettings(const TranslationSettings& value) { SetAppliedSettings(value); return *this;}

    
    inline TranslateDocumentResult& WithAppliedSettings(TranslationSettings&& value) { SetAppliedSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TranslateDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TranslateDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TranslateDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TranslatedDocument m_translatedDocument;

    Aws::String m_sourceLanguageCode;

    Aws::String m_targetLanguageCode;

    Aws::Vector<AppliedTerminology> m_appliedTerminologies;

    TranslationSettings m_appliedSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
