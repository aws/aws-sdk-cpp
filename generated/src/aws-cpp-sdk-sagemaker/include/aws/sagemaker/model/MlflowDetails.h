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
 * <p> The MLflow details of this job. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MlflowDetails">AWS
 * API Reference</a></p>
 */
class MlflowDetails {
 public:
  AWS_SAGEMAKER_API MlflowDetails() = default;
  AWS_SAGEMAKER_API MlflowDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API MlflowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The MLflow experiment ID used for this job. </p>
   */
  inline const Aws::String& GetMlflowExperimentId() const { return m_mlflowExperimentId; }
  inline bool MlflowExperimentIdHasBeenSet() const { return m_mlflowExperimentIdHasBeenSet; }
  template <typename MlflowExperimentIdT = Aws::String>
  void SetMlflowExperimentId(MlflowExperimentIdT&& value) {
    m_mlflowExperimentIdHasBeenSet = true;
    m_mlflowExperimentId = std::forward<MlflowExperimentIdT>(value);
  }
  template <typename MlflowExperimentIdT = Aws::String>
  MlflowDetails& WithMlflowExperimentId(MlflowExperimentIdT&& value) {
    SetMlflowExperimentId(std::forward<MlflowExperimentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The MLflow run ID used for this job. </p>
   */
  inline const Aws::String& GetMlflowRunId() const { return m_mlflowRunId; }
  inline bool MlflowRunIdHasBeenSet() const { return m_mlflowRunIdHasBeenSet; }
  template <typename MlflowRunIdT = Aws::String>
  void SetMlflowRunId(MlflowRunIdT&& value) {
    m_mlflowRunIdHasBeenSet = true;
    m_mlflowRunId = std::forward<MlflowRunIdT>(value);
  }
  template <typename MlflowRunIdT = Aws::String>
  MlflowDetails& WithMlflowRunId(MlflowRunIdT&& value) {
    SetMlflowRunId(std::forward<MlflowRunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mlflowExperimentId;
  bool m_mlflowExperimentIdHasBeenSet = false;

  Aws::String m_mlflowRunId;
  bool m_mlflowRunIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
