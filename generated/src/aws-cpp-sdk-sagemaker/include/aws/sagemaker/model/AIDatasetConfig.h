/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIWorkloadInputDataConfig.h>

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
 * <p>The dataset configuration for an AI workload. This is a union type — specify
 * one of the members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIDatasetConfig">AWS
 * API Reference</a></p>
 */
class AIDatasetConfig {
 public:
  AWS_SAGEMAKER_API AIDatasetConfig() = default;
  AWS_SAGEMAKER_API AIDatasetConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIDatasetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of input data channel configurations for the workload.</p>
   */
  inline const Aws::Vector<AIWorkloadInputDataConfig>& GetInputDataConfig() const { return m_inputDataConfig; }
  inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
  template <typename InputDataConfigT = Aws::Vector<AIWorkloadInputDataConfig>>
  void SetInputDataConfig(InputDataConfigT&& value) {
    m_inputDataConfigHasBeenSet = true;
    m_inputDataConfig = std::forward<InputDataConfigT>(value);
  }
  template <typename InputDataConfigT = Aws::Vector<AIWorkloadInputDataConfig>>
  AIDatasetConfig& WithInputDataConfig(InputDataConfigT&& value) {
    SetInputDataConfig(std::forward<InputDataConfigT>(value));
    return *this;
  }
  template <typename InputDataConfigT = AIWorkloadInputDataConfig>
  AIDatasetConfig& AddInputDataConfig(InputDataConfigT&& value) {
    m_inputDataConfigHasBeenSet = true;
    m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AIWorkloadInputDataConfig> m_inputDataConfig;
  bool m_inputDataConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
