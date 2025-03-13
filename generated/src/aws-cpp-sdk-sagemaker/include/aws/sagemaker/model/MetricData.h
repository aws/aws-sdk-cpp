/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The name, value, and date and time of a metric that was emitted to Amazon
   * CloudWatch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricData">AWS
   * API Reference</a></p>
   */
  class MetricData
  {
  public:
    AWS_SAGEMAKER_API MetricData() = default;
    AWS_SAGEMAKER_API MetricData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MetricData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricData& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricData& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the algorithm emitted the metric.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    MetricData& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
