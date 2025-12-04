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
 * <p> The MLflow configuration using SageMaker managed MLflow. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MlflowConfig">AWS
 * API Reference</a></p>
 */
class MlflowConfig {
 public:
  AWS_SAGEMAKER_API MlflowConfig() = default;
  AWS_SAGEMAKER_API MlflowConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API MlflowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the MLflow resource. </p>
   */
  inline const Aws::String& GetMlflowResourceArn() const { return m_mlflowResourceArn; }
  inline bool MlflowResourceArnHasBeenSet() const { return m_mlflowResourceArnHasBeenSet; }
  template <typename MlflowResourceArnT = Aws::String>
  void SetMlflowResourceArn(MlflowResourceArnT&& value) {
    m_mlflowResourceArnHasBeenSet = true;
    m_mlflowResourceArn = std::forward<MlflowResourceArnT>(value);
  }
  template <typename MlflowResourceArnT = Aws::String>
  MlflowConfig& WithMlflowResourceArn(MlflowResourceArnT&& value) {
    SetMlflowResourceArn(std::forward<MlflowResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The MLflow experiment name used for this job. </p>
   */
  inline const Aws::String& GetMlflowExperimentName() const { return m_mlflowExperimentName; }
  inline bool MlflowExperimentNameHasBeenSet() const { return m_mlflowExperimentNameHasBeenSet; }
  template <typename MlflowExperimentNameT = Aws::String>
  void SetMlflowExperimentName(MlflowExperimentNameT&& value) {
    m_mlflowExperimentNameHasBeenSet = true;
    m_mlflowExperimentName = std::forward<MlflowExperimentNameT>(value);
  }
  template <typename MlflowExperimentNameT = Aws::String>
  MlflowConfig& WithMlflowExperimentName(MlflowExperimentNameT&& value) {
    SetMlflowExperimentName(std::forward<MlflowExperimentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The MLflow run name used for this job. </p>
   */
  inline const Aws::String& GetMlflowRunName() const { return m_mlflowRunName; }
  inline bool MlflowRunNameHasBeenSet() const { return m_mlflowRunNameHasBeenSet; }
  template <typename MlflowRunNameT = Aws::String>
  void SetMlflowRunName(MlflowRunNameT&& value) {
    m_mlflowRunNameHasBeenSet = true;
    m_mlflowRunName = std::forward<MlflowRunNameT>(value);
  }
  template <typename MlflowRunNameT = Aws::String>
  MlflowConfig& WithMlflowRunName(MlflowRunNameT&& value) {
    SetMlflowRunName(std::forward<MlflowRunNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mlflowResourceArn;
  bool m_mlflowResourceArnHasBeenSet = false;

  Aws::String m_mlflowExperimentName;
  bool m_mlflowExperimentNameHasBeenSet = false;

  Aws::String m_mlflowRunName;
  bool m_mlflowRunNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
