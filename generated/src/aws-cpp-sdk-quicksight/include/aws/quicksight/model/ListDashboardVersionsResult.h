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
    AWS_QUICKSIGHT_API ListDashboardVersionsResult();
    AWS_QUICKSIGHT_API ListDashboardVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListDashboardVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline const Aws::Vector<DashboardVersionSummary>& GetDashboardVersionSummaryList() const{ return m_dashboardVersionSummaryList; }

    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline void SetDashboardVersionSummaryList(const Aws::Vector<DashboardVersionSummary>& value) { m_dashboardVersionSummaryList = value; }

    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline void SetDashboardVersionSummaryList(Aws::Vector<DashboardVersionSummary>&& value) { m_dashboardVersionSummaryList = std::move(value); }

    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline ListDashboardVersionsResult& WithDashboardVersionSummaryList(const Aws::Vector<DashboardVersionSummary>& value) { SetDashboardVersionSummaryList(value); return *this;}

    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline ListDashboardVersionsResult& WithDashboardVersionSummaryList(Aws::Vector<DashboardVersionSummary>&& value) { SetDashboardVersionSummaryList(std::move(value)); return *this;}

    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline ListDashboardVersionsResult& AddDashboardVersionSummaryList(const DashboardVersionSummary& value) { m_dashboardVersionSummaryList.push_back(value); return *this; }

    /**
     * <p>A structure that contains information about each version of the
     * dashboard.</p>
     */
    inline ListDashboardVersionsResult& AddDashboardVersionSummaryList(DashboardVersionSummary&& value) { m_dashboardVersionSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListDashboardVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListDashboardVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListDashboardVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListDashboardVersionsResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline ListDashboardVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListDashboardVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListDashboardVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DashboardVersionSummary> m_dashboardVersionSummaryList;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
