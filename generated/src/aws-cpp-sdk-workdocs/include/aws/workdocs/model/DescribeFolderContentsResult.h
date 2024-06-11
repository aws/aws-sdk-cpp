﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/FolderMetadata.h>
#include <aws/workdocs/model/DocumentMetadata.h>
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
  class DescribeFolderContentsResult
  {
  public:
    AWS_WORKDOCS_API DescribeFolderContentsResult();
    AWS_WORKDOCS_API DescribeFolderContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeFolderContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The subfolders in the specified folder.</p>
     */
    inline const Aws::Vector<FolderMetadata>& GetFolders() const{ return m_folders; }
    inline void SetFolders(const Aws::Vector<FolderMetadata>& value) { m_folders = value; }
    inline void SetFolders(Aws::Vector<FolderMetadata>&& value) { m_folders = std::move(value); }
    inline DescribeFolderContentsResult& WithFolders(const Aws::Vector<FolderMetadata>& value) { SetFolders(value); return *this;}
    inline DescribeFolderContentsResult& WithFolders(Aws::Vector<FolderMetadata>&& value) { SetFolders(std::move(value)); return *this;}
    inline DescribeFolderContentsResult& AddFolders(const FolderMetadata& value) { m_folders.push_back(value); return *this; }
    inline DescribeFolderContentsResult& AddFolders(FolderMetadata&& value) { m_folders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The documents in the specified folder.</p>
     */
    inline const Aws::Vector<DocumentMetadata>& GetDocuments() const{ return m_documents; }
    inline void SetDocuments(const Aws::Vector<DocumentMetadata>& value) { m_documents = value; }
    inline void SetDocuments(Aws::Vector<DocumentMetadata>&& value) { m_documents = std::move(value); }
    inline DescribeFolderContentsResult& WithDocuments(const Aws::Vector<DocumentMetadata>& value) { SetDocuments(value); return *this;}
    inline DescribeFolderContentsResult& WithDocuments(Aws::Vector<DocumentMetadata>&& value) { SetDocuments(std::move(value)); return *this;}
    inline DescribeFolderContentsResult& AddDocuments(const DocumentMetadata& value) { m_documents.push_back(value); return *this; }
    inline DescribeFolderContentsResult& AddDocuments(DocumentMetadata&& value) { m_documents.push_back(std::move(value)); return *this; }
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
    inline DescribeFolderContentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeFolderContentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeFolderContentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFolderContentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFolderContentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFolderContentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FolderMetadata> m_folders;

    Aws::Vector<DocumentMetadata> m_documents;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
