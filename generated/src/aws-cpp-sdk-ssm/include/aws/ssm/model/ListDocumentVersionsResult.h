/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentVersionInfo.h>
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
  class ListDocumentVersionsResult
  {
  public:
    AWS_SSM_API ListDocumentVersionsResult();
    AWS_SSM_API ListDocumentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListDocumentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document versions.</p>
     */
    inline const Aws::Vector<DocumentVersionInfo>& GetDocumentVersions() const{ return m_documentVersions; }
    inline void SetDocumentVersions(const Aws::Vector<DocumentVersionInfo>& value) { m_documentVersions = value; }
    inline void SetDocumentVersions(Aws::Vector<DocumentVersionInfo>&& value) { m_documentVersions = std::move(value); }
    inline ListDocumentVersionsResult& WithDocumentVersions(const Aws::Vector<DocumentVersionInfo>& value) { SetDocumentVersions(value); return *this;}
    inline ListDocumentVersionsResult& WithDocumentVersions(Aws::Vector<DocumentVersionInfo>&& value) { SetDocumentVersions(std::move(value)); return *this;}
    inline ListDocumentVersionsResult& AddDocumentVersions(const DocumentVersionInfo& value) { m_documentVersions.push_back(value); return *this; }
    inline ListDocumentVersionsResult& AddDocumentVersions(DocumentVersionInfo&& value) { m_documentVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDocumentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDocumentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDocumentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDocumentVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDocumentVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDocumentVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentVersionInfo> m_documentVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
