/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pi/model/PeriodAlignment.h>
#include <aws/pi/model/MetricQuery.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class GetResourceMetricsRequest : public PIRequest
  {
  public:
    AWS_PI_API GetResourceMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceMetrics"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid values are as follows:</p> <ul> <li> <p> <code>RDS</code> </p>
     * </li> <li> <p> <code>DOCDB</code> </p> </li> </ul>
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline GetResourceMetricsRequest& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetResourceMetricsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of one or more queries to perform. Each query must specify a
     * Performance Insights metric and specify an aggregate function, and you can
     * provide filtering criteria. You must append the aggregate function to the
     * metric. For example, to find the average for the metric <code>db.load</code> you
     * must use <code>db.load.avg</code>. Valid values for aggregate functions include
     * <code>.avg</code>, <code>.min</code>, <code>.max</code>, and
     * <code>.sum</code>.</p>
     */
    inline const Aws::Vector<MetricQuery>& GetMetricQueries() const { return m_metricQueries; }
    inline bool MetricQueriesHasBeenSet() const { return m_metricQueriesHasBeenSet; }
    template<typename MetricQueriesT = Aws::Vector<MetricQuery>>
    void SetMetricQueries(MetricQueriesT&& value) { m_metricQueriesHasBeenSet = true; m_metricQueries = std::forward<MetricQueriesT>(value); }
    template<typename MetricQueriesT = Aws::Vector<MetricQuery>>
    GetResourceMetricsRequest& WithMetricQueries(MetricQueriesT&& value) { SetMetricQueries(std::forward<MetricQueriesT>(value)); return *this;}
    template<typename MetricQueriesT = MetricQuery>
    GetResourceMetricsRequest& AddMetricQueries(MetricQueriesT&& value) { m_metricQueriesHasBeenSet = true; m_metricQueries.emplace_back(std::forward<MetricQueriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time specifying the beginning of the requested time series query
     * range. You can't specify a <code>StartTime</code> that is earlier than 7 days
     * ago. By default, Performance Insights has 7 days of retention, but you can
     * extend this range up to 2 years. The value specified is <i>inclusive</i>. Thus,
     * the command returns data points equal to or greater than
     * <code>StartTime</code>.</p> <p>The value for <code>StartTime</code> must be
     * earlier than the value for <code>EndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetResourceMetricsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time specifying the end of the requested time series query
     * range. The value specified is <i>exclusive</i>. Thus, the command returns data
     * points less than (but not equal to) <code>EndTime</code>.</p> <p>The value for
     * <code>EndTime</code> must be later than the value for
     * <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetResourceMetricsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the data points returned from Performance
     * Insights. A period can be as short as one second, or as long as one day (86400
     * seconds). Valid values are:</p> <ul> <li> <p> <code>1</code> (one second)</p>
     * </li> <li> <p> <code>60</code> (one minute)</p> </li> <li> <p> <code>300</code>
     * (five minutes)</p> </li> <li> <p> <code>3600</code> (one hour)</p> </li> <li>
     * <p> <code>86400</code> (twenty-four hours)</p> </li> </ul> <p>If you don't
     * specify <code>PeriodInSeconds</code>, then Performance Insights will choose a
     * value for you, with a goal of returning roughly 100-200 data points in the
     * response.</p>
     */
    inline int GetPeriodInSeconds() const { return m_periodInSeconds; }
    inline bool PeriodInSecondsHasBeenSet() const { return m_periodInSecondsHasBeenSet; }
    inline void SetPeriodInSeconds(int value) { m_periodInSecondsHasBeenSet = true; m_periodInSeconds = value; }
    inline GetResourceMetricsRequest& WithPeriodInSeconds(int value) { SetPeriodInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetResourceMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned timestamp which is the start or end time of the time periods.
     * The default value is <code>END_TIME</code>.</p>
     */
    inline PeriodAlignment GetPeriodAlignment() const { return m_periodAlignment; }
    inline bool PeriodAlignmentHasBeenSet() const { return m_periodAlignmentHasBeenSet; }
    inline void SetPeriodAlignment(PeriodAlignment value) { m_periodAlignmentHasBeenSet = true; m_periodAlignment = value; }
    inline GetResourceMetricsRequest& WithPeriodAlignment(PeriodAlignment value) { SetPeriodAlignment(value); return *this;}
    ///@}
  private:

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<MetricQuery> m_metricQueries;
    bool m_metricQueriesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_periodInSeconds{0};
    bool m_periodInSecondsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    PeriodAlignment m_periodAlignment{PeriodAlignment::NOT_SET};
    bool m_periodAlignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
