/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/MetricKeyDataPoints.h>
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
namespace PI
{
namespace Model
{
  class GetResourceMetricsResult
  {
  public:
    AWS_PI_API GetResourceMetricsResult() = default;
    AWS_PI_API GetResourceMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API GetResourceMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The start time for the returned metrics, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAlignedStartTime() const { return m_alignedStartTime; }
    template<typename AlignedStartTimeT = Aws::Utils::DateTime>
    void SetAlignedStartTime(AlignedStartTimeT&& value) { m_alignedStartTimeHasBeenSet = true; m_alignedStartTime = std::forward<AlignedStartTimeT>(value); }
    template<typename AlignedStartTimeT = Aws::Utils::DateTime>
    GetResourceMetricsResult& WithAlignedStartTime(AlignedStartTimeT&& value) { SetAlignedStartTime(std::forward<AlignedStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the returned metrics, after alignment to a granular boundary
     * (as specified by <code>PeriodInSeconds</code>). <code>AlignedEndTime</code> will
     * be greater than or equal to the value of the user-specified
     * <code>Endtime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAlignedEndTime() const { return m_alignedEndTime; }
    template<typename AlignedEndTimeT = Aws::Utils::DateTime>
    void SetAlignedEndTime(AlignedEndTimeT&& value) { m_alignedEndTimeHasBeenSet = true; m_alignedEndTime = std::forward<AlignedEndTimeT>(value); }
    template<typename AlignedEndTimeT = Aws::Utils::DateTime>
    GetResourceMetricsResult& WithAlignedEndTime(AlignedEndTimeT&& value) { SetAlignedEndTime(std::forward<AlignedEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetResourceMetricsResult& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline const Aws::Vector<MetricKeyDataPoints>& GetMetricList() const { return m_metricList; }
    template<typename MetricListT = Aws::Vector<MetricKeyDataPoints>>
    void SetMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList = std::forward<MetricListT>(value); }
    template<typename MetricListT = Aws::Vector<MetricKeyDataPoints>>
    GetResourceMetricsResult& WithMetricList(MetricListT&& value) { SetMetricList(std::forward<MetricListT>(value)); return *this;}
    template<typename MetricListT = MetricKeyDataPoints>
    GetResourceMetricsResult& AddMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList.emplace_back(std::forward<MetricListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_alignedStartTime{};
    bool m_alignedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_alignedEndTime{};
    bool m_alignedEndTimeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<MetricKeyDataPoints> m_metricList;
    bool m_metricListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
