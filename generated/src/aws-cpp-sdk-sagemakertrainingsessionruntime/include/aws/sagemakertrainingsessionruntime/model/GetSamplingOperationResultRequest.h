/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeRequest.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 */
class GetSamplingOperationResultRequest : public SageMakerTrainingSessionRuntimeRequest {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetSamplingOperationResultRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSamplingOperationResult"; }

  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the training session that owns the sample operation.</p>
   */
  inline const Aws::String& GetTrainingSessionName() const { return m_trainingSessionName; }
  inline bool TrainingSessionNameHasBeenSet() const { return m_trainingSessionNameHasBeenSet; }
  template <typename TrainingSessionNameT = Aws::String>
  void SetTrainingSessionName(TrainingSessionNameT&& value) {
    m_trainingSessionNameHasBeenSet = true;
    m_trainingSessionName = std::forward<TrainingSessionNameT>(value);
  }
  template <typename TrainingSessionNameT = Aws::String>
  GetSamplingOperationResultRequest& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the sample operation to retrieve, returned by
   * <code>ExecuteSamplingOperation</code>.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  GetSamplingOperationResultRequest& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionName;

  Aws::String m_operationId;
  bool m_trainingSessionNameHasBeenSet = false;
  bool m_operationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
