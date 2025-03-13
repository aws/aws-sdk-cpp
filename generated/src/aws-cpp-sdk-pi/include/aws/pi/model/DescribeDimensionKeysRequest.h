/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pi/model/DimensionGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class DescribeDimensionKeysRequest : public PIRequest
  {
  public:
    AWS_PI_API DescribeDimensionKeysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDimensionKeys"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid values are as follows:</p> <ul> <li> <p> <code>RDS</code> </p>
     * </li> <li> <p> <code>DOCDB</code> </p> </li> </ul>
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline DescribeDimensionKeysRequest& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    DescribeDimensionKeysRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You must specify a <code>StartTime</code> within the past 7 days. The value
     * specified is <i>inclusive</i>, which means that data points equal to or greater
     * than <code>StartTime</code> are returned. </p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for <code>EndTime</code>.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeDimensionKeysRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i>, which means that data points less than (but
     * not equal to) <code>EndTime</code> are returned.</p> <p>The value for
     * <code>EndTime</code> must be later than the value for
     * <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeDimensionKeysRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - A
     * scaled representation of the number of active sessions for the database engine.
     * </p> </li> <li> <p> <code>db.sampledload.avg</code> - The raw number of active
     * sessions for the database engine. </p> </li> </ul> <p>If the number of active
     * sessions is less than an internal Performance Insights threshold,
     * <code>db.load.avg</code> and <code>db.sampledload.avg</code> are the same value.
     * If the number of active sessions is greater than the internal threshold,
     * Performance Insights samples the active sessions, with <code>db.load.avg</code>
     * showing the scaled values, <code>db.sampledload.avg</code> showing the raw
     * values, and <code>db.sampledload.avg</code> less than <code>db.load.avg</code>.
     * For most use cases, you can query <code>db.load.avg</code> only. </p>
     */
    inline const Aws::String& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Aws::String>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Aws::String>
    DescribeDimensionKeysRequest& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the data points returned from Performance
     * Insights. A period can be as short as one second, or as long as one day (86400
     * seconds). Valid values are: </p> <ul> <li> <p> <code>1</code> (one second)</p>
     * </li> <li> <p> <code>60</code> (one minute)</p> </li> <li> <p> <code>300</code>
     * (five minutes)</p> </li> <li> <p> <code>3600</code> (one hour)</p> </li> <li>
     * <p> <code>86400</code> (twenty-four hours)</p> </li> </ul> <p>If you don't
     * specify <code>PeriodInSeconds</code>, then Performance Insights chooses a value
     * for you, with a goal of returning roughly 100-200 data points in the response.
     * </p>
     */
    inline int GetPeriodInSeconds() const { return m_periodInSeconds; }
    inline bool PeriodInSecondsHasBeenSet() const { return m_periodInSecondsHasBeenSet; }
    inline void SetPeriodInSeconds(int value) { m_periodInSecondsHasBeenSet = true; m_periodInSeconds = value; }
    inline DescribeDimensionKeysRequest& WithPeriodInSeconds(int value) { SetPeriodInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights returns all
     * dimensions within this group, unless you provide the names of specific
     * dimensions within this group. You can also request that Performance Insights
     * return a limited number of values for a dimension. </p>
     */
    inline const DimensionGroup& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = DimensionGroup>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = DimensionGroup>
    DescribeDimensionKeysRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metrics for the top <code>N</code> dimension keys. If the
     * specified dimension group in the <code>GroupBy</code> parameter is
     * <code>db.sql_tokenized</code>, you can specify per-SQL metrics to get the values
     * for the top <code>N</code> SQL digests. The response syntax is as follows:
     * <code>"AdditionalMetrics" : { "<i>string</i>" : "<i>string</i>" }</code>.</p>
     * <p>The only supported statistic function is <code>.avg</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMetrics() const { return m_additionalMetrics; }
    inline bool AdditionalMetricsHasBeenSet() const { return m_additionalMetricsHasBeenSet; }
    template<typename AdditionalMetricsT = Aws::Vector<Aws::String>>
    void SetAdditionalMetrics(AdditionalMetricsT&& value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics = std::forward<AdditionalMetricsT>(value); }
    template<typename AdditionalMetricsT = Aws::Vector<Aws::String>>
    DescribeDimensionKeysRequest& WithAdditionalMetrics(AdditionalMetricsT&& value) { SetAdditionalMetrics(std::forward<AdditionalMetricsT>(value)); return *this;}
    template<typename AdditionalMetricsT = Aws::String>
    DescribeDimensionKeysRequest& AddAdditionalMetrics(AdditionalMetricsT&& value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics.emplace_back(std::forward<AdditionalMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response. </p>
     */
    inline const DimensionGroup& GetPartitionBy() const { return m_partitionBy; }
    inline bool PartitionByHasBeenSet() const { return m_partitionByHasBeenSet; }
    template<typename PartitionByT = DimensionGroup>
    void SetPartitionBy(PartitionByT&& value) { m_partitionByHasBeenSet = true; m_partitionBy = std::forward<PartitionByT>(value); }
    template<typename PartitionByT = DimensionGroup>
    DescribeDimensionKeysRequest& WithPartitionBy(PartitionByT&& value) { SetPartitionBy(std::forward<PartitionByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     *  <p>The <code>db.sql.db_id</code> filter isn't available for RDS for SQL
     * Server DB instances.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    DescribeDimensionKeysRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterKeyT = Aws::String, typename FilterValueT = Aws::String>
    DescribeDimensionKeysRequest& AddFilter(FilterKeyT&& key, FilterValueT&& value) {
      m_filterHasBeenSet = true; m_filter.emplace(std::forward<FilterKeyT>(key), std::forward<FilterValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeDimensionKeysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeDimensionKeysRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    int m_periodInSeconds{0};
    bool m_periodInSecondsHasBeenSet = false;

    DimensionGroup m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalMetrics;
    bool m_additionalMetricsHasBeenSet = false;

    DimensionGroup m_partitionBy;
    bool m_partitionByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
