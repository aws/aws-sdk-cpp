/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The result of an optimizer step.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/OptimizerStepResult">AWS
 * API Reference</a></p>
 */
class OptimizerStepResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OptimizerStepResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OptimizerStepResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OptimizerStepResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The training metrics emitted by the engine after the optimizer step.</p>
   */
  inline const Aws::Map<Aws::String, double>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Map<Aws::String, double>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Map<Aws::String, double>>
  OptimizerStepResult& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  inline OptimizerStepResult& AddMetrics(Aws::String key, double value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, double> m_metrics;
  bool m_metricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
