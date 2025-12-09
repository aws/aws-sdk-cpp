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
 * <p> The MLflow configuration. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MLflowConfiguration">AWS
 * API Reference</a></p>
 */
class MLflowConfiguration {
 public:
  AWS_SAGEMAKER_API MLflowConfiguration() = default;
  AWS_SAGEMAKER_API MLflowConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API MLflowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of MLflow configuration resource. </p>
   */
  inline const Aws::String& GetMlflowResourceArn() const { return m_mlflowResourceArn; }
  inline bool MlflowResourceArnHasBeenSet() const { return m_mlflowResourceArnHasBeenSet; }
  template <typename MlflowResourceArnT = Aws::String>
  void SetMlflowResourceArn(MlflowResourceArnT&& value) {
    m_mlflowResourceArnHasBeenSet = true;
    m_mlflowResourceArn = std::forward<MlflowResourceArnT>(value);
  }
  template <typename MlflowResourceArnT = Aws::String>
  MLflowConfiguration& WithMlflowResourceArn(MlflowResourceArnT&& value) {
    SetMlflowResourceArn(std::forward<MlflowResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the MLflow configuration. </p>
   */
  inline const Aws::String& GetMlflowExperimentName() const { return m_mlflowExperimentName; }
  inline bool MlflowExperimentNameHasBeenSet() const { return m_mlflowExperimentNameHasBeenSet; }
  template <typename MlflowExperimentNameT = Aws::String>
  void SetMlflowExperimentName(MlflowExperimentNameT&& value) {
    m_mlflowExperimentNameHasBeenSet = true;
    m_mlflowExperimentName = std::forward<MlflowExperimentNameT>(value);
  }
  template <typename MlflowExperimentNameT = Aws::String>
  MLflowConfiguration& WithMlflowExperimentName(MlflowExperimentNameT&& value) {
    SetMlflowExperimentName(std::forward<MlflowExperimentNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mlflowResourceArn;

  Aws::String m_mlflowExperimentName;
  bool m_mlflowResourceArnHasBeenSet = false;
  bool m_mlflowExperimentNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
