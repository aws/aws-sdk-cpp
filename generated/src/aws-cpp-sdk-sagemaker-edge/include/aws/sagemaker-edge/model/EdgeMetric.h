/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p>Information required for edge device metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/EdgeMetric">AWS
   * API Reference</a></p>
   */
  class EdgeMetric
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API EdgeMetric();
    AWS_SAGEMAKEREDGEMANAGER_API EdgeMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API EdgeMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension of metrics published.</p>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline EdgeMetric& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline EdgeMetric& WithDimension(Aws::String&& value) { SetDimension(std::move(value)); return *this;}

    /**
     * <p>The dimension of metrics published.</p>
     */
    inline EdgeMetric& WithDimension(const char* value) { SetDimension(value); return *this;}


    /**
     * <p>Returns the name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline EdgeMetric& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline EdgeMetric& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the metric.</p>
     */
    inline EdgeMetric& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>Returns the value of the metric.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Returns the value of the metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Returns the value of the metric.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Returns the value of the metric.</p>
     */
    inline EdgeMetric& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>Timestamp of when the metric was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Timestamp of when the metric was requested.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Timestamp of when the metric was requested.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Timestamp of when the metric was requested.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Timestamp of when the metric was requested.</p>
     */
    inline EdgeMetric& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Timestamp of when the metric was requested.</p>
     */
    inline EdgeMetric& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
