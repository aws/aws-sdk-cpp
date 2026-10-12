/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/AdamParamsConfig.h>

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
 * <p>The configuration for an optimizer step that updates model weights using
 * gradients accumulated from previous forward-backward passes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/OptimizerStepConfig">AWS
 * API Reference</a></p>
 */
class OptimizerStepConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OptimizerStepConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OptimizerStepConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API OptimizerStepConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Adam optimizer hyperparameters for this step.</p>
   */
  inline const AdamParamsConfig& GetAdamParamsConfig() const { return m_adamParamsConfig; }
  inline bool AdamParamsConfigHasBeenSet() const { return m_adamParamsConfigHasBeenSet; }
  template <typename AdamParamsConfigT = AdamParamsConfig>
  void SetAdamParamsConfig(AdamParamsConfigT&& value) {
    m_adamParamsConfigHasBeenSet = true;
    m_adamParamsConfig = std::forward<AdamParamsConfigT>(value);
  }
  template <typename AdamParamsConfigT = AdamParamsConfig>
  OptimizerStepConfig& WithAdamParamsConfig(AdamParamsConfigT&& value) {
    SetAdamParamsConfig(std::forward<AdamParamsConfigT>(value));
    return *this;
  }
  ///@}
 private:
  AdamParamsConfig m_adamParamsConfig;
  bool m_adamParamsConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
