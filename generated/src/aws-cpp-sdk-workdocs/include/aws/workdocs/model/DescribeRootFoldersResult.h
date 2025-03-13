/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/FolderMetadata.h>
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
  class DescribeRootFoldersResult
  {
  public:
    AWS_WORKDOCS_API DescribeRootFoldersResult() = default;
    AWS_WORKDOCS_API DescribeRootFoldersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeRootFoldersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user's special folders.</p>
     */
    inline const Aws::Vector<FolderMetadata>& GetFolders() const { return m_folders; }
    template<typename FoldersT = Aws::Vector<FolderMetadata>>
    void SetFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders = std::forward<FoldersT>(value); }
    template<typename FoldersT = Aws::Vector<FolderMetadata>>
    DescribeRootFoldersResult& WithFolders(FoldersT&& value) { SetFolders(std::forward<FoldersT>(value)); return *this;}
    template<typename FoldersT = FolderMetadata>
    DescribeRootFoldersResult& AddFolders(FoldersT&& value) { m_foldersHasBeenSet = true; m_folders.emplace_back(std::forward<FoldersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeRootFoldersResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRootFoldersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FolderMetadata> m_folders;
    bool m_foldersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
