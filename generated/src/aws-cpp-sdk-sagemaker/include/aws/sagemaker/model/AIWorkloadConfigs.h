/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/WorkloadSpec.h>

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
 * <p>The benchmark tool configuration for an AI workload.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIWorkloadConfigs">AWS
 * API Reference</a></p>
 */
class AIWorkloadConfigs {
 public:
  AWS_SAGEMAKER_API AIWorkloadConfigs() = default;
  AWS_SAGEMAKER_API AIWorkloadConfigs(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIWorkloadConfigs& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The workload specification that defines benchmark parameters.</p>
   */
  inline const WorkloadSpec& GetWorkloadSpec() const { return m_workloadSpec; }
  inline bool WorkloadSpecHasBeenSet() const { return m_workloadSpecHasBeenSet; }
  template <typename WorkloadSpecT = WorkloadSpec>
  void SetWorkloadSpec(WorkloadSpecT&& value) {
    m_workloadSpecHasBeenSet = true;
    m_workloadSpec = std::forward<WorkloadSpecT>(value);
  }
  template <typename WorkloadSpecT = WorkloadSpec>
  AIWorkloadConfigs& WithWorkloadSpec(WorkloadSpecT&& value) {
    SetWorkloadSpec(std::forward<WorkloadSpecT>(value));
    return *this;
  }
  ///@}
 private:
  WorkloadSpec m_workloadSpec;
  bool m_workloadSpecHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
