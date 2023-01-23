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
    AWS_PI_API GetResourceMetricsResult();
    AWS_PI_API GetResourceMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API GetResourceMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The start time for the returned metrics, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAlignedStartTime() const{ return m_alignedStartTime; }

    /**
     * <p>The start time for the returned metrics, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>.</p>
     */
    inline void SetAlignedStartTime(const Aws::Utils::DateTime& value) { m_alignedStartTime = value; }

    /**
     * <p>The start time for the returned metrics, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>.</p>
     */
    inline void SetAlignedStartTime(Aws::Utils::DateTime&& value) { m_alignedStartTime = std::move(value); }

    /**
     * <p>The start time for the returned metrics, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>.</p>
     */
    inline GetResourceMetricsResult& WithAlignedStartTime(const Aws::Utils::DateTime& value) { SetAlignedStartTime(value); return *this;}

    /**
     * <p>The start time for the returned metrics, after alignment to a granular
     * boundary (as specified by <code>PeriodInSeconds</code>).
     * <code>AlignedStartTime</code> will be less than or equal to the value of the
     * user-specified <code>StartTime</code>.</p>
     */
    inline GetResourceMetricsResult& WithAlignedStartTime(Aws::Utils::DateTime&& value) { SetAlignedStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time for the returned metrics, after alignment to a granular boundary
     * (as specified by <code>PeriodInSeconds</code>). <code>AlignedEndTime</code> will
     * be greater than or equal to the value of the user-specified
     * <code>Endtime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAlignedEndTime() const{ return m_alignedEndTime; }

    /**
     * <p>The end time for the returned metrics, after alignment to a granular boundary
     * (as specified by <code>PeriodInSeconds</code>). <code>AlignedEndTime</code> will
     * be greater than or equal to the value of the user-specified
     * <code>Endtime</code>.</p>
     */
    inline void SetAlignedEndTime(const Aws::Utils::DateTime& value) { m_alignedEndTime = value; }

    /**
     * <p>The end time for the returned metrics, after alignment to a granular boundary
     * (as specified by <code>PeriodInSeconds</code>). <code>AlignedEndTime</code> will
     * be greater than or equal to the value of the user-specified
     * <code>Endtime</code>.</p>
     */
    inline void SetAlignedEndTime(Aws::Utils::DateTime&& value) { m_alignedEndTime = std::move(value); }

    /**
     * <p>The end time for the returned metrics, after alignment to a granular boundary
     * (as specified by <code>PeriodInSeconds</code>). <code>AlignedEndTime</code> will
     * be greater than or equal to the value of the user-specified
     * <code>Endtime</code>.</p>
     */
    inline GetResourceMetricsResult& WithAlignedEndTime(const Aws::Utils::DateTime& value) { SetAlignedEndTime(value); return *this;}

    /**
     * <p>The end time for the returned metrics, after alignment to a granular boundary
     * (as specified by <code>PeriodInSeconds</code>). <code>AlignedEndTime</code> will
     * be greater than or equal to the value of the user-specified
     * <code>Endtime</code>.</p>
     */
    inline GetResourceMetricsResult& WithAlignedEndTime(Aws::Utils::DateTime&& value) { SetAlignedEndTime(std::move(value)); return *this;}


    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline GetResourceMetricsResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline GetResourceMetricsResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p>
     */
    inline GetResourceMetricsResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline const Aws::Vector<MetricKeyDataPoints>& GetMetricList() const{ return m_metricList; }

    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline void SetMetricList(const Aws::Vector<MetricKeyDataPoints>& value) { m_metricList = value; }

    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline void SetMetricList(Aws::Vector<MetricKeyDataPoints>&& value) { m_metricList = std::move(value); }

    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline GetResourceMetricsResult& WithMetricList(const Aws::Vector<MetricKeyDataPoints>& value) { SetMetricList(value); return *this;}

    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline GetResourceMetricsResult& WithMetricList(Aws::Vector<MetricKeyDataPoints>&& value) { SetMetricList(std::move(value)); return *this;}

    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline GetResourceMetricsResult& AddMetricList(const MetricKeyDataPoints& value) { m_metricList.push_back(value); return *this; }

    /**
     * <p>An array of metric results, where each array element contains all of the data
     * points for a particular dimension.</p>
     */
    inline GetResourceMetricsResult& AddMetricList(MetricKeyDataPoints&& value) { m_metricList.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline GetResourceMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline GetResourceMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline GetResourceMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_alignedStartTime;

    Aws::Utils::DateTime m_alignedEndTime;

    Aws::String m_identifier;

    Aws::Vector<MetricKeyDataPoints> m_metricList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
