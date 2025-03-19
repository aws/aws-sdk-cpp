/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssetBundleImportJobSummary.h>
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
  class ListAssetBundleImportJobsResult
  {
  public:
    AWS_QUICKSIGHT_API ListAssetBundleImportJobsResult() = default;
    AWS_QUICKSIGHT_API ListAssetBundleImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListAssetBundleImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of import job summaries.</p>
     */
    inline const Aws::Vector<AssetBundleImportJobSummary>& GetAssetBundleImportJobSummaryList() const { return m_assetBundleImportJobSummaryList; }
    template<typename AssetBundleImportJobSummaryListT = Aws::Vector<AssetBundleImportJobSummary>>
    void SetAssetBundleImportJobSummaryList(AssetBundleImportJobSummaryListT&& value) { m_assetBundleImportJobSummaryListHasBeenSet = true; m_assetBundleImportJobSummaryList = std::forward<AssetBundleImportJobSummaryListT>(value); }
    template<typename AssetBundleImportJobSummaryListT = Aws::Vector<AssetBundleImportJobSummary>>
    ListAssetBundleImportJobsResult& WithAssetBundleImportJobSummaryList(AssetBundleImportJobSummaryListT&& value) { SetAssetBundleImportJobSummaryList(std::forward<AssetBundleImportJobSummaryListT>(value)); return *this;}
    template<typename AssetBundleImportJobSummaryListT = AssetBundleImportJobSummary>
    ListAssetBundleImportJobsResult& AddAssetBundleImportJobSummaryList(AssetBundleImportJobSummaryListT&& value) { m_assetBundleImportJobSummaryListHasBeenSet = true; m_assetBundleImportJobSummaryList.emplace_back(std::forward<AssetBundleImportJobSummaryListT>(value)); return *this; }
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
    ListAssetBundleImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetBundleImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the response.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListAssetBundleImportJobsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetBundleImportJobSummary> m_assetBundleImportJobSummaryList;
    bool m_assetBundleImportJobSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
