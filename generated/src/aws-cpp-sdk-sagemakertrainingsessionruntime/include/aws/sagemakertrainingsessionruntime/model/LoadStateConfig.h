/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The configuration for loading training state from a previously saved
 * checkpoint. This restores model weights and optionally optimizer
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/LoadStateConfig">AWS
 * API Reference</a></p>
 */
class LoadStateConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API LoadStateConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API LoadStateConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API LoadStateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the model package containing the checkpoint to load. Must be a
   * valid SageMaker model package ARN in the format
   * <code>arn:aws:sagemaker:REGION:ACCOUNT:model-package/PACKAGE_NAME/VERSION</code>.
   * Model package group ARNs are not accepted.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  LoadStateConfig& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to also restore the optimizer state alongside model
   * weights. When true, optimizer state is restored to resume training from where it
   * left off.</p>
   */
  inline bool GetLoadOptimizer() const { return m_loadOptimizer; }
  inline bool LoadOptimizerHasBeenSet() const { return m_loadOptimizerHasBeenSet; }
  inline void SetLoadOptimizer(bool value) {
    m_loadOptimizerHasBeenSet = true;
    m_loadOptimizer = value;
  }
  inline LoadStateConfig& WithLoadOptimizer(bool value) {
    SetLoadOptimizer(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelPackageArn;

  bool m_loadOptimizer{false};
  bool m_modelPackageArnHasBeenSet = false;
  bool m_loadOptimizerHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
