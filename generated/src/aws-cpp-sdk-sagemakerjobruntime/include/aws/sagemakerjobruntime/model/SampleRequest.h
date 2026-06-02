/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeRequest.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SagemakerJobRuntime {
namespace Model {

/**
 */
class SampleRequest : public StreamingSagemakerJobRuntimeRequest {
 public:
  AWS_SAGEMAKERJOBRUNTIME_API SampleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Sample"; }

  AWS_SAGEMAKERJOBRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The job ARN that identifies which model session to route the inference
   * request to.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  SampleRequest& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trajectory ID for grouping turns into a single rollout. Each turn (prompt
   * and response) is captured for later use.</p>
   */
  inline const Aws::String& GetTrajectoryId() const { return m_trajectoryId; }
  inline bool TrajectoryIdHasBeenSet() const { return m_trajectoryIdHasBeenSet; }
  template <typename TrajectoryIdT = Aws::String>
  void SetTrajectoryId(TrajectoryIdT&& value) {
    m_trajectoryIdHasBeenSet = true;
    m_trajectoryId = std::forward<TrajectoryIdT>(value);
  }
  template <typename TrajectoryIdT = Aws::String>
  SampleRequest& WithTrajectoryId(TrajectoryIdT&& value) {
    SetTrajectoryId(std::forward<TrajectoryIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobArn;

  Aws::String m_trajectoryId;

  bool m_jobArnHasBeenSet = false;
  bool m_trajectoryIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SagemakerJobRuntime
}  // namespace Aws
