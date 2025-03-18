/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardSummary.h>
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
  class SearchDashboardsResult
  {
  public:
    AWS_QUICKSIGHT_API SearchDashboardsResult() = default;
    AWS_QUICKSIGHT_API SearchDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of dashboards owned by the user specified in <code>Filters</code> in
     * your request.</p>
     */
    inline const Aws::Vector<DashboardSummary>& GetDashboardSummaryList() const { return m_dashboardSummaryList; }
    template<typename DashboardSummaryListT = Aws::Vector<DashboardSummary>>
    void SetDashboardSummaryList(DashboardSummaryListT&& value) { m_dashboardSummaryListHasBeenSet = true; m_dashboardSummaryList = std::forward<DashboardSummaryListT>(value); }
    template<typename DashboardSummaryListT = Aws::Vector<DashboardSummary>>
    SearchDashboardsResult& WithDashboardSummaryList(DashboardSummaryListT&& value) { SetDashboardSummaryList(std::forward<DashboardSummaryListT>(value)); return *this;}
    template<typename DashboardSummaryListT = DashboardSummary>
    SearchDashboardsResult& AddDashboardSummaryList(DashboardSummaryListT&& value) { m_dashboardSummaryListHasBeenSet = true; m_dashboardSummaryList.emplace_back(std::forward<DashboardSummaryListT>(value)); return *this; }
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
    SearchDashboardsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchDashboardsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchDashboardsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardSummary> m_dashboardSummaryList;
    bool m_dashboardSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
