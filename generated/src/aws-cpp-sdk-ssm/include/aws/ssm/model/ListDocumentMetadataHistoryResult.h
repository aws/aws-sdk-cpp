/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentMetadataResponseInfo.h>
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
namespace SSM
{
namespace Model
{
  class ListDocumentMetadataHistoryResult
  {
  public:
    AWS_SSM_API ListDocumentMetadataHistoryResult();
    AWS_SSM_API ListDocumentMetadataHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListDocumentMetadataHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the change template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the change template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the change template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the change template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the change template.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the change template.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }

    /**
     * <p>The version of the change template.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }

    /**
     * <p>The version of the change template.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }

    /**
     * <p>The version of the change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline void SetAuthor(const Aws::String& value) { m_author = value; }

    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline void SetAuthor(Aws::String&& value) { m_author = std::move(value); }

    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline void SetAuthor(const char* value) { m_author.assign(value); }

    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p>The user ID of the person in the organization who requested the review of the
     * change template.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * <p>Information about the response to the change template approval request.</p>
     */
    inline const DocumentMetadataResponseInfo& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Information about the response to the change template approval request.</p>
     */
    inline void SetMetadata(const DocumentMetadataResponseInfo& value) { m_metadata = value; }

    /**
     * <p>Information about the response to the change template approval request.</p>
     */
    inline void SetMetadata(DocumentMetadataResponseInfo&& value) { m_metadata = std::move(value); }

    /**
     * <p>Information about the response to the change template approval request.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithMetadata(const DocumentMetadataResponseInfo& value) { SetMetadata(value); return *this;}

    /**
     * <p>Information about the response to the change template approval request.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithMetadata(DocumentMetadataResponseInfo&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListDocumentMetadataHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDocumentMetadataHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDocumentMetadataHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDocumentMetadataHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_documentVersion;

    Aws::String m_author;

    DocumentMetadataResponseInfo m_metadata;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
