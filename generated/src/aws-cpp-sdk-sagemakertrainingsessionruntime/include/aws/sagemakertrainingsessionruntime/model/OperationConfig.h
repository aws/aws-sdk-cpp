/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardBackwardConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadStateConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/OptimizerStepConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveStateConfig.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveWeightsConfig.h>

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
 * <p>The configuration for a training operation. Exactly one member must be set to
 * specify the operation type and its parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/OperationConfig">AWS
 * API Reference</a></p>
 */
class OperationConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OperationConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OperationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OperationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a forward-only pass through the model without gradient
   * computation.</p>
   */
  inline const ForwardConfig& GetForward() const { return m_forward; }
  inline bool ForwardHasBeenSet() const { return m_forwardHasBeenSet; }
  template <typename ForwardT = ForwardConfig>
  void SetForward(ForwardT&& value) {
    m_forwardHasBeenSet = true;
    m_forward = std::forward<ForwardT>(value);
  }
  template <typename ForwardT = ForwardConfig>
  OperationConfig& WithForward(ForwardT&& value) {
    SetForward(std::forward<ForwardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a forward and backward pass that computes
   * gradients.</p>
   */
  inline const ForwardBackwardConfig& GetForwardBackward() const { return m_forwardBackward; }
  inline bool ForwardBackwardHasBeenSet() const { return m_forwardBackwardHasBeenSet; }
  template <typename ForwardBackwardT = ForwardBackwardConfig>
  void SetForwardBackward(ForwardBackwardT&& value) {
    m_forwardBackwardHasBeenSet = true;
    m_forwardBackward = std::forward<ForwardBackwardT>(value);
  }
  template <typename ForwardBackwardT = ForwardBackwardConfig>
  OperationConfig& WithForwardBackward(ForwardBackwardT&& value) {
    SetForwardBackward(std::forward<ForwardBackwardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for an optimizer step that updates model weights using
   * accumulated gradients.</p>
   */
  inline const OptimizerStepConfig& GetOptimizerStep() const { return m_optimizerStep; }
  inline bool OptimizerStepHasBeenSet() const { return m_optimizerStepHasBeenSet; }
  template <typename OptimizerStepT = OptimizerStepConfig>
  void SetOptimizerStep(OptimizerStepT&& value) {
    m_optimizerStepHasBeenSet = true;
    m_optimizerStep = std::forward<OptimizerStepT>(value);
  }
  template <typename OptimizerStepT = OptimizerStepConfig>
  OperationConfig& WithOptimizerStep(OptimizerStepT&& value) {
    SetOptimizerStep(std::forward<OptimizerStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for saving model weights as a checkpoint.</p>
   */
  inline const SaveWeightsConfig& GetSaveWeights() const { return m_saveWeights; }
  inline bool SaveWeightsHasBeenSet() const { return m_saveWeightsHasBeenSet; }
  template <typename SaveWeightsT = SaveWeightsConfig>
  void SetSaveWeights(SaveWeightsT&& value) {
    m_saveWeightsHasBeenSet = true;
    m_saveWeights = std::forward<SaveWeightsT>(value);
  }
  template <typename SaveWeightsT = SaveWeightsConfig>
  OperationConfig& WithSaveWeights(SaveWeightsT&& value) {
    SetSaveWeights(std::forward<SaveWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for saving full training state, including model weights and
   * optimizer state.</p>
   */
  inline const SaveStateConfig& GetSaveState() const { return m_saveState; }
  inline bool SaveStateHasBeenSet() const { return m_saveStateHasBeenSet; }
  template <typename SaveStateT = SaveStateConfig>
  void SetSaveState(SaveStateT&& value) {
    m_saveStateHasBeenSet = true;
    m_saveState = std::forward<SaveStateT>(value);
  }
  template <typename SaveStateT = SaveStateConfig>
  OperationConfig& WithSaveState(SaveStateT&& value) {
    SetSaveState(std::forward<SaveStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for loading training state from a previously saved
   * checkpoint.</p>
   */
  inline const LoadStateConfig& GetLoadState() const { return m_loadState; }
  inline bool LoadStateHasBeenSet() const { return m_loadStateHasBeenSet; }
  template <typename LoadStateT = LoadStateConfig>
  void SetLoadState(LoadStateT&& value) {
    m_loadStateHasBeenSet = true;
    m_loadState = std::forward<LoadStateT>(value);
  }
  template <typename LoadStateT = LoadStateConfig>
  OperationConfig& WithLoadState(LoadStateT&& value) {
    SetLoadState(std::forward<LoadStateT>(value));
    return *this;
  }
  ///@}
 private:
  ForwardConfig m_forward;

  ForwardBackwardConfig m_forwardBackward;

  OptimizerStepConfig m_optimizerStep;

  SaveWeightsConfig m_saveWeights;

  SaveStateConfig m_saveState;

  LoadStateConfig m_loadState;
  bool m_forwardHasBeenSet = false;
  bool m_forwardBackwardHasBeenSet = false;
  bool m_optimizerStepHasBeenSet = false;
  bool m_saveWeightsHasBeenSet = false;
  bool m_saveStateHasBeenSet = false;
  bool m_loadStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
