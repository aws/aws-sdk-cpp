/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
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
namespace SageMakerMetrics
{
namespace Model
{

  /**
   * <p>The raw metric data to associate with the resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/RawMetricData">AWS
   * API Reference</a></p>
   */
  class RawMetricData
  {
  public:
    AWS_SAGEMAKERMETRICS_API RawMetricData();
    AWS_SAGEMAKERMETRICS_API RawMetricData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API RawMetricData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline RawMetricData& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline RawMetricData& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline RawMetricData& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The time that the metric was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time that the metric was recorded.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time that the metric was recorded.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time that the metric was recorded.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time that the metric was recorded.</p>
     */
    inline RawMetricData& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time that the metric was recorded.</p>
     */
    inline RawMetricData& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The metric step (epoch). </p>
     */
    inline int GetStep() const{ return m_step; }

    /**
     * <p>The metric step (epoch). </p>
     */
    inline bool StepHasBeenSet() const { return m_stepHasBeenSet; }

    /**
     * <p>The metric step (epoch). </p>
     */
    inline void SetStep(int value) { m_stepHasBeenSet = true; m_step = value; }

    /**
     * <p>The metric step (epoch). </p>
     */
    inline RawMetricData& WithStep(int value) { SetStep(value); return *this;}


    /**
     * <p>The metric value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The metric value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The metric value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The metric value.</p>
     */
    inline RawMetricData& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    int m_step;
    bool m_stepHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
