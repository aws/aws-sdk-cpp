/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingTaskStatus.h>

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
/**
 * <p>Represents the response structure returned when a prospecting task is
 * successfully submitted. Contains the task identifier, ARN, and initial status.
 * Uses <code>TaskId</code> with <code>GetProspectingFromEngagementTask</code> to
 * poll for completion.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StartProspectingFromEngagementTaskResponse">AWS
 * API Reference</a></p>
 */
class StartProspectingFromEngagementTaskResult {
 public:
  AWS_PARTNERCENTRALSELLING_API StartProspectingFromEngagementTaskResult() = default;
  AWS_PARTNERCENTRALSELLING_API StartProspectingFromEngagementTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API StartProspectingFromEngagementTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of engagement identifiers that were accepted into the task queue for
   * processing. This list matches the identifiers provided in the request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIdentifiers() const { return m_identifiers; }
  template <typename IdentifiersT = Aws::Vector<Aws::String>>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = Aws::Vector<Aws::String>>
  StartProspectingFromEngagementTaskResult& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  template <typename IdentifiersT = Aws::String>
  StartProspectingFromEngagementTaskResult& AddIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers.emplace_back(std::forward<IdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task name from the request.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  StartProspectingFromEngagementTaskResult& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message providing additional context about the task's current state. When
   * the task fails, this field contains a detailed description of the failure and
   * suggested recovery steps. This field is only populated for tasks in a failed
   * state.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  StartProspectingFromEngagementTaskResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An enumerated code identifying the reason for task failure. This field is
   * only populated when the task has failed. Use the corresponding
   * <code>Message</code> field for a human-readable description of the failure.</p>
   */
  inline const Aws::String& GetReasonCode() const { return m_reasonCode; }
  template <typename ReasonCodeT = Aws::String>
  void SetReasonCode(ReasonCodeT&& value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = std::forward<ReasonCodeT>(value);
  }
  template <typename ReasonCodeT = Aws::String>
  StartProspectingFromEngagementTaskResult& WithReasonCode(ReasonCodeT&& value) {
    SetReasonCode(std::forward<ReasonCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the task was initiated. The format follows ISO
   * 8601 date-time notation.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  StartProspectingFromEngagementTaskResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier assigned to this task. Use this identifier with
   * <code>GetProspectingFromEngagementTask</code> to retrieve task details and check
   * status.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  StartProspectingFromEngagementTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task. The ARN uniquely identifies the
   * task across AWS and can be used for resource-level IAM policies.</p>
   */
  inline const Aws::String& GetTaskArn() const { return m_taskArn; }
  template <typename TaskArnT = Aws::String>
  void SetTaskArn(TaskArnT&& value) {
    m_taskArnHasBeenSet = true;
    m_taskArn = std::forward<TaskArnT>(value);
  }
  template <typename TaskArnT = Aws::String>
  StartProspectingFromEngagementTaskResult& WithTaskArn(TaskArnT&& value) {
    SetTaskArn(std::forward<TaskArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the task. Possible values: <code>PENDING</code>
   * (waiting to run), <code>IN_PROGRESS</code> (actively processing),
   * <code>COMPLETED</code> (successfully processed), and <code>FAILED</code>
   * (unrecoverable error).</p>
   */
  inline ProspectingTaskStatus GetTaskStatus() const { return m_taskStatus; }
  inline void SetTaskStatus(ProspectingTaskStatus value) {
    m_taskStatusHasBeenSet = true;
    m_taskStatus = value;
  }
  inline StartProspectingFromEngagementTaskResult& WithTaskStatus(ProspectingTaskStatus value) {
    SetTaskStatus(value);
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
  StartProspectingFromEngagementTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_identifiers;

  Aws::String m_taskName;

  Aws::String m_message;

  Aws::String m_reasonCode;

  Aws::Utils::DateTime m_startTime{};

  Aws::String m_taskId;

  Aws::String m_taskArn;

  ProspectingTaskStatus m_taskStatus{ProspectingTaskStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_identifiersHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_taskArnHasBeenSet = false;
  bool m_taskStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
