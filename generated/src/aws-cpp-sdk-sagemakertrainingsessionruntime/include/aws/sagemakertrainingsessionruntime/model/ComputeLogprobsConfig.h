/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/ModelInput.h>

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
 * <p>The configuration for computing log-probabilities of prompt tokens without
 * generating new text.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ComputeLogprobsConfig">AWS
 * API Reference</a></p>
 */
class ComputeLogprobsConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ComputeLogprobsConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ComputeLogprobsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ComputeLogprobsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input prompt whose token log-probabilities will be computed.</p>
   */
  inline const ModelInput& GetPrompt() const { return m_prompt; }
  inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
  template <typename PromptT = ModelInput>
  void SetPrompt(PromptT&& value) {
    m_promptHasBeenSet = true;
    m_prompt = std::forward<PromptT>(value);
  }
  template <typename PromptT = ModelInput>
  ComputeLogprobsConfig& WithPrompt(PromptT&& value) {
    SetPrompt(std::forward<PromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the model package whose checkpoint this operation should run
   * against. Must be a valid SageMaker model package ARN in the format
   * <code>arn:aws:sagemaker:REGION:ACCOUNT:model-package/PACKAGE_NAME/VERSION</code>.
   * When absent, the operation runs against the session's latest checkpoint.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  ComputeLogprobsConfig& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  ModelInput m_prompt;

  Aws::String m_modelPackageArn;
  bool m_promptHasBeenSet = false;
  bool m_modelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
