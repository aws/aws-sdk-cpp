/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ErrorDetail.h>
#include <aws/partnercentral-account/model/ProfileTaskStatus.h>
#include <aws/partnercentral-account/model/TaskDetails.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class CancelProfileUpdateTaskResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API CancelProfileUpdateTaskResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API CancelProfileUpdateTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API CancelProfileUpdateTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier for the partner account.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CancelProfileUpdateTaskResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the canceled profile update task.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CancelProfileUpdateTaskResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the partner account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CancelProfileUpdateTaskResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the canceled profile update task.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  CancelProfileUpdateTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the profile update task that was canceled.</p>
   */
  inline const TaskDetails& GetTaskDetails() const { return m_taskDetails; }
  template <typename TaskDetailsT = TaskDetails>
  void SetTaskDetails(TaskDetailsT&& value) {
    m_taskDetailsHasBeenSet = true;
    m_taskDetails = std::forward<TaskDetailsT>(value);
  }
  template <typename TaskDetailsT = TaskDetails>
  CancelProfileUpdateTaskResult& WithTaskDetails(TaskDetailsT&& value) {
    SetTaskDetails(std::forward<TaskDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the profile update task was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  CancelProfileUpdateTaskResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the profile update task (canceled).</p>
   */
  inline ProfileTaskStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProfileTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CancelProfileUpdateTaskResult& WithStatus(ProfileTaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the profile update task was ended (canceled).</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  CancelProfileUpdateTaskResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of error details if any errors occurred during the profile update
   * task.</p>
   */
  inline const Aws::Vector<ErrorDetail>& GetErrorDetailList() const { return m_errorDetailList; }
  template <typename ErrorDetailListT = Aws::Vector<ErrorDetail>>
  void SetErrorDetailList(ErrorDetailListT&& value) {
    m_errorDetailListHasBeenSet = true;
    m_errorDetailList = std::forward<ErrorDetailListT>(value);
  }
  template <typename ErrorDetailListT = Aws::Vector<ErrorDetail>>
  CancelProfileUpdateTaskResult& WithErrorDetailList(ErrorDetailListT&& value) {
    SetErrorDetailList(std::forward<ErrorDetailListT>(value));
    return *this;
  }
  template <typename ErrorDetailListT = ErrorDetail>
  CancelProfileUpdateTaskResult& AddErrorDetailList(ErrorDetailListT&& value) {
    m_errorDetailListHasBeenSet = true;
    m_errorDetailList.emplace_back(std::forward<ErrorDetailListT>(value));
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
  CancelProfileUpdateTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_taskId;
  bool m_taskIdHasBeenSet = false;

  TaskDetails m_taskDetails;
  bool m_taskDetailsHasBeenSet = false;

  Aws::Utils::DateTime m_startedAt{};
  bool m_startedAtHasBeenSet = false;

  ProfileTaskStatus m_status{ProfileTaskStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_endedAt{};
  bool m_endedAtHasBeenSet = false;

  Aws::Vector<ErrorDetail> m_errorDetailList;
  bool m_errorDetailListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
