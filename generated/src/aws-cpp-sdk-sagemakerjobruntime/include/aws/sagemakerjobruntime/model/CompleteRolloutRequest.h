/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeRequest.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>
#include <aws/sagemakerjobruntime/model/CompletionStatus.h>

#include <utility>

namespace Aws {
namespace SagemakerJobRuntime {
namespace Model {

/**
 */
class CompleteRolloutRequest : public SagemakerJobRuntimeRequest {
 public:
  AWS_SAGEMAKERJOBRUNTIME_API CompleteRolloutRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CompleteRollout"; }

  AWS_SAGEMAKERJOBRUNTIME_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKERJOBRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The job ARN.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  CompleteRolloutRequest& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trajectory ID to mark as complete.</p>
   */
  inline const Aws::String& GetTrajectoryId() const { return m_trajectoryId; }
  inline bool TrajectoryIdHasBeenSet() const { return m_trajectoryIdHasBeenSet; }
  template <typename TrajectoryIdT = Aws::String>
  void SetTrajectoryId(TrajectoryIdT&& value) {
    m_trajectoryIdHasBeenSet = true;
    m_trajectoryId = std::forward<TrajectoryIdT>(value);
  }
  template <typename TrajectoryIdT = Aws::String>
  CompleteRolloutRequest& WithTrajectoryId(TrajectoryIdT&& value) {
    SetTrajectoryId(std::forward<TrajectoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target status for the trajectory. Defaults to READY if not specified. Set
   * to FAILED if the rollout encountered an error and the trajectory should not be
   * used for processing.</p>
   */
  inline CompletionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CompletionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CompleteRolloutRequest& WithStatus(CompletionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CompleteRolloutRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobArn;

  Aws::String m_trajectoryId;

  CompletionStatus m_status{CompletionStatus::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_jobArnHasBeenSet = false;
  bool m_trajectoryIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace SagemakerJobRuntime
}  // namespace Aws
