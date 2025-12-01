/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ReasonCode.h>
#include <aws/partnercentral-selling/model/TaskStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
class StartOpportunityFromEngagementTaskResult {
 public:
  AWS_PARTNERCENTRALSELLING_API StartOpportunityFromEngagementTaskResult() = default;
  AWS_PARTNERCENTRALSELLING_API StartOpportunityFromEngagementTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API StartOpportunityFromEngagementTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the task, used to track the task's progress.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task, used for tracking and managing
   * the task within AWS.</p>
   */
  inline const Aws::String& GetTaskArn() const { return m_taskArn; }
  template <typename TaskArnT = Aws::String>
  void SetTaskArn(TaskArnT&& value) {
    m_taskArnHasBeenSet = true;
    m_taskArn = std::forward<TaskArnT>(value);
  }
  template <typename TaskArnT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithTaskArn(TaskArnT&& value) {
    SetTaskArn(std::forward<TaskArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the task was initiated. The format follows RFC
   * 3339 section 5.6.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  StartOpportunityFromEngagementTaskResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the current status of the task.</p>
   */
  inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
  inline void SetTaskStatus(TaskStatus value) {
    m_taskStatusHasBeenSet = true;
    m_taskStatus = value;
  }
  inline StartOpportunityFromEngagementTaskResult& WithTaskStatus(TaskStatus value) {
    SetTaskStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the task fails, this field contains a detailed message describing the
   * failure and possible recovery steps.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the reason for task failure using an enumerated code.</p>
   */
  inline ReasonCode GetReasonCode() const { return m_reasonCode; }
  inline void SetReasonCode(ReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline StartOpportunityFromEngagementTaskResult& WithReasonCode(ReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the opportunity created as a result of the task.
   * This field is populated when the task is completed successfully.</p>
   */
  inline const Aws::String& GetOpportunityId() const { return m_opportunityId; }
  template <typename OpportunityIdT = Aws::String>
  void SetOpportunityId(OpportunityIdT&& value) {
    m_opportunityIdHasBeenSet = true;
    m_opportunityId = std::forward<OpportunityIdT>(value);
  }
  template <typename OpportunityIdT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithOpportunityId(OpportunityIdT&& value) {
    SetOpportunityId(std::forward<OpportunityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource snapshot job created as part of the
   * opportunity creation process.</p>
   */
  inline const Aws::String& GetResourceSnapshotJobId() const { return m_resourceSnapshotJobId; }
  template <typename ResourceSnapshotJobIdT = Aws::String>
  void SetResourceSnapshotJobId(ResourceSnapshotJobIdT&& value) {
    m_resourceSnapshotJobIdHasBeenSet = true;
    m_resourceSnapshotJobId = std::forward<ResourceSnapshotJobIdT>(value);
  }
  template <typename ResourceSnapshotJobIdT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithResourceSnapshotJobId(ResourceSnapshotJobIdT&& value) {
    SetResourceSnapshotJobId(std::forward<ResourceSnapshotJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the engagement from which the opportunity was
   * created.</p>
   */
  inline const Aws::String& GetEngagementId() const { return m_engagementId; }
  template <typename EngagementIdT = Aws::String>
  void SetEngagementId(EngagementIdT&& value) {
    m_engagementIdHasBeenSet = true;
    m_engagementId = std::forward<EngagementIdT>(value);
  }
  template <typename EngagementIdT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithEngagementId(EngagementIdT&& value) {
    SetEngagementId(std::forward<EngagementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the engagement context used to create the
   * opportunity.</p>
   */
  inline const Aws::String& GetContextId() const { return m_contextId; }
  template <typename ContextIdT = Aws::String>
  void SetContextId(ContextIdT&& value) {
    m_contextIdHasBeenSet = true;
    m_contextId = std::forward<ContextIdT>(value);
  }
  template <typename ContextIdT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithContextId(ContextIdT&& value) {
    SetContextId(std::forward<ContextIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartOpportunityFromEngagementTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskId;
  bool m_taskIdHasBeenSet = false;

  Aws::String m_taskArn;
  bool m_taskArnHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  TaskStatus m_taskStatus{TaskStatus::NOT_SET};
  bool m_taskStatusHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  ReasonCode m_reasonCode{ReasonCode::NOT_SET};
  bool m_reasonCodeHasBeenSet = false;

  Aws::String m_opportunityId;
  bool m_opportunityIdHasBeenSet = false;

  Aws::String m_resourceSnapshotJobId;
  bool m_resourceSnapshotJobIdHasBeenSet = false;

  Aws::String m_engagementId;
  bool m_engagementIdHasBeenSet = false;

  Aws::String m_contextId;
  bool m_contextIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
