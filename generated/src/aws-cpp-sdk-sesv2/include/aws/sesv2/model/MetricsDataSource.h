/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sesv2/model/MetricNamespace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/MetricDimensionName.h>
#include <aws/sesv2/model/ExportMetric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains details about the data source for the metrics
   * export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MetricsDataSource">AWS
   * API Reference</a></p>
   */
  class MetricsDataSource
  {
  public:
    AWS_SESV2_API MetricsDataSource() = default;
    AWS_SESV2_API MetricsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MetricsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline const Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>>
    MetricsDataSource& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    inline MetricsDataSource& AddDimensions(MetricDimensionName key, Aws::Vector<Aws::String> value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline MetricNamespace GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(MetricNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline MetricsDataSource& WithNamespace(MetricNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline const Aws::Vector<ExportMetric>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<ExportMetric>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<ExportMetric>>
    MetricsDataSource& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = ExportMetric>
    MetricsDataSource& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    MetricsDataSource& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    MetricsDataSource& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    MetricNamespace m_namespace{MetricNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<ExportMetric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
