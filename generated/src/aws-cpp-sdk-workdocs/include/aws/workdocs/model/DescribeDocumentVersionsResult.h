﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
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
namespace WorkDocs
{
namespace Model
{
  class DescribeDocumentVersionsResult
  {
  public:
    AWS_WORKDOCS_API DescribeDocumentVersionsResult();
    AWS_WORKDOCS_API DescribeDocumentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeDocumentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The document versions.</p>
     */
    inline const Aws::Vector<DocumentVersionMetadata>& GetDocumentVersions() const{ return m_documentVersions; }
    inline void SetDocumentVersions(const Aws::Vector<DocumentVersionMetadata>& value) { m_documentVersions = value; }
    inline void SetDocumentVersions(Aws::Vector<DocumentVersionMetadata>&& value) { m_documentVersions = std::move(value); }
    inline DescribeDocumentVersionsResult& WithDocumentVersions(const Aws::Vector<DocumentVersionMetadata>& value) { SetDocumentVersions(value); return *this;}
    inline DescribeDocumentVersionsResult& WithDocumentVersions(Aws::Vector<DocumentVersionMetadata>&& value) { SetDocumentVersions(std::move(value)); return *this;}
    inline DescribeDocumentVersionsResult& AddDocumentVersions(const DocumentVersionMetadata& value) { m_documentVersions.push_back(value); return *this; }
    inline DescribeDocumentVersionsResult& AddDocumentVersions(DocumentVersionMetadata&& value) { m_documentVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDocumentVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDocumentVersionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDocumentVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDocumentVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDocumentVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDocumentVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentVersionMetadata> m_documentVersions;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
