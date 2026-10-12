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
 * <p>The configuration for the base model used in a training
 * session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingSessionModelConfig">AWS
 * API Reference</a></p>
 */
class TrainingSessionModelConfig {
 public:
  AWS_SAGEMAKER_API TrainingSessionModelConfig() = default;
  AWS_SAGEMAKER_API TrainingSessionModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingSessionModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the base foundation model from SageMaker
   * Hub.</p>
   */
  inline const Aws::String& GetBaseModelArn() const { return m_baseModelArn; }
  inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }
  template <typename BaseModelArnT = Aws::String>
  void SetBaseModelArn(BaseModelArnT&& value) {
    m_baseModelArnHasBeenSet = true;
    m_baseModelArn = std::forward<BaseModelArnT>(value);
  }
  template <typename BaseModelArnT = Aws::String>
  TrainingSessionModelConfig& WithBaseModelArn(BaseModelArnT&& value) {
    SetBaseModelArn(std::forward<BaseModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether you accept the end-user license agreement (EULA) for gated
   * models.</p>
   */
  inline bool GetAcceptEula() const { return m_acceptEula; }
  inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }
  inline void SetAcceptEula(bool value) {
    m_acceptEulaHasBeenSet = true;
    m_acceptEula = value;
  }
  inline TrainingSessionModelConfig& WithAcceptEula(bool value) {
    SetAcceptEula(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseModelArn;

  bool m_acceptEula{false};
  bool m_baseModelArnHasBeenSet = false;
  bool m_acceptEulaHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
