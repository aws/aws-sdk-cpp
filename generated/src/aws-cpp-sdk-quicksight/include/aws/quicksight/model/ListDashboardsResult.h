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
  class ListDashboardsResult
  {
  public:
    AWS_QUICKSIGHT_API ListDashboardsResult();
    AWS_QUICKSIGHT_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline const Aws::Vector<DashboardSummary>& GetDashboardSummaryList() const{ return m_dashboardSummaryList; }

    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline void SetDashboardSummaryList(const Aws::Vector<DashboardSummary>& value) { m_dashboardSummaryList = value; }

    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline void SetDashboardSummaryList(Aws::Vector<DashboardSummary>&& value) { m_dashboardSummaryList = std::move(value); }

    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline ListDashboardsResult& WithDashboardSummaryList(const Aws::Vector<DashboardSummary>& value) { SetDashboardSummaryList(value); return *this;}

    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline ListDashboardsResult& WithDashboardSummaryList(Aws::Vector<DashboardSummary>&& value) { SetDashboardSummaryList(std::move(value)); return *this;}

    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline ListDashboardsResult& AddDashboardSummaryList(const DashboardSummary& value) { m_dashboardSummaryList.push_back(value); return *this; }

    /**
     * <p>A structure that contains all of the dashboards in your Amazon Web Services
     * account. This structure provides basic information about the dashboards.</p>
     */
    inline ListDashboardsResult& AddDashboardSummaryList(DashboardSummary&& value) { m_dashboardSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListDashboardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListDashboardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListDashboardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListDashboardsResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListDashboardsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListDashboardsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListDashboardsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DashboardSummary> m_dashboardSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
