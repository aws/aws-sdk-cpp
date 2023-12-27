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
    AWS_SESV2_API MetricsDataSource();
    AWS_SESV2_API MetricsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MetricsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline const Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline void SetDimensions(const Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline void SetDimensions(Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline MetricsDataSource& WithDimensions(const Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>& value) { SetDimensions(value); return *this;}

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline MetricsDataSource& WithDimensions(Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline MetricsDataSource& AddDimensions(const MetricDimensionName& key, const Aws::Vector<Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline MetricsDataSource& AddDimensions(MetricDimensionName&& key, const Aws::Vector<Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline MetricsDataSource& AddDimensions(const MetricDimensionName& key, Aws::Vector<Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that contains a mapping between a <code>MetricDimensionName</code>
     * and <code>MetricDimensionValue</code> to filter metrics by. Must contain a least
     * 1 dimension but no more than 3 unique ones.</p>
     */
    inline MetricsDataSource& AddDimensions(MetricDimensionName&& key, Aws::Vector<Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline const MetricNamespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline void SetNamespace(const MetricNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline void SetNamespace(MetricNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline MetricsDataSource& WithNamespace(const MetricNamespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>The metrics namespace - e.g., <code>VDM</code>.</p>
     */
    inline MetricsDataSource& WithNamespace(MetricNamespace&& value) { SetNamespace(std::move(value)); return *this;}


    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline const Aws::Vector<ExportMetric>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline void SetMetrics(const Aws::Vector<ExportMetric>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline void SetMetrics(Aws::Vector<ExportMetric>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline MetricsDataSource& WithMetrics(const Aws::Vector<ExportMetric>& value) { SetMetrics(value); return *this;}

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline MetricsDataSource& WithMetrics(Aws::Vector<ExportMetric>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline MetricsDataSource& AddMetrics(const ExportMetric& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>A list of <code>ExportMetric</code> objects to export.</p>
     */
    inline MetricsDataSource& AddMetrics(ExportMetric&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline MetricsDataSource& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>Represents the start date for the export interval as a timestamp.</p>
     */
    inline MetricsDataSource& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline MetricsDataSource& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>Represents the end date for the export interval as a timestamp.</p>
     */
    inline MetricsDataSource& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}

  private:

    Aws::Map<MetricDimensionName, Aws::Vector<Aws::String>> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    MetricNamespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<ExportMetric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
