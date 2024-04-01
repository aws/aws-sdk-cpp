/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ScanBy.h>
#include <aws/monitoring/model/LabelOptions.h>
#include <aws/monitoring/model/MetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class GetMetricDataRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API GetMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricData"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const{ return m_metricDataQueries; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline void SetMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = value; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline void SetMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::move(value); }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& WithMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { SetMetricDataQueries(value); return *this;}

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& WithMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { SetMetricDataQueries(std::move(value)); return *this;}

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& AddMetricDataQueries(const MetricDataQuery& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(value); return *this; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 500 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, a Metrics Insights
     * query, or a math expression to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& AddMetricDataQueries(MetricDataQuery&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(std::move(value)); return *this; }


    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>The value
     * specified is inclusive; results include data points with the specified time
     * stamp. </p> <p>CloudWatch rounds the specified time stamp as follows:</p> <ul>
     * <li> <p>Start time less than 15 days ago - Round down to the nearest whole
     * minute. For example, 12:32:34 is rounded down to 12:32:00.</p> </li> <li>
     * <p>Start time between 15 and 63 days ago - Round down to the nearest 5-minute
     * clock interval. For example, 12:32:34 is rounded down to 12:30:00.</p> </li>
     * <li> <p>Start time greater than 63 days ago - Round down to the nearest 1-hour
     * clock interval. For example, 12:32:34 is rounded down to 12:00:00.</p> </li>
     * </ul> <p>If you set <code>Period</code> to 5, 10, or 30, the start time of your
     * request is rounded down to the nearest time that corresponds to even 5-, 10-, or
     * 30-second divisions of a minute. For example, if you make a query at (HH:mm:ss)
     * 01:05:23 for the previous 10-second period, the start time of your request is
     * rounded down and you receive data from 01:05:10 to 01:05:20. If you make a query
     * at 15:07:17 for the previous 5 minutes of data, using a period of 5 seconds, you
     * receive data timestamped between 15:02:15 and 15:07:15. </p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>The value
     * specified is inclusive; results include data points with the specified time
     * stamp. </p> <p>CloudWatch rounds the specified time stamp as follows:</p> <ul>
     * <li> <p>Start time less than 15 days ago - Round down to the nearest whole
     * minute. For example, 12:32:34 is rounded down to 12:32:00.</p> </li> <li>
     * <p>Start time between 15 and 63 days ago - Round down to the nearest 5-minute
     * clock interval. For example, 12:32:34 is rounded down to 12:30:00.</p> </li>
     * <li> <p>Start time greater than 63 days ago - Round down to the nearest 1-hour
     * clock interval. For example, 12:32:34 is rounded down to 12:00:00.</p> </li>
     * </ul> <p>If you set <code>Period</code> to 5, 10, or 30, the start time of your
     * request is rounded down to the nearest time that corresponds to even 5-, 10-, or
     * 30-second divisions of a minute. For example, if you make a query at (HH:mm:ss)
     * 01:05:23 for the previous 10-second period, the start time of your request is
     * rounded down and you receive data from 01:05:10 to 01:05:20. If you make a query
     * at 15:07:17 for the previous 5 minutes of data, using a period of 5 seconds, you
     * receive data timestamped between 15:02:15 and 15:07:15. </p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>The value
     * specified is inclusive; results include data points with the specified time
     * stamp. </p> <p>CloudWatch rounds the specified time stamp as follows:</p> <ul>
     * <li> <p>Start time less than 15 days ago - Round down to the nearest whole
     * minute. For example, 12:32:34 is rounded down to 12:32:00.</p> </li> <li>
     * <p>Start time between 15 and 63 days ago - Round down to the nearest 5-minute
     * clock interval. For example, 12:32:34 is rounded down to 12:30:00.</p> </li>
     * <li> <p>Start time greater than 63 days ago - Round down to the nearest 1-hour
     * clock interval. For example, 12:32:34 is rounded down to 12:00:00.</p> </li>
     * </ul> <p>If you set <code>Period</code> to 5, 10, or 30, the start time of your
     * request is rounded down to the nearest time that corresponds to even 5-, 10-, or
     * 30-second divisions of a minute. For example, if you make a query at (HH:mm:ss)
     * 01:05:23 for the previous 10-second period, the start time of your request is
     * rounded down and you receive data from 01:05:10 to 01:05:20. If you make a query
     * at 15:07:17 for the previous 5 minutes of data, using a period of 5 seconds, you
     * receive data timestamped between 15:02:15 and 15:07:15. </p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>The value
     * specified is inclusive; results include data points with the specified time
     * stamp. </p> <p>CloudWatch rounds the specified time stamp as follows:</p> <ul>
     * <li> <p>Start time less than 15 days ago - Round down to the nearest whole
     * minute. For example, 12:32:34 is rounded down to 12:32:00.</p> </li> <li>
     * <p>Start time between 15 and 63 days ago - Round down to the nearest 5-minute
     * clock interval. For example, 12:32:34 is rounded down to 12:30:00.</p> </li>
     * <li> <p>Start time greater than 63 days ago - Round down to the nearest 1-hour
     * clock interval. For example, 12:32:34 is rounded down to 12:00:00.</p> </li>
     * </ul> <p>If you set <code>Period</code> to 5, 10, or 30, the start time of your
     * request is rounded down to the nearest time that corresponds to even 5-, 10-, or
     * 30-second divisions of a minute. For example, if you make a query at (HH:mm:ss)
     * 01:05:23 for the previous 10-second period, the start time of your request is
     * rounded down and you receive data from 01:05:10 to 01:05:20. If you make a query
     * at 15:07:17 for the previous 5 minutes of data, using a period of 5 seconds, you
     * receive data timestamped between 15:02:15 and 15:07:15. </p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>The value
     * specified is inclusive; results include data points with the specified time
     * stamp. </p> <p>CloudWatch rounds the specified time stamp as follows:</p> <ul>
     * <li> <p>Start time less than 15 days ago - Round down to the nearest whole
     * minute. For example, 12:32:34 is rounded down to 12:32:00.</p> </li> <li>
     * <p>Start time between 15 and 63 days ago - Round down to the nearest 5-minute
     * clock interval. For example, 12:32:34 is rounded down to 12:30:00.</p> </li>
     * <li> <p>Start time greater than 63 days ago - Round down to the nearest 1-hour
     * clock interval. For example, 12:32:34 is rounded down to 12:00:00.</p> </li>
     * </ul> <p>If you set <code>Period</code> to 5, 10, or 30, the start time of your
     * request is rounded down to the nearest time that corresponds to even 5-, 10-, or
     * 30-second divisions of a minute. For example, if you make a query at (HH:mm:ss)
     * 01:05:23 for the previous 10-second period, the start time of your request is
     * rounded down and you receive data from 01:05:10 to 01:05:20. If you make a query
     * at 15:07:17 for the previous 5 minutes of data, using a period of 5 seconds, you
     * receive data timestamped between 15:02:15 and 15:07:15. </p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline GetMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>The value
     * specified is inclusive; results include data points with the specified time
     * stamp. </p> <p>CloudWatch rounds the specified time stamp as follows:</p> <ul>
     * <li> <p>Start time less than 15 days ago - Round down to the nearest whole
     * minute. For example, 12:32:34 is rounded down to 12:32:00.</p> </li> <li>
     * <p>Start time between 15 and 63 days ago - Round down to the nearest 5-minute
     * clock interval. For example, 12:32:34 is rounded down to 12:30:00.</p> </li>
     * <li> <p>Start time greater than 63 days ago - Round down to the nearest 1-hour
     * clock interval. For example, 12:32:34 is rounded down to 12:00:00.</p> </li>
     * </ul> <p>If you set <code>Period</code> to 5, 10, or 30, the start time of your
     * request is rounded down to the nearest time that corresponds to even 5-, 10-, or
     * 30-second divisions of a minute. For example, if you make a query at (HH:mm:ss)
     * 01:05:23 for the previous 10-second period, the start time of your request is
     * rounded down and you receive data from 01:05:10 to 01:05:20. If you make a query
     * at 15:07:17 for the previous 5 minutes of data, using a period of 5 seconds, you
     * receive data timestamped between 15:02:15 and 15:07:15. </p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline GetMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>The value
     * specified is exclusive; results include data points up to the specified time
     * stamp.</p> <p>For better performance, specify <code>StartTime</code> and
     * <code>EndTime</code> values that align with the value of the metric's
     * <code>Period</code> and sync up with the beginning and end of an hour. For
     * example, if the <code>Period</code> of a metric is 5 minutes, specifying 12:05
     * or 12:30 as <code>EndTime</code> can get a faster response from CloudWatch than
     * setting 12:07 or 12:29 as the <code>EndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>The value
     * specified is exclusive; results include data points up to the specified time
     * stamp.</p> <p>For better performance, specify <code>StartTime</code> and
     * <code>EndTime</code> values that align with the value of the metric's
     * <code>Period</code> and sync up with the beginning and end of an hour. For
     * example, if the <code>Period</code> of a metric is 5 minutes, specifying 12:05
     * or 12:30 as <code>EndTime</code> can get a faster response from CloudWatch than
     * setting 12:07 or 12:29 as the <code>EndTime</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>The value
     * specified is exclusive; results include data points up to the specified time
     * stamp.</p> <p>For better performance, specify <code>StartTime</code> and
     * <code>EndTime</code> values that align with the value of the metric's
     * <code>Period</code> and sync up with the beginning and end of an hour. For
     * example, if the <code>Period</code> of a metric is 5 minutes, specifying 12:05
     * or 12:30 as <code>EndTime</code> can get a faster response from CloudWatch than
     * setting 12:07 or 12:29 as the <code>EndTime</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>The value
     * specified is exclusive; results include data points up to the specified time
     * stamp.</p> <p>For better performance, specify <code>StartTime</code> and
     * <code>EndTime</code> values that align with the value of the metric's
     * <code>Period</code> and sync up with the beginning and end of an hour. For
     * example, if the <code>Period</code> of a metric is 5 minutes, specifying 12:05
     * or 12:30 as <code>EndTime</code> can get a faster response from CloudWatch than
     * setting 12:07 or 12:29 as the <code>EndTime</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>The value
     * specified is exclusive; results include data points up to the specified time
     * stamp.</p> <p>For better performance, specify <code>StartTime</code> and
     * <code>EndTime</code> values that align with the value of the metric's
     * <code>Period</code> and sync up with the beginning and end of an hour. For
     * example, if the <code>Period</code> of a metric is 5 minutes, specifying 12:05
     * or 12:30 as <code>EndTime</code> can get a faster response from CloudWatch than
     * setting 12:07 or 12:29 as the <code>EndTime</code>.</p>
     */
    inline GetMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>The value
     * specified is exclusive; results include data points up to the specified time
     * stamp.</p> <p>For better performance, specify <code>StartTime</code> and
     * <code>EndTime</code> values that align with the value of the metric's
     * <code>Period</code> and sync up with the beginning and end of an hour. For
     * example, if the <code>Period</code> of a metric is 5 minutes, specifying 12:05
     * or 12:30 as <code>EndTime</code> can get a faster response from CloudWatch than
     * setting 12:07 or 12:29 as the <code>EndTime</code>.</p>
     */
    inline GetMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline GetMetricDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline GetMetricDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Include this value, if it was returned by the previous
     * <code>GetMetricData</code> operation, to get the next set of data points.</p>
     */
    inline GetMetricDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p> <p>If you omit this
     * parameter, the default of <code>TimestampDescending</code> is used.</p>
     */
    inline const ScanBy& GetScanBy() const{ return m_scanBy; }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p> <p>If you omit this
     * parameter, the default of <code>TimestampDescending</code> is used.</p>
     */
    inline bool ScanByHasBeenSet() const { return m_scanByHasBeenSet; }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p> <p>If you omit this
     * parameter, the default of <code>TimestampDescending</code> is used.</p>
     */
    inline void SetScanBy(const ScanBy& value) { m_scanByHasBeenSet = true; m_scanBy = value; }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p> <p>If you omit this
     * parameter, the default of <code>TimestampDescending</code> is used.</p>
     */
    inline void SetScanBy(ScanBy&& value) { m_scanByHasBeenSet = true; m_scanBy = std::move(value); }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p> <p>If you omit this
     * parameter, the default of <code>TimestampDescending</code> is used.</p>
     */
    inline GetMetricDataRequest& WithScanBy(const ScanBy& value) { SetScanBy(value); return *this;}

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p> <p>If you omit this
     * parameter, the default of <code>TimestampDescending</code> is used.</p>
     */
    inline GetMetricDataRequest& WithScanBy(ScanBy&& value) { SetScanBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline int GetMaxDatapoints() const{ return m_maxDatapoints; }

    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline bool MaxDatapointsHasBeenSet() const { return m_maxDatapointsHasBeenSet; }

    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline void SetMaxDatapoints(int value) { m_maxDatapointsHasBeenSet = true; m_maxDatapoints = value; }

    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline GetMetricDataRequest& WithMaxDatapoints(int value) { SetMaxDatapoints(value); return *this;}


    /**
     * <p>This structure includes the <code>Timezone</code> parameter, which you can
     * use to specify your time zone so that the labels of returned data display the
     * correct time for your time zone. </p>
     */
    inline const LabelOptions& GetLabelOptions() const{ return m_labelOptions; }

    /**
     * <p>This structure includes the <code>Timezone</code> parameter, which you can
     * use to specify your time zone so that the labels of returned data display the
     * correct time for your time zone. </p>
     */
    inline bool LabelOptionsHasBeenSet() const { return m_labelOptionsHasBeenSet; }

    /**
     * <p>This structure includes the <code>Timezone</code> parameter, which you can
     * use to specify your time zone so that the labels of returned data display the
     * correct time for your time zone. </p>
     */
    inline void SetLabelOptions(const LabelOptions& value) { m_labelOptionsHasBeenSet = true; m_labelOptions = value; }

    /**
     * <p>This structure includes the <code>Timezone</code> parameter, which you can
     * use to specify your time zone so that the labels of returned data display the
     * correct time for your time zone. </p>
     */
    inline void SetLabelOptions(LabelOptions&& value) { m_labelOptionsHasBeenSet = true; m_labelOptions = std::move(value); }

    /**
     * <p>This structure includes the <code>Timezone</code> parameter, which you can
     * use to specify your time zone so that the labels of returned data display the
     * correct time for your time zone. </p>
     */
    inline GetMetricDataRequest& WithLabelOptions(const LabelOptions& value) { SetLabelOptions(value); return *this;}

    /**
     * <p>This structure includes the <code>Timezone</code> parameter, which you can
     * use to specify your time zone so that the labels of returned data display the
     * correct time for your time zone. </p>
     */
    inline GetMetricDataRequest& WithLabelOptions(LabelOptions&& value) { SetLabelOptions(std::move(value)); return *this;}

  private:

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScanBy m_scanBy;
    bool m_scanByHasBeenSet = false;

    int m_maxDatapoints;
    bool m_maxDatapointsHasBeenSet = false;

    LabelOptions m_labelOptions;
    bool m_labelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
