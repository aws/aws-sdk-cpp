/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DocumentDetails.h>
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
namespace QBusiness
{
namespace Model
{
  class ListDocumentsResult
  {
  public:
    AWS_QBUSINESS_API ListDocumentsResult();
    AWS_QBUSINESS_API ListDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of document details.</p>
     */
    inline const Aws::Vector<DocumentDetails>& GetDocumentDetailList() const{ return m_documentDetailList; }

    /**
     * <p>A list of document details.</p>
     */
    inline void SetDocumentDetailList(const Aws::Vector<DocumentDetails>& value) { m_documentDetailList = value; }

    /**
     * <p>A list of document details.</p>
     */
    inline void SetDocumentDetailList(Aws::Vector<DocumentDetails>&& value) { m_documentDetailList = std::move(value); }

    /**
     * <p>A list of document details.</p>
     */
    inline ListDocumentsResult& WithDocumentDetailList(const Aws::Vector<DocumentDetails>& value) { SetDocumentDetailList(value); return *this;}

    /**
     * <p>A list of document details.</p>
     */
    inline ListDocumentsResult& WithDocumentDetailList(Aws::Vector<DocumentDetails>&& value) { SetDocumentDetailList(std::move(value)); return *this;}

    /**
     * <p>A list of document details.</p>
     */
    inline ListDocumentsResult& AddDocumentDetailList(const DocumentDetails& value) { m_documentDetailList.push_back(value); return *this; }

    /**
     * <p>A list of document details.</p>
     */
    inline ListDocumentsResult& AddDocumentDetailList(DocumentDetails&& value) { m_documentDetailList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline ListDocumentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline ListDocumentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of documents.</p>
     */
    inline ListDocumentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDocumentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDocumentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDocumentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DocumentDetails> m_documentDetailList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
