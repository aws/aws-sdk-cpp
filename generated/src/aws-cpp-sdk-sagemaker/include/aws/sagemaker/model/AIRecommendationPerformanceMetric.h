/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>An expected performance metric for a recommendation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationPerformanceMetric">AWS
 * API Reference</a></p>
 */
class AIRecommendationPerformanceMetric {
 public:
  AWS_SAGEMAKER_API AIRecommendationPerformanceMetric() = default;
  AWS_SAGEMAKER_API AIRecommendationPerformanceMetric(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationPerformanceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the performance metric.</p>
   */
  inline const Aws::String& GetMetric() const { return m_metric; }
  inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
  template <typename MetricT = Aws::String>
  void SetMetric(MetricT&& value) {
    m_metricHasBeenSet = true;
    m_metric = std::forward<MetricT>(value);
  }
  template <typename MetricT = Aws::String>
  AIRecommendationPerformanceMetric& WithMetric(MetricT&& value) {
    SetMetric(std::forward<MetricT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The statistical measure for the metric.</p>
   */
  inline const Aws::String& GetStat() const { return m_stat; }
  inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
  template <typename StatT = Aws::String>
  void SetStat(StatT&& value) {
    m_statHasBeenSet = true;
    m_stat = std::forward<StatT>(value);
  }
  template <typename StatT = Aws::String>
  AIRecommendationPerformanceMetric& WithStat(StatT&& value) {
    SetStat(std::forward<StatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the metric.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  AIRecommendationPerformanceMetric& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of the metric value.</p>
   */
  inline const Aws::String& GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  template <typename UnitT = Aws::String>
  void SetUnit(UnitT&& value) {
    m_unitHasBeenSet = true;
    m_unit = std::forward<UnitT>(value);
  }
  template <typename UnitT = Aws::String>
  AIRecommendationPerformanceMetric& WithUnit(UnitT&& value) {
    SetUnit(std::forward<UnitT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metric;

  Aws::String m_stat;

  Aws::String m_value;

  Aws::String m_unit;
  bool m_metricHasBeenSet = false;
  bool m_statHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_unitHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
