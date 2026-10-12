/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ModelInput.h>
#include <aws/sagemakertrainingsessionruntime/model/TensorData.h>

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
 * <p>A single training datum containing model input and optional loss function
 * inputs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/Datum">AWS
 * API Reference</a></p>
 */
class Datum {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Datum() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Datum(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Datum& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tokenized input to feed to the model.</p>
   */
  inline const ModelInput& GetModelInput() const { return m_modelInput; }
  inline bool ModelInputHasBeenSet() const { return m_modelInputHasBeenSet; }
  template <typename ModelInputT = ModelInput>
  void SetModelInput(ModelInputT&& value) {
    m_modelInputHasBeenSet = true;
    m_modelInput = std::forward<ModelInputT>(value);
  }
  template <typename ModelInputT = ModelInput>
  Datum& WithModelInput(ModelInputT&& value) {
    SetModelInput(std::forward<ModelInputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tensor inputs for the loss function, keyed by name. Unsupported keys are
   * rejected. Supported keys: <code>target_tokens</code>, <code>weights</code>,
   * <code>advantages</code>, <code>logprobs</code>, <code>ref_log_prob</code>,
   * <code>temperature</code>. Required keys depend on the loss function type: SFT
   * (<code>cross_entropy</code>) requires <code>target_tokens</code> and
   * <code>weights</code>; RL (<code>ppo</code>, <code>cispo</code>,
   * <code>importance_sampling</code>) requires <code>target_tokens</code>,
   * <code>weights</code>, <code>advantages</code>, and <code>logprobs</code>.</p>
   */
  inline const Aws::Map<Aws::String, TensorData>& GetLossFnInputs() const { return m_lossFnInputs; }
  inline bool LossFnInputsHasBeenSet() const { return m_lossFnInputsHasBeenSet; }
  template <typename LossFnInputsT = Aws::Map<Aws::String, TensorData>>
  void SetLossFnInputs(LossFnInputsT&& value) {
    m_lossFnInputsHasBeenSet = true;
    m_lossFnInputs = std::forward<LossFnInputsT>(value);
  }
  template <typename LossFnInputsT = Aws::Map<Aws::String, TensorData>>
  Datum& WithLossFnInputs(LossFnInputsT&& value) {
    SetLossFnInputs(std::forward<LossFnInputsT>(value));
    return *this;
  }
  template <typename LossFnInputsKeyT = Aws::String, typename LossFnInputsValueT = TensorData>
  Datum& AddLossFnInputs(LossFnInputsKeyT&& key, LossFnInputsValueT&& value) {
    m_lossFnInputsHasBeenSet = true;
    m_lossFnInputs.emplace(std::forward<LossFnInputsKeyT>(key), std::forward<LossFnInputsValueT>(value));
    return *this;
  }
  ///@}
 private:
  ModelInput m_modelInput;

  Aws::Map<Aws::String, TensorData> m_lossFnInputs;
  bool m_modelInputHasBeenSet = false;
  bool m_lossFnInputsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
