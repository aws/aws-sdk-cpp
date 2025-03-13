/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/TimeSeriesServiceStatistics.h>
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
namespace XRay
{
namespace Model
{
  class GetTimeSeriesServiceStatisticsResult
  {
  public:
    AWS_XRAY_API GetTimeSeriesServiceStatisticsResult() = default;
    AWS_XRAY_API GetTimeSeriesServiceStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetTimeSeriesServiceStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of statistics.</p>
     */
    inline const Aws::Vector<TimeSeriesServiceStatistics>& GetTimeSeriesServiceStatistics() const { return m_timeSeriesServiceStatistics; }
    template<typename TimeSeriesServiceStatisticsT = Aws::Vector<TimeSeriesServiceStatistics>>
    void SetTimeSeriesServiceStatistics(TimeSeriesServiceStatisticsT&& value) { m_timeSeriesServiceStatisticsHasBeenSet = true; m_timeSeriesServiceStatistics = std::forward<TimeSeriesServiceStatisticsT>(value); }
    template<typename TimeSeriesServiceStatisticsT = Aws::Vector<TimeSeriesServiceStatistics>>
    GetTimeSeriesServiceStatisticsResult& WithTimeSeriesServiceStatistics(TimeSeriesServiceStatisticsT&& value) { SetTimeSeriesServiceStatistics(std::forward<TimeSeriesServiceStatisticsT>(value)); return *this;}
    template<typename TimeSeriesServiceStatisticsT = TimeSeriesServiceStatistics>
    GetTimeSeriesServiceStatisticsResult& AddTimeSeriesServiceStatistics(TimeSeriesServiceStatisticsT&& value) { m_timeSeriesServiceStatisticsHasBeenSet = true; m_timeSeriesServiceStatistics.emplace_back(std::forward<TimeSeriesServiceStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether or not a group's filter expression has been
     * consistent, or if a returned aggregation might show statistics from an older
     * version of the group's filter expression.</p>
     */
    inline bool GetContainsOldGroupVersions() const { return m_containsOldGroupVersions; }
    inline void SetContainsOldGroupVersions(bool value) { m_containsOldGroupVersionsHasBeenSet = true; m_containsOldGroupVersions = value; }
    inline GetTimeSeriesServiceStatisticsResult& WithContainsOldGroupVersions(bool value) { SetContainsOldGroupVersions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTimeSeriesServiceStatisticsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTimeSeriesServiceStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TimeSeriesServiceStatistics> m_timeSeriesServiceStatistics;
    bool m_timeSeriesServiceStatisticsHasBeenSet = false;

    bool m_containsOldGroupVersions{false};
    bool m_containsOldGroupVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
