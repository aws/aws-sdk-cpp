/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardVersionSummary.h>
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
  class ListDashboardVersionsResult
  {
  public:
    AWS_QUICKSIGHT_API ListDashboardVersionsResult() = default;
    AWS_QUICKSIGHT_API ListDashboardVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListDashboardVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline const Aws::Vector<DashboardVersionSummary>& GetDashboardVersionSummaryList() const { return m_dashboardVersionSummaryList; }
    template<typename DashboardVersionSummaryListT = Aws::Vector<DashboardVersionSummary>>
    void SetDashboardVersionSummaryList(DashboardVersionSummaryListT&& value) { m_dashboardVersionSummaryListHasBeenSet = true; m_dashboardVersionSummaryList = std::forward<DashboardVersionSummaryListT>(value); }
    template<typename DashboardVersionSummaryListT = Aws::Vector<DashboardVersionSummary>>
    ListDashboardVersionsResult& WithDashboardVersionSummaryList(DashboardVersionSummaryListT&& value) { SetDashboardVersionSummaryList(std::forward<DashboardVersionSummaryListT>(value)); return *this;}
    template<typename DashboardVersionSummaryListT = DashboardVersionSummary>
    ListDashboardVersionsResult& AddDashboardVersionSummaryList(DashboardVersionSummaryListT&& value) { m_dashboardVersionSummaryListHasBeenSet = true; m_dashboardVersionSummaryList.emplace_back(std::forward<DashboardVersionSummaryListT>(value)); return *this; }
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
    ListDashboardVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListDashboardVersionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDashboardVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardVersionSummary> m_dashboardVersionSummaryList;
    bool m_dashboardVersionSummaryListHasBeenSet = false;

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
