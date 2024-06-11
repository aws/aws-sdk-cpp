﻿/**
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
    AWS_PI_API GetResourceMetricsRequest();

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
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline GetResourceMetricsRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}
    inline GetResourceMetricsRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}
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
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline GetResourceMetricsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline GetResourceMetricsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline GetResourceMetricsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
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
    inline const Aws::Vector<MetricQuery>& GetMetricQueries() const{ return m_metricQueries; }
    inline bool MetricQueriesHasBeenSet() const { return m_metricQueriesHasBeenSet; }
    inline void SetMetricQueries(const Aws::Vector<MetricQuery>& value) { m_metricQueriesHasBeenSet = true; m_metricQueries = value; }
    inline void SetMetricQueries(Aws::Vector<MetricQuery>&& value) { m_metricQueriesHasBeenSet = true; m_metricQueries = std::move(value); }
    inline GetResourceMetricsRequest& WithMetricQueries(const Aws::Vector<MetricQuery>& value) { SetMetricQueries(value); return *this;}
    inline GetResourceMetricsRequest& WithMetricQueries(Aws::Vector<MetricQuery>&& value) { SetMetricQueries(std::move(value)); return *this;}
    inline GetResourceMetricsRequest& AddMetricQueries(const MetricQuery& value) { m_metricQueriesHasBeenSet = true; m_metricQueries.push_back(value); return *this; }
    inline GetResourceMetricsRequest& AddMetricQueries(MetricQuery&& value) { m_metricQueriesHasBeenSet = true; m_metricQueries.push_back(std::move(value)); return *this; }
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
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetResourceMetricsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetResourceMetricsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time specifying the end of the requested time series query
     * range. The value specified is <i>exclusive</i>. Thus, the command returns data
     * points less than (but not equal to) <code>EndTime</code>.</p> <p>The value for
     * <code>EndTime</code> must be later than the value for
     * <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetResourceMetricsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetResourceMetricsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
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
    inline int GetPeriodInSeconds() const{ return m_periodInSeconds; }
    inline bool PeriodInSecondsHasBeenSet() const { return m_periodInSecondsHasBeenSet; }
    inline void SetPeriodInSeconds(int value) { m_periodInSecondsHasBeenSet = true; m_periodInSeconds = value; }
    inline GetResourceMetricsRequest& WithPeriodInSeconds(int value) { SetPeriodInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetResourceMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetResourceMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetResourceMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned timestamp which is the start or end time of the time periods.
     * The default value is <code>END_TIME</code>.</p>
     */
    inline const PeriodAlignment& GetPeriodAlignment() const{ return m_periodAlignment; }
    inline bool PeriodAlignmentHasBeenSet() const { return m_periodAlignmentHasBeenSet; }
    inline void SetPeriodAlignment(const PeriodAlignment& value) { m_periodAlignmentHasBeenSet = true; m_periodAlignment = value; }
    inline void SetPeriodAlignment(PeriodAlignment&& value) { m_periodAlignmentHasBeenSet = true; m_periodAlignment = std::move(value); }
    inline GetResourceMetricsRequest& WithPeriodAlignment(const PeriodAlignment& value) { SetPeriodAlignment(value); return *this;}
    inline GetResourceMetricsRequest& WithPeriodAlignment(PeriodAlignment&& value) { SetPeriodAlignment(std::move(value)); return *this;}
    ///@}
  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<MetricQuery> m_metricQueries;
    bool m_metricQueriesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_periodInSeconds;
    bool m_periodInSecondsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    PeriodAlignment m_periodAlignment;
    bool m_periodAlignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
