/**
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
    AWS_WORKDOCS_API DescribeFolderContentsResult() = default;
    AWS_WORKDOCS_API DescribeFolderContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeFolderContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The subfolders in the specified folder.</p>
     */
    inline const Aws::Vector<FolderMetadata>& GetFolders() const { return m_folders; }
    template<typename FoldersT = Aws::Vector<FolderMetadata>>
    void SetFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders = std::forward<FoldersT>(value); }
    template<typename FoldersT = Aws::Vector<FolderMetadata>>
    DescribeFolderContentsResult& WithFolders(FoldersT&& value) { SetFolders(std::forward<FoldersT>(value)); return *this;}
    template<typename FoldersT = FolderMetadata>
    DescribeFolderContentsResult& AddFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders.emplace_back(std::forward<FoldersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The documents in the specified folder.</p>
     */
    inline const Aws::Vector<DocumentMetadata>& GetDocuments() const { return m_documents; }
    template<typename DocumentsT = Aws::Vector<DocumentMetadata>>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = Aws::Vector<DocumentMetadata>>
    DescribeFolderContentsResult& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    template<typename DocumentsT = DocumentMetadata>
    DescribeFolderContentsResult& AddDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents.emplace_back(std::forward<DocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeFolderContentsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFolderContentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FolderMetadata> m_folders;
    bool m_foldersHasBeenSet = false;

    Aws::Vector<DocumentMetadata> m_documents;
    bool m_documentsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
