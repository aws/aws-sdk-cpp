﻿/**
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
    AWS_TEXTRACT_API AnalyzeIDResult();
    AWS_TEXTRACT_API AnalyzeIDResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeIDResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of documents processed by AnalyzeID. Includes a number denoting
     * their place in the list and the response structure for the document.</p>
     */
    inline const Aws::Vector<IdentityDocument>& GetIdentityDocuments() const{ return m_identityDocuments; }
    inline void SetIdentityDocuments(const Aws::Vector<IdentityDocument>& value) { m_identityDocuments = value; }
    inline void SetIdentityDocuments(Aws::Vector<IdentityDocument>&& value) { m_identityDocuments = std::move(value); }
    inline AnalyzeIDResult& WithIdentityDocuments(const Aws::Vector<IdentityDocument>& value) { SetIdentityDocuments(value); return *this;}
    inline AnalyzeIDResult& WithIdentityDocuments(Aws::Vector<IdentityDocument>&& value) { SetIdentityDocuments(std::move(value)); return *this;}
    inline AnalyzeIDResult& AddIdentityDocuments(const IdentityDocument& value) { m_identityDocuments.push_back(value); return *this; }
    inline AnalyzeIDResult& AddIdentityDocuments(IdentityDocument&& value) { m_identityDocuments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline AnalyzeIDResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline AnalyzeIDResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AnalyzeIdentity API being used to process documents.</p>
     */
    inline const Aws::String& GetAnalyzeIDModelVersion() const{ return m_analyzeIDModelVersion; }
    inline void SetAnalyzeIDModelVersion(const Aws::String& value) { m_analyzeIDModelVersion = value; }
    inline void SetAnalyzeIDModelVersion(Aws::String&& value) { m_analyzeIDModelVersion = std::move(value); }
    inline void SetAnalyzeIDModelVersion(const char* value) { m_analyzeIDModelVersion.assign(value); }
    inline AnalyzeIDResult& WithAnalyzeIDModelVersion(const Aws::String& value) { SetAnalyzeIDModelVersion(value); return *this;}
    inline AnalyzeIDResult& WithAnalyzeIDModelVersion(Aws::String&& value) { SetAnalyzeIDModelVersion(std::move(value)); return *this;}
    inline AnalyzeIDResult& WithAnalyzeIDModelVersion(const char* value) { SetAnalyzeIDModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AnalyzeIDResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AnalyzeIDResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AnalyzeIDResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityDocument> m_identityDocuments;

    DocumentMetadata m_documentMetadata;

    Aws::String m_analyzeIDModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
