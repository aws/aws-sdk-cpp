/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/EdgeStatistics.h>
#include <aws/xray/model/ServiceStatistics.h>
#include <aws/xray/model/ForecastStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/HistogramEntry.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>A list of TimeSeriesStatistic structures.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TimeSeriesServiceStatistics">AWS
   * API Reference</a></p>
   */
  class TimeSeriesServiceStatistics
  {
  public:
    AWS_XRAY_API TimeSeriesServiceStatistics() = default;
    AWS_XRAY_API TimeSeriesServiceStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API TimeSeriesServiceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp of the window for which statistics are aggregated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    TimeSeriesServiceStatistics& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EdgeStatistics& GetEdgeSummaryStatistics() const { return m_edgeSummaryStatistics; }
    inline bool EdgeSummaryStatisticsHasBeenSet() const { return m_edgeSummaryStatisticsHasBeenSet; }
    template<typename EdgeSummaryStatisticsT = EdgeStatistics>
    void SetEdgeSummaryStatistics(EdgeSummaryStatisticsT&& value) { m_edgeSummaryStatisticsHasBeenSet = true; m_edgeSummaryStatistics = std::forward<EdgeSummaryStatisticsT>(value); }
    template<typename EdgeSummaryStatisticsT = EdgeStatistics>
    TimeSeriesServiceStatistics& WithEdgeSummaryStatistics(EdgeSummaryStatisticsT&& value) { SetEdgeSummaryStatistics(std::forward<EdgeSummaryStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceStatistics& GetServiceSummaryStatistics() const { return m_serviceSummaryStatistics; }
    inline bool ServiceSummaryStatisticsHasBeenSet() const { return m_serviceSummaryStatisticsHasBeenSet; }
    template<typename ServiceSummaryStatisticsT = ServiceStatistics>
    void SetServiceSummaryStatistics(ServiceSummaryStatisticsT&& value) { m_serviceSummaryStatisticsHasBeenSet = true; m_serviceSummaryStatistics = std::forward<ServiceSummaryStatisticsT>(value); }
    template<typename ServiceSummaryStatisticsT = ServiceStatistics>
    TimeSeriesServiceStatistics& WithServiceSummaryStatistics(ServiceSummaryStatisticsT&& value) { SetServiceSummaryStatistics(std::forward<ServiceSummaryStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecasted high and low fault count values.</p>
     */
    inline const ForecastStatistics& GetServiceForecastStatistics() const { return m_serviceForecastStatistics; }
    inline bool ServiceForecastStatisticsHasBeenSet() const { return m_serviceForecastStatisticsHasBeenSet; }
    template<typename ServiceForecastStatisticsT = ForecastStatistics>
    void SetServiceForecastStatistics(ServiceForecastStatisticsT&& value) { m_serviceForecastStatisticsHasBeenSet = true; m_serviceForecastStatistics = std::forward<ServiceForecastStatisticsT>(value); }
    template<typename ServiceForecastStatisticsT = ForecastStatistics>
    TimeSeriesServiceStatistics& WithServiceForecastStatistics(ServiceForecastStatisticsT&& value) { SetServiceForecastStatistics(std::forward<ServiceForecastStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response time histogram for the selected entities.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const { return m_responseTimeHistogram; }
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }
    template<typename ResponseTimeHistogramT = Aws::Vector<HistogramEntry>>
    void SetResponseTimeHistogram(ResponseTimeHistogramT&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::forward<ResponseTimeHistogramT>(value); }
    template<typename ResponseTimeHistogramT = Aws::Vector<HistogramEntry>>
    TimeSeriesServiceStatistics& WithResponseTimeHistogram(ResponseTimeHistogramT&& value) { SetResponseTimeHistogram(std::forward<ResponseTimeHistogramT>(value)); return *this;}
    template<typename ResponseTimeHistogramT = HistogramEntry>
    TimeSeriesServiceStatistics& AddResponseTimeHistogram(ResponseTimeHistogramT&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.emplace_back(std::forward<ResponseTimeHistogramT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    EdgeStatistics m_edgeSummaryStatistics;
    bool m_edgeSummaryStatisticsHasBeenSet = false;

    ServiceStatistics m_serviceSummaryStatistics;
    bool m_serviceSummaryStatisticsHasBeenSet = false;

    ForecastStatistics m_serviceForecastStatistics;
    bool m_serviceForecastStatisticsHasBeenSet = false;

    Aws::Vector<HistogramEntry> m_responseTimeHistogram;
    bool m_responseTimeHistogramHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
