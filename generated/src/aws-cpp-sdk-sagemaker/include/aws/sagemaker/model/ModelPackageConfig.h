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
 * <p> The configuration for the Model package. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageConfig">AWS
 * API Reference</a></p>
 */
class ModelPackageConfig {
 public:
  AWS_SAGEMAKER_API ModelPackageConfig() = default;
  AWS_SAGEMAKER_API ModelPackageConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ModelPackageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the model package group of output model
   * package. </p>
   */
  inline const Aws::String& GetModelPackageGroupArn() const { return m_modelPackageGroupArn; }
  inline bool ModelPackageGroupArnHasBeenSet() const { return m_modelPackageGroupArnHasBeenSet; }
  template <typename ModelPackageGroupArnT = Aws::String>
  void SetModelPackageGroupArn(ModelPackageGroupArnT&& value) {
    m_modelPackageGroupArnHasBeenSet = true;
    m_modelPackageGroupArn = std::forward<ModelPackageGroupArnT>(value);
  }
  template <typename ModelPackageGroupArnT = Aws::String>
  ModelPackageConfig& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) {
    SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the source model package used for
   * continued fine-tuning and custom model evaluation. </p>
   */
  inline const Aws::String& GetSourceModelPackageArn() const { return m_sourceModelPackageArn; }
  inline bool SourceModelPackageArnHasBeenSet() const { return m_sourceModelPackageArnHasBeenSet; }
  template <typename SourceModelPackageArnT = Aws::String>
  void SetSourceModelPackageArn(SourceModelPackageArnT&& value) {
    m_sourceModelPackageArnHasBeenSet = true;
    m_sourceModelPackageArn = std::forward<SourceModelPackageArnT>(value);
  }
  template <typename SourceModelPackageArnT = Aws::String>
  ModelPackageConfig& WithSourceModelPackageArn(SourceModelPackageArnT&& value) {
    SetSourceModelPackageArn(std::forward<SourceModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelPackageGroupArn;
  bool m_modelPackageGroupArnHasBeenSet = false;

  Aws::String m_sourceModelPackageArn;
  bool m_sourceModelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
