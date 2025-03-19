/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class SearchFoldersResult
  {
  public:
    AWS_QUICKSIGHT_API SearchFoldersResult() = default;
    AWS_QUICKSIGHT_API SearchFoldersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchFoldersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchFoldersResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains all of the folders in the Amazon Web Services
     * account. This structure provides basic information about the folders.</p>
     */
    inline const Aws::Vector<FolderSummary>& GetFolderSummaryList() const { return m_folderSummaryList; }
    template<typename FolderSummaryListT = Aws::Vector<FolderSummary>>
    void SetFolderSummaryList(FolderSummaryListT&& value) { m_folderSummaryListHasBeenSet = true; m_folderSummaryList = std::forward<FolderSummaryListT>(value); }
    template<typename FolderSummaryListT = Aws::Vector<FolderSummary>>
    SearchFoldersResult& WithFolderSummaryList(FolderSummaryListT&& value) { SetFolderSummaryList(std::forward<FolderSummaryListT>(value)); return *this;}
    template<typename FolderSummaryListT = FolderSummary>
    SearchFoldersResult& AddFolderSummaryList(FolderSummaryListT&& value) { m_folderSummaryListHasBeenSet = true; m_folderSummaryList.emplace_back(std::forward<FolderSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchFoldersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchFoldersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::Vector<FolderSummary> m_folderSummaryList;
    bool m_folderSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
