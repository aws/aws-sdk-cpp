/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardBackwardResult.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardResult.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadStateResult.h>
#include <aws/sagemakertrainingsessionruntime/model/OptimizerStepResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveStateResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveWeightsResult.h>

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
 * <p>The result of a completed training operation. Exactly one member is
 * populated, corresponding to the operation type that was submitted.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/OperationResult">AWS
 * API Reference</a></p>
 */
class OperationResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OperationResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OperationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OperationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The result from a forward-only pass.</p>
   */
  inline const ForwardResult& GetForward() const { return m_forward; }
  inline bool ForwardHasBeenSet() const { return m_forwardHasBeenSet; }
  template <typename ForwardT = ForwardResult>
  void SetForward(ForwardT&& value) {
    m_forwardHasBeenSet = true;
    m_forward = std::forward<ForwardT>(value);
  }
  template <typename ForwardT = ForwardResult>
  OperationResult& WithForward(ForwardT&& value) {
    SetForward(std::forward<ForwardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result from a forward and backward pass.</p>
   */
  inline const ForwardBackwardResult& GetForwardBackward() const { return m_forwardBackward; }
  inline bool ForwardBackwardHasBeenSet() const { return m_forwardBackwardHasBeenSet; }
  template <typename ForwardBackwardT = ForwardBackwardResult>
  void SetForwardBackward(ForwardBackwardT&& value) {
    m_forwardBackwardHasBeenSet = true;
    m_forwardBackward = std::forward<ForwardBackwardT>(value);
  }
  template <typename ForwardBackwardT = ForwardBackwardResult>
  OperationResult& WithForwardBackward(ForwardBackwardT&& value) {
    SetForwardBackward(std::forward<ForwardBackwardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result from an optimizer step.</p>
   */
  inline const OptimizerStepResult& GetOptimizerStep() const { return m_optimizerStep; }
  inline bool OptimizerStepHasBeenSet() const { return m_optimizerStepHasBeenSet; }
  template <typename OptimizerStepT = OptimizerStepResult>
  void SetOptimizerStep(OptimizerStepT&& value) {
    m_optimizerStepHasBeenSet = true;
    m_optimizerStep = std::forward<OptimizerStepT>(value);
  }
  template <typename OptimizerStepT = OptimizerStepResult>
  OperationResult& WithOptimizerStep(OptimizerStepT&& value) {
    SetOptimizerStep(std::forward<OptimizerStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result from saving model weights.</p>
   */
  inline const SaveWeightsResult& GetSaveWeights() const { return m_saveWeights; }
  inline bool SaveWeightsHasBeenSet() const { return m_saveWeightsHasBeenSet; }
  template <typename SaveWeightsT = SaveWeightsResult>
  void SetSaveWeights(SaveWeightsT&& value) {
    m_saveWeightsHasBeenSet = true;
    m_saveWeights = std::forward<SaveWeightsT>(value);
  }
  template <typename SaveWeightsT = SaveWeightsResult>
  OperationResult& WithSaveWeights(SaveWeightsT&& value) {
    SetSaveWeights(std::forward<SaveWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result from saving full training state.</p>
   */
  inline const SaveStateResult& GetSaveState() const { return m_saveState; }
  inline bool SaveStateHasBeenSet() const { return m_saveStateHasBeenSet; }
  template <typename SaveStateT = SaveStateResult>
  void SetSaveState(SaveStateT&& value) {
    m_saveStateHasBeenSet = true;
    m_saveState = std::forward<SaveStateT>(value);
  }
  template <typename SaveStateT = SaveStateResult>
  OperationResult& WithSaveState(SaveStateT&& value) {
    SetSaveState(std::forward<SaveStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result from loading training state.</p>
   */
  inline const LoadStateResult& GetLoadState() const { return m_loadState; }
  inline bool LoadStateHasBeenSet() const { return m_loadStateHasBeenSet; }
  template <typename LoadStateT = LoadStateResult>
  void SetLoadState(LoadStateT&& value) {
    m_loadStateHasBeenSet = true;
    m_loadState = std::forward<LoadStateT>(value);
  }
  template <typename LoadStateT = LoadStateResult>
  OperationResult& WithLoadState(LoadStateT&& value) {
    SetLoadState(std::forward<LoadStateT>(value));
    return *this;
  }
  ///@}
 private:
  ForwardResult m_forward;

  ForwardBackwardResult m_forwardBackward;

  OptimizerStepResult m_optimizerStep;

  SaveWeightsResult m_saveWeights;

  SaveStateResult m_saveState;

  LoadStateResult m_loadState;
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
