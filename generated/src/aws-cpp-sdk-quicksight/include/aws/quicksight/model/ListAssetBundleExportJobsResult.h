/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssetBundleExportJobSummary.h>
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
  class ListAssetBundleExportJobsResult
  {
  public:
    AWS_QUICKSIGHT_API ListAssetBundleExportJobsResult() = default;
    AWS_QUICKSIGHT_API ListAssetBundleExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListAssetBundleExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of export job summaries.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobSummary>& GetAssetBundleExportJobSummaryList() const { return m_assetBundleExportJobSummaryList; }
    template<typename AssetBundleExportJobSummaryListT = Aws::Vector<AssetBundleExportJobSummary>>
    void SetAssetBundleExportJobSummaryList(AssetBundleExportJobSummaryListT&& value) { m_assetBundleExportJobSummaryListHasBeenSet = true; m_assetBundleExportJobSummaryList = std::forward<AssetBundleExportJobSummaryListT>(value); }
    template<typename AssetBundleExportJobSummaryListT = Aws::Vector<AssetBundleExportJobSummary>>
    ListAssetBundleExportJobsResult& WithAssetBundleExportJobSummaryList(AssetBundleExportJobSummaryListT&& value) { SetAssetBundleExportJobSummaryList(std::forward<AssetBundleExportJobSummaryListT>(value)); return *this;}
    template<typename AssetBundleExportJobSummaryListT = AssetBundleExportJobSummary>
    ListAssetBundleExportJobsResult& AddAssetBundleExportJobSummaryList(AssetBundleExportJobSummaryListT&& value) { m_assetBundleExportJobSummaryListHasBeenSet = true; m_assetBundleExportJobSummaryList.emplace_back(std::forward<AssetBundleExportJobSummaryListT>(value)); return *this; }
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
    ListAssetBundleExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetBundleExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListAssetBundleExportJobsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetBundleExportJobSummary> m_assetBundleExportJobSummaryList;
    bool m_assetBundleExportJobSummaryListHasBeenSet = false;

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
