/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/IdentityDocument.h>
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
namespace Textract
{
namespace Model
{
  class AnalyzeIDResult
  {
  public:
    AWS_TEXTRACT_API AnalyzeIDResult() = default;
    AWS_TEXTRACT_API AnalyzeIDResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeIDResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of documents processed by AnalyzeID. Includes a number denoting
     * their place in the list and the response structure for the document.</p>
     */
    inline const Aws::Vector<IdentityDocument>& GetIdentityDocuments() const { return m_identityDocuments; }
    template<typename IdentityDocumentsT = Aws::Vector<IdentityDocument>>
    void SetIdentityDocuments(IdentityDocumentsT&& value) { m_identityDocumentsHasBeenSet = true; m_identityDocuments = std::forward<IdentityDocumentsT>(value); }
    template<typename IdentityDocumentsT = Aws::Vector<IdentityDocument>>
    AnalyzeIDResult& WithIdentityDocuments(IdentityDocumentsT&& value) { SetIdentityDocuments(std::forward<IdentityDocumentsT>(value)); return *this;}
    template<typename IdentityDocumentsT = IdentityDocument>
    AnalyzeIDResult& AddIdentityDocuments(IdentityDocumentsT&& value) { m_identityDocumentsHasBeenSet = true; m_identityDocuments.emplace_back(std::forward<IdentityDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    AnalyzeIDResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AnalyzeIdentity API being used to process documents.</p>
     */
    inline const Aws::String& GetAnalyzeIDModelVersion() const { return m_analyzeIDModelVersion; }
    template<typename AnalyzeIDModelVersionT = Aws::String>
    void SetAnalyzeIDModelVersion(AnalyzeIDModelVersionT&& value) { m_analyzeIDModelVersionHasBeenSet = true; m_analyzeIDModelVersion = std::forward<AnalyzeIDModelVersionT>(value); }
    template<typename AnalyzeIDModelVersionT = Aws::String>
    AnalyzeIDResult& WithAnalyzeIDModelVersion(AnalyzeIDModelVersionT&& value) { SetAnalyzeIDModelVersion(std::forward<AnalyzeIDModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AnalyzeIDResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityDocument> m_identityDocuments;
    bool m_identityDocumentsHasBeenSet = false;

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    Aws::String m_analyzeIDModelVersion;
    bool m_analyzeIDModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
