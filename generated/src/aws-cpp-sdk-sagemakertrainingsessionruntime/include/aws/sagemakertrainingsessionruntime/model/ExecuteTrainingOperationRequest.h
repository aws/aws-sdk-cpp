/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeRequest.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/OperationConfig.h>

#include <utility>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 */
class ExecuteTrainingOperationRequest : public SageMakerTrainingSessionRuntimeRequest {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ExecuteTrainingOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ExecuteTrainingOperation"; }

  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the training session to submit the operation to.</p>
   */
  inline const Aws::String& GetTrainingSessionName() const { return m_trainingSessionName; }
  inline bool TrainingSessionNameHasBeenSet() const { return m_trainingSessionNameHasBeenSet; }
  template <typename TrainingSessionNameT = Aws::String>
  void SetTrainingSessionName(TrainingSessionNameT&& value) {
    m_trainingSessionNameHasBeenSet = true;
    m_trainingSessionName = std::forward<TrainingSessionNameT>(value);
  }
  template <typename TrainingSessionNameT = Aws::String>
  ExecuteTrainingOperationRequest& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monotonically increasing sequence number that determines execution order.
   * The training session processes operations strictly in sequence number order. If
   * a gap exists, the session blocks until the missing operation arrives or times
   * out. Must be at least 1.</p>
   */
  inline int GetSequenceNumber() const { return m_sequenceNumber; }
  inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
  inline void SetSequenceNumber(int value) {
    m_sequenceNumberHasBeenSet = true;
    m_sequenceNumber = value;
  }
  inline ExecuteTrainingOperationRequest& WithSequenceNumber(int value) {
    SetSequenceNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry a request with the same
   * client token and the same parameters, the service ignores the request but does
   * not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  ExecuteTrainingOperationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that specifies the type and parameters of the training
   * operation. Exactly one member of the union must be set.</p>
   */
  inline const OperationConfig& GetOperationConfig() const { return m_operationConfig; }
  inline bool OperationConfigHasBeenSet() const { return m_operationConfigHasBeenSet; }
  template <typename OperationConfigT = OperationConfig>
  void SetOperationConfig(OperationConfigT&& value) {
    m_operationConfigHasBeenSet = true;
    m_operationConfig = std::forward<OperationConfigT>(value);
  }
  template <typename OperationConfigT = OperationConfig>
  ExecuteTrainingOperationRequest& WithOperationConfig(OperationConfigT&& value) {
    SetOperationConfig(std::forward<OperationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionName;

  int m_sequenceNumber{0};

  Aws::String m_clientToken;

  OperationConfig m_operationConfig;
  bool m_trainingSessionNameHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_operationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
