/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/TensorData.h>
#include <aws/sagemakertrainingsessionruntime/model/TrainingTokenUsage.h>

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
 * <p>The result of a forward and backward pass through the model, including
 * computed gradients.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ForwardBackwardResult">AWS
 * API Reference</a></p>
 */
class ForwardBackwardResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ForwardBackwardResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ForwardBackwardResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ForwardBackwardResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data type of the loss function output tensors.</p>
   */
  inline const Aws::String& GetLossFnOutputType() const { return m_lossFnOutputType; }
  inline bool LossFnOutputTypeHasBeenSet() const { return m_lossFnOutputTypeHasBeenSet; }
  template <typename LossFnOutputTypeT = Aws::String>
  void SetLossFnOutputType(LossFnOutputTypeT&& value) {
    m_lossFnOutputTypeHasBeenSet = true;
    m_lossFnOutputType = std::forward<LossFnOutputTypeT>(value);
  }
  template <typename LossFnOutputTypeT = Aws::String>
  ForwardBackwardResult& WithLossFnOutputType(LossFnOutputTypeT&& value) {
    SetLossFnOutputType(std::forward<LossFnOutputTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The loss function output tensors, keyed by name.</p>
   */
  inline const Aws::Vector<Aws::Map<Aws::String, TensorData>>& GetLossFnOutputs() const { return m_lossFnOutputs; }
  inline bool LossFnOutputsHasBeenSet() const { return m_lossFnOutputsHasBeenSet; }
  template <typename LossFnOutputsT = Aws::Vector<Aws::Map<Aws::String, TensorData>>>
  void SetLossFnOutputs(LossFnOutputsT&& value) {
    m_lossFnOutputsHasBeenSet = true;
    m_lossFnOutputs = std::forward<LossFnOutputsT>(value);
  }
  template <typename LossFnOutputsT = Aws::Vector<Aws::Map<Aws::String, TensorData>>>
  ForwardBackwardResult& WithLossFnOutputs(LossFnOutputsT&& value) {
    SetLossFnOutputs(std::forward<LossFnOutputsT>(value));
    return *this;
  }
  template <typename LossFnOutputsT = Aws::Map<Aws::String, TensorData>>
  ForwardBackwardResult& AddLossFnOutputs(LossFnOutputsT&& value) {
    m_lossFnOutputsHasBeenSet = true;
    m_lossFnOutputs.emplace_back(std::forward<LossFnOutputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The training metrics emitted by the engine, such as loss values.</p>
   */
  inline const Aws::Map<Aws::String, double>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Map<Aws::String, double>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Map<Aws::String, double>>
  ForwardBackwardResult& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  inline ForwardBackwardResult& AddMetrics(Aws::String key, double value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token usage statistics for metering.</p>
   */
  inline const TrainingTokenUsage& GetTokenUsage() const { return m_tokenUsage; }
  inline bool TokenUsageHasBeenSet() const { return m_tokenUsageHasBeenSet; }
  template <typename TokenUsageT = TrainingTokenUsage>
  void SetTokenUsage(TokenUsageT&& value) {
    m_tokenUsageHasBeenSet = true;
    m_tokenUsage = std::forward<TokenUsageT>(value);
  }
  template <typename TokenUsageT = TrainingTokenUsage>
  ForwardBackwardResult& WithTokenUsage(TokenUsageT&& value) {
    SetTokenUsage(std::forward<TokenUsageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lossFnOutputType;

  Aws::Vector<Aws::Map<Aws::String, TensorData>> m_lossFnOutputs;

  Aws::Map<Aws::String, double> m_metrics;

  TrainingTokenUsage m_tokenUsage;
  bool m_lossFnOutputTypeHasBeenSet = false;
  bool m_lossFnOutputsHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
  bool m_tokenUsageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
