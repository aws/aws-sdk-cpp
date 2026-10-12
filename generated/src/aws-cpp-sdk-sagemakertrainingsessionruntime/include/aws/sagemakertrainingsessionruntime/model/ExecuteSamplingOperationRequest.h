/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeRequest.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleOperationConfig.h>

#include <utility>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 */
class ExecuteSamplingOperationRequest : public SageMakerTrainingSessionRuntimeRequest {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ExecuteSamplingOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ExecuteSamplingOperation"; }

  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the training session to sample from.</p>
   */
  inline const Aws::String& GetTrainingSessionName() const { return m_trainingSessionName; }
  inline bool TrainingSessionNameHasBeenSet() const { return m_trainingSessionNameHasBeenSet; }
  template <typename TrainingSessionNameT = Aws::String>
  void SetTrainingSessionName(TrainingSessionNameT&& value) {
    m_trainingSessionNameHasBeenSet = true;
    m_trainingSessionName = std::forward<TrainingSessionNameT>(value);
  }
  template <typename TrainingSessionNameT = Aws::String>
  ExecuteSamplingOperationRequest& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the sample operation. Specify either a sample
   * configuration to generate text or a computeLogprobs configuration to compute
   * token log-probabilities.</p>
   */
  inline const SampleOperationConfig& GetOperationConfig() const { return m_operationConfig; }
  inline bool OperationConfigHasBeenSet() const { return m_operationConfigHasBeenSet; }
  template <typename OperationConfigT = SampleOperationConfig>
  void SetOperationConfig(OperationConfigT&& value) {
    m_operationConfigHasBeenSet = true;
    m_operationConfig = std::forward<OperationConfigT>(value);
  }
  template <typename OperationConfigT = SampleOperationConfig>
  ExecuteSamplingOperationRequest& WithOperationConfig(OperationConfigT&& value) {
    SetOperationConfig(std::forward<OperationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionName;

  SampleOperationConfig m_operationConfig;
  bool m_trainingSessionNameHasBeenSet = false;
  bool m_operationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
