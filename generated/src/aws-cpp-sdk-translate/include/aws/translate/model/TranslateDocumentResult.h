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
    AWS_TRANSLATE_API TranslateDocumentResult() = default;
    AWS_TRANSLATE_API TranslateDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API TranslateDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document containing the translated content. The document format matches
     * the source document format.</p>
     */
    inline const TranslatedDocument& GetTranslatedDocument() const { return m_translatedDocument; }
    template<typename TranslatedDocumentT = TranslatedDocument>
    void SetTranslatedDocument(TranslatedDocumentT&& value) { m_translatedDocumentHasBeenSet = true; m_translatedDocument = std::forward<TranslatedDocumentT>(value); }
    template<typename TranslatedDocumentT = TranslatedDocument>
    TranslateDocumentResult& WithTranslatedDocument(TranslatedDocumentT&& value) { SetTranslatedDocument(std::forward<TranslatedDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the source document.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    TranslateDocumentResult& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the translated document. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const { return m_targetLanguageCode; }
    template<typename TargetLanguageCodeT = Aws::String>
    void SetTargetLanguageCode(TargetLanguageCodeT&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::forward<TargetLanguageCodeT>(value); }
    template<typename TargetLanguageCodeT = Aws::String>
    TranslateDocumentResult& WithTargetLanguageCode(TargetLanguageCodeT&& value) { SetTargetLanguageCode(std::forward<TargetLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate to produce the translated text document.</p>
     */
    inline const Aws::Vector<AppliedTerminology>& GetAppliedTerminologies() const { return m_appliedTerminologies; }
    template<typename AppliedTerminologiesT = Aws::Vector<AppliedTerminology>>
    void SetAppliedTerminologies(AppliedTerminologiesT&& value) { m_appliedTerminologiesHasBeenSet = true; m_appliedTerminologies = std::forward<AppliedTerminologiesT>(value); }
    template<typename AppliedTerminologiesT = Aws::Vector<AppliedTerminology>>
    TranslateDocumentResult& WithAppliedTerminologies(AppliedTerminologiesT&& value) { SetAppliedTerminologies(std::forward<AppliedTerminologiesT>(value)); return *this;}
    template<typename AppliedTerminologiesT = AppliedTerminology>
    TranslateDocumentResult& AddAppliedTerminologies(AppliedTerminologiesT&& value) { m_appliedTerminologiesHasBeenSet = true; m_appliedTerminologies.emplace_back(std::forward<AppliedTerminologiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TranslationSettings& GetAppliedSettings() const { return m_appliedSettings; }
    template<typename AppliedSettingsT = TranslationSettings>
    void SetAppliedSettings(AppliedSettingsT&& value) { m_appliedSettingsHasBeenSet = true; m_appliedSettings = std::forward<AppliedSettingsT>(value); }
    template<typename AppliedSettingsT = TranslationSettings>
    TranslateDocumentResult& WithAppliedSettings(AppliedSettingsT&& value) { SetAppliedSettings(std::forward<AppliedSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TranslateDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TranslatedDocument m_translatedDocument;
    bool m_translatedDocumentHasBeenSet = false;

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
